#include <iostream>
using namespace std;

int main(){

    double a, b;
    char op;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    switch (op)
    {
    case '+':
    cout << "Sum: " << a + b << endl;
    break;
    case '-':
    cout << "Difference: " << a - b << endl;   
    break;
    case '*':
    cout << "Product: " << a * b << endl;
    break;
    case '/':
    cout << "Quotient: " << a / b << endl;
    break;
    case '%':
    cout << "Remainder: " << (int)a % (int) b << endl;
    break;
    default:
    cout << "Invalid Operator" << endl;
    break;
    }

}