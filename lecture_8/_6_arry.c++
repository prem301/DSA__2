#include<iostream>
using namespace std;

int main(){

 int arr[] = {1,2,3,4,5,6,7,8,9} ; 
 int size = 9;

 int key  ;
 cout << "enter the key " << endl;
 cin >> key;

 bool found ;

 for(int i = 0 ; i< size ; i++){
    if (arr[i] == key){
        found = true ;
    }
 }
 if(found){
    cout << "present" << endl;
 }
 else {
    cout << "not present"<< endl;
 
}
return 0;
}