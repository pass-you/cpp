#include<iostream>
using namespace std;

template <typename T>
void swap(T & x1, T & x2);

struct job{
  char name[40];
  double salary;
  int floor;
};

void show(job & fjob);


template <> void swap<job> (job & fjob1, job & fjob2);


int main(){
  job j1 {"Teacher", 6000, 2};
  job j2 {"Energeer", 8000, 4};
  show(j1);
  show(j2);
  cout << "------------------------" << endl;
  swap(j1, j2);
  show(j1);
  show(j2);

  return 0;
}

void show(job & fjob){
  cout << fjob.name << endl;
  cout << fjob.salary << endl;
  cout << fjob.floor << endl;
}

template <typename T>
void swap(T & x1, T & x2){
  T temp = x1;
  x1 = x2;
  x2 = temp;
}

template<> void swap<job> (job & fjob1, job & fjob2){
  double temp1 = fjob1.salary;
  int temp2 = fjob1.floor;
  fjob1.salary = fjob2.salary;
  fjob2.salary = temp1;
  fjob1.floor = fjob2.floor;
  fjob2.floor = temp2;
}
