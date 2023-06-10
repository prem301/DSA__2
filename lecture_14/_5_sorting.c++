// insertion sort 

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr{10,1,7,6,14,9} ;
int n = arr.size();

for(int round = 1 ; round < n; round++){
    // step A = fetch
    int val = arr[round];

    // step B = compare
    int j  ;
    for(j = round - 1 ; j>=0 ; j--){
        if(arr[j] > val) {
            //step c = shift
            arr[j+1] = arr[j];
        }
        else{
            // rukna hai
            break;
        }
    }
    // step D ; copy
     arr[j+1] = val;
}
 // printing 

 for(int i = 0 ; i< n ; i++){
    cout << arr[i] << " ";
 }
 cout << endl;


return 0;
}

