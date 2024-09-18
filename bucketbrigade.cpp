#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

	int bx, by, rx, ry, lx, ly;

	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);

	for(int y = 1; y <= 10; y++){
		for(int x = 1; x <= 10; x++){
			char a; cin >> a;
			if(a == 'B'){
				bx = x; by = y;
			}else if(a == 'R'){
				rx = x; ry = y;
			}else if(a == 'L'){
				lx = x; ly = y;
			}
		}
	}
	if((bx == rx) && (rx == lx)){
		if(((by < ry) && (ry < ly)) || ((ly < ry) && (ry < by))){
			cout << abs(by-ly) + 1;
		}else{
			cout << abs(by-ly) - 1;
		}
	}else if((by == ry) && (ry == ly)){
		if(((bx < rx) && (rx < lx)) || ((lx < rx) && (rx < bx))){
			cout << abs(bx-lx) + 1;
		}else{
			cout << abs(bx-lx) - 1;
		}
	}else{
		cout << abs(bx-lx) + abs(by-ly) - 1;
	}
	 


}
