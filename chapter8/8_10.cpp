#include<iostream>
using namespace std;

unsigned long left(unsigned long num, unsigned ct);


int main(){
  cout << left(12345,3) << endl; 
  return 0;
}

unsigned long left(unsigned long num, unsigned ct){
  unsigned digits = 1;
  unsigned long n = num;
  if(ct == 0 || num == 0)
    return 0 ;
  while(n/=10)
    digits ++;
  if(digits > ct){
    ct = digits - ct;
    while(ct--)
      num /= 10;
    return num;
  }
  else{
    return num;
  }
  
}
