#include<iostream>
using namespace std;

int main(){
  int a = 100;
  int * const p = &a;
  const int *p2 = &a;
  cout << a << endl;
  cout << *p << endl;
  cout << *p2 << endl;
  return 0;
}
