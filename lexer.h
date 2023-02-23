#include <string>
#include <tuple>
#include <vector>
#include <deque>

using namespace std;

#ifndef LEXER

#define LEXER

std::string infix_to_postfix(infix);

/*class Token
{
    private:
        string type;
    public:
        void setType(string);
        string getType();
};

deque<Token> shunting_yard(const deque<Token>& infix);

class NFA
{
    private:
        // conjunto finito de estados
        string states;
        // simbolos de entrada, e no esta en el alfabeto
        string alphabet;
        // funciones de trancision para cada estado y simbolo para retornar un nuevo conjunto de estados
        vector<tuple<string, string, string>> transitions;
        // estado inicial
        string initialState;
        // estados de aceptacion
        string finalStates;
    public:
        NFA(string, string, string, string, string);
        string getStates();
        string getAlphabet();
        vector<tuple<string, string, string>> getTransitions();
        string getInitialState();
        string getFinalStates();
};*/

#endif
