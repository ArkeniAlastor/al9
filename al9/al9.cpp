#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point() { x = y = 0; }
	Point(int a, int b) { x = a; b = y; }
	void Print()
	{
		cout << "X: " << x << "Y: " << y << endl;
	}
};

int main()
{
	vector<Point> arr;
	arr.push_back(Point(1,2));
	arr.push_back(Point(3,4));
	arr.push_back(Point(5,-6));
	arr.push_back(Point(-7,-8));
	arr.push_back(Point(-9, 10));

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;


}