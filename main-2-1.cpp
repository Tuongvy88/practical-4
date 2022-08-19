
#include<iostream>

using namespace std;

void multiples_of_seven(int *nums,int length);

int main() {
    int a[5] = {2, 34, 8, 7, 1};
    int *ptr = a;
    int n =5;   
    multiples_of_seven(ptr,n);
    return 0;
}