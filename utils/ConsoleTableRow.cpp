/*
    Todos los creditos de este codigo para: Toby Speight
    Extraído de StackExchange: https://codereview.stackexchange.com/questions/191032/console-based-table-structure
    1 de Abril de 2018
*/

#include "../headers/ConsoleTableRow.h"

ConsoleTableRow::ConsoleTableRow(int width) {
    this->row.resize(width);
}

void ConsoleTableRow::addEntry(std::string data, int column) {
    row[column] = data;
}

std::vector<std::string> ConsoleTableRow::getEntry() {
    return this->row;
}

void ConsoleTableRow::editEntry(std::string data, int column) {
    this->row[column] = data;
}