#include<iostream>
using namespace std;
int main()
{
    int a,b;
     cout << " Enter the value of A : ";
     cin >> a;
     cout << " Enter the value of B : " ;
     cin >> b;
       if(a>b) {
         cout << "A is Greater then B" << '\n' ;
       }
       else if (b>a) {
         cout << "B is greater than A" << '\n';
       } 
       else if (a==b){
         cout << "you entered same value" ;
       }
       else {
         cout << "you entered 0 value" << '\n';
       }
    return 0;
}