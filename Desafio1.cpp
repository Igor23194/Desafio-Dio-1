#include <iostream>
#include <string>
using namespace std;

//XP < 1000 = Ferro XP 1.001 -- 2.000 = Bronze
//XP 2.001 -- 5.000 = Prata  XP 6.001 -- 7.000 = Ouro
//XP 7.001 -- 8.000 Platina XP 8.001 -- 9.000 = Ascendente
//XP 9.001 -- 10.000 = Imortal XP >= 10.001 = Radiante

// Armazenar Nome e XP 
// Mensagem Final = "O Herói de nome {} está no nível de {}"

int main(){

    int exp;
    string rank;
    string nome_heroi;

    cout << "Nome de seu Heroi: " << endl;
    getline(cin, nome_heroi);

    cout << "Tabela de Niveis" << endl;
    cout << "----------------" << endl;
    cout << "<= 1.000 = Ferro" << endl;
    cout << "entre 1.001 e 2.000 = Bronze" << endl;
    cout << "entre 2.001 e 5.000 = Prata" << endl;
    cout << "entre 5.001 e 7.000 = Ouro" << endl;
    cout << "entre 7.001 e 8.000 = Platina" << endl;
    cout << "entre 8.001 e 9.000 = Ascendente" << endl;
    cout << "entre 9.001 e 10.000 = Imortal" << endl;
    cout << ">= 10.001 = Radiante" << endl;


    cout << "Valor De Experiencia De Seu Heroi: " << endl;
    cin >> exp;


    if (exp <= 1000){
        rank = "Ferro";
    }else if(exp > 1000 && exp <=2000){
        rank = "Bronze";
    }else if(exp > 2000 && exp <= 5000){
        rank = "Prata";
    }else if(exp > 5000 && exp <= 7000){
        rank = "Ouro";
    }else if(exp > 7000 && exp <= 8000){
        rank = "Platina";
    }else if(exp > 8000 && exp <= 9000){
        rank = "Ascendente";
    }else if(exp > 9000 && exp <=10000){
        rank = "Imortal";
    }else{
        rank = "Radiante";
    }

    

    cout << "O Herói de nome: " << nome_heroi << " está no nível: " << rank; 

}

