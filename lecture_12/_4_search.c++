#include<iostream>
using namespace std;
bool binarysearch(int arr[5][4] , int row , int col , int target) {
int s = 0;
int e = (row * col ) - 1;
int mid = s + (e - s)/ 2 ;

while(s <= e) {
    int row_index = mid / col;
    int col_index = mid % col;
    int mid_element = arr[row_index][col_index] ;

  if(mid_element == target){
    return true;
  }  
  else if (mid_element< target){
   s = mid + 1;
  }
  else if (mid_element > target){
    e = mid - 1;
  }
  int mid = s + (e - s)/ 2 ;
}
return false;
}
int main(){
int arr[5][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12}, {13,14,15,16}, {17,18,19,20} } ;
 
int row = 5;
int col = 4;

int target = 10;

bool ans = binarysearch(arr,row , col , target);

if(ans) {
    cout << "found" << endl;
}
else{
    cout << "not found" << endl;
}

return 0;
}
 