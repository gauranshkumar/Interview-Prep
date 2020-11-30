#include <iostream>
#include <cmath>
#define LEFT 1
#define RIGHT -1
#define ON_THE_LINE 0

using namespace std;

struct Point{
  double x,y;
};

double cross_product(Point a, Point b){
return a.x*b.y - b.x*a.y;
}

Point translate(Point a, Point b){

  Point result;
  result.x = a.x - b.x;
  result.y = a.y - b.y;

  return result;
}

void check_position(Point a, Point b, Point p){
p = translate(a, p);
b = translate(a, b);

double result = cross_product(b, p);

if(result>0){
cout<<"Point ("<<p.x<<p.y<<") is on the Left of Line"<<endl;
}
else if(result < 0){
cout<<"Point ("<<p.x<<p.y<<") is on the Right of Line"<<endl;
}
else{
cout<<"Point ("<<p.x<<p.y<<") is on the Line itself."<<endl;
}
}


int main(){

  Point a, b, p;
  cout<<"Enter First Vertice of Line : ";
  cin>>a.x>>a.y;
   cout<<"Enter Second Vertice of Line : ";
  cin>>b.x>>b.y;
 cout<<"Enter Point to Check : ";
  cin>>p.x>>p.y;

  check_position(a, b, p);

  return 0;



}


