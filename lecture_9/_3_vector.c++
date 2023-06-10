#include<iostream>
#include <vector>
using namespace std;

int main(){

int n;
cout << " enter the value of n " << endl;
cin >> n;

vector<int>brr(n , 1);

cout << "size of b "<< brr.size() << endl;   
cout << "capacity of b "<<brr.capacity() << endl;

for(int i = 0 ; i < brr.size() ; i++){
    cout << brr[i] << " ";
}


return 0;
}