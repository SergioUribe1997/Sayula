#ifndef LABERINTO_H_INCLUDED
#define LABERINTO_H_INCLUDED
#include <fstream>
#include <iostream>
using namespace std;

class Laberinto
{
    public:
    char x;
    ifstream leer;
    void mostrar();
};

void Laberinto::mostrar()
{
    leer.open("laberinto.txt");
    if(!leer.good())
    {
        cout << "Error el archivo no existe" << endl;
    }
    else
    {
        while(!leer.eof())
        {

            leer.read((char*)&x,1);
            if(leer.eof()) break;
            if (x == '0' or x == '1' or x == '2' or x == '3' or x == '4' or x == '5' or x == '6' or x == '7' or x == '8' or x == '9' ){
            cout << " ";
            } else{ if(x == '-'){
                 leer.read((char*)&x,1);
                 if(leer.eof()) break;
                 if (x=='1'){
                  cout << "*";
                 }
            } else cout << x;}
        }
        leer.close();
    }
}

#endif // LABERINTO_H_INCLUDED
