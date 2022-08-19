
#include <iostream>
#include<string.h>
using namespace std;
void string_2d_copy(std::string first[][2], std::string second[][2], int n);
int main()
{
string array1[3][2] = { {"1" , "1"} ,{"2" ,"2"} ,{"3" ,"3"} };
string array2[3][2];
int n=3;
string_2d_copy(array1, array2, n) ;
 for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
            cout<<array2[i][j]<<" ";

        }
        cout<<endl;
 }
        return 0;
}