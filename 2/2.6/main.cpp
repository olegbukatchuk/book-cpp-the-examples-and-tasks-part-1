#include <iostream>
#include <cstdlib>

using namespace std;
 int main()
 {
     int num, k;

     for (k = 1; k <= 5; k++) {
         cout << "Укажите число от 1 до 3: ";
         cin >> num;

         switch (num) {
             case 1:
                 cout << "Это единица" << endl;
                 break;
             case 2:
                 cout << "Это двойка" << endl;
                 break;
             case 3:
                 cout << "Это тройка" << endl;
                 break;
             default:
                 cout << "Я не знаю такого числа" << endl;
         }
     }

     return 0;
 }