// Author: Julio Herrera
#include <iostream>
#include "../lexer.h"
#include <string>
using namespace std;

/*
    Represents a symbol in the symbol table.
*/

void Token::setType(string type) {
    this->type = type;
}

string Token::getType() {
    return this->type;
}