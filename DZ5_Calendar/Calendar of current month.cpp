//Calendar for December 2017;
#include <iostream>
using namespace std;
void main() {
	int i, j;
	cout << "Calendar for December 2017"<<endl<<endl;
	cout << "M" << "\t" << "T" << "\t" << "W" << "\t" << "T" << "\t";
	cout << "F" << "\t" << "Sat" << "\t" << "San" << "\t";
	cout << endl;
	for (i = -3; i <= 25;) {
		if (i>0)
		cout << i <<"\t";
		else cout << " " << "\t";
		for (j = 1; j <= 6; j++) {
			if ((i+j)>0)
		cout << i+j << "\t";
			else cout << " " << "\t";
			
			}
		cout << endl;
		i=i+7;
	}
	cout << endl;
}
