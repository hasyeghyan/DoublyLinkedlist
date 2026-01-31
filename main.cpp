#include "DLL.hpp"

int main() {
    try {
        DLL<int> list1 = {10, 20, 30};
        DLL<int> list2 = {5, 15, 25, 35, 45};

        std::cout << "Merging list1 {10,20,30} and list2 {5,15,25,35,45}..." << std::endl;
        list1.merge(list2);

        std::cout << "Result: ";
        auto* curr = list1.get_head();
        while (curr) {
            std::cout << curr->val << " ";
            curr = curr->next;
        }
        std::cout << "\nNew Size: " << list1.get_size() << " (Expected: 8)" << std::endl;
        std::cout << "Tail value: " << list1.back() << " (Expected: 45)" << std::endl;
        std::cout << "Other list size: " << list2.get_size() << " (Expected: 0)" << std::endl;

        std::cout << "------------------------------------" << std::endl;

        DLL<int> list3 = {1, 1, 1, 2, 3, 3, 4, 5, 5, 5};
        std::cout << "Testing unique on {1,1,1,2,3,3,4,5,5,5}..." << std::endl;
        list3.unique();

        std::cout << "Result: ";
        curr = list3.get_head();
        while (curr) {
            std::cout << curr->val << " ";
            curr = curr->next;
        }
        std::cout << "\nNew Size: " << list3.get_size() << " (Expected: 5)" << std::endl;

        std::cout << "------------------------------------" << std::endl;

        std::cout << "Reversing result..." << std::endl;
        list3.reverse();
        curr = list3.get_head();
        while (curr) {
            std::cout << curr->val << " ";
            curr = curr->next;
        }
        std::cout << "\nHead: " << list3.front() << ", Tail: " << list3.back() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}