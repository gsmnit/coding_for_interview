#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    string greeting = "welcome in the world of cpp";
    
    cout << greeting.length() << "\t"<< greeting.size() << endl;
    cout << greeting[1] << endl << greeting[5] << endl;

    string x = "hello ";
    //x[0] = "g";
    x += "india ";
    cout << x << endl;
      if( greeting == x){
          cout << "strings are equal" << endl;
      }
      else{
          cout << "strings are not equal" << endl;
      }

    
    cout << greeting.substr(1,5) << endl;
     int num =134566;

     // string y = x +  num   not valid in cppp
     string y = x + to_string(num);
     cout << y << endl;


    return 0;
}
