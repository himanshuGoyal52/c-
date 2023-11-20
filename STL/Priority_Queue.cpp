#include<iostream>
#include<queue>

using namespace std;

int main()
{   // Max heap
    priority_queue<int> pq;

    // Min heap 
    priority_queue< int , vector<int> , greater<int> > minHeap;
    pq.push(12);
    pq.push(50);
    pq.push(99);
    pq.push(75);
    int n = pq.size();
    for(int i = 0 ; i < n ; i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;


    minHeap.push(12);
    minHeap.push(50);
    minHeap.push(99);
    minHeap.push(75);
    int p = minHeap.size();
    for(int i = 0 ; i < p ; i++){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }cout<<endl;

    cout<<"Empty or not : "<<pq.empty()<<endl;
    return 0;
}