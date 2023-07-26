#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string p = "";
    cin>>p;
    transform(p.begin(), p.end(), p.begin(), ::tolower);
    for(char ch: p){
        if (ch!='a'&& ch!='e' && ch!='i' && ch!='o'&& ch!='u')
        {
            cout<<"."<<ch;
        }
        
    }

    return 0;
}