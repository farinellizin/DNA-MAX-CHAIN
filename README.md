# O PROBLEMA DA MAXIMA CADEIA
### **PROPOSTA**
> Elabore um programa que receba uma cadeias de DNA. Cada posição da cadeia deve conter um códon, ou seja, uma triade de nucleotídeos → T,
A, G, C. Feito isso, leia de um arquivo uma sequência de nucleotídios (i.e., ACGTGGACGTTATATTCGAT) e tente identificar a
maior cadeia da lista que se relaciona a essa entrada.
### **LOGICA**
1. Inicialmente, como forma de facilitar a insercao e absorcao de dados, foram criados dois arquivos, um para a sequencia maior (**_biggest_sequence.txt_**)
e um para a menor sequencia (**_smallest_sequence.txt_**).
   - O primeiro passo envolvendo a logica do programa se da em ler os arquivos e organiza-los em suas respectivas listas.
   - Para tal tarefa, no arquivo **_main.cpp_** foi criada a funcao **_read_sequence()_**, a qual recebera o endereco de uma lista, anteriormente 
   criada dentro da **main**, e uma string, a qual sera o nome do arquivo.
      - Funcionamento da funcao **_read_sequence()_**:
         1. Usando a biblioteca **_fstream_**, a leitura do arquivo é realizada da seguinte forma:
           - Utilizando a funcao **_getline_**, a string desejada recebe o valor da linha do arquivo;
           - Ocorre o tratamento para tokenizar a string, sendo delimitada por " ";
           - Cada token é inserido dentro de uma Lista, por meio da funcao **_list_insert()_**, sendo uma para o arquivo **_biggest_sequence.txt_** e outra para o arquivo 
           **_smallest_sequence.txt_**, as quais serao diferenciadas pela string passada como parametro a funcao;
           - O laco se repete ate que o arquivo tenha sido lido por completo.
2. Apos a leitura do arquivo, as funcoes usadas estarao presentes na funcao **main**, a qual sera utilizada como forma de "chamar" todos os recursos
necessarios a fim de, de fato, solucionar o problema.
    - Funcoes utilizadas na funcao **main**: 
       - **_create_empty_list()_**: cria uma lista vazia, estrutura utilizada como base para o funcionamento do programa;
       - **_read_sequence()_**: realiza a leitura do arquivo e a insercao na lista anteriormente criada;
       - **_solve()_**: responsavel por, de fato, realizar o que se é pedido.
3. A solucao do problema, como ja mencionado anteriormente, se da dentro da funcao **_solve()_**, a qual segue a seguinte logica:
    - Como metodo de percorrer toda a lista maior, a qual deve ser analisada a fim de achar a sequencia da menor lista dentro dela, foi usado um looping while
    limitado para rodar enquanto a variavel de controle, essa sendo **i**, for menor que o tamanho total da Lista;
    - Logo em seguida, ha uma condicional para caso o valor da Lista maior na posicao **i** seja igual ao valor da Lista menor na posicao **j**, 
    sendo que, a cada vez que essa condicional seja verdadeira, um **contador** sera acionado sempre somando **1**, a fim de computar o fato de ter encontrado
    mais uma parte da sequencia, assim seguindo ate que a sequencia seja diferente.
    - Para caso a sequencia seja diferente, o **contador** retornara ao valor 0, como forma de demonstrar que a sequencia da na Lista maior nao segue mais
    a sequencia da lista menor. 
    - A fim de comparacao e decisao de qual das sequencias sera a maior, uma nova condicional foi criada e, caso o contador tenha recebido o mesmo valor
    da ultima posicao da Lista menor, quer dizer que, na sequencia maior, foi encontrada uma sequencia de mesmo tamanho, com os mesmos dados, salvando
    a **_posicao final_** como **i**, ou seja, onde o looping se encontra no momento em que o **contador** se iguala ao tamanho da Lista menor, e a 
    **_posicao inicial_** como sendo **_posicao final - 1 - o valor da ultima posicao da lista menor_**.
### **OBSERVACOES**
1. Para correto funcionamento do programa: 
   - A variavel global MAXTAM deve ser maior ou igual a quantidade de triades contidos no arquivo com a **Maior Cadeia**;
   - Impreterivelmente todas as cadeias devem estar separadas por um " " (_espaco simples_), pois essa foi a forma aderida para padronizacao do arquivo;
   - Para correta leitura da ultima triade presente em **AMBOS OS ARQUIVOS** deve-se adicionar um " " (_espaco simples_) ao final dela;
   - O codigo foi realizado visando unica e especificamente encontrar um tipo de cadeia, sendo a mesma **IDENTICA** ao arquivo de _input_, o qual
   sera transformado na futura **Lista menor**;
   - Caso existam, na **Lista maior**, duas sequencias identicas a da **Lista menor**, sera mostrada apenas a primeira sequencia encontrada;
   - O nome de ambos os arquivos para leitura **DEVEM SER INSERIDOS NA MAIN**, sendo:
      - **_Nome do arquivo menor_**: linha 28, em **file_name = "nomedoseuarquivodemenorsequencia.txt"
      - **_Nome do arquivo maior_**: linha 33, em **file_name = "nomedoseuarquivodemaiorsequencia.txt"
### **COMPILACAO E EXECUCAO**
- A compilacao e execucao do arquivo se dao por meio do arquivo **Makefile** presente no repositorio, seguindo se seguinte ordem
de comandos, voce estara apto a compilar e executar o codigo.

| Comando | Resultado do comando |
| --- | --- |
| make clean | Apaga a ultima compilacao contida na pasta build. |
| make | Realiza uma nova compilacao utilizando g++, salvando-a na pasta build. |
| make run | Executa o programa caso a compilacao tenha sido concluida com exito. |

## SOCIAL MEDIA
- Twitter: @farinellizin
- Instagram: @farinellizin
- Telegram: @farinellizin
- E-mail: lucasfcpinho@gmail.com