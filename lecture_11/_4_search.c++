#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int arr[] = {1,2,3,4,5,6,7};
int size = 7;

if(binary_search(arr , arr + size , 7)){
    cout << "find" << endl;
}
else {
    cout << "not found" << endl;
}
return 0;
}
