#include <string>
#include <tuple>
#include <vector>
#include <deque>
#include <set>
#include "automata.h"

using namespace std;

#ifndef NFAH

#define NFAH

/*
    Define la clase de Automata Finito No Determinista la cual hereda de la clase Automata Finito.
*/
class NFA: public FiniteAutomata
{
};

NFA postfix_to_nfa(string postfix);

#endif
