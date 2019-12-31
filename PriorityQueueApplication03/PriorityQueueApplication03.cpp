#include <iostream>
#include <queue>
#include <deque>
#include <vector>
#include <functional>
using namespace std;

int main() {
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };

	priority_queue<int>  q1(a1, a1 + 10);
	priority_queue<int>  q2;
	//1. Correct - source and target stack are of the same type
	q1 = q2;
	cout << q1.size() << ":" << q2.size() << endl;

	priority_queue<int, deque <int> > q3;
	//2a. Incorrect - target and source queue are not of the same type - internal
	   // storage
	q3 = q2;
	priority_queue<int, vector <int>, greater <int> > q4;
	//2b. Incorrect - target and source queue are not using the same comparator
	q4 = q1;
	return 0;
}