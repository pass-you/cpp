#include <iostream>

using namespace std;
int main(){

    class student{
        public:
        string name;
        string id;
        void get_ni(){
            cout << "please input your name: ";
            getline(cin, name);
            cout << "please input your id: ";
            getline(cin, id);
        }
        void put_ni(){
            cout << "Hello " << name << ", your id is: "  << id << endl; 
        }
    };
    student xie;
    xie.get_ni();
    xie.put_ni();
    return 0;
}