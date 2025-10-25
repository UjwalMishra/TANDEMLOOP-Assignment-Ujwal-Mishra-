// Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
//   Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
//   Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string


//solution
#include<bits/stdc++.h>
using namespace std;


class Calculator{
    private : 
        double a;
        double b;
        string operation;
    public :
        Calculator(double a, double b, string op){
            this->a = a;
            this->b = b;
            this->operation = op;
        }

        //method
        double calculate(){
            if(operation == "Addition" || operation == "+"){
                return a+b;
            }
            else if(operation == "Subtraction" || operation == "-"){
                return a-b;
            }
            else if(operation == "Multiplication" || operation == "*"){
                return a*b;
            }
            else if(operation == "Division" || operation == "/"){
                if(b==0){
                    cout<<"B can't be 0 in division operation"<<endl;
                    return -1;
                }
                return a/b;
            }
            else{
                cout<<"Invalid operation"<<endl;
                return -1;
            }
        }
};

int main(){
    double a,b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;

    string operation;
    cout<<"Enter operation : ";
    cin>>operation;

    Calculator obj(a,b,operation);

    double ans = obj.calculate();

    cout<<"Result : "<<ans<<endl;

}