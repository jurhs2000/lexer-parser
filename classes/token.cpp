// Author: Julio Herrera
#include <iostream>
#include "../headers/lexer.h"
#include <string>
using namespace std;

/*
    Represents a symbol in the symbol table.
*/

void Token::setType(TokenType type) {
    this->type = type;
}

TokenType Token::getType() {
    return type;
}

void Token::setValue(string value) {
    this->value = value;
}

string Token::getValue() {
    return value;
}

/*void Token::setNext(Token *next) {
    this->next = next;
}

Token *Token::getNext() {
    return next;
}

void Token::setPrev(Token *prev) {
    this->prev = prev;
}

Token *Token::getPrev() {
    return prev;
}*/

Token *tokenize(string expression, int pos) {
    Token *token = new Token();
    char c = expression[pos];
    if (c == '(') {
        token->setType(PARENTHESES_OPEN);
    } else if (c == ')') {
        token->setType(PARENTHESES_CLOSE);
    } else if (c == '+' || c == '*' || c == '.' || c == '?' || c == '|') {
        token->setType(OPERATOR);
    } else {
        token->setType(SYMBOL);
    }
    token->setValue(string(1, c));
    /*if (pos == 0) {
        token->setPrev(NULL);
        if (pos + 1 < expression.length()) {
            token->setNext(tokenize(expression, pos + 1));
        } else {
            token->setNext(NULL);
        }
    }
    if (pos == expression.length() - 1) {
        token->setNext(NULL);
        if (pos - 1 >= 0) {
            token->setPrev(tokenize(expression, pos - 1));
        } else {
            token->setPrev(NULL);
        }
    }
    if (pos > 0 && pos < expression.length() - 1) {
        token->setPrev(tokenize(expression, pos - 1));
        token->setNext(tokenize(expression, pos + 1));
    }*/
    return token;
}