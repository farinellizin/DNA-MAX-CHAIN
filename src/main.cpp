#include "Lista.hpp"

void read_file (List *l, string s) {
    char letter;
    Item aux;
    ifstream file;
    file.open(s);
    if (file.is_open()) {
        while(!file.eof()) {
            file.get(letter);
            aux.val = letter;
            if (aux.val == 'C' || aux.val == 'G' || aux.val == 'A' || aux.val == 'T') {
                list_insert(l, aux); 
            }
        }
        file.close();
    }
}

int main () {
    List biggest_sequence, smaller_sequence;
    string file_name;
    
    file_name = "smallersequence.txt";
    create_empty_list(&smaller_sequence);
    read_file(&smaller_sequence, file_name);
    //list_print(&smaller_sequence);

    file_name = "biggestsequence.txt";
    create_empty_list(&biggest_sequence);
    read_file(&biggest_sequence, file_name);
    //list_print(&biggest_sequence);

    solve(&biggest_sequence, &smaller_sequence);

    return 0;
}