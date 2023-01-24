// sum of two number & also find the average ..
#include<iostream>
using namespace std; 
int main() { 
     int a,b;
     float sum,avg;
     cout << "enter two values : ";
     cin >> a >> b;
     sum=a+b;
     cout << "sum of a and b :- "<< sum << endl;
     avg=sum/2;
     cout << "average of a and b :- " << avg << endl;
     return 0;
}