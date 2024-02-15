#include <iostream>

using namespace std;

int main()
{
    int ages[5];
    int sumAge = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "รับอายุคนที่ " << (i + 1) << ": ";
        cin >> ages[i];
        sumAge += ages[i];
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "อายุคนที่ " << (i + 1) << " = " << ages[i] << endl;
    }

    cout << "ผลรวมอายุทั้ง 5 คน = " << sumAge;

    return 0;
}