// addition function
using namespace std;
#include <iostream>
class Calculate
{
protected:
    double a, b, sum;
public:
    Calculate(){
        a = 0;
        b = 0;
        sum = 0;
    };
    void setNumber(){
        double n, m;
        a = n;
        b = m;
        cout<<"enter the first number"<<endl;
        cin>>a;
        cout<<"enter the second number"<<endl;
        cin>>b;
    }

    double getNumberA(){
        return a;
    }
    double getNumberB(){
        return b;
    }
};
class Addition: public Calculate{
    public:
        double addResult(){
            return a + b;
        }
};
class Mutiplication: public Calculate{
    public:
        double MultResult(){
            return a * b;
        }
};
class Substraction: public Calculate{
    public:
        double subResult(){
            return a - b;
        }
};
class Divisiotn: public Calculate{
    public:
        double divResult(){
            return a / b;
        }
};















// double add(){
//     double a, b, sum;
    

// }
// double add(){
//     double a, b, sum;
//     cout<<"enter the first number"<<endl;
//     cin>>a;
//     cout<<"enter the second number"<<endl;
//     cin>>b;
//     sum = a + b;
//     return sum;

// }

// double add(){
//     double a, b, sum;
//     cout<<"enter the first number"<<endl;
//     cin>>a;
//     cout<<"enter the second number"<<endl;
//     cin>>b;
//     sum = a + b;
//     return sum;

// }
// double add(){
//     double a, b, sum;
//     cout<<"enter the first number"<<endl;
//     cin>>a;
//     cout<<"enter the second number"<<endl;
//     cin>>b;
//     sum = a + b;
//     return sum;

// }

// division function

// substract function

// multiple function