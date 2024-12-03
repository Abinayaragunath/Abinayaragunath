#include <iostream>
using namespace std;

int add(int n1, int n2){
    return n1+n2;
}

int add(int a1, int a2, int a3){
    return a1+ a2+ a3;
}

string add(const string&  strx, const string& stry){
    return strx + stry;
}

int main(){
    int n1, n2, a1, a2, a3;
    string strx, stry;

    cout << "enter two numbers: ";
    cin >> n1 >> n2;
    cout << "\n sum of two numbers: " << add(n1,n2);

    cout << "\nenter three numbers: ";
    cin >> a1 >> a2 >> a3;
    cout << "\n sum of three numbers: " << add(a1, a2, a3);

    cout << "\nenter two strings: ";
    cin >> strx >> stry;
    cout << "\n sum of two strings: " << add(strx,stry);

    return 0;
}
