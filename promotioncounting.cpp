#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int bronzebefore, bronze, silverbefore, silver, goldbefore, gold, platbefore, plat;

    cin >> bronzebefore >> bronze;
    cin >> silverbefore >> silver;
    cin >> goldbefore >> gold;
    cin >> platbefore >> plat;

    int goldtoplat = plat-platbefore;
    int silverToGold = gold - goldbefore + goldtoplat;
    int bronzeToSilver = silver - silverbefore + silverToGold;

    cout << bronzeToSilver << endl;
    cout << silverToGold << endl;
    cout << goldtoplat;
}