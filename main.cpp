

#include <iostream>

using namespace std;

int main()
{
    double num1, num2; //numbers to perform op
    int num3, num4;
    char op;
    double result;
    int choice;
    cout << "[1] Regular calculator\n";
    cout << "[2] Compare two numbers\n";
    cin >> choice;
    if(choice == 1){
    cout << "Enter first number " << endl;
    cin >> num1;
    cout << "Enter second number " << endl;
    cin >> num2;
    cout << "Decide what operation you want to do\n";
    cin >> op;
    switch(op){
case '+':
    result = num1 + num2;
    cout << result << endl;
    break;
case '-':
    result = num1 - num2;
    cout << result << endl;
    break;
case '*':
    result = num1 * num2;
    cout << result << endl;
    break;
case '/':
    result = num1 / num2;
    cout << result << endl;
    break;
default:
    cout << "invalid input type\n";
    break;
    }
    }
if(choice == 2){
    cout << "Input two numbers to compare\n";
    cin >> num3;
    cin >> num4;
    int compare;
    if(num3 % num4 == 0){
        cout << "the two numbers are equal\n";
    }
    else if(num3 % num4 != 0){
        cout << "The two numbers are not equal\n";
    }
}
else{
    return 0;
}
    return 0;
}
