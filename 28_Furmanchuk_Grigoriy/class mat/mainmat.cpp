#include <iostream>
#include "mathmatr.h"
using namespace std;




void main() {
	int n, m;
	cin >> n >> m;
	matrix x(n, m); // y(n, m), z(n, m);
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x(i,j);
		}
	}*/
	cin >> x;
	matrix x1(m,n);
	cin >> x1;
	matrix res = x * x1;
	 
	//int re = x.getel(1, 1);
	//x.setel(1, 1, 3);

	//cout << endl << x;
	//cout << x(1, 1);
	//cout << x << endl << endl << x1 << endl << endl << res;
	cout << endl << res;

}