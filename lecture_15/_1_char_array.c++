#include<iostream>
using namespace std;
int main(){
char name [10];
cout<< "enter your name" << endl;

cin >> name;

cout << " apka naam " << name << " hai " << endl;

name[0] = 'a';
name[1] = 'b';

cout << name[0] << name[1] << endl;

return 0;
}
