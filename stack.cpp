#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(2);
    s.push(3);

    s.pop();

    cout<<"printing top element"<<s.top()<<endl;

    return 0;

}