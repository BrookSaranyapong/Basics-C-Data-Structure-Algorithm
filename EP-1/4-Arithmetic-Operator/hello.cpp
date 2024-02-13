#include <iostream>

using namespace std;

int main()
{
    int age1;
    int age2;
    int sumAge;

    cout << "กรุณาพิมพ์อายุคนที่ 1 เข้ามา: ";
    cin >> age1;
    cout << "กรุณาพิมพ์อายุคนที่ 2 เข้ามา: ";
    cin >> age2;
    sumAge = (age1 + age2) * 2;
    cout << "อายุทั้งสองคนรวมกัน = " << sumAge << " ปี";

    return 0;
}