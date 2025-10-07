#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    // nums.shrink_to_fit();

    cout << "Front: " << nums.front() << endl;
    cout << "Back: " << nums.back() << endl;

    cout << "3rd element: " << nums.at(3) << endl;
    
    nums.pop_back();
    nums.erase(nums.begin() + 2);
    nums.insert(nums.begin() + 2, 99);

    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;


    for (auto num : nums) {
        cout << num << " ";
    }   cout << endl;

    vector<int> v(5, 3); // initialize size and values

    for (auto num : v) {
        cout << num << " ";
    } cout << endl;

    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    v.clear();

    cout << "After clear" << endl;
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    return 0;
}
