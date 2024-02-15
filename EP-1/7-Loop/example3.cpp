#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "คุณชื่ออะไร ? = ";
    cin >> name;

    cout << "ความยาวของชื่อคุณ = " << name.length();

    return 0;
}