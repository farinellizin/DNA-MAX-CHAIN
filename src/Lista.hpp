#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
#include <fstream>
#include <string> 
#include <cstring>
using namespace std;
#define MAXTAM 10000

typedef struct Item {
    string val;   
} Item;

typedef struct List {
    Item vet[MAXTAM];
    int first;
    int last;
} List;

void create_empty_list (List *l);
void list_insert(List *l, Item d);
void list_print(List*l);
void solve(List *maior, List *menor);
int find_initial_positions(List *maior, List *menor);

#endif