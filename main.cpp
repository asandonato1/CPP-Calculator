

#include <iostream>

using namespace std;

int expoFun(int a, int b){ //a = base number, b = power number
 // This function is a basic exponent function used later in the program for the power operation in the calculator
 int result1 = 1; 
 for(int i = 0; i < b; i++){
    result1 = result1 * a;
 }
 return result1;

}

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
    double num1, num2; //numbers to perform op
    int num3, num4;
    char op;
    double result;
    int choice;
    bool calcQuit = false;
    cout << "[1] Regular calculator\n";
    cout << "[2] Compare two numbers\n";
    cout << "[3] Quit the calculator\n";
    cin >> choice;
    do{ //do while loop not yet working.
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
    calcQuit = false;
    break;
case '-':
    result = num1 - num2;
    cout << result << endl;
    calcQuit = false;
    break;
case '*':
    result = num1 * num2;
    cout << result << endl;
    calcQuit = false;
    break;
case '/':
    result = num1 / num2;
    cout << result << endl;
    calcQuit = false;
    break;
case '^':
    cout << expoFun(num1, num2);
default:
    //cout << "invalid input type\n";
    calcQuit = true;
    break;
    }
    }
if(choice == 2){
    cin >> num3;
    cin >> num4;
   equalTo(num3, num4);
}
if(choice == 3){
    calcQuit = true;
    return 0;
}
else{
    return 0;
}
    return 0;
} while(!calcQuit);
}
