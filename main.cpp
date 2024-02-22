#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char op;

    cout << "Enter your first number: ";
    cin >> num1;

    cout <<"Enter your second number: ";
    cin >> num2;

    cout << "Enter operator: ";
    cin >> op;

    if(op == '+'){
        cout<<num1+num2;
    }else if (op == '-'){
        cout<<num1-num2;
    }else if (op == '/'){
        cout<<num1/num2;
    }else if (op == '*'){
        cout<<num1*num2;
    }else {
        cout<< "Error 404 : Please Enter The Number";
    }

    return 0;
}
