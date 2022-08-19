
#include<iostream>

using namespace std;

void copy_integers(int old_array[],int new_array[],int length);

int main() {
    int a[5] ={1,3,5,7,9}; 
    int b[5];
    int n =5;
    copy_integers(a, b, n);
    for ( int i =0; i < n; i++){
        cout<< b[i] <<" ";
    }

    return 0;
}