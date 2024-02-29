#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(5);

    // Find method returns an iterator to the element if found, otherwise returns set::end()
    std::set<int>::iterator it = mySet.find(3);

    if (it != mySet.end()) {
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
