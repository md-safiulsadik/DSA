#include<bits/stdc++.h>
using namespace std;

void vectors() {

    vector<int> v1; // this create an empty container
    v1.push_back(1);
    v1.emplace_back(2);

    
    vector<pair<int, int>> v2;
    v2.push_back({3, 4});
    v2.emplace_back(4, 6); // emplace_back don't need the {} !


    vector<int> v3(4, 76); // 5 elements, value 76 !
    v3.insert(v3.begin() + 4, 10);


    vector<int> v4(5); // 5 element not value assign


    vector<int> v(v3); // copying a vector into another
    for (int i = 0; i < 10; i++) { // 
        v.emplace_back(i + 1);
    }
    // for (int i = 10; i >= 1; --i) {  // append 1..10 at the beginning (preserve order)
    //     v.insert(v.begin(), i);
    // }


    cout << v1[0] << "\n"; 
    cout << v2[0].first << " " << v2[0].second << " " << v2[1].first << " " << v2[1].second << endl;


    vector<int>::iterator it = v3.begin();
    it += 4;
    cout << *it  << endl;


    vector<int>::iterator iv = v.begin(); // points to the fast element
    vector<int>::iterator itEnd = v3.end(); /* this point to next memory location of the last element 
                                             (inRnd--) --> this will point to the last  element */

    vector<int>::reverse_iterator rit = v3.rbegin();  // this point to the one element before the first element  
    vector<int>::reverse_iterator ritEnd = v3.rend(); // this point to the last element. (ritEnd++) move the 2nd last element


    for (vector<int>::iterator i = v3.begin(); i != v3.end(); i++) {
        cout << *i << " ";
    } cout << endl;
    
    // for (auto i = v.begin(); i != v.end(); i++) {
    //     cout << *i << " ";
    // } cout << endl;

    
    
    v.erase(v.begin() + 4);
    v.erase(v.begin() + 5, v.end() - 2);

    v.insert(v.begin(), 99);
    v.insert(v.begin()+1, 3, 33);
    v.insert(v.end(), 3, 33);

    v.pop_back(); // last element pop

    v.swap(v3); // v become v3

    v.clear(); // erases everything

    cout << v.empty() << endl;

    for (auto i : v) {
        cout << i << " ";
    } cout << endl;

}

void lists() {

    list<int> l;

    l.push_back(1);
    l.push_front(0); /* in vector there was insert which append element in the front this is very costly
                     but here the push_front is very chip */
    l.emplace_back(2);
    l.emplace_front(-1);

    // begin, end, rbegin, rend, clear, insert, size, swap (all are same as vector)

    for (auto i : l) {
        cout << i << " ";
    } cout << endl;
}

void deques() {

    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.emplace_front(-1);

    cout << dq.front() << endl;;
    cout << dq.back() << endl;;

    // begin, end, rbegin, rend, clear, insert, size, swap (all are same as vector)
}


void stacks() {  // LIFO --> last in fast out

    stack<int> st;  // Can't print all the element in a stack

    st.push(1);
    st.push(2);
    st.emplace(3);
    st.push(4);
    st.emplace(5);

    cout << "Before pop:" << st.top() << " " << endl;    
    st.pop();   // removes the last element pushed
    cout << "After pop:"<< st.top() << " " << endl;    

    cout << "Size: " << st.size() << endl;

    cout << "Is empty: " << st.empty() << endl;

    stack<int> st2;

    st.swap(st2);
    st2.pop();
    cout << "Swap top: "  << st2.top() << endl;
}

void queues() {  // FIFO --> first in first out

    queue<int> q;

    q.push(4);
    q.push(6);
    q.push(3);
    q.push(2);
    q.push(1);

    cout << q.back() << endl;
    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;
}

void priority_queues() {  // the top element is the biggest 

    priority_queue<int> pq;

    pq.push(5);
    pq.push(76);
    pq.push(1);
    pq.push(2);
    pq.push(34);               // push -> log(n)
                               // top -> O(1)
    pq.pop();                  // pop -> log(n)
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pq1; // smallest in the top

    pq1.push(5);
    pq1.push(65);
    pq1.push(3);
    pq1.push(-13);

    cout << pq1.top() << endl;
}


void sets() {   // Unique & sorted 

    set<int> st;

    st.insert(1);
    st.insert(1);
    st.emplace(4);
    st.insert(5);
    st.insert(6);
    st.insert(1);
    

    auto f_st1 = st.find(6); // returns a iterator which points to 6
    auto f_st2 = st.find(7); // returns a iterator which points to st.end() 

    int c_st1 = st.count(1); // return 1;
    int c_st2 = st.count(7); // return 0;

    auto it = st.find(1);
    st.erase(it);   
    st.erase(1);        // both works
    
    auto e_it1 = st.find(4);
    auto e_it2 = st.find(6);

    st.erase(e_it1, e_it2);

    /*
        https://www.youtube.com/watch?v=edJ19qIL8WQ
        upper_bound()
        lower_bound()
    */

    for (auto i : st) {
        cout << i << " ";
    } cout << endl;


    multiset<int> m_set; // only sorted not unique

    m_set.insert(1);
    m_set.insert(1);
    m_set.insert(1);
    m_set.insert(1);
    m_set.insert(1);

    cout << m_set.count(1) << endl; // number of occurrences

    // m_set.erase(m_set.find(1));
    m_set.erase(m_set.find(1), next(m_set.find(1), 2));

    for (auto i : m_set) {
        cout << i << " ";
    } cout << endl;

    unordered_set<int> u_set; 
    // unique but not sorted 
    // all same just lower_bound and upper_bound doesn't work!

}


void pairs() {

    pair<int, int> p1 = {1, 3};

    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "Nested pairs: " << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{2,4}, {4,2}, {4,5}, {5,6}};

    for (auto& val : arr) {
        cout << val.first << " " << val.second << " ";
    } cout << endl;
}


int main()
{
    // pairs();
    // vectors();
    // lists();
    // deques();
    // stacks();
    // queues();
    // priority_queues();
    sets();

    cout << endl << endl;
    return 0;
}
