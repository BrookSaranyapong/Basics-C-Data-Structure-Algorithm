#include <iostream>
#include <string>

using namespace std;

int areaOfCircle(float radius)
{
    return 3.1415 * radius * radius;
}

int main()
{
    int radius;
    for (int i = 0; i < 5; i++)
    {
        cout << "ใส่รัศมีเข้ามา: ";
        cin >> radius;
        int areaCircle = areaOfCircle(radius);
        cout << "พื้นที่วงกลม: " << areaCircle << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "ใส่รัศมีเข้ามา: ";
        cin >> radius;
        int areaCircle = areaOfCircle(radius);
        cout << "พื้นที่วงกลม: " << areaCircle << endl;
    }
    return 0;
}