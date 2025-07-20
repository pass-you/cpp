#include<iostream>
using namespace std;

int main(){
  int a = 100;
  int b = 200;
  int &y = a;
  cout << "a = " << a << ", " << &a << endl;
  cout << "b = " << b << ", " << &b << endl;
  cout << "y = " << y << ", " << &y << endl;
  y = b;
  cout << "a = " << a << ", " << &a << endl;
  cout << "b = " << b << ", " << &b << endl;
  cout << "y = " << y << ", " << &y << endl;
  return 0;
}

