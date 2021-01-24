#include <iostream>
#include <string>
#include "threadpool/threadpool.h"

using namespace std;

int multiply(int x, int y) {
    return x * y;
}

int main() {
    thread_pool pool(4);
    std::vector<std::future<int>> futures;

    for (const int &x : { 2, 4, 7, 13 }) {
        futures.push_back(pool.execute(multiply, x, 2));
    }

    for (auto &fut : futures) {
        std::cout << fut.get() << std::endl;
    }

    return 0;
}