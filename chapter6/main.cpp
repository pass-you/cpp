//6.11 编程练习
// //1
// #include <iostream>
// #include <cctype>
// using namespace std;
//
// int main() {
//     char ch;
//     cout << "Please enter a character('@' to quit): ";
//     cin >> ch;
//     while (ch != '@') {
//         if (ch >= '0' && ch <= '9') {
//             cout << "You should not enter a number: " << ch << endl;
//         }
//         else if (ch >= 'A' && ch <= 'Z') {
//             ch -= 'A' - 'a';
//             //ch = tolower(ch); //play the same roel as "ch -= 'A' - 'a';"
//             cout << ch  << endl;
//         }
//         else if (ch >= 'a' && ch <= 'z') {
//             ch += 'A' - 'a';
//             //ch = toupper(ch);
//             cout << ch << endl;
//         }
//         cout << "Please enter a character('@' to quit): ";
//         cin >> ch;
//     }
//
//     return 0;
// }

//6
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int d = 14;
    float f = 123.4567;
    printf("%03d\n", d);
    printf("%.3f", f);

    return 0;
}