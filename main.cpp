#include <bits/stdc++.h>
using namespace std;

int main(){

    // decalring variable for numbers and operation 
    string operation;
    double num1, num2;

    // taking input from user 
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Type Of Operation (+, -, *, /): ";
    cin>>operation;
    if(operation=="/"){
        cout<<"Enter Second Number except 0: ";
        cin>>num2;
    }
    else{
        cout<<"Enter Second Number: ";
        cin>>num2;
    }
    

    // maths for operation 
    if(operation =="+"){
        cout<<"Answer Of Problem "<<num1<<" + "<<num2<<" is"<<num1+num2<<"."<<endl;
    }
    else if(operation =="-"){
        cout<<"Answer Of Problem "<<num1<<" - "<<num2<<" is"<<num1-num2<<"."<<endl;
    }
    else if(operation =="*"){
        cout<<"Answer Of Problem "<<num1<<" * "<<num2<<" is"<<num1*num2<<"."<<endl;
    }
    else if(operation =="/"){
        cout<<"Answer Of Problem "<<num1<<" / "<<num2<<" is"<<num1/num2<<"."<<endl;
    }
    else cout<<"You have entered wrong operation."<<endl;

    return 0;
}