/*
    Todos los creditos de este codigo para: Toby Speight
    Extraído de StackExchange: https://codereview.stackexchange.com/questions/191032/console-based-table-structure
    1 de Abril de 2018
*/

#ifndef CONSOLETABLE_CONSOLETABLEENTRY_H
#define CONSOLETABLE_CONSOLETABLEENTRY_H

#include <string>
#include <vector>

class ConsoleTableRow {
public:

    ConsoleTableRow(int width);

    void addEntry(std::string data, int column);

    void editEntry(std::string data, int column);

    std::vector <std::string> getEntry();

private:
    std::vector <std::string> row;
};


#endif //CONSOLETABLE_CONSOLETABLEENTRY_H