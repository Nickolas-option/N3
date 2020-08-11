#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 float x1, y1, x2, y2, x3, y3;
 cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 float D12,D23,D31;
 D12=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
 D23=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
 D31=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
 if ((D12 < (D23+D31)) && (D23 < (D12+D31)) && (D31 < (D12+D23)))
 {
  int p((D12+D23+D31)/2);
  cout << (sqrt(p*(p-D12)*(p-D23)*(p-D31))); 
 }
 else 
 {
   cout << "Not a triangle";
 }
}