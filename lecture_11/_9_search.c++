// total number of occurance 

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

vector<int>v{1,3,4,4,4,4,6,7};
int target = 4;

 int index_of_first_occ = firstocc(v , target);

 cout << "target found at " << index_of_first_occ << " index" << endl;

int index_of_last_occ = lastocc(v , target);

cout << "target found at index  " << index_of_last_occ << endl; 
 

int number_of_occurance =  (index_of_last_occ -  index_of_first_occ ) +1;

cout << "number of occurance " << number_of_occurance << endl;


return 0;
}
