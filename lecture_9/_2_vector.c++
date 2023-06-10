#include<iostream>
#include <vector>
using namespace std;

int main(){

vector<int>brr(10 , 1);

cout << "size of b "<< brr.size() << endl;   
cout << "capacity of b "<<brr.capacity() << endl;

for(int i = 0 ; i < brr.size() ; i++){
    cout << brr[i] << " ";
}


return 0;
}