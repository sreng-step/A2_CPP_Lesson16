/*Fill a vector with a length of 10 with the squares of integers, 
and bring it to the output stream.
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
	vector<int> nums(10);
	for (int i = 0; i < 10; i++) {
		nums[i] = pow(i + 1, 2);
	}
	for (auto i = nums.begin(); i != nums.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}