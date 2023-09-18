#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c)
    {
        size = 0;
        capacity = c;
        arr = new int[c];// dynamically creating aray of size c and giving base address to the arr pointer
    }

    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }
};

int main()
{
    MinHeap h(11);// creating min heap h of capacity 11
    return 0;
}
