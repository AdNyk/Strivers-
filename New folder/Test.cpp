#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Node {
    long long value;
    Node* next;

    Node(long long val) : value(val), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();

    void insert(long long value);
    bool search(long long value);

private:
    Node* head;
};

LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedList::insert(long long value) {
    Node* newNode = new Node(value);

    if (!head || head->value >= value) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && current->next->value < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

bool LinkedList::search(long long value) {
    Node* current = head;
    while (current && current->value < value) {
        current = current->next;
    }
    return (current && current->value == value);
}

class SkipList {
public:
    SkipList() : head(nullptr) {}
    ~SkipList();

    void insert(long long value);
    bool search(long long value);

private:
    Node* head;
};

SkipList::~SkipList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void SkipList::insert(long long value) {
    Node* newNode = new Node(value);

    if (!head || head->value >= value) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && current->next->value < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

bool SkipList::search(long long value) {
    Node* current = head;
    while (current && current->value < value) {
        current = current->next;
    }
    return (current && current->value == value);
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    std::cout << "Choose the Option dataset size:" << std::endl;
    std::cout << "Option 1. 10,000" << std::endl;
    std::cout << "Option 2. 100,000" << std::endl;
    std::cout << "Option 3. 1,000,000" << std::endl;

    int choice;
    std::cin >> choice;

    long long totalSize;
    if (choice == 1) {
        totalSize = 10000;
    } else if (choice == 2) {
        totalSize = 100000;
    } else if (choice == 3) {
        totalSize = 1000000;
    } else {
        std::cout << "Invalid choice. Exiting..." << std::endl;
        return 1;
    }

    LinkedList linkedList;
    SkipList skipList;

    std::vector<long long> dataset;
    for (long long i = 0; i < totalSize; ++i) {
        dataset.push_back(rand() % totalSize);
    }

    for (long long i = 0; i < totalSize / 2; ++i) {
        linkedList.insert(dataset[i]);
        skipList.insert(dataset[i]);
    }

    std::vector<long long> missingData;
    while (missingData.size() < totalSize / 10) {
        long long value = rand() % totalSize;
        if (!linkedList.search(value) && !skipList.search(value)) {
            missingData.push_back(value);
        }
    }

    clock_t linkedListSearchTime = 0;
    clock_t skipListSearchTime = 0;

    for (long long i = 0; i < totalSize / 2; ++i) {
        clock_t start = clock();
        linkedList.search(dataset[i]);
        clock_t end = clock();
        linkedListSearchTime += end - start;

        start = clock();
        skipList.search(dataset[i]);
        end = clock();
        skipListSearchTime += end - start;
    }

    for (long long i = 0; i < totalSize / 10; ++i) {
        clock_t start = clock();
        linkedList.search(missingData[i]);
        clock_t end = clock();
        linkedListSearchTime += end - start;

        start = clock();
        skipList.search(missingData[i]);
        end = clock();
        skipListSearchTime += end - start;
    }

    std::cout << "Search time for LinkedList (present and absent elements): " << double(linkedListSearchTime) / CLOCKS_PER_SEC << " seconds\n";
    std::cout << "Search time for SkipList (present and absent elements): " << double(skipListSearchTime) / CLOCKS_PER_SEC << " seconds\n";

    return 0;
}