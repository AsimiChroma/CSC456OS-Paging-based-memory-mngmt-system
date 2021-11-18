// page table as an array?

// Paging-based memory management system
// Implement functions:
//      - initializing memory space: void memoryManager(int memSize, int frameSize)
//             - frame size fixed to 1
//      - allocating/deallocating memory space to process
//      - reading/writing daata to process memory space
//      - printing out the memory contents of a process
//
// Define 2 lists: 1. freeFrameList and processList
//      - freeFrameList keeps track of free frames: simply a list of the frame numbers of free frames
//      - processList keeps track of active processes (that are loaded into memory) and their sizes in terms of the number of allocated pages (size 3 = 3 pages, size 4 = 4 pages, etc)
// 