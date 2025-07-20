#include <iostream>
using namespace std;


string version1(const string & s1, const string & s2);

int main(){

  string input;
  string result;
  cout << "Enter a string: ";
  getline(cin, input);
  cout << endl;
  
  result = version1(input, " *** ");
  cout << result << endl;

  return 0;
}

string version1(const string & s1, const string & s2){
  string temp;
  temp = s2+s1+s2;
  return temp;
}
