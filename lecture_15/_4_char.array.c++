#include<iostream>
using namespace std;

int getlength(char name[]) {
    int length = 0;
    int i = 0;

    while (name[i] != '\0') {
        length++;
        i++;
    }

    return length;
}
int main(){

char name[100];
cin >> name;

cout << " length is : " << getlength(name) << endl;

return 0;
}

// something went wrong 