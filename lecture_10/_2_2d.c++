// taking input from the users 

#include<iostream>
using namespace std;
int main(){
// taking input row wise
int arr[3][3];

int rows = 3;
int cols = 3;

cout <<  "enter elements in 2 dimension array" << endl;
for(int i = 0 ; i < rows ; i++){
    for (int j = 0 ; j <cols ; j++){
        cin >> arr[i][j] ;
    }
}

cout << "printing element " << endl;
for(int i = 0 ; i < rows ; i++){
    for (int j = 0 ; j <cols ; j++){
        cout << arr[i][j] << " " ;
    }
    cout << endl;
}

// taking input column wise  

// cout <<  "enter elements in 2 dimension array" << endl;
// for(int i = 0 ; i < rows ; i++){
//     for (int j = 0 ; j <cols ; j++){
//         cin >> arr[i][j] ;
//     }
// }

cout << "printing element " << endl;
for(int i = 0 ; i < rows ; i++ ){
    for (int j = 0 ; j <cols ; j++){
        cout << arr[j][i] << " " ;
    }
    cout << endl;
}


return 0;

}   


