# CSC456OS-Paging-based-memory-mngmt-system
A small paging-based memory management system run on Linux.

How to run code:






Description of program design:

I decided to make a global vector for the physical memory because it's an improved dynamic array structure, and it was easy to change the size and insert elements into, and many elements in my code needed access to the physical memory space. As for the two different lists, I created a singly linked list for the freeFrameList and inserted new nodes at the end of the linked list to keep the frames in order. A doubly linked list was not needed for this because there was no need to traverse back through the list for any reason. However, a doubly linked list was used to implement the processList, since we need to be able to go back and delete any process in the list at any memory location, not just from the end of the list. I also created a page table for each process, so that I could keep track of mapping the pages to frames correctly. 
