#include<iostream>
#include <vector>
#include<cmath>
using namespace std;

int index(const vector<int>& vector, int n) {
	return (n >= vector.size()) ? -1 : pow(vector[n], n);
}
int main() {
	vector<int> vec = { 1,2,3,4 };
	int n = 2;
	cout << index(vec, n) << endl;
	return 0;
}