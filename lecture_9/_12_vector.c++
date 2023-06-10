//  pair sum problem by addiing four element present inside vector  


#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>arr{10,20,30,40,60,70};
int sum = 80;

for(int i = 0 ; i < arr.size() ; i++ ){
    for(int j = i + 1 ; j<arr.size() ; j++){
        for(int k = j + 1 ; k < arr.size() ; k++){
            for(int l = 0 ; l < arr.size() ; l++){
            if( arr[i] + arr[j] + arr[k] + arr[l]  == sum){
                cout << " pair is " << arr[i] << "," << arr[j] << "," << arr[k] << "," << arr[l] << endl;
            }

        }
    }
}

} 

return 0;
}