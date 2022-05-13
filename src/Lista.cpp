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
    int i = 0, j = 0, cont = 0, initial_pos, final_pos;
    bool found = false;
    
    while (i < maior -> last) {
        if (maior -> vet[i].val == menor -> vet[j].val) {
            cont++;
            j++;
        } else {
            cont = 0;
            j = 0;
        }
        
        if (cont == menor -> last) {
            final_pos = i;
            initial_pos = final_pos - (menor -> last - 1);
            i = maior -> last;
            found = true;
        }
        i++;
    } 

    if (found == true) {
        cout << endl << endl << "\t\t~ Exact sequence found ~" << endl << endl;
        cout << "\tFirst position: " << initial_pos << endl;
        cout << "\tLast position: " << final_pos << endl << endl << endl;
    } else {
        cout << "Exact sequence not found." << endl;
    }
        
        
}