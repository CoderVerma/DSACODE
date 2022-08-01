// Given an array of numbers,
// program to arrange the numbers
// to form the largest number
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

// A comparison function which
// is used by sort() in
// printLargest()
bool myCompare(int x, int y)
{
	int xy = x, yx = y;

	// Count length of x and y
	int countx = 0, county = 0;
	// Count length of X
	while (x > 0)
	{
		countx++;
		x /= 10;
	}

	// Count length of Y
	while (y > 0)
	{
		county++;
		y /= 10;
	}

	x = xy;
	y = yx;

	while (countx--)
		yx *= 10;

	while (county--)
		xy *= 10;

	// Append x to y
	yx += x;

	// Append y to x
	xy += y;

	return xy > yx;
}

// The main function that prints
// the arrangement with the
// largest value. The function
// accepts a vector of strings
void printLargest(vector<ll> arr)
{

	// Sort the numbers using
	// library sort function. The
	// function uses our comparison
	// function myCompare() to
	// compare two strings. See
	// http://www.cplusplus.com/reference/
	// algorithm/sort/
	// for details
	sort(arr.begin(), arr.end(), myCompare);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
}

// Driver code
int main()
{
	vector<ll> arr;

	// Output should be 6054854654
	arr.push_back(54);
	arr.push_back(546);
	arr.push_back(548);
	arr.push_back(60);
	printLargest(arr);

	return 0;
}
// this code is contributed by prophet1999
