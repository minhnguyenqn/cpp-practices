#include <iostream>
#include <vector>
using namespace std;

vector<int> getDamages(const vector<int>& H) {
    vector<int> D(H.size(), 1);
    int i=0;
    while (i<H.size()){
    for (int j=i+1; j<H.size(); j++){
        if (H[j]<H[i]) D[i]++;
    }
    i++;
}
    return D;
}

int main() {
    vector<int> H = {34, 57, 70, 19, 48, 2, 94, 7, 63, 75};
    vector<int> D = getDamages(H);

    for (int x : D)
        cout << x << " ";

    return 0;
}