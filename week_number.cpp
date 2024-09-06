#include<iostream>
using namespace std;
int main(){
    int d;
    cout<<"enter d : ";
    cin>>d;
    switch(d){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wed";
            break;
        case 4:
            cout<<"Thrus";
            break;
        case 5:
            cout<<"Fri";
            break;
        case 6:
            cout<<"Sat";
            break;
        case 7:
            cout<<"Sun";
            break;
        default:
            cout<<"Invalid Input";
            break;
    }
    return 0;
}