#include<iostream>
using namespace std;
int main()
{
int m = 10, n = 5;
int *ptr_m, *ptr_n;
 ptr_m = &m;
 ptr_n = &n;

*ptr_m = *ptr_m + *ptr_n;
*ptr_n = *ptr_m - *ptr_n;
 cout << m <<endl;
 cout<< *ptr_m <<endl;
 cout<< n<<endl;
 cout << *ptr_n<<endl;

}

