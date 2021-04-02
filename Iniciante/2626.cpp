#include <iostream>
using namespace std;

int main() {
    string dodo, leo, pepe;
    while(cin >> dodo >> leo >> pepe) {
        int f;//1 dodo, 2 leo, 3 pepper, 4 empate
        if(dodo == "papel") {
            if(leo == "papel") {
                if(pepe == "papel") 
                    f = 4;
                else if(pepe == "pedra") 
                    f = 4;
                else 
                    f = 3;
            }
            
            else if(leo == "pedra") {
                if(pepe == "papel") 
                    f = 4;
                else if(pepe == "pedra") 
                    f = 1;
                else 
                    f = 4;
            }
            
            else {
                if(pepe == "papel") 
                    f = 2;
                else if(pepe == "pedra") 
                    f = 4;
                else 
                    f = 4;
            }
        }
        
        else if(dodo == "pedra") {
            if(leo == "papel") {
                if(pepe == "papel") 
                    f = 4;
                else if(pepe == "pedra") 
                    f = 2;
                else 
                    f = 4;
            }
            
            else if(leo == "pedra") {
                if(pepe == "papel") 
                    f = 3;
                else if(pepe == "pedra") 
                    f = 4;
                else 
                    f = 4;
            }
            
            else {
                if(pepe == "papel") 
                    f = 4;
                else if(pepe == "pedra") 
                    f = 4;
                else 
                    f = 1;
            }
        }
        
        else {
            if(leo == "papel") {
                if(pepe == "papel") 
                    f = 1;
                else if(pepe == "pedra") 
                    f = 4;
                else
                    f = 4;
            }
            
            else if(leo == "pedra") {
                if(pepe == "papel") 
                    f = 4;
                else if(pepe == "pedra") 
                    f = 4;
                else 
                    f = 2;
            }
            
            else {
                if(pepe == "papel")
                    f = 4;
                else if(pepe == "pedra") 
                    f = 3;
                else 
                    f = 4;
            }
        }
        
        switch(f) {
            case 1:
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
            break;
            case 2:
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
            break;
            case 3:
            cout << "Urano perdeu algo muito precioso..."  << endl;
            break;
            case 4:
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            break;
        }
    }
    return 0;
}