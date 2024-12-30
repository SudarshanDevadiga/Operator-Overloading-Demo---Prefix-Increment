#include <iostream>
using namespace std;
class Count {
    public:
    int value;

    public:

    //constructor to initialize count to 5
    Count():value(5) {}
    //overload ++ when used as prefix
    void operator ++() {
        ++value;
    }
    void display() {
        cout<<"Count: "<<value<<endl;
    }
};

int main() {
    Count count1;
    //call the "void operator ++ ()" function
    ++count1;
    count1.display();

    return 0;
}