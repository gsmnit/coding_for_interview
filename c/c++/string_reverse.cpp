#include <iostream>
#include <string> // just for precaution in vscode c++ microdoft provide as all the method of <string> in <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "nubian ibex";
    //cout << "give me the string";
    //cin >> str ;
    
    int len = str.length();
    int n = len-1;


    for(int i=0; i< len/2; i++){
        
        char tamp = str[n];
        str[n--] = str[i];
        str[i] = tamp;

    }


    cout << str << endl;


    return 0;
}
