#include <string>
#include <deque>
#include "../headers/lexer.h"

using namespace std;

/*
    Implementacion del algoritmo Shunting Yard para convertir una expresion infix a postfix.
*/
string shunting_yard(deque<Token> tokens) {
    printf("shunting_yard");
    string postfix = "";
    deque<Token> stack;
    // mientras haya tokens a leer
    while(!tokens.empty()) {
        // se lee el siguiente token y se remueve de la lista
        Token token = tokens.front();
        tokens.pop_front();
        switch (token.getType()) {
            case PARENTHESES_OPEN:
                stack.push_back(token);
                break;
            case PARENTHESES_CLOSE:
                while(stack.back().getType() != PARENTHESES_OPEN) {
                    postfix += stack.back().getValue();
                    stack.pop_back();
                }
                stack.pop_back();
                break;
            case OPERATOR:
                while(!stack.empty() && stack.back().getType() == OPERATOR) {
                    postfix += stack.back().getValue();
                    stack.pop_back();
                }
                stack.push_back(token);
                break;
            case SYMBOL:
                postfix += token.getValue();
                break;
        }
    }
    // se sacan todos los tokens de la pila
    while(!stack.empty()) {
        postfix += stack.back().getValue();
        stack.pop_back();
    }
    // print postfix
    printf("Postfix: %s", postfix.c_str());
    return postfix;
}

string infix_to_postfix(string infix) {
    // convierte la expresion infix a un deque de tokens
    deque<Token> tokens;
    for(int i = 0; i < infix.length(); i++) {
        Token* token = new Token();
        token = tokenize(infix, i);
        printf("token list");
        tokens.push_back(*token);
    }
    // convierte la expresion infix a postfix
    string postfix = shunting_yard(tokens);
    return postfix;
}
