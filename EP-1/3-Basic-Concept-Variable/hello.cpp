#include<iostream>

using namespace std;

int main() {
    int age; 
    cout << "กรุณาพิมพ์อายุเข้ามา: ";
    cin >> age;
    cout << "คุณอายุ = " << age << endl; // การขึ้นบรรทัดใหม่
    
    int newAge;
    cout << "กรุณาพิมพ์อายุอีกรอบ: ";
    cin >> newAge;
    age = newAge;
    cout << "คุณอายุ = " << age << endl;    
    return 0;
}