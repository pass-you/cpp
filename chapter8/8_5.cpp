#include<iostream>
using namespace std;

double rcube(const double & rx);
double cube(double fx);

int main(){
  double x = 3.0;
  int b = 3;
  long c = 3L;
  cout << cube(x) << " is cube of " << x << endl;
  cout << rcube(3) << " is cube of 3" <<  endl;
  return 0;
}

double rcube(const double & rx){
  rx *= rx * rx;
  return rx;
}

double cube(double fx){
  fx*=fx*fx;
  return fx;
}
