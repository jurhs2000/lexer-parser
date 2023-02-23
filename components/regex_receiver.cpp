#include <iostream>
#include <string>
#include <stdexcept>
#include "../lexer.h"
#include <cstring>
#include <vector>
#include <deque>
#include <tuple>
using namespace std;

//deque<Token> expr_to_tokens(const string& expr);

//deque<Token> shunting_yard(const deque<Token>& infix);

/*
    Receives a string from the user and returns the char array.
*/
string receive_string() {
    try
    {
        // string to store the user input
        string input;
        // get the user input
        cin >> input;
        // convert the string to a char array
        //char *r = new char[input.length() + 1];
        //strcpy(r, input.c_str());

        // test the expr_to_tokens
        //deque<Token> tokens = expr_to_tokens(input);
        //deque<Token> postfix = shunting_yard(tokens);
        // end test

        // return the char array
        return input;
    }
    catch(const exception& e)
    {
        cerr << "Error: No se pudo recibir la cadena del usuario.";
        cerr << e.what() << '\n';
    }
}

/*deque<Token> expr_to_tokens(const string& expr) {
    deque<Token> tokens;
    for(int i = 0; i < expr.length(); i++) {
        char symbol = expr[i];
        char next_symbol = expr[i + 1];
        Token token;
        switch (expr[i])
        {
        case '(':
            token.setType("LPAREN");
            tokens.push_back(token);
            break;
        
        default:
            token.setType("OTHER");
            tokens.push_back(token);
            break;
        }
    }
    return tokens;
}

/*
    Convert from infix to postfix.
    receives a char array of the infix expression.
    returns a char array of the postfix expression.
*/
/*deque<Token> shunting_yard(const deque<Token>& infix) {
    try
    {
        deque<Token> postfix;
        for (auto token: infix) {
            cout << token.getType() << endl;
            Token t;
            t.setType("OTHER");
            postfix.push_back(t);
        }
        return postfix;
    }
    catch(const exception& e)
    {
        cerr << "Error: No se pudo convertir la expresion de infix a postfix.";
        cerr << e.what() << '\n';
    }
}*/