//Programa para calcular la suma de números pares del 1 al 20
//Diego Armando Medel Luna
//17 de Octubre del 2017
#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int count=1;

  while (count<21){
    if((count%2)<=0)
      {
	sum=sum+count;
      }
    count++;
  }
  cout << "suma" << sum << endl;
  return 0;
  }
