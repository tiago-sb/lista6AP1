/*
Modifique a fun��o anterior para que ela devolva true se o n�mero recebido for m�ltiplo de 5 e
false, caso contr�rio. Modifique o programa para usar adequadamente a fun��o.
*/

#include <iostream>

using namespace std;

void linha();
bool testeMult(int);
int main(){
    int n;

    do {
        cout << "Insira um valor inteiro positivo: ";
        cin >> n;
    } while(n <= 0);

    linha();
    cout << "Resultado: " << boolalpha << testeMult(n) << endl;
    linha();

    return 0;
}
void linha(){
    cout << "------------------------------" << endl;
}
bool testeMult(int nN){
    if(nN % 5 == 0){
        return true;
    }
    else {
        return false;
    }
}
