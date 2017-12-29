#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <utility>

using namespace std;

int main() {
    map<string,int> numbers;

    const int n=5;

    string names[n]={"один","два","три","четыре","пять"};

    int nms[n]={1,2,3,4,5};

    for (int k=0;k<n;k++) {
        numbers.insert(pair<string, int>(names[k], nums[k]));
    }

    numbers.erase("три");

    map<string,int>::iterator p;

    return 0;
}