// maximum number in array

#include<iostream>
using namespace std;

int main(){
    int arr[] = { 1,2,5,6,7,9,100};
    int maxnum = -1 ;
    int size = 7;

    for (int i = 0 ; i < size ; i++){
        if (arr[i] > maxnum){
            maxnum = arr[i];
        }       
    }
      cout << maxnum << endl;

return 0;
} 