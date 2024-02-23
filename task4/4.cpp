#include<iostream>
using namespace std;

int main() {
	int x, start, end, cnt = 0;

	cin>>x;
	cin>>start>>end;
	cnt += (start <= x && x <= end);

	cin>>start>>end;
	cnt += (start <= x && x <= end);

	cin>>start>>end;
	cnt += (start <= x && x <= end);

	cout<<cnt<<"\n";

	return 0;
}

