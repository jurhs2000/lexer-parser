#include <string>
#include <tuple>
#include <vector>
#include <deque>
#include <set>

using namespace std;

#ifndef LEXER

#define LEXER

std::string infix_to_postfix(string infix);

// Muestra la tabla de transiciones
void print_table(vector<tuple<char, char, set<char>>> transitions);

// tipos de tokens: simbolos, operadores y parentesis
enum TokenType {
    SYMBOL,
    OPERATOR,
    PARENTHESES_OPEN,
    PARENTHESES_CLOSE
};

class Token {
    private:
        TokenType type;
        string value;
        Token *next;
        Token *prev;
    public:
        void setType(TokenType type);
        TokenType getType();
        void setValue(string value);
        string getValue();
        void setNext(Token *next);
        Token *getNext();
        void setPrev(Token *prev);
        Token *getPrev();
};

Token *tokenize(string expression, int pos);

#endif
