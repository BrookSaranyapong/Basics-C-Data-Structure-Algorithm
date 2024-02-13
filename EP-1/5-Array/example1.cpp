#include <iostream>

using namespace std;

int main()
{
    int ages[2];
    int sumAge;

    cout << "กรุณาพิมพ์อายุคนที่ 1 เข้ามา: ";
    cin >> ages[0];
    cout << "กรุณาพิมพ์อายุคนที่ 2 เข้ามา: ";
    cin >> ages[1];
    sumAge = ages[0] + ages[1];
    cout << "ผลรวมอายุ 2 คน = " << sumAge << " ปี";

    return 0;
}