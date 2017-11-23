#include <iostream>
#include <string.h>
using namespace std;
 int buscar (char v[], int cont, char letra[], int tamanoletra);
 int tamano(char v[]);
 
 int main()
 {
     char v[50], letra[50];
     int tamanoletra, cont=0, encon;
 
     cout<<"Introduce una palabra: ";
     cin.getline(v,50,'\n');
     cout<<"Introdusca la pabra a buscar: "<<endl;
     cin.getline(letra,50,'\n');
 
     tamanoletra=tamano(letra);
     encon=buscar(v,cont,letra,tamanoletra);
 
     if(encon==-1)
         cout<<"Esta palabra No se encuentra";
     else
     {
         for(int i=encon+1;v[i];i++)
             cout<<v[i];
             
     }
         
         
     return 0;
 
 }
 
 int buscar (char v[], int cont, char letra[], int tamanoletra)
 {
    
     for(int j=0;j<40;j++)
     {
         int x=0;
         
         for(int i=cont;v[i];i++)
         {
             if(v[i]==letra[x])
             { 
                 x++;
                 if(x==tamanoletra)
                     return i-tamanoletra;
                 
             }
             else if(j==39)
                 return -1;
             else 
                 x=0;
             cont++;
         }
        cont++;
         
     }
     
 
 }
 
 
 int tamano(char v[])
 {
     int cont=0;
     for(;v[cont];cont++);
     return cont;
 }
