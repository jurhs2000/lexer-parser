#include <string>
#include <tuple>
#include <vector>
#include <deque>

using namespace std;

#ifndef LEXER

#define LEXER

std::string infix_to_postfix(string infix);

// Muestra la tabla de transiciones
void print_table(vector<tuple<char, char, set<char>>> transitions);

#endif
