// find the first occurance of the element

#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int>v , int target){
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start ) / 2;
    int ans = -1;
    

 while (start <= end){
    int mid_element = v[mid];
    if(mid_element == target){
        ans = mid;
        end  = mid - 1;
    }
    else if (target <mid_element){
        end = mid - 1;
    }
    else {
        start = mid + 1;
    }
    
    mid = start + (end - start ) / 2;
 }
 return ans;
 
}

int main(){

vector<int>v{1,3,4,4,4,4,6,7};
int target = 4;

 int index_of_first_occ = firstocc(v , target);

 cout << "target found at " << index_of_first_occ << " index" << endl;



return 0;
}
