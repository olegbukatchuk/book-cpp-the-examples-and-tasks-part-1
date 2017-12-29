#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    int n;

    cout<<"Числа Фибоначчи\n";
    cout<<"Введите размер массива: ";
    cin>>n;

    try {
        vector<int> fibs(n,1);

        cout<<fibs[0]<<" "<<fibs[1];

        for (int k=2;k<n;k++) {
            fibs[k]=fibs[k-1]+fibs[k-2];
            cout<<" "<<fibs[k];
        }
    }

    catch (...) {
        cout<<"Произошла ошибка!";
    }

    cout<<"\nПрограмма завершила выполнение...\n";

    return 0;
}