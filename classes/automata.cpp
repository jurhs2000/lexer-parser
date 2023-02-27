#include <string>
#include <tuple>
#include <vector>
#include <deque>
#include <set>
#include "../headers/lexer.h"
#include "../headers/automata.h"
using namespace std;

/*
    Definicion de la funcion setState
*/
void FiniteAutomata::setState(char state) {
    states.insert(state);
}

/*
    Definicion de la funcion getStates
*/
set<char> FiniteAutomata::getStates() {
    return states;
}

/*
    Definicion de la funcion setSymbol
*/
void FiniteAutomata::setSymbol(char state) {
    symbols.insert(state);
}

/*
    Definicion de la funcion getSymbols
*/
set<char> FiniteAutomata::getSymbols() {
    return symbols;
}

/*
    Definicion de la funcion setTransitions
*/
void FiniteAutomata::setTransitions(vector<tuple<char, char, set<char>>> transitions) {
    this->transitions = transitions;
}

/*
    Definicion de la funcion getTransitions
*/
vector<tuple<char, char, set<char>>> FiniteAutomata::getTransitions() {
    return transitions;
}