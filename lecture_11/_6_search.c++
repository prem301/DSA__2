// finding last occurance


#include<iostream>
#include<vector>
using namespace std;

int lastocc(vector<int>arr , int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) /2 ;
    int ans = -1;

    while(start <= end){
        int midelement = arr[mid];
        if(midelement == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target < midelement){
            end = mid - 1;
        }
        else if(target > midelement) {
            start = mid + 1 ;
        }
        mid = start + (end - start) /2 ;

    }
    return ans;
}
int main(){

vector<int>arr{2,5,7,7,7,7,9,12};

int target = 7;

int index_of_last_occ = lastocc(arr , target);

cout << "target found at index  " << index_of_last_occ << endl; 
 

return 0;
}
