#include <iostream>
#include <cstdlib>

using namespace std;

class MyClass {
public:
    char code;

    MyClass* next;

    MyClass(MyClass &obj) {
        obj.next = this;
        code = obj.code + 1;
    }

    MyClass(char s) {
        code = s;
    }

    ~MyClass() {
        if (next) {
            delete next;
        }

        cout << "Объект с полем " << code << " удалён\n";
    }

    void show() {
        cout << code << " ";

        if (next) {
            next->show();
        }
    }
};

int main() {
    int n = 10;

    MyClass* pnt = new MyClass('A');
    MyClass *p;
    p = pnt;

    for (int k = 1; k <= n; k++) {
        p = new MyClass(*p);
    }

    p->next = 0;
    pnt->show();

    cout << endl;

    delete pnt;

    return 0;
}