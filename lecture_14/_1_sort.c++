// selection sort (first type of sorting algorithm)
#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> arr{5,4,3,2,1};
// selection sort 
int n = arr.size();
for(int i = 0; i<n - 1 ; i++){
    int minindex = i ;
    for(int j = i + 1; j < n ; j++){
        if(arr[j] < arr[minindex]){
            minindex = j;
        }
    }
    swap(arr[i] , arr[minindex] );
}

for(int i = 0; i<n ; i++){
    cout << arr[i] << " ";
}
//cout << endl;     

return 0;
}
