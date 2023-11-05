# Bankers Algorithm

| [See Code](/03%20-%20Bankers%20Algorithm/bankers.c) |
| --- |

| [Download Program as PDF](https://github.com/blackpeps/ssmplab2023/files/13259535/SSMP.Exp.3.pdf) |
| --- |

## Output

```
Enter number of process: 5
Enter number of resources: 3
Enter Available resources of each type: 3 3 2
Enter Process Details:
Process 0
Allocation Matrix:      0 1 0
Maximum Matrix:         7 5 3

Process 1
Allocation Matrix:      3 0 2
Maximum Matrix:         3 2 2

Process 2
Allocation Matrix:      3 0 2
Maximum Matrix:         9 0 2

Process 3
Allocation Matrix:      2 1 1
Maximum Matrix:         2 2 2

Process 4
Allocation Matrix:      0 0 2
Maximum Matrix:         4 3 3

Process Details
PID             Allocation              Max             Need
0               0   1   0               7   5   3               7   4   3
1               3   0   2               3   2   2               0   2   0
2               3   0   2               9   0   2               6   0   0
3               2   1   1               2   2   2               0   1   1
4               0   0   2               4   3   3               4   3   1
System is in Safe State. Safe Sequence: P[1]    P[2]    P[3]    P[4]    P[0]
```
