#include <iostream>
#include <istream>    // to read the file
#include <ostream>    // to read 
using namespace std;
#include "./calcFuntion/calc.h"
int main(int argc, char const *argv[])
{
    Mutiplication adOperation;
    adOperation.setNumber();
    cout<<"the result of addition : "<<adOperation.MultResult();
    return 0;
}
