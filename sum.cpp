#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;    // Reading input from STDIN

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
<iframe width="853" height="480" src="https://www.youtube.com/embed/T_Wxrp-2DZQ" title="Floating Point Number Representation in IEEE 754 in Hindi | COA Lectures" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>