#include "Lista.hpp"
using namespace std;

void read_sequence(List *l, string s) {
    ifstream file;
    string str, delimiter = " ";
    Item aux;
    size_t pos = 0;

    file.open(s);
    if (file.is_open()) {
        while (!file.eof()) {
            getline(file, str);
            while ((pos = str.find(delimiter)) != string::npos) {
                aux.val = (str.substr(0, pos));
                str.erase(0, pos + delimiter.length());
                list_insert(l, aux);
            }
        }
    }
}

int main () {
    string file_name;
    
    List smaller_sequence_array;
    create_empty_list(&smaller_sequence_array);
    file_name = "smallersequence.txt";
    read_sequence(&smaller_sequence_array, file_name);

    List biggest_sequence_array;
    create_empty_list(&biggest_sequence_array);
    file_name = "biggestsequence.txt";
    read_sequence(&biggest_sequence_array, file_name);
    
    solve(&biggest_sequence_array, &smaller_sequence_array);

    return 0;
}