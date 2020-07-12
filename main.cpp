// CPPMASTERRACE.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <math.h>
using namespace std;
void equalTo(int a, int b){ //checks if two numbers are equal using the modulo operation. really unnecessary. just pretty cool :P

bool isEqualTo;
if(a % b == 0){
    isEqualTo = true;
    if(isEqualTo){
        cout << "The numbers are equal\n";
    }
}
else {
     isEqualTo = false;
     cout << "The numbers are not equal\n";
} //i had previously chosen to do the more basic method, which just checks if a = b and sets the bool to true or false, just think this is cooler.

}

int main()
{
    char op;
    double x;
    double y;
    double result;
    int calcChoice;
    cout << "[1] Regular calculator\n";
    cout << "[2] Compare two numbers\n";
    cout << "[3] Quit the calculator\n";
    cin >> calcChoice;
    if(calcChoice == 1){
    cout << "The order of input is number 1, number 2, operation.\n";
    cin >> x;
    cin >> y;
    cin >> op;
    switch(op){
    case '+':
    result = x + y;
    cout << result;
    break;
    case '-':
    result = x - y;
    cout << result;
    break;
    case '*':
    result = x * y;
    cout << result;
    break;
    case '/':
    result = x / y;
    cout << result;
    break;
    case '^':
    result = pow(x, y);
    cout << result;
    break;
    case 'v':
    result = sqrt(x);
    double result2;
    result2 = sqrt(y);
    cout << result;
    cout << result2;
    break;
    default:
        cout << "invalid input\n";
        break;



    }
    }
   else if(calcChoice == 2){
    double num3;
    double num4;
    cin >> num3;
    cin >> num4;
   equalTo(num3, num4);
}

}


