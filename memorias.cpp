#include<iostream>
using namespace std;

int main()
{
a=5;
cout<<"Tamaño de datos  :"<<endl;
cout<<"int :"<<sizeof(int)<<endl;
cout<<"float :"<<sizeof(float)<<endl;
cout<<"char :"<<sizeof(char)<<endl;
cout<<"bool :"<<sizeof(bool)<<endl;
cout<<"long :"<<sizeof(long)<<endl;
cout<<"double :"<<sizeof(double)<<endl;

cout<<"direccion de memoria estatica"<<endl;
cout<<"Direccion  :"<<&a<<endl;
cout<<"direccion de memoria dinamica"<<endl;
cout<<"Direccion  :"<<malloc(1)<<endl;

cout<<"puntero : "<<endl;
int* puntero= (int*)malloc(sizeof(int));
cout<<"Direccion de puntero"<<puntero<<endl;.



}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                           