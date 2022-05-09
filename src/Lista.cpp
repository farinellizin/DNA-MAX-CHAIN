#include "Lista.hpp"

void create_empty_list(List *l){
	l->first = 0;
	l->last  = 0;
}

void list_insert(List *l, Item d) {
	if (l->last >= MAXTAM) {
		printf("LISTA CHEIA!\n");
	} else {
		l->vet[l->last] = d;
		l->last++;
	}
}

void list_print(List *l){
	for(int i=l->first; i<l->last; i++) {
		cout << l->vet[i].val << "\t" << endl; }
}

/*void solve (List *l) {
    Item aux;
    int cont_sequence = 0, biggest_sequence = 0;
    for (int i = l->first; i < l->last; i++) {
        aux.val = l->vet[i].val;
        if (aux.val == l->vet[i + 1].val && aux.val == l->vet[i+2].val) {
            cout << "\n\n\t- Sequencia encontrada!" << endl;
            cont_sequence++;
            i+=2;
        } else {
            if (cont_sequence > biggest_sequence) {
                biggest_sequence = cont_sequence;
            }
            cont_sequence = 0;
        }
    }

    cout << "numero de sequencias: " << biggest_sequence;
}*/

// k EH A MAIOR SEQUENCIA
// l EH A MENOR SEQUENCIA
// PRECISO ACHAR L DENTRO DE K
// travar k, procurar l a partir da posicao travada


void solve (List *maior, List *menor) {
    // FINGINDO COMPARACAO
    /*
        vetormaior[posicaolooping] == vetormenor[posicaoincial];
        vetormaior[posicaolooping + 1] == vetormenor[posicaoincial + 1]
        vetormaior[posicaolooping + 2] == vetormenor[posicaoinicial + 2]
        vetormaior[posicaolooping + 3] == vetormenor[posicaoinicial + 3]

        VARIAVEIS

        posicao looping
        posicao inicial

        salvar posicao inicial do arquivo maior, sera igual a posicaolooping inicial
        se o contador com a condicional for igual a menor -> last - 1, a sequencia tera sido encontrada
        a posicao final do arquivo maior sera posicaolooping inicial + menor -> last - 1
    */

    int posicaolooping, cont;
    int posicao_inicial_total, i, j;
    int pos_inicio, pos_fim;
    bool sequencia = false;

    for (i = maior->first; i < maior -> last + 1; i++) {
        posicaolooping = i;
        posicao_inicial_total = i;
        cont = 0;
        for (j = menor -> first; j < menor -> last - 1; j++) {
            if (maior -> vet[posicaolooping].val == menor -> vet[j].val) {
                posicaolooping++;
                cont++;
            } else {
                j = (menor -> last )- 1;
            }
        }

        if (cont == (menor -> last - 1)) {
            pos_inicio = posicao_inicial_total;
            pos_fim = pos_inicio + (j - 1);
            sequencia = true;
        }
    }

    if (sequencia) {
        cout << "\t\t- Sequencia encontrada: " << endl << endl;
        cout << "\t\t- Posicao inicial: " << pos_inicio;
        cout << "\t\t- Posicao final: " << pos_fim << endl;
    } else {
        cout << endl << "\t\t- SEQUENCIA NAO ENCONTRADA!" << endl;
    }
}