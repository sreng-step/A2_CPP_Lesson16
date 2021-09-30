#include<iostream>
#include<map>
using namespace std;
int main() {
	//map<string, string> dict;
	multimap<int, string> nums;
	nums.insert(pair<int, string>(1, "One"));
	nums.insert(pair<int, string>(2, "Two"));
	nums.insert(pair<int, string>(3, "Three"));
	nums.insert(pair<int, string>(4, "Four"));
	nums.insert(pair<int, string>(5, "Five"));
	nums.insert(pair<int, string>(6, "Six"));
	nums.insert(pair<int, string>(7, "Seven"));
	nums.insert(pair<int, string>(8, "Eight"));
	nums.insert(pair<int, string>(9, "Nine"));

	cout << "In English 1 is " << nums.find(1)->second << endl;
	cout << "In English 2 is " << nums.find(2)->second << endl;
	nums.insert(pair<int, string>(8, "Eighteen"));//override value of existing element
	cout << "In English 8 is " << nums.find(8)->second << endl;
	nums.insert(nums.begin(), pair<int, string>(8, "Eight"));//not override if exists
	cout << "In English 8 is " << nums.find(8)->second << endl;
	for (auto i = nums.begin(); i != nums.end(); i++)
	{
		cout << i->first << ": " << i->second << endl;
	}
	cout << "Number 8 key, There are " << nums.count(8) << endl;
	for (auto i = nums.lower_bound(8); i != nums.upper_bound(8); i++) {
		cout << i->first << ": " << i->second << endl;
	}
}