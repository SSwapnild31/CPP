#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> st;
	st.insert(50);
	st.insert(20);
	st.insert(10);
	st.insert(40);
	st.insert(30);
	st.insert(50);
	st.insert(10);
	
	for(int i : st)
		cout << i << endl;
	return 0;
}
