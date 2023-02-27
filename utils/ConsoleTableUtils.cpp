/*
    Todos los creditos de este codigo para: Toby Speight
    Extraído de StackExchange: https://codereview.stackexchange.com/questions/191032/console-based-table-structure
    1 de Abril de 2018
*/

#include "../headers/ConsoleTableUtils.h"

std::string ConsoleTableUtils::repeatString(std::string input, int n) const {
    std::ostringstream os;
    for (int i = 0; i < n; i++)
        os << input;
    return os.str();
}