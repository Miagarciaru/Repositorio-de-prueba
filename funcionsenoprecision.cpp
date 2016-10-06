#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float funcion_seno (int n)
{
  float y = 0;
  y = sin (n);
  return y;
}

int main ()
{
  int n= 0;
  cout<< "De un número"<<endl;
  cin>>n;
  for (int ii=(n*(-1)); ii<=n; ii++)
    {
      cout<<ii<<"\t"<<funcion_seno(ii)<<setprecision(16)<<endl;
    }
  return 0;
}
