#include <deque>
#include <iostream>
#include <set>
#include "../headers/nfa.h"

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

/*
    Obtiene una expresion postfix, setea los estados y retorna la NFA.
    Utiliza el simbolo 'ε' para representar el estado vacio.
*/
NFA postfix_to_nfa(string postfix) {
    NFA nfa = NFA();
    // convierte la expresion postfix a un deque de tokens
    deque<char> tokens;
    for(int i = 0; i < postfix.length(); i++) {
        tokens.push_back(postfix[i]);
    }
    // añade los simbolos a la nfa
    add_symbols(nfa, postfix);
    return nfa;
}