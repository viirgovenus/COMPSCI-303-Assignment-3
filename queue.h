#ifndef queue_h
#define queue_h

#include <queue>

class myQueue {
public:
    // Inserts a new element at the rear of the queue.
    void enqueue(int value);

    // Removes the front element of the queue and returns it.
    int dequeue();

    // Returns the front element present in the queue without removing it.
    int front();

    // Checks if the queue is empty
    bool isEmpty();

    // Returns the total number of elements present in the queue.
    int size();

private:
    std::queue<int> data;
};

#endif // queue_h