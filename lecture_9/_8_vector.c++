// intersection problem 

#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>arr{1,2,3,3,4,6,8};
   vector<int>brr{3,3,4,9,10};

   vector<int>ans;

   for(int i = 0 ; i < arr.size() ; i++ ){
    for(int j = 0 ; j < brr.size(); j++){
        if (arr[i] == brr[j]){

            brr[j] = -1;  // mark
           
            ans.push_back(arr[i]);
        }
    }
   }

   for(auto value : ans){
    cout << value << " " ;
   }
   
   

return 0;
}