#include <iostream>
#include <math.h>
using namespace std;
bool isEqual(int n, int k){
    if(n % k == 0){
        cout << "The two numbers are equal\n";
        return  true;
    }
    else{
        cout << "The two numbers are not equal\n";
        return false;
    }
}
void triangleSolve(){
double hyp, angle;
cout << "Enter hypotenuse and an angle\n";
cin >> hyp >> angle; //HYP, ANGLE
if(angle == 30){
    double unkSide = hyp / 2;
    cout << "SIN: "<< unkSide << endl;
    double lastSide = sqrt(pow(unkSide, 2) + pow(hyp, 2));
    cout << "UNKNOWN SIDE: " << lastSide << endl;
}
else if(angle == 45){
    double unkSide = (hyp * sqrt(2) / 2);
    cout << unkSide << endl;
    double lastSide = sqrt(pow(unkSide, 2) + pow(hyp, 2));
    cout << "UNKNOWN SIDE: " << lastSide << endl;
}
else if(angle == 60){
    double unkSide = (hyp * sqrt(3) / 2);
    cout << "SIN: " << unkSide << endl;
    double lastSide = sqrt(pow(unkSide, 2) + pow(hyp, 2));
    cout << "UNKNOWN SIDE: " << lastSide << endl;
}

}


int main()
{
    int menuChoice;
    cout << "[1] MAIN CALCULATOR\n";
    cout << "[2] TRIANGLE SOLVE\n";
    cin >> menuChoice;
    if(menuChoice == 1){
    cout << "Type q or quit to quit at any time\n";
    for(int i = 1; i>0;){
        int x, y;
        cin >> x >> y;
        if(x == 'q' || y == 'q'){
            return 0;
        }
        char op;
        cin >> op;
        switch(op){
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        cout << x / y;
        break;
    case '=':
        isEqual(x, y);
        break;
    case '^':
        cout << pow(x, y);
        break;
    case 'v':
        cout << sqrt(x) << " \n";
        cout << sqrt(y) << endl;
        break;
    case 'q':
        i--;
        return 0;
        break;
    default:
        return 0;
        }
        }

return 0;
    }
    else if(menuChoice == 2){
        triangleSolve();
    }
    return 0;
}
