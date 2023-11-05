# File Allocation Strategies

| Program       | Code                                                     | Algorithm and Output |
| ------------- | -------------------------------------------------------- | -------------------- |
| 1. Sequential | [Code](/02%20-%20File%20Allocation/A%20-%20Sequential.c) | [Go](#sequential)    |
| 2. Indexed    | [Code](/02%20-%20File%20Allocation/B%20-%20Indexed.c)    | [Go](#indexed)       |
| 3. Linked     | [Code](/02%20-%20File%20Allocation/C%20-%20Linked.c)     | [Go](#linked)        |

## Sequential

### Algorithm

1. Create an array `f` to represent the disk, with each element initially set to 0 (indicating unallocated blocks).

2. Start a loop to allocate files on the disk:

   a. Ask the user for the starting block and length of the file.

   b. Initialize `count` to 0.

   c. Check if there are enough consecutive empty blocks to allocate the file:

   - For each block from `st` to `(st + len)`, if `f[k]` is 0, increment `count`.

   d. If there are enough empty blocks, allocate the file:

   - Set the blocks from `st` to `(st + len)` to 1 (indicating allocation).

   - Print the allocated block numbers and status.

   - If the allocation is successful, print a message.

   e. If the file cannot be allocated due to insufficient space, print a message.

   f. Ask the user if they want to enter more files (1 for "Yes" or 0 for "No").

   g. If the user wants to enter more files, continue the loop; otherwise, exit the program.

### Output

```
Files Allocated are :
Enter starting block and length of files: 12 4
12      1
13      1
14      1
15      1
The file is allocated to disk.
Do you want to enter more file(Yes - 1/No - 0)1
Enter starting block and length of files: 14 3
The file is not allocated.
Do you want to enter more file(Yes - 1/No - 0)1
Enter starting block and length of files: 17 2
17      1
18      1
The file is allocated to disk.
Do you want to enter more file(Yes - 1/No - 0)0
```

## Indexed

### Algorithm

1. Create an array `f` to represent the disk blocks, initializing all elements to 0 (indicating unallocated blocks).

2. Start a loop for allocating files through index blocks:

   a. Ask the user to enter an index block (`ind`).

   b. Check if the index block is not already allocated.

   c. If the index block is not allocated, ask the user for the number of blocks needed and the list of block numbers (`n` and `index[i]`).

   d. If the index block is already allocated, inform the user and return to the beginning of the loop.

3. Count the number of empty blocks among the specified index blocks.

   a. If there are enough empty blocks, allocate the file, mark the blocks as allocated, and display the file indexing.

   b. If allocation conflicts occur, inform the user and return to the beginning of the loop.

4. Ask the user if they want to enter more files (1 for "Yes" or 0 for "No").

   a. If the user wants to enter more files, return to the beginning of the loop; otherwise, exit the program.

### Output

```
Enter the index block: 3
Enter no of blocks needed and no of files for the index 3 on the disk :
5
2 3 7 9 3
Allocated
File Indexed
3-------->2 : 1
3-------->3 : 1
3-------->7 : 1
3-------->9 : 1
3-------->3 : 1
Do you want to enter more file(Yes - 1/No - 0)1
Enter the index block: 5
Enter no of blocks needed and no of files for the index 5 on the disk :
3
3 2 4
File in the index is already allocated
Enter another file indexed 4 1 10
Allocated
File Indexed
5-------->4 : 1
5-------->1 : 1
5-------->10 : 1
Do you want to enter more file(Yes - 1/No - 0)0
```

## Linked

### Algorithm

1. Create an array `f` to represent disk blocks, initializing all elements to 0 (unallocated).

2. Ask the user to input the number of blocks already allocated (`p`) and the list of those allocated blocks. Set these blocks as allocated in the `f` array.

3. Start a loop for allocating files:

   a. Prompt the user to enter the index starting block and length.

   b. Check if the starting block is unallocated.

   c. If unallocated, allocate the file, mark the blocks as allocated, and display the allocated block numbers.

   d. If any block is already allocated, handle it and inform the user.

   e. Ask if the user wants to enter more files (1 for "Yes" or 0 for "No").

   f. If the user wants to add more files, continue the loop; otherwise, exit the program.

### Output

```
enter how many blocks already allocated:2
enter blocks already allocated:5 3
enter index starting block and length:2 3
2--->1
3 block is already alloated
4--->1
5 block is already alloated
6--->1
do you want to enter more files (YES-1 / NO-0)1
enter index starting block and length:1 2
1--->1
2 block is already alloated
3 block is already alloated
4 block is already alloated
5 block is already alloated
6 block is already alloated
7--->1
do you want to enter more files (YES-1 / NO-0)0
```
