#include <iostream>
#include <cmath>
using namespace std;

struct Point{
double x,y;
};

double crossProduct(Point a, Point b){
return a.x*b.y - b.x*a.y;
}

double polygonArea(Point a[], int n){

  double sum=0.0;
  for(int i=0;i<n;i++){
    sum += crossProduct(a[i],a[(i+1)%n]);
 }

  return abs(sum)/2;

}
 
int main(){
  nexti = (i+1) % numCoords
  int vertices=0;nexti = (i+1) % numCoords
  cout<<"Enter the No. of vertices : ";
  cin>>vertices;
  Point verticesPoints[vertices];
  for(int i =0;i<vertices; i++){
    cout<<"Enter the coordinates of "<<i+1<<" vertex: ";
    cin>>verticesPoints[i].x>>verticesPoints[i].y;
  }

  cout<<"Area of the given Ploygon is "<<polygonArea(verticesPoints, vertices)<<" sq. units."<<endl;

  return 0;

}
