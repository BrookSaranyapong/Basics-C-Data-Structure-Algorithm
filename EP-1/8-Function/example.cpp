#include <iostream>
#include <string>

using namespace std;

string greet()
{
    return "Hello Brook";
}

int main()
{

    string helloName = greet();
    cout << helloName;
    return 0;
}