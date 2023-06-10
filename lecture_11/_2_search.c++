#include<iostream>


using namespace std;

int binary_search(int arr[] , int size , int target ){
    int s_index = 0;
    int e_index = size - 1;
    int mid_index = s_index + (e_index-s_index )/ 2;
     
     
    

    while (s_index <= e_index){
      
      int midelement = arr[mid_index];
        
      if (  midelement == target ){
           return mid_index;
      }
      if (target < midelement ) {
         e_index = mid_index - 1;
      }
      else {
        s_index = mid_index + 1;
      }
      
       mid_index = s_index + (e_index-s_index )/ 2;

    }
    // elemnt not found 
       return -1;
}

int main(){

  int arr[] = {2,4,6,8,10,12,16};
  int size = 7;
  int target = 6;

  int index_of_target = binary_search(arr , size ,target);

  if(index_of_target == -1){
    cout << "target not found" << endl;
  }
  else {
    cout << " target found at " << index_of_target<< " index " << endl;
  }

return 0;
}
