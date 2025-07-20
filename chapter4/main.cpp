// /*
//  * 4.12复习题
//  */
// #include <iostream>
// #include <vector>
// #include <array>
//
// // using namespace std;
// int main() {
//     // //1.a three means to creat a array long 30 bytes
//     // char actor[30];
//     //
//     // int n = 30;
//     // vector<char> actors(n);
//     //
//     // array<char, 30> actors2{};
//     //
//     // //1.b
//     // short betsie[100];
//     //
//     // //1.c
//     // float chuck[13];
//     //
//     // //1.d
//     // long double dipsea[64];
//     //
//     // //2
//     // array<char, 30> actors3{};
//
//     // //3
//     // int arr[5];
//     // for (int i = 0; i < 5; i++) {
//     //     arr[i] = 2*i + 1;
//     //     cout << arr[i] << endl;
//     // }
//     //
//     // //4
//     // int even = arr[0] + arr[4];
//     // cout << even << endl;
//
//     // //5
//     // float ideas[] ={1.1, 2.2, 3.3, 4.4, 5.5};
//     // cout << ideas[1]  << endl;
//
//     // //6
//     // char str[20] = "cheeseburger";
//     //
//     // //7
//     // string s = "Waldorf Salad";
//
//     // //8
//     // struct fish {
//     //     string type;
//     //     short weight;
//     //     float length;
//     // };
//     //
//     // //9
//     // fish jingyu = {"Jingyu", 10, 20.8};
//
//     // //10
//     // enum Response{Yes, No, Maybe};
//     // Response response = Yes;
//     // cout << response << endl;
//
//     // //11
//     // double ted = 1.0;
//     // double* pt = &ted;
//     // cout << pt << endl;
//     // cout << *pt << endl;
//
//     // //12
//     // float num = 1.1;
//     // float treacle[10];
//     // for (int i = 0; i < 10; i++) {
//     //     treacle[i] = num ++;
//     // }
//     // cout << treacle[0] << endl;
//     // cout << treacle[9] << endl;
//
// //     //13
// //     int size;
// //     string message = "Please enter a number for array size: ";
// //     cout << message << endl;
// //     cin >> size;
// //     int arr[size];
// //     for (int i = 0; i < size; i++) {
// //         arr[i] = i;
// //         cout << arr[i] << endl;
// //     }
// //
// //     int size2;
// //     string message2 = "Please enter a number for array size: ";
// //     cout << message2 << endl;
// //     cin >> size2;
// //     int* pa = new int [size2];
// //     for (int i = 0; i < size2; i++) {
// //         pa[i] = i;
// //         cout << pa[i] << endl;
// //     }
// //     delete[] pa;
// //
// // #include <vector>
// //     int size3;
// //     string message3 = "Please enter a number for array size: ";
// //     cout << message3 << endl;
// //     cin >> size3;
// //     vector<int> va(size3);
// //     for (int i = 0; i < size3; i++) {
// //         va[i] = i;
// //         cout << va[i] << endl;
// //     }
//
//     // //14
//     // cout << "Hello World!" << endl;
//     // cout << (int*)  ("Hello World!") << endl;
//
//     // //15
//     // struct fish {
//     //     string type;
//     //     short weight;
//     //     float length;
//     // };
//     // fish * pf = new fish;
//     // pf -> type = "GoldFish";
//     // pf -> weight = 100;
//     // pf -> length = 0.5;
//     // delete pf;
//
//     // //16
//     // #include <vector>
//     // #include <array>
//     //
//     //
//     // const short n =10;
//     // std::vector<std::string> names(n);
//     // std::array<std::string, n> names2;
//
//     return 0;
// }

/*
 * 4-13编程练习
 * 谢
 */

// //1
// #include<iostream>
// using namespace std;
// int main() {
//     cout << "What is your first name?" << endl;
//     char first_name[10];
//     cin.getline(first_name, 10);
//
//     cout << "What is your last name?" << endl;
//     char last_name[10];
//     cin.getline(last_name, 10);
//
//     cout << "What is your age?" << endl;
//     int age;
//     cin >> age;
//
//     cout << first_name << " " << last_name << " " << age << endl;
// }

// //2
// #include <iostream>
// #include <cstring>
//
// using namespace std;
// int main() {
//     cout << "Please enter your first name: " << endl;
//     char firstName[20];
//     cin.getline(firstName, 20);
//     cout << "Please enter your last name: " << endl;
//     char lastName[20];
//     cin.getline(lastName, 20);
//
//     char* name = strcat(firstName, ", ");
//     name = strcat(name, lastName);
//     cout << name << endl;
// }


// //3
// #include <iostream>
// #include <string>
//
//
// using namespace std;
// int main() {
//     cout << "Please enter your first name: " << endl;
//     string firstName;
//     getline(cin, firstName);
//     cout << "Please enter your last name: " << endl;
//     string lastName;
//     getline(cin, lastName);
//
//     string fullName = firstName + ", " + lastName;
//     cout << fullName << endl;
// }

// //5
// #include <iostream>
//
// using namespace std;
// int main() {
//     struct CandyBar {
//         string name;
//         float weight;
//         int kaluli;
//     }snack = {"Mocha Munch", 2.3, 350};
//     cout << snack.name << endl;
//     cout << snack.weight << endl;
//     cout << snack.kaluli << endl;
//
//     CandyBar candyBars[3] = {
//         {"a", 1.1, 2},
//         {"b", 3.3, 4},
//         {"c", 5.5, 6}
// };
//     for (int i = 0; i < 3; i++) {
//         cout << candyBars[i].name << endl;
//         cout << candyBars[i].weight << endl;
//         cout << candyBars[i].kaluli << endl;
//     }
//
//     return 0;
// }

// //7
// #include <iostream>
//
// using namespace std;
// int main() {
//     struct Pizza {
//         string name;
//         float diameter;
//         float weight;
//     }a;
//
//     getline(cin, a.name);
//     cin >> a.diameter;
//     cin >> a.weight;
//     cout << a.name << " " << a.diameter << " " << a.weight << endl;
//
//     return 0;
// }

// //8
// #include <iostream>
//
// using namespace std;
// int main() {
//     struct Pizza {
//         string name;
//         float diameter{};
//         float weight{};
//     };
//
//     auto* ps = new Pizza;
//
//     cin >> ps -> diameter;
//     cin.get();//获取前一次输入的换行符
//     getline(cin, ps -> name);
//     cin >> ps -> weight;
//
//     cout << ps -> name << " " << ps -> diameter << " " << ps -> weight << endl;
//
//     delete ps;
//     return 0;
// }

// #include <iostream>
// #include <array>
//
// using namespace std;
// int main() {
//     array<float, 3> grade_40m{};
//     float grade_40m_average = 0;
//     for (int i = 0; i < 3; i++) {
//         cin >> grade_40m[i];
//         grade_40m_average += grade_40m[i];
//     }
//     grade_40m_average /= 3;
//     cout << grade_40m_average << endl;
// }















