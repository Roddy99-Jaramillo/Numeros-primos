#include <iostream>
#include <thread>
#include<fstream>
#include<conio.h>
#include <pthread.h> 
#include <unistd.h> 
 #include<windows.h>
#include <string.h>
int numero;
int i;
void *primo(void*);
int contador=0;
void hilo(){
	std::ofstream outfile("cristopher.txt");
	outfile<<"Adios Mundo Cruel"<< std::endl <<"hola"<<std::endl;
	outfile<<":'v"<< std::endl;
	outfile.close();
}
void *primo(void *tid)
{
	
	printf( "Introduzca el numero" );
printf("\n");
scanf( "%d", &numero);
	printf("\n");
}
int main(){	
	int a = 1;
pthread_t pthread_primo;
pthread_create (&pthread_primo, NULL, primo, (void *)i); pthread_join(pthread_primo, NULL);
for(i=numero; i>0; i--)
{
if(numero%i==0)
contador++;
}
if(contador==2)
printf("El numero es primo");
std::thread prueba(hilo);
prueba.join();
getch();
}
