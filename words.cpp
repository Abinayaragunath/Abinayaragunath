#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str[50];
    int count = 0, i;
    cout << "Enter a string: ";
    gets(cin, str);
    for(i=0; str[i]!= '\0'; i++){
        if(str[i] == ' ')
        count++;
    }
    cout << "no of wrords in the given string: "; << count+1;
    return 0;
}