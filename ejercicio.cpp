#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b;
    int *da=&a, *db=&b;
    scanf("%d", &a);
    int arr[a];
    for (int i=*da-1; i>=0; i++) {
        scanf("%d", &b);
        arr[i]=b;
    }
    for (int i = 0; i <*da; i++)
    {
        printf("[%d] ",arr[i]);
    }
    return 0;
}
