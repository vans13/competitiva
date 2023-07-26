#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int v[a];
    for (int i = 0; i < a; i++){
        cin>>v[i];
    }
    int cont=0;
    b--;
    if(v[b])cont++;
    for (int i = 1; i <a ; i++){
        int der,izq;
        der=b+i;
        izq=b-i;
        if (izq>=0||der<a){
            if(izq>=0&&der<a){
                if (v[izq]&&v[der])cont+=2;                
            }else if (izq>=0){
                if(v[izq])cont++;
            }else if(der<a){
                if(v[der])cont++;
            }
        }
    }
    cout<<cont<<endl;   
}