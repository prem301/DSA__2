#include<iostream>
#include<string.h>
using namespace std; 

void reverse(char name[]) {
    int start = 0;
    int n = strlen(name);
    int end =  n - 1;

    while(start <= end ) {
        swap(name[start] , name[end]);
        start++;
        end--;
    }
    
}
int main(){

char name[100] ;
cout << "enter name " << endl;
cin >> name;

cout << " initially  " << name << endl;

reverse(name);
cout << "  after reverse process  " << name << endl;
return 0;
}