#include<iostream>
#include <vector>   // here we include file of vector 
using namespace std;

int main(){

 // creat vector 

vector<int> arr;
cout << arr.size() << endl;   // starting size of vector is zero  
cout << arr.capacity() << endl;
                                
arr.push_back(5);         // 5 will get into the position of arr[0]
arr.push_back(6);             // 6 will get into the position of arr[1]

for(int i = 0 ; i < arr.size() ; i++){
    cout << arr[i] << " ";
}
cout << endl;

arr.pop_back();    // vector ke andar jo last wala element hai wo remove ho jayega 
    for(int i = 0 ; i < arr.size() ; i++){
    cout << arr[i] << " ";
}

return 0;
}