#include <deque>
#include <iostream>
#include <string>
#include <set>
#include "../headers/nfa.h"
#include "../headers/lexer.h"

using namespace std;

/*
    Añade los estados a la nfa.
*/
void add_symbols(NFA &nfa, string postfix) {
    for (int i = 0; i < postfix.length(); i++) {
        char token = postfix[i];
        if (token != '*' && token != '|' && token != '.' && token != '+') {
            auto it = nfa.getSymbols().find(token);
            auto end = nfa.getSymbols().end();
            // si el estado no existe, se añade
            if (*it == *end || nfa.getSymbols().empty()) {
                nfa.setSymbol(token);
            }
        }
    }
}

void nfa_or(NFA nfa, deque<Token> tokens, int pos, deque<Token> symbols_stack) {
    Token a = symbols_stack.back();
    symbols_stack.pop_back();
    Token b = symbols_stack.back();
    symbols_stack.pop_back();
}

/*
    Obtiene una expresion postfix, setea los estados y retorna la NFA.
    Utiliza el simbolo 'ε' para representar el estado vacio.
*/
NFA postfix_to_nfa(string postfix) {
    NFA nfa = NFA();
    // convierte la expresion postfix a un deque de tokens
    deque<Token> tokens;
    for(int i = 0; i < postfix.length(); i++) {
        Token* token = new Token();
        token = tokenize(postfix, i);
        tokens.push_back(*token);
    }
    // añade los simbolos a la nfa
    add_symbols(nfa, postfix);
    deque<Token> symbols_stack;
    int count = 0;
    set<string> newStates = {to_string(count + 1)};
    // va leyendo las operaciones
    for (int i = 0; i < tokens.size(); i++) {
        Token token = tokens[i];
        switch (token.getType()) {
            case SYMBOL:
                symbols_stack.push_back(token);
                nfa.setTransition(to_string(count), token.getValue(), newStates);
                break;
            case OPERATOR:
                switch (token.getValue()[0]) {
                    case '|':
                        nfa_or(nfa, tokens, i, symbols_stack);
                        break;
                }
                break;
        }
    }
    return nfa;
}