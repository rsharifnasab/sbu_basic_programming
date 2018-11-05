#include <iostream>
using namespace std;
int main()
{
    int a = 20, b = 24, c = 30;
    if (a > b && ++b == 25) {
        c++;
        cout << "first if was ran!\n";
    }
    if (a = 5) {
        b++;
        cout << "second if was ran!\n ";
    }
    if (a < b || ++b < 27) {
        ++a;
        cout << "third if was ran! \n";
    }
    printf("%d\t%d\t%d\n",a ,b ,++c);
    return 0;
}
