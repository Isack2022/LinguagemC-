#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;

class Operacao{
    public:
        void cadastro (string nome, string senha, string email,string nivel){
            cout << "cadastro do usuário realizado com sucesso\n";
        }
        string login(string usario, string senha){
            return "Seja bem vindo! \n";
        }
        string NovaSenha(string nome, string email, string senha){
            return "Senha alterada com sucesso\n";
        }
};