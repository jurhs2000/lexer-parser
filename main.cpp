// Author: Julio Herrera
#include <iostream>
#include <string>
#include "headers/lexer.h"
#include "headers/nfa.h"

using namespace std;

/*int main() {
    // Recibe la expresion infix
    cout << "Ingresa una expresion infix: ";
    string infix;
    cin >> infix;
    // Convierte la expresion infix a postfix
    string postfix = infix_to_postfix(infix);
    // Convierte la expresion postfix a NFA
    NFA nfa = postfix_to_nfa(postfix);
    // Recibe la cadena a evaluar
    cout << "Ingresa la cadena a evaluar: ";
    string str;
    cin >> str;
    // Evalua la cadena
    bool result = evaluate(str, nfa);
    // Imprime el resultado
    if(result) {
        cout << "La cadena es valida." << endl;
    } else {
        cout << "La cadena no es valida." << endl;
    }
    return 0;
}
*/

int main() {
    // Recibe la expresion infix
    cout << "Ingresa una expresion infix: ";
    string infix;
    cin >> infix;
    // Convierte la expresion infix a postfix
    string postfix = infix_to_postfix(infix);
    cout << "Postfix: " << postfix << endl;
    // Convierte la expresion postfix a NFA
    NFA nfa = postfix_to_nfa(postfix);
    return 0;
}