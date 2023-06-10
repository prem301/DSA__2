#include<iostream>
using namespace std;

int main(){
    
int arr[4];

cout << "enter the value of arrays " << endl;
for (int i = 0 ; i < 4 ; i++){
    cin >> arr[i];
}
cout << " after multipling each element from array by 2" << endl;
for (int i = 0 ; i < 4 ; i++){
    cout << arr[i] *2 << " ";
}
return 0;
}