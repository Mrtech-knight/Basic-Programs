// to find the centroid of a triangle ..
#include<iostream>
using namespace std; 
int main() { 
     int A,B,C,a,b,c;
     float xc,yc;
     cout << " enter the coordinates of the triangel \n";
     cin >> A >> a >> B >> b >> C >> c;
     xc=(A+B+C)/3;
     yc=(a+b+c)/3;
     cout << "the coordinates of centroid is ("<< xc << "," << yc << ")"<< endl;
     return 0;
}
