#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "กรุณากรอกคะแนน: ";
    cin >> score;

    if (score >= 80 && score <= 100)
    {
        cout << "เกรด A" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "เกรด B" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "เกรด C" << endl;
    }
    else if (score >= 50 && score < 60)
    {
        cout << "เกรด D" << endl;
    }
    else if (score >= 0 && score < 50)
    {
        cout << "เกรด F" << endl;
    }
    else
    {
        cout << "คะแนนไม่ถูกต้อง" << endl;
    }
}