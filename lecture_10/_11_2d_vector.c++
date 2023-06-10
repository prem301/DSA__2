 // printing element of nested vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
 
 vector<vector<int> >arr;

 vector<int> a  = {1,2,3};
 vector<int> b  = {4,5,6};       // aise likho 
 vector<int> c =  {7,8,9};

 //vector<int> a{1,2,3};    
 //vector<int> b{4,5,6};        // ya aise likho baat same hai 
 //vector<int> c{7,8,9};

 
 arr.push_back(a);                                                       
 arr.push_back(b);                                                                               
 arr.push_back(c);

 for (int i = 0 ; i < arr.size() ;i++){
    for (int j = 0 ; j<arr[i].size() ;  j++){
        cout << arr[i][j] << " ";
    }
        cout << endl;
 }
 cout << arr.size() << endl ;
 cout << arr[0].size() << endl ;

   
return 0;
}
