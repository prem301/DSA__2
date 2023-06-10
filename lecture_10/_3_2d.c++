// question on row wise sum print 

#include<iostream>
using namespace std;


void row_sum(int arr[3][3] , int row , int col){
    for(int i = 0 ; i<row ; i++){
       int sum = 0;
    for(int j = 0 ; j< col ; j++){
        sum = sum + arr[i][j];
    }
    cout << sum;
    cout << endl;
  }  
}    


 int main(){
int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

 int row = 3;
 int col = 3;
 int sum = 0 ;

for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j< col ; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
    
}

row_sum(arr , row , col);

return 0;

}                          