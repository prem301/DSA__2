#include<iostream>
#include<vector>
using namespace std;

int findpivot(vector<int>arr){
    int s = 0;
    int e = arr.size() -1;
    int mid = s + (e - s) /2;
                                                                
    while(s <= e ){
     // special condition for 
        if( arr[mid + 1 ] < arr.size() && arr[mid] > arr[mid + 1]){
            return mid;
        }
        else if ( arr[mid - 1 ] >= 0 && arr[mid] < arr[mid - 1] ){
            return mid - 1 ;
        }
        else if (arr[s] < arr[mid]){
            s = mid + 1;
         }
        else if (arr[s] > arr[mid]){
             e = mid - 1;
        } 
         
         mid = s + (e - s) /2;
          
   }
}
int main(){

vector<int>arr{3,4,5,6,7,1,2};

int ans = findpivot(arr);

cout << "index of pivot is " << ans  << endl;
return 0;
}