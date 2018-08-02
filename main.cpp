#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{  
	vector< int > line(9,1);
	vector <int>::iterator it =line.begin();
	*it =100;
	it++;
	*it=1000;
	vector<int>::iterator d=line.begin();
	d=d+line.size()/2;
	*d=108;

	for(vector<int>::size_type a=0; a!=line.size();a++)
		cout<< line[a]<<endl;
	for(vector<int>::iterator i=line.begin() ;i!=line.end();i++)
		cout<< *i<<endl;
	system("pause");
	return 0;
}