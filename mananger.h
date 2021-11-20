#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
using namespace std;

extern vector<int> physMem; // global physical memory array

//----- Functions -----//
void memMngr(int memSize, int frameSize);   // Initialize memory space
int allocate(int allocSize, int pid);   // Allocating memory space to process
int deallocate(int pid);    // Deallocates memory space from process with process ID pid
int read(int pid, int logi_addr);   // Used to read value from memory location specified by page number 'logi_addr'
int write(int pid, int logi_addr);  // Used to write a value to memory space specified by parameter 'logi_addr' of a process with pid
void printMem(void);    // Prints out physical memory space -- freeFrameList and processList

//----- Lists -----//

// Singly linked list for freeFrameList
class FreeNode {
public: 
    // pointer to next node
    FreeNode* next;

    // frame number
    int frameNum;

    // free or not free frame
    bool free;
};

class FreeList {
public:
    FreeNode* head; // points to first node in list

    // Find the next free frame available (randomly)
    int findFrame();

    // Print
    void print();   // printing free frames

    // Insert
    void insert();  // inserts next node at end of list

    // Delete
    void remove();  // destructor calls this each time

    // Constructor to build list
    FreeList();
    // Destructor to delete list
    ~FreeList();
};



// Doubly linked list for processList
class ProcessNode {
public:

    ProcessNode* next;  // points to next node in list
    ProcessNode* prev;  // points to previous node in list

    // Active process from PID
    int pid;

    // Size in terms of number of pages
    int pageSize;

    // Page table vector
    vector<int> pgTable;    
};

class ProcessList {
public:

    ProcessNode* head; // points to first node in list
    ProcessNode* tail;

    // Print
    void print();   // printing free frames

    // Insert
    void insert();  // inserts next node at end of list

    // Delete list
    void remove();  // destructor calls this each time

    // Delete pid
    void removePid();

    // Update pgTable
    void updatePgTable();   // insert new values into pgTable

    // Destructor
    ~ProcessList();
};

#endif
