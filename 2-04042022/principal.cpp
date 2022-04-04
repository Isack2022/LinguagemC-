#include <iostream>
#include "Operacao.h"
#include "usuario.h"
int main (){
    system("clear");
    Usuario us;
    Operacao op;
    us.nome = "Gabriel";
    us.email = "gabrielPaulo@gamil.com";
    us.senha =" 1234560";
    us.nivel= "Adim";
    op.cadastro (us.nome, us.email, us.senha, us.nivel);
    
    return 0;
}