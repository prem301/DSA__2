// count zero's and one's in array

#include<iostream>
using namespace std;

int main(){
    
int arr[] = {0,1,1,1,2,0};
int size = 6;

int numzero = 0;
int numone = 0;

for (int i = 0 ; i < size ; i++){
    if (arr[i] == 0){
        numzero ++ ;
    }
    if (arr[i] == 1){
        numone ++ ;
    }
}

cout << " number of zero in array " << numzero << endl;
cout << " number of one in array " << numone << endl;

return 0;
}