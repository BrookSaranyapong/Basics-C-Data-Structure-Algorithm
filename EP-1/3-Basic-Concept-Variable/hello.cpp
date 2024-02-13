#include<iostream>

using namespace std;

int main() {
    int age; 
    cout << "กรุณาพิมพ์อายุเข้ามา: ";
    cin >> age;
    cout << "คุณอายุ \n = " << age << endl; // การขึ้นบรรทัดใหม่

    char favorite;
    cout << "จงบอกอักษรที่คุณชอบ:";
    cin >> favorite;
    cout << "ตัวอักษรที่คุณชอบ = " << favorite;

    return 0;
}