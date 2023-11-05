# CPU Scheduling Algorithms

| CPU Scheduling Algorithms | Code                                                           | Output                                 |
| ------------------------- | -------------------------------------------------------------- | -------------------------------------- |
| 1. FCFS                   | [Code](/01%20-%20CPU%20Scheduling/A%20-%20FCFS.c)              | [Go](#fcfs)                            |
| 2. SJF                    | [Code](/01%20-%20CPU%20Scheduling/B%20-%20SJF.c)               | [Go](#sjf)                             |
| 3. Preemptive Priority    | [Code](/01%20-%20CPU%20Scheduling/C%20-%20Preemptive%20Prio.c) | [Go](#pre-emptive-priority-scheduling) |
| 4. Round Robin            | [Code](/01%20-%20CPU%20Scheduling/D%20-%20RR.c)                | [Go](#round-robin)                     |

| [Download Programs as PDF](https://github.com/blackpeps/ssmplab2023/files/13259530/SSMP.Exp.1.pdf) |
| --- |

## FCFS

```
Enter the number of process (up to 20): 3
Enter process details:

ProcessID: 1
Arrival Time: 0
Burst Time: 4

ProcessID: 2
Arrival Time: 6
Burst Time: 3

ProcessID: 3
Arrival Time: 3
Burst Time: 2
Process table:
PID     AT      BT      CT      TA      WT
1       0       4       4       4       0
2       6       3       9       3       0
3       3       2       6       3       1
Average TA: 3.333333
Average WT: 0.333333
```

## SJF

```
Enter process upto 20: 4
Enter process details:
Process ID: 1
Arrival Time: 0
Burst Time: 7

Process ID: 2
Arrival Time: 2
Burst Time: 4

Process ID: 3
Arrival Time: 4
Burst Time: 1

Process ID: 4
Arrival Time: 5
Burst Time: 4
Process table:
PID     AT      BT      CT      TA      WT
1       0       7       7       7       0
2       2       4       12      10      6
3       4       1       8       4       3
4       5       4       16      11      7
Average TA: 8.000000
Average WT: 4.000000
```

## Pre-emptive Priority Scheduling

```
Enter process upto 20: 7
Enter Process Details:
Process ID: 1
Arrival Time: 0
Burst Time: 1
Priority: 22

Process ID: 2
Arrival Time: 1
Burst Time: 7
Priority: 6

Process ID: 3
Arrival Time: 2
Burst Time: 3
Priority: 3

Process ID: 4
Arrival Time: 3
Burst Time: 6
Priority: 5

Process ID: 5
Arrival Time: 4
Burst Time: 5
Priority: 4

Process ID: 6
Arrival Time: 5
Burst Time: 15
Priority: 10

Process ID: 7
Arrival Time: 15
Burst Time: 8
Priority: 9

Process Table:
PID     AT      BT      Prio    CT      TA      WT
1       0       1       22      1       1       0
2       1       7       6       22      21      14
3       2       3       3       5       3       0
4       3       6       5       16      13      7
5       4       5       4       10      6       1
6       5       15      10      45      40      25
7       15      8       9       30      15      7
Average TA: 14.142858
Average WT: 7.714286
```

OR

```
Enter process upto 20: 5
Enter Process Details:
Process ID: 1
Arrival Time: 1
Burst Time: 6
Priority: 3

Process ID: 2
Arrival Time: 1
Burst Time: 7
Priority: 1

Process ID: 3
Arrival Time: 5
Burst Time: 7
Priority: 3

Process ID: 4
Arrival Time: 6
Burst Time: 3
Priority: 6

Process ID: 5
Arrival Time: 4
Burst Time: 2
Priority: 3

Process Table:
PID     AT      BT      Prio    CT      TA      WT
1       1       6       3       14      13      7
2       1       7       1       8       7       0
3       5       7       3       21      16      9
4       6       3       6       26      20      17
5       4       2       3       23      19      17
Average TA: 15.000000
Average WT: 10.000000
```

## ROUND ROBIN

```
Enter process upto 20:4
Enter time quantum: 4
Enter process details:
Process ID: 1
Arrival Time: 0
Burst Time: 4

Process ID: 2
Arrival Time: 2
Burst Time: 8

Process ID: 3
Arrival Time: 3
Burst Time: 14

Process ID: 4
Arrival Time: 10
Burst Time: 18
Process table:
PID     AT      BT      CT      TA      WT
1       0       4       4       4       0
2       2       8       16      14      6
3       3       14      38      35      21
4       10      18      44      34      16
Average TA: 21.750000
Average WT: 10.750000
```
