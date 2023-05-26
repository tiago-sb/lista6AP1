/*
Escreva uma fun��o que conte de at� 1.000.000.000, isto �, a fun��o deve conter um la�o for com
um contador que vai de 1 at� 1.000.000.000. Escreva um programa que receba do teclado um valor,
chame a fun��o e ent�o mostre o valor digitado.
*/

#include <iostream>
#include <locale>

using namespace std;

void linha();
void contar(int);
int pedNum(int);
int main(){
    setlocale(LC_ALL,"portuguese");
    int v, v1;
    //parte 1 da quest�o
    cout << "Quest�o 3 - parte 1 " << endl;
    //la�o que pede um n�mero para contagem
    do {
        cout << "contar ate: ";
        cin >> v;
    } while(v <= 0);
    //impress�es
    linha();
    contar(v);
    linha();
    //parte 2 da quest�o
    cout << "Quest�o 3 - parte 2 " << endl;
    cout << "Insira um n�mero inteiro: ";
    cin >> v1;
    //impress�es
    linha();
    cout << "Voc� digitou... " << pedNum(v1) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "--------------------------------" << endl;
}
void contar(int nI){
    for(int i = 1; i <= nI; i++){
        if(i == nI){
            cout << i << endl;
        }
        else {
            cout << i << " ";
        }
    }
}
int pedNum(int nV1){
    return nV1;
}
