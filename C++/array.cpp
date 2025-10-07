#include<iostream>
#include<array>

using namespace std;


string mergeAlternately(string word1, string word2) {
    
    string newWord;
    newWord.reserve(word1.length() + word2.length());
    
    int i = 0;

    while (i < word1.length() && i < word2.length())
    {
        newWord += word1[i];
        newWord += word2[i];
        i++;
    }
    
    while (i < word1.length())
    {
        newWord += word1[i++];
    }

    while (i < word2.length())
    {
        newWord += word2[i++];
    }
    
    return newWord;
    
}


int main() {
    
    // printf("Hello World\n");
    // cout << "Hello World" << endl;

    array<int, 6> nums = {1, 3, 5, 7, 9, 4};

    cout << nums[4] << endl;
    cout << nums.at(4) << endl; //This is safer

    cout << nums.back() << endl;
    cout << nums.front() << endl;

    cout << nums.empty() << endl;
    cout << nums.size() << endl;
    
    for (auto i : nums) {
        cout << i << " ";
    }
    cout << endl;

    cout << mergeAlternately("ab", "pqrs") << endl;

    return 0;
}