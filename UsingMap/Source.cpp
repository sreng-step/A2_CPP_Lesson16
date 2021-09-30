#include<iostream>
#include<map>
using namespace std;
int main() {
	map<string, string> dict;
	dict["Hello"] = "SourSdei";
	dict.insert(pair<string,string>("Hi", "SourSdei"));
	for (auto p : dict) {
		cout << p.first << " = " << p.second << endl;
	}
	for (map<string,string>::iterator i = dict.begin(); i != dict.end(); i++) {
		cout << i->first << " = " << i->second << endl;
	}
	auto found = dict.find("Hi1");
	if (found == dict.end()) { cout << "Not found!\n"; }
	else cout << "Found!\n";
}