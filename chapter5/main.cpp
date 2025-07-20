// /*
//  * 顺序点(分号或者完整表达式的结尾)
//  */
// #include <iostream>
//
// using namespace std;
// int main() {
//     int num = 0;
//     while (num++ < 10) {
//         cout << num << endl;
//     }
//
//     return 0;
// }


/*
 * 5.8复习题
 */

// //4
// #include <iostream>
//
// using namespace std;
// int main() {
//     int j = 5;
//     while (++j < 9)
//         cout << j++ << endl;
//     return 0;
// }

//6
// #include <iostream>
//
// using namespace std;
// int main() {
//     char ch;
//     int count = 0;
//
//     cout << "input a char(enter '#' to quit): " << endl;
//     do {
//         cin.get(ch).get();
//         if (ch == '#') break;
//         cout << ch;
//         ++ count;
//     }
//     while (true);
//     cout << count << endl;
//
//     return 0;
// }

// //8
// #include <iostream>
//
// using namespace std;
// int main() {
//     int x = (1024);
//     cout << x << endl;
//
//     int y;
//     y = 1024;
//     cout << y << endl;
//
//     return 0;
// }

// //9
// #include <iostream>
//
// using namespace std;
// int main() {
//
//     char ch;
//     cin >> ch;
//     cout << ch;
//
//     cin.get(ch);
//     cout << ch;
//
//     ch = cin.get();
//     cout << ch;
//
//     return 0;
// }

/*
 * 5.9编程练习
 */

// //1
// #include <iostream>
//
// using namespace std;
// int main() {
//  int min_num, max_num;
//  cout << "Please enter the min number: ";
//  cin >> min_num;
//
//  cout << "Please enter the max number: ";
//  cin >> max_num;
//
//  int sum = 0;
//  for (int i = min_num; i <= max_num; i++) {
//   sum += i;
//  }
//  cout << sum << endl;
//
//  return 0;
// }

// //2
// #include <iostream>
//
// using namespace std;
// int main() {
//  const int ArSize = 101;
//  long double Ar[ArSize];
//  Ar[0] = Ar[1] = 1;
//  for (int i = 2; i < ArSize; i++) {
//   Ar[i] = i * Ar[i - 1];
//  }
//  for (int i = 0; i < ArSize; i++) {
//   cout << i << "!= " << Ar[i] << endl;
//  }
//  cout << sizeof(long long) << endl;
//  cout << sizeof(long double) << endl;
//
//  return 0;
// }

// //3
// #include <iostream>
//
// using namespace std;
// int main() {
//  cout << "enter a number:" << endl;
//  int num;
//  cin >> num;
//  while (num) {
//   int sum = 0;
//   for (int i = 1; i <= num; i++)
//    sum += i;
//   cout << "up to now, the sum is: " << sum << endl;
//   cin >> num;
//  }
//
//  return 0;
// }

// //8
// #include <iostream>
// #include <cstring>
//
// using namespace std;
// int main() {
//  char words[20][20];
//  char word[20];
//  cout << "Please enter the word" << endl;
//  cin.getline(word, 20);
//
//  int i = 0;
//  while (strcmp(word, "done") != 0) {
//
//   strcpy(words[i++], word);
//   cout << "Please enter the word" << endl;
//   cin.getline(word, 20);
//  }
//  cout << i << endl;
//  for (int j = 0; j < i; j++) {
//   cout << words[j] << endl;
//  }
//
//
//  return 0;
// }

// //9
// #include <iostream>
//
// using namespace std;
// int main() {
//  auto *pws = new string[100];
//
//  cout << "Please enter a word" << endl;
//  string word;
//  getline(cin, word);
//
//  int i = 0;
//  while (word != "done") {
//   *(pws + i++) = word;
//   cout << "Please enter a word" << endl;
//   getline(cin, word);
//  }
//  cout << i << endl;
//  for (int j = 0; j < i; j++) {
//   cout << *(pws + j) << endl;
//  }
//
//  delete [] pws;
//
//  return 0;
// }

//10
// #include <iostream>
//
// using namespace std;
// int main() {
//  cout << "enter number of rows:" << endl;
//  int rows;
//  cin >> rows;
//
//  for (int i = 0; i < rows; i++) {
//   for (int j = 0; j < rows - i - 1; j++) {
//    cout << ".";
//   }
//   for (int k = 0; k < i + 1; k++) {
//    cout << "*";
//   }
//   cout << endl;
//  }
//
//  return 0;
// }

//  5.9编程练习
//  1
//  #include <iostream>
//  using namespace std;
//
//  int main() {
//   int min;
//   int max;
//   cout << "Please enter min number: " << endl;
//   cin >> min;
//   cout << "Please enter max number: " << endl;
//   cin >> max;
//
//   int sum = 0;
//   for (int i = min; i <= max; i++) {
//    sum += i;
//   }
//   cout << sum << endl;
//
//   return 0;
//  }

// //2
//
//  // formore.cpp -- more looping with for
// #include <iostream>
// #include <array>
//  const int ArSize = 101;      // example of external declaration
//  int main()
//  {
//   std::array<long double, ArSize> factorials{};
//   factorials[1] = factorials[0] = 1LL;
//   for (int i = 2; i < ArSize; i++)
//    factorials[i] = i * factorials[i-1];
//   for (int i = 0; i < ArSize; i++)
//    std::cout << i << "! = " << factorials[i] << std::endl;
//   // std::cin.get();
//
//  std::cout << sizeof(long long) << std::endl;
//   std::cout << sizeof(long double) << std::endl;
//
//   return 0;
//  }

// //3
// #include <iostream>
// using namespace std;
//
// int main() {
//  int sum = 0;
//  int num = 0;
//  cout << "Enter the number:(0 to quit) ";
//  cin >> num;
//  while (num != 0) {
//   sum += num;
//   cout << "sum = " << sum << endl;
//   cout << "Enter the number:(0 to quit) " << endl;
//   cin >> num;
//  }
//
//  return 0;
// }

//4
// #include <iostream>
// using namespace std;
//
// int main() {
//  string months[12];
//  int nums[12];
//  for (int i = 1; i <= 12; i++) {
//   months[i - 1] = to_string(i);
//  }
//  int i = 0;
//  while (i != 12) {
//   cout << "please input the sale number of the month " << months[i] << ": " << endl;
//   cin >> nums[i];
//   i ++;
//  }
//
//  return 0;
// }







