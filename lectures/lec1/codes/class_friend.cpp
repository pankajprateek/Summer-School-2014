#include<iostream>
using namespace std;

class Y;

class X {
public:
    int func(Y &y);
};

class Y {
private:
    int y1;
public:
    void sety1(int n) {
        y1=n;
    }
    friend int X::func(Y &y);
};

int X::func(Y &y) {
    cout<<"Function func called"<<y.y1<<endl;
    return 0;
}

int main() {
    X x;
    Y y;
    y.sety1(1);
    x.func(y);
}
