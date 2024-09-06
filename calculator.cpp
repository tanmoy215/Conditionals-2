#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // char ch;
    // cout<<"enter the problem : ";
    // cin>>a>>ch>>b;
    // if(ch=='+') cout<<a+b;
    // if(ch=='-') cout<<a-b;
    // if(ch=='/') cout<<a/b;
    // if(ch=='*') cout<<a*b;
    char ch;
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter Operation type : ";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"Final ans : "<<a+b;
        break;
        case '-':
        cout<<"Final ans : "<<a-b;
        break;
        case '/':
        cout<<"Final ans : "<<a/b;
        break;
        case '*':
        cout<<"Final ans : "<<a*b;
        break;
        case '%':
        cout<<"Final ans : "<<a%b;
        break;
        default:
        cout<<"Invalid Input";

    }
    return 0;
}