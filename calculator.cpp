// C++ Program to make a Simple Calculator using

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    double a, b, res;

    cout<<"WELCOME TO SIMPLE CALCULATOR"<<endl;
    cout << "Enter your choice (+, -, *, /): "<<endl;
    cin >> ch;

   
    cout << "Enter two numbers: ";
    cin >> a >> b;

   
    switch (ch) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        cout << "Error! Operator is not correct";
        return -1;
    }
    
        cout << "Result: " << res;
    
}