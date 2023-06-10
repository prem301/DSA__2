#include<iostream>
#include <vector>
using namespace std;

int main(){

vector < int >arr{1,2,3,4,5,6} ;
cout << arr.size() << endl;

for(int i = 0 ; i < arr.size() ; i++){
    cout << arr[i] << " ";
}
return 0;
}