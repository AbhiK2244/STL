#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {1,3,4};
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(2);
    v.push_back(9);
    v.push_back(6);

    for( int i : v)
    {
        cout << i << "  ";
    }
    cout<< endl;
    sort( v.begin(),v.end() );

    for( int i : v)
    {
        cout << i << "  ";
    }
    cout<< endl;
    vector<int> copy (v);    // copy the vector v int another vector copy

    for( int i : copy)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "element at first index is " << v.front() << endl;
    cout << "element at last index is " << v.back() << endl;
    cout << "element at 4 index is " << v.at(4) << endl;
    cout << "size of the vector v is " << v.size() << endl;
    v.pop_back();     // to delete the last element of the vector
    cout<< "elements of the vector after poping last element" << endl;
    for( int i : v)
    {
        cout << i << "  ";
    }
    cout<<endl;

    cout<< "after clearing the vector" << endl;
    v.clear();  // used the clear all the elements of the vector but capacity of the vector is same
    for( int i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "capacity of the vector v is " << v.capacity() << endl;
    cout << "size of the vector v is " << v.size() << endl;
}
