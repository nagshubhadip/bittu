#include<iostream>
using namespace std;
int c = 0;
int power3(int x, int n) {
if(n==0)
return 1;
else if(n % 2 ==0) {
c+=2;
return power3(x,n/2)*power3(x,n/2);
}
else if(n % 2 != 0) {
c+=2;
return x * power3(x, n/2) * power3(x, n/2);
}
}
int main() {

int x, n;

cout << "Enter x & n: ";

cin >> x >> n;


cout << "\npower3 function: " << power3(x, n)<<"   "<<c;

return 0;

}
