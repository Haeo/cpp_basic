#include <iostream>
using namespace std;

int main()
{
    int i_var;
    double d_var;
    char ch;

    cout << "int, double, char value input : ";
    cin >> i_var >> d_var;
    cin >> ch;

    cout << "int : " << i_var << endl;
    cout << "double : " << d_var << endl;
    cout << "char : " << ch << endl;

    return 0;
}