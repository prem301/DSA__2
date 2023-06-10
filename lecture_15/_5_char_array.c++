
// predefine function to find length of a charcacter string 


#include<iostream>
#include<string.h>  // to use strlen() function we have to use this folder 
using namespace std;
int main(){

char name[100];

cout << "write something to get its length "<< endl;
cin >> name;

cout << "length is :" << strlen(name)<< endl;

return 0;
}
