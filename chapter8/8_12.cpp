#include<iostream>
using namespace std;

template <typename T>
T add(T &a, T &b);

template <typename T>
T add(T &a,  T &b, T &c);


int main(){
  int a = 1;
  int b = 2;
  int e = 3;
  double c = 1.1;
  double d = 2.2;
  cout << add(a, b) << endl;
  cout << add(c, d) << endl;
  cout << add(a,b,e) << endl;

  return 0;
}

template <typename T>
T add(T &a, T &b){
  return a + b;
}

template <typename T>
T add(T &a,  T &b, T &c){
  return a+b+c;
}
