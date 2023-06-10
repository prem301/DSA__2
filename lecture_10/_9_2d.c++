// transpose of array (right  approach )
#include<iostream>
using namespace std;

void trans(int arr[3][3] , int row , int col , int transpose[3][3]){
    for (int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
              transpose[i][j] = arr[j][i] ;       }
    }
}

void printarray(int arr[3][3] , int row , int col , int transpose[3][3] ){
    for (int i = 0 ; i<row ; i++){
        for (int j = 0 ; j < col ; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

 int arr[3][3] = { {1,2,3},
                    {4,5,6},
                   {7,8,9} };
 

 int row = 3;
 int col = 3;


 

 int transpose[3][3];
 trans(arr , row , col , transpose);

 cout << "printing transpose of array" << endl;
 printarray(arr , row , col , transpose);

return 0;
}
