#include <iostream>
#include <string>
using namespace std;




void towerOfHanoi(int n, char src, char dest, char helper);
int main() {
	towerOfHanoi(3, 'A', 'C', 'B');
	return 0;
}

void towerOfHanoi(int n, char src, char dest, char helper) {
	if (n==0)
	{
		return;  //base case
	}
	towerOfHanoi(n - 1, src, helper, dest);
	cout << "Move disk "<<n<<" from " << src << " to " << dest << endl;
	towerOfHanoi(n - 1, helper, dest, src);
}
