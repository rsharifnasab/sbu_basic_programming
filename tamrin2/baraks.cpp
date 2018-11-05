#include <iostream>
using namespace std;
int main()
{
  int input;
  cerr << "pls just enter a valid 3 digit number!" << endl;
  cin >> input;
  string str = to_string(input);
  char tmp_char;
  tmp_char = str[0];
  str[0] = str[2];
  str[2] = tmp_char;
  int out = stoi(str);
  cout << out << endl;
  //cout << str;

}
