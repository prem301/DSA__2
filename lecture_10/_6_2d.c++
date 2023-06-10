// finding maximum number present in 2d array

#include<iostream>
using namespace std;


int getmax(int arr[3][3] , int row , int col){    
    int max = -1;
 for (int i = 0 ; i < row ; i++){
    for (int j = 0 ; j < col ; j++){
        if(arr[i][j] > max){
            max =  arr[i][j];
        }
    }
 }
  return max;
}


int main(){
 int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

 int row = 3;
 int col = 3;

  cout << getmax(arr , row , col);
 
 
return 0;
}
 