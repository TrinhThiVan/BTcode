#include<iostream>
#include<string>

using namespace std;

int num1, num2;
char op;

int main()
{
    cin>>num1>>op>>num2;

    switch(op)
    {
        case '+':
            cout<< num1 + num2 <<'\n';
            break;
        case '-':
            cout<< num1 - num2 <<'\n';
            break;
        case '*':
            cout<< num1 * num2 <<'\n';
            break;
        case '/':
            if(num2 == 0)
                cout<< "Invalid divisor" <<'\n';
            else
                cout<< num1/num2 <<'\n';
            break;
        case '%':
            if(num2 = 0)
                cout<< "Invalid divisor" <<'\n';
            else
                cout<< num1%num2 <<'\n';
            break;
    }
    return 0;
}

