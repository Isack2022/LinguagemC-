//Programa para trabalhar com orientação objeto.usando classe e objetos
#include <iostream>
//Chamando da biblioteca
using std::cout;
using std::cin;
//Criando uma class
class Textos{
    public:
    void messagem1(){
        cout <<"Olá!\n";
    }
    void messagem2(){
        cout <<"Bom dia!\n";
    }
};
int main (){
    Textos txt;
    txt.messagem1();
    txt.messagem2();

    return 0;
}
