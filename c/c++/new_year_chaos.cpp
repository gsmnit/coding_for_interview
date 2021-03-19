#include<iostream>
#include<cmath>

using namespace std;

void minBribe(int *arr){
    bool chaotic = false;
    int bribes = 0;
    int n = sizeof(arr);
    for(int i=0; i<n; i++){
        int x =arr[i] -i-1;
        if(x > 2){
            chaotic = true;
            break;
        }

        for( int j=0; j<i; j++){
            if (arr[j] > arr[i]){
               bribes++;
        }
            }
                

    }
    
    cout << bribes << endl;

}


int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {1,2,3,4,5,6,7,8};
    minBribe(arr);
    return 0;
}

/*
def minimumBribes(q):
    bribes = 0
    n = len(q)
    for i in range(n):
        
        if q[i] -(i+1)> 2:
            print("Too chaotic")
            return
        
        for j in range(i):
            if q[j] > q[i] : bribes += 1
       
    print(bribes)
*/
