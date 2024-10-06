#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
int main()
{
//vamos a crear un consultorio medico para sacar el IMC usando 2 strings 3 bool 1 char 2 int y 1 float
bool continuar, verificar, salir;
std::string nombre, apellido;
char sangre[2];
int edad, peso;
float altura;
std::cout <<"Bienvenido, primero cual es tu nombre? ";
std::cin >>nombre;
std::cout <<"Perfecto y tu apellido? ";
std::cin >>apellido;
std::cout <<"Cual es tu tipo de sangre? ";
std::cin >>sangre;
std::cout <<" Perfecto entonces eres " <<sangre;
std::cout <<" bien, cuanto pesas? ";
std::cin >>peso;
std::cout <<" Ya veo entonces pesas "<<peso <<"kg";
std::cout <<" Ahora, cuanto mides?";
std::cin >>altura;
std::cout <<" correcto entonces mides "<<altura <<"m";
std::cout <<"Bien con esta informacion ya podemos sacar tu IMC quieres continuar? (0)no (1)si  ";
std::cin >>continuar;
std::cout <<" Bien tu IMC es ";
float IMC=peso/pow(altura,2);
std::cout <<"\nIMC: "<<IMC;
std::cout <<"es correcto su resultado? (0)no (1)chi ";
std::cin>>verificar;
std::cout <<"Perfecto quiere salir? (0)no (1)si";
std::cin >>salir;
std::cout <<"BUEN DIA";
}