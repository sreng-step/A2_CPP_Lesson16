#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v1(10, 9);
	v1[2] = 78;
	for (int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
	cout << "\n-------------\n";
	for (int a : v1) cout << a << " ";
	cout << "\n-------------\n";
	vector<int> v2(10, 35);
	if (v1 > v2) {
		cout << "v1 is larger than v2.\n";
	}
	//v1.assign(20, 12);//resize vector
	v1.assign(v2.begin(), v2.begin()+5);//resize vector to new size with new value
	v1[1] = 5;
	v1.at(2) = 9;
	for (int a : v1) cout << a << " ";
	cout << "\n-------------\n";
	cout << v1.back()<<endl;
	cout << "Max element can be placed before expanding: " << v1.capacity() << endl;
	v1.insert(v1.begin() + 2, 3, 8);
	v1.insert(v1.begin() + 2, 3, 15);
	for (int a : v1) cout << a << " ";
	cout << "\n-------------\n";
	cout << "Max element can be placed before expanding: " << v1.capacity() << endl;
	v1.pop_back();
	for (int a : v1) cout << a << " ";
	cout << "\n-------------\n";
	cout << "Max element can be placed before expanding: " << v1.capacity() << endl;
	v1.pop_back();
	for (int a : v1) cout << a << " ";
	cout << "\n-------------\n";
	cout << "Max element can be placed before expanding: " << v1.capacity() << endl;
}