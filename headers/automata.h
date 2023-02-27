#include <string>
#include <tuple>
#include <vector>
#include <deque>
#include <set>

using namespace std;

#ifndef AUTOMATA

#define AUTOMATA

/*
    Define la clase de Automata Finito el cual puede ser un NFA o un DFA.
*/
class FiniteAutomata
{
    protected:
        // conjunto finito de estados
        set<char> states;
        // conjunto de simbolos de entrada
        set<char> symbols;
        // simbolos de entrada
        set<char> alphabet;
        // funciones de trancision para cada estado y simbolo para retornar un nuevo conjunto de estados
        vector<tuple<char, char, set<char>>> transitions;
        // estado inicial
        char initialState;
        // estados de aceptacion
        set<char> finalStates;
    public:
        void setState(char state);
        set<char> getStates();
        void setSymbol(char state);
        set<char> getSymbols();
        //set<char> getAlphabet();
        void setTransitions(vector<tuple<char, char, set<char>>> transitions);
        vector<tuple<char, char, set<char>>> getTransitions();
        //char getInitialState();
        //set<char> getFinalStates();
};

#endif
