#include<string>
#include<iostream>
using namespace std;
void insideOut(const string& s)
{
	string res,temp;
	int l = s.length();
	if(l%2 == 0 && l>=2)
	{
		int mid = l/2;
		res = s.substr(0,mid-1)+s.substr(mid+1,mid-1);
		temp = s[mid];
		res.insert(0,temp);
		res.push_back(s[mid-1]);
		cout<<res;	
	}
	else if(l%2 == 1 && l>=3)
	{
		int mid = l/2;
		res = s.substr(0,mid-1)+s.substr(mid+2,mid-1);
		cout<<res<<endl;
		temp = s[mid+1];
		res.insert(0,temp);
		res.push_back(s[mid-1]);
		cout<<res;
	}
}
int main()
{
insideOut("cat");
return 0;
}
