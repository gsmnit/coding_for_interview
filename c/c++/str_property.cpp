#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{    string str1 = "praising";
     string char1 = str1.substr(1);
     cout << char1 << endl;

     string substr1 = str1.substr(1,5);
     cout << substr1 << endl;

     cout << str1[0] << endl;

    return 0;

}
