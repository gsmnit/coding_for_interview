#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int x = 45;
    int y = 10;
     float z = float(x)/float(y);
    cout << z << endl;

    string cast_str = to_string(x) + to_string(y);
    
    cout << cast_str << endl;
    return 0;
}
