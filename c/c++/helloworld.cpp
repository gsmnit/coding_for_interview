#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /*  if we don't want to use or inclue "using namespace std" in our code
    std::cout << "Hello world";
    std::cout << "!" << "\n";
    std:: cout << "learn" << std:: endl;
    */
   
   int y = 555; 
   short y1 = 40;
   long y2 = 20;
   long long y3  = 30;

   float z = 0.0001;

   string x = "greeting";
   cout << x.length() << endl;
   cout << x.find("greet") << endl;
   cout << x.find("g") << endl;
   cout << x.substr(2)<< endl;
   cout << x.substr(1,3) << endl;
   

   bool are_you_smart = true;
   cout << are_you_smart << endl ;


   cout << pow(2,3)<< endl;
   cout << sqrt(144) << endl;
   cout << round(0.5) << endl;
   cout << "stream insertion operator\n" << "push\n" << "push\n" << "push\n" << "data\n" << "console\n" << endl << "\n" << "end";
   

    return 0;
}
