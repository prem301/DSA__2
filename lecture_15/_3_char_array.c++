// function to print string with space 


#include<iostream>
#include<string.h>    // to use cin.getline() function we have to use this folder 
using namespace std;
int main(){
char arr[50];
//cin >> arr;

cin.getline(arr , 50);  

cout << arr;
return 0;
}
