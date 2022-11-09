/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x=1;
	cout<<&x;
	return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x= 1080;
	int *p;
	
	p= &x;
	cout<<x<<endl; //value os a variable
	cout<<p<<endl; //address of variable x
	cout<<*p; //value of pointer
}


