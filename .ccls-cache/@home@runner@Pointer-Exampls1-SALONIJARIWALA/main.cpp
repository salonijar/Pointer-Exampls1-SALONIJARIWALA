#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(void){
char *pa, *pb, i, temp;
char a[1000];
  cout<<"Input string: ";
  cin>>a;
  int SIZE = strlen(a);
  
pa = &a[0]; //pa = a;
cout<< "Original: ";
for (int i=0; i < SIZE -1; i++, pa++)
{
  cout<<setw(3)<<*pa<<" ";
  //count<<pa<<endl;
}cout << setw(3) << *pa << endl;
cout<<endl;
pa = &a[0]; pb = &a[SIZE - 1];
cout<< "Reverse: ";
for (int i=0; i < SIZE /2; i++)
{
  temp = *pa;
  *pa = *pb;
  *pb = temp;
  pa++; pb--;
}
pa = &a[0];
for (int i=0; i < SIZE -1; i++, pa++)
{
  cout<<setw(3)<<*pa<<" ";
  //count<<pa<<endl;
}cout << setw(3) << *pa << endl;
return 0;
}