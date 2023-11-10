
#include <iostream>
#include <queue>
#include "queue.h"

class myQueue {
public:
    // Inserts a new element at the rear of the queue.
    void enqueue(int value) {
        data.push(value);
    }

    // Removes the front element of the queue and returns it.
    int dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot dequeue.\n";
            return -1; // You can choose a better error handling strategy
        }
        int frontValue = data.front();
        data.pop();
        return frontValue;
    }

    // Returns the front element present in the queue without removing it.
    int front() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. No front element to return.\n";
            return -1;
        }
        return data.front();
    }

    // Checks if the queue is empty
    bool isEmpty() {
        return data.empty();
    }

    // Returns the total number of elements present in the queue.
    int size() {
        return data.size();
    }

private:
    std::queue<int> data;
};

int main() {
    myQueue queue;

    // Insert elements at the rear of the queue
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    // Print the front element without removing it
    std::cout << "Front element: " << queue.front() << std::endl;

    // Remove and print elements from the front of the queue
    while (!queue.isEmpty()) {
        std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    }

    std::cout << "Queue is empty: " << (queue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
