// find minimum number present in array

#include<iostream>
using namespace std;

int main(){
    int arr[] = { 1,2,5,6,7,9,100};
    int minnum = 1000 ;
    int size = 7;

    for (int i = 0 ; i < size ; i++){
        if (arr[i] < minnum){
            minnum = arr[i];
        }       
    }
     cout << minnum << endl;
return 0;
}