#include<iostream>
#include<string.h>
using namespace std;

int main(){

char sentence[] = "my name is prem";

for (int i = 0 ; i < strlen(sentence) ; i++){
    if( sentence[i] == ' '){
        sentence[i] = '@';
    }
}
cout << sentence <<endl;

return 0;  
}
 