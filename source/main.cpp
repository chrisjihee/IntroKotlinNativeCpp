#include <iostream>
#include "libsample_api.h"

using namespace std;

int main() {
    auto sample = libsample_symbols()->kotlin.root.sample;

    cout << "Hello, World!" << endl;
    cout << sample.hello() << endl;
    cout << sample.hi("Jihee") << endl;

    int x = 2;
    cout << x << " + 1 = " << sample.plus1(x) << endl;

    return 0;
}
