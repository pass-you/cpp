#include <iostream>
using namespace std;

struct Cat{
  int age;
  string gender; 
};

void display(const Cat & fcat);
Cat & copy(Cat & cat1, Cat & cat2);

int main(){
  Cat cat1 = {};
  Cat cat2 = {3, "female"};
  display(cat1);
  display(cat2);
  display(copy(cat1, cat2));

  return 0;
}

void display(const Cat & fcat){
  cout << fcat.age << endl;
  cout << fcat.gender << endl;
}

Cat & copy(Cat & cat1, Cat & cat2){
  cat1 = cat2;
  return cat1;
}
