#include <bits/stdc++.h>
using namespace std;

int main(){

    // decalring variable for numbers and operation 
    int operation;
    double num1, num2;

    // taking input from user 
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Choose the operation from the following and enter relative number: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>operation;
    if(operation==4){
        cout<<"Enter Second Number except 0: ";
        cin>>num2;
        if(num2==0){
            cout<<"You entered 0 which is invalid."<<endl;
            cout<<"Enter Number Except 0: ";
            cin>>num2;
        }
    }
    else{
        cout<<"Enter Second Number: ";
        cin>>num2;
    }
    

    // maths for operation 
    if(operation ==1){
        cout<<"Answer Of the Problem ("<<num1<<" + "<<num2<<") is = "<<num1+num2<<"."<<endl;
    }
    else if(operation ==2){
        cout<<"Answer Of Problem ("<<num1<<" - "<<num2<<") is = "<<num1-num2<<"."<<endl;
    }
    else if(operation ==3){
        cout<<"Answer Of Problem ("<<num1<<" * "<<num2<<") is = "<<num1*num2<<"."<<endl;
    }
    else if(operation ==4){
        cout<<"Answer Of Problem ("<<num1<<" / "<<num2<<") is = "<<num1/num2<<"."<<endl;
    }
    else cout<<"You have entered wrong operation."<<endl;

    return 0;
}