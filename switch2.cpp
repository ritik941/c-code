#include<iostream>
using namespace std;
int main() {
    char button;
    cout<<"input a character";
    cin>>button;

    switch(button) {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"namste"<<endl;
        break;
        case 'c':
        cout<<"hola"<<endl;
        break;
        case 'd':
        cout<<"hallo"<<endl;
        break;
        default:
        cout<<"I am still learning"<<endl;
        break;
    }
    return 0;
}