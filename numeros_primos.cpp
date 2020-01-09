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
