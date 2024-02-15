#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "คุณอายุเท่าไหร่ : ";
    cin >> age;

    if (age >= 18 && age <= 60)
    {
        cout << "คุณอายุมากกว่า 18 และอายุน้อยกว่า 60 = ผ่านเกณฑ์" << endl;
    }
    else if (age > 60)
    {
        cout << "คุณอายุมากกว่า 60 = เกินเกณฑ์" << endl;
    }
    else
    {
        cout << "คุณอายุน้อยกว่า 18 ปี" << endl;
    }
    return 0;
};