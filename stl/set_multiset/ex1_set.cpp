#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> st;
	st.insert(30);
	st.insert(20);
	st.insert(20);
	st.insert(10);
	st.insert(50);
	st.insert(50);
	st.insert(40);
		
	//advance for loop
	for(auto i : st)
		cout << i <<" ";
	cout << endl;
	
	cout <<"--------------"<< endl;
	
	//using iterator pointer
	
	set<int>::iterator it;
	
	for(it=st.begin();it!=st.end();it++)
		cout << *it << endl;
	return 0;
}
