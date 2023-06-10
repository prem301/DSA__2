// transpose of array(easy approach )
 

 #include<iostream>
using namespace std;
int main(){
int arr[3][3] = { {1,2,3},
                    {4,5,6},
                   {7,8,9} };
 

 int row = 3;
 int col = 3;

 cout << " printing array" << endl;

 for(int i = 0 ; i<row ; i++){
    for (int j = 0 ; j< col ; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

cout << "printing transpose of array" << endl;

for(int i = 0 ; i<row ; i++){
    for (int j = 0 ; j< col ; j++){
        cout << arr[j][i] << " ";
    }
    cout << endl;
}

return 0;
}
 