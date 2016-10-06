#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double sumatoria_cuadrados (int n)
{
  long double suma = 0;
  int centinela = 0;
  while (centinela < n)
    {
      long double m = 0;
      m = ((n*(n+1))*((2*n)+1))/6;
      suma=m;
      centinela = n;
    }
  return suma;
}

int main ()
{
  int n = 0;
  cout<<"De un número natural"<<endl;
  cin>>n;
  for (int ii=1; ii<=n; ii++)
    {
      cout<<ii<<"\t"<<sumatoria_cuadrados(ii)<<endl;
    }
  return 0;
}
