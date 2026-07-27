#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of buildings: ";
    cin >> n;

    vector<int> height(n);

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int leftmax = 0, rightmax = 0;
    int maxheight = height[0], index = 0;
    int water = 0;

    // Find maximum height building
    for (int i = 1; i < n; i++) {
        if (height[i] > maxheight) {
            maxheight = height[i];
            index = i;
        }
    }

    // Left part
    for (int i = 0; i < index; i++) {
        if (leftmax > height[i])
            water += leftmax - height[i];
        else
            leftmax = height[i];
    }

    // Right part
    for (int i = n - 1; i > index; i--) {
        if (rightmax > height[i])
            water += rightmax - height[i];
        else
            rightmax = height[i];
    }

    cout << "Trapped Water = " << water << endl;

    return 0;
}