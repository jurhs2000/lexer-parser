#include <string>
#include <deque>
#include "../headers/lexer.h"

using namespace std;

/*
    Implementacion del algoritmo Shunting Yard para convertir una expresion infix a postfix.
*/
string shunting_yard(deque<char> tokens) {
    string postfix = "";
    deque<char> stack;
    // mientras haya tokens a leer
    while(!tokens.empty()) {
        // se lee el siguiente token y se remueve de la lista
        char token = tokens.front();
        tokens.pop_front();
        switch (token) {
            case '(':
                // si el token es un parentesis izquierdo, se agrega a la pila
                stack.push_back(token);
                break;
            case ')':
                // si el token es un parentesis derecho, se sacan todos los tokens de la pila hasta encontrar un parentesis izquierdo
                while(stack.back() != '(') {
                    postfix += stack.back();
                    stack.pop_back();
                }
                // se remueve el parentesis izquierdo de la pila
                stack.pop_back();
                break;
            case '|':
            case '.':
            case '*':
                // si el token es un operador, se sacan todos los tokens de la pila que tengan mayor o igual precedencia
                while(!stack.empty() && (stack.back() == '*' || stack.back() == '.' || stack.back() == '|')) {
                    postfix += stack.back();
                    stack.pop_back();
                }
                // se agrega el token a la pila
                stack.push_back(token);
                break;
            default:
                // si el token es un simbolo, se agrega al resultado
                postfix += token;
                break;
        }
    }
    // se sacan todos los tokens de la pila
    while(!stack.empty()) {
        postfix += stack.back();
        stack.pop_back();
    }
    return postfix;
}

string infix_to_postfix(string infix) {
    // convierte la expresion infix a un deque de tokens
    deque<char> tokens;
    for(int i = 0; i < infix.length(); i++) {
        tokens.push_back(infix[i]);
    }
    // convierte la expresion infix a postfix
    string postfix = shunting_yard(tokens);
    return postfix;
}
