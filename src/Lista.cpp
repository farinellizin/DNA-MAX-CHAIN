#include "Lista.hpp"

void create_empty_list(List *l){
	l -> first = 0;
	l -> last  = 0;
}

void list_insert(List *l, Item d) {
	if (l -> last >= MAXTAM) {
		printf("LISTA CHEIA!\n");
	} else {
		l -> vet[l -> last] = d;
		l -> last++;
	}
}

void list_print(List *l){
	for (int i = l -> first; i < l-> last; i++) {
		cout << l -> vet[i].val << "\t" << endl; }
}

void solve (List *maior, List *menor) {
    int i = 0, j = 0, cont = 0, pos_inicial, pos_final;

    while (i < maior -> last) {
        if (maior -> vet[i].val == menor -> vet[j].val) {
            cont++;
            j++;
        } else {
            cont = 0;
            j = 0;
        }
        
        if (cont == menor -> last) {
            pos_final = i;
            pos_inicial = pos_final - (menor -> last - 1);
            i = maior -> last;
        }
        i++;
    } 

    cout << "POSICAO INICIAL: " << pos_inicial << endl;
    cout << "POSICAO FINAL: " << pos_final << endl;
}