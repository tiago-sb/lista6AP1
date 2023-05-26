/*
Escreva uma fun��o que receba um valor inteiro como par�metro e devolva 1, caso o valor passado
seja par; e 0, caso contr�rio. Escreva um programa que receba do teclado um n�mero inteiro positivo
e informe se o n�mero � par ou �mpar. Seu programa deve usar a fun��o.
*/

#include <iostream>

using namespace std;

void linha();
int testeParidade(int);
int main(){
    int n;
    //la�o que pede um valor inteiro maior que 0
    do {
        cout << "Insira um valor inteiro positivo: ";
        cin >> n;
    } while(n <= 0);
    //�rea do print
    linha();
    cout << "Resultado: " << testeParidade(n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "------------------------------" << endl;
}
int testeParidade(int nN){
    if((nN % 2) == 0){
        return 1;
    }
    else {
        return 0;
    }
}
