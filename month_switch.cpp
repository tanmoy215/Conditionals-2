#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter month : ";
    cin>>x;
    switch(x){
        case 1:
        cout<<"30";
        break;
        case 2:
        cout<<"28";
        break;
        case 3:
        cout<<"30";
        break;
        case 4:
        cout<<"28";
        break;
        case 5:
        cout<<"30";
        break;
        case 6:
        cout<<"28";
        break;
        case 7:
        cout<<"30";
        break;
        case 8:
        cout<<"28";
        break;
        case 9:
        cout<<"30";
        break;
        case 10:
        cout<<"28";
        break;
        case 11:
        cout<<"30";
        break;
        case 12:
        cout<<"28";
        break;
        default:
        cout<<"Invalid Input";
    }
    return 0;
}