// finding minimum number present in 2d array

#include<iostream>
#include<limits.h>
using namespace std;


int getmin(int arr[3][3] , int row , int col){    
    int min = INT_MAX;
 for (int i = 0 ; i < row ; i++){
    for (int j = 0 ; j < col ; j++){
        if(arr[i][j] < min){
            min =  arr[i][j];
        }
    }
 }
  return min;
}


int main(){
 int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

 int row = 3;
 int col = 3;

  cout << getmin(arr , row , col);
 
 
return 0;
}
 