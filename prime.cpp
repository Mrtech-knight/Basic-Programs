#include<iostream>
using namespace std;
int main(){
    int i=2,n;
    cin >> n;
    while(i<n){
        if(n%1==0){
            cout << "Not Prime "<< i <<endl;
        }
        else{
            cout << "prime for "<< i << endl;
        }
        i++;
    }
}