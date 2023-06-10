 // find uniqe element  [ 1,1,2,3,3]
#include<iostream>
#include <vector>
using namespace std;


int findunique(vector<int>arr){
    int ans = 0;
    for (int i = 0 ; i<arr.size() ; i++){
        ans = ans ^ arr[i];

    }
    return ans;
}
int main(){
    

int n;
cout << "enter the size of array" << endl;
cin >> n;

vector <int> arr(n);

for (int i = 0 ; i<arr.size() ; i++){
    cin >> arr[i];
}

int uniquelement = findunique(arr);

cout << "unique element is :" <<  uniquelement << endl;


return 0;
} 









// enter the size of array
// 5
// 1
// 1
// 2
// 3
// 3
// unique element is :2