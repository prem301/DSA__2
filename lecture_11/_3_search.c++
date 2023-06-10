#include<iostream>
#include<vector>
#include<algorithm>  // folder for builtin binary search 
using namespace std;
int main(){

vector<int>v{1,2,3,4,5,6};



if(binary_search(v.begin() , v.end() , 3)) {
    cout << "found" << endl;
}
else {
    cout << "not found " << endl;
}
 

return 0;
}
