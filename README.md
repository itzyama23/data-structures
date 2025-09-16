# My custom data structures library

Welcome to this brand new repo!

I'll be coding my own solution to have a portable data structure library to allow me to use this code in many devices such as `ESP32`, `Raspberry Pi Zero` and many others.

> [!WARNING]
> This is NOT meant at all, to be used in any production environment, this project is merely done for fun. I don't offer any warranties at all.

## How to test it

> [!NOTE]
> You'll need to have installed `clang >= 20.1.8` beforehand.

1. Compile the program using the follwoing command on your terminal:
   
   ```bash
   $ clang main.c -Wall -Wextra -O2 -o main.out
   ```
2. Run `main.c` on your terminal to check the available examples _for now_.

## Data Structures List

These are the structures I will try to implement in my library:

- LinkedList
- CircularLinkedList
- Stack
- Queue
- PriorityQueue
- Tree
- Dictionary

## Roadmap

This is the roadmap I'll have to develop all the features for my program, I hope I can at least complete 2 data structures.

### SingleLinkedLists

>   - [ ] SingleLinkedLists
>       - [ ] Init
>       - [ ] Free
>       - [x] Traverse
>       - [ ] AppendAtBeginning
>       - [ ] AppendAtEnd
>       - [ ] AppendBetween
>       - [ ] RemoveAtBeginning
>       - [ ] RemoveAtEnd
>       - [ ] RemoveAt
>       - [ ] RemoveValue

## Table of contents
- [My custom data structures library](#my-custom-data-structures-library)
  - [How to test it](#how-to-test-it)
  - [Data Structures List](#data-structures-list)
  - [Roadmap](#roadmap)
    - [SingleLinkedLists](#singlelinkedlists)
  - [Table of contents](#table-of-contents)
