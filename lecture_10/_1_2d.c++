#include<iostream>
using namespace std;
int main(){
// initialization
int arr[3][3] = { {1,2,3} , {4,5,6} ,{2,4,8}};

cout << arr[2][0] << endl;
cout << arr[2][2] << endl;

// row wise print 
cout << "row print " << endl;
for(int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
         cout << arr[i][j] << " ";
    }
    cout << endl;
}

// column wise print 
cout << "column print" << endl;
for(int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
         cout << arr[j][i] << " ";
    }
    cout << endl;
}
return 0;

}
