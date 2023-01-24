#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0,n;
    cout << "enter a value :- ";
    cin >> n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout << "value of sum is " << sum;
}