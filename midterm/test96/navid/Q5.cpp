#include <iostream>
using namespace std;
int main()
{
    char a, b;
    cin >> a >> b;
    if (b < a)
    {
        char temp = a;
        a = b;
        b = temp;
    }
    do
    {
        cout << a;
        a++;
    } while (a <= b);
    return 0;
}