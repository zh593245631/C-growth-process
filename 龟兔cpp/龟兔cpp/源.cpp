#include<iostream>  
#include<Windows.h>
using namespace std;

int main(){
	int v1, v2, t, s, l;
	cin >> v1 >> v2 >> t >> s >> l;
	int xr = 0, xt = 0, tr = 0, tt = 0;
	while (xr<l && xt<l){
		if (xr - xt >= t){
			tt += s;
			xt = tt*v2;
			xr = tr*v1;
		}
		else{
			tr++;
			tt++;
			xr = v1*tr;
			xt = v2*tt;
		}
	}

	if (xr == xt){
		cout << "D" << endl;
		cout << tt << endl;
	}
	else if (xr>xt){
		cout << "R" << endl;
		cout << tt << endl;
	}
	else{
		cout << "T" << endl;
		cout << l / v2 << endl;
	}
	system("pause");
	return 0;
}