#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "คุณชื่ออะไร ? = ";
    cin >> name;

    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << endl;
    }
    return 0;
}