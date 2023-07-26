#include <iostream>
using namespace std;

int main(){
    int a; cin>>a;
    int b; cin>>b;
    int cont=0;
    int va[a];
    for (int i = 0; i < a; i++){
        cin>>va[i];
    }
    int vb[b];
    for (int i = 0; i < b; i++){
        cin>>vb[i];
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if (va[i]==vb[j]){
                if (cont==0){
                    cout<<va[i];
                }else{
                    cout<<" "<<va[i];
                }
                cont++;
            } 
        }
    }
}