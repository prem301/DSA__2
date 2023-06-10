// predefine function for sorting 

#include<iostream>
#include<vector>
#include<algorithm> //  this file contain implimentation of sort algorithm
using namespace std;
int main(){
vector<int> arr{10,1,7,6,14,9};
int n = arr.size();

sort(arr.begin() , arr.end());

for(int i = 0; i<n ; i++){
    cout << arr[i] << " ";
}

return 0;
}
