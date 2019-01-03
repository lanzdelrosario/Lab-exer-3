#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//4.
int main() {
	char x;
	char y;
	cout << "Enter first character: ";
	cin >> x;
	cout << "Enter last character: ";
	cin >> y;
	
	int fi = int(x);
	int la = int(y);
	
	if (fi > la) {
		int temp = la;
		la = fi;
		fi = temp;
		for(int i = fi; i <= la; i++){
			char hi = i;
			cout << hi;
		}
		
	} else {
		for (int i = fi; i <= la; i++){
			char hi = i;
			cout << hi;
		}
	}
	return 0;
}
