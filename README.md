## educative_ostep

Operating Systems by Andrea Arpaci-Dusseau and Remzi Arpaci-Dusseau

## table of contents

#Introduction

A Dialogue on the Course
Introduction to Operating Systems
Virtualizing The CPU
Virtualizing Memory
Concurrency
Persistence
Design Goals
Some History
Summary

#Virtualization: Processes

A Dialogue on Virtualization
Introduction to Processes
The Abstraction: A Process
Process API
Process Creation: A Little More Detail
Processes States
Data Structures
Summary
Simulator
Exercise
Quiz on Processes

#Virtualization: Process API

Introduction to Process API
The fork() System Call
The wait() System Call
Finally, The exec() System Call
Why? Motivating the API
Process Control and Users
Useful Tools
Summary
Exercise
Quiz on Process API

#Virtualization: Direct Execution

Introduction to Direct Execution
Basic Technique: Limited Direct Execution
Problem #1: Restricted Operations
Problem #2: Switching Between Processes
Worried About Concurrency?
Summary
Exercise
Quiz on Direct Execution

#Virtualization: CPU Scheduling

Introduction to CPU Scheduling
Workload Assumptions and Scheduling Metrics
First In, First Out (FIFO)
Shortest Job First (SJF)
Shortest Time-to-Completion First (STCF)
A New Metric: Response Time
Round Robin
Incorporating I/O
Summary
Simulator
Exercise
Quiz on CPU Scheduling

#Virtualization: Multi-Level Feedback

Introduction to Multi-Level Feedback
MLFQ: Basic Rules
Attempt #1: How To Change Priority
Attempt #2: The Priority Boost
Attempt #3: Better Accounting
Tuning MLFQ And Other Issues
Summary
Simulator
Exercise
Quiz on Multi-level Feedback

#Virtualization: Lottery Scheduling

Introduction to Lottery Scheduling
Basic Concept: Tickets Represent Your Share
Ticket Mechanisms
Implementation
An Example
Why Not Deterministic?
The Linux Completely Fair Scheduler (CFS)
Weighting (Niceness)
How is CFS efficient?
Summary
Simulator
Exercise
Quiz on Lottery Scheduling

#Virtualization: Multi-CPU Scheduling

Introduction to Multi-CPU Scheduling
Background: Multiprocessor Architecture
Don’t Forget Synchronization
One Final Issue: Cache Affinity
Single-Queue Scheduling
Multi-Queue Scheduling
Linux Multiprocessor Schedulers
Summary
Simulator
Exercise
Quiz on Multi-CPU Scheduling
Summary Dialogue on CPU Virtualization

#Virtualization: Address Space

A Dialogue on Memory Virtualization
Early Systems
Multiprogramming and Time Sharing
The Address Space
Goals
Summary
Exercise
Quiz on Address Space

#Virtualization: Memory API

Introduction to Memory API
Types of Memory
The malloc() Call
The free() Call
Common Errors
Underlying OS Support
Other Calls
Summary
Exercise
Quiz on Memory API

#Virtualization: Address Translation

Introduction to Address Translation
Assumptions
An Example
Dynamic (Hardware-based) Relocation
Hardware Support: A Summary
Operating System Issues
Summary
Simulator
Exercise
Quiz on Address Translation

#Virtualization: Segmentation

Introduction to Segmentation
Segmentation: Generalized Base/Bounds
Which Segment Are We Referring To?
What About The Stack?
Support for Sharing
Fine-Grained vs. Coarse-Grained Segmentation
OS Support
Summary
Simulator
Exercise
Quiz on Segmentation

#Virtualization: Free Space Management

Introduction to Free Space Management
Assumptions
Low-level Mechanisms
Basic Strategies
Other Approaches
Summary
Simulator
Exercise
Quiz on Free Space Management

#Virtualization: Introduction to Paging

Introduction to Paging
A Simple Example And Overview
Where Are Page Tables Stored?
What’s Actually In The Page Table?
Paging: Also Too Slow
A Memory Trace
Summary
Simulator
Exercise
Quiz on Introduction to Paging
Virtualization: Translation Lookaside Buffers

Introduction to Translation Lookaside Buffers
TLB Basic Algorithm
Example: Accessing An Array
Who Handles The TLB Miss?
TLB Contents: What’s In There?
TLB Issue: Context Switches
Issue: Replacement Policy
A Real TLB Entry
Summary
Exercise
Quiz on Translation Lookaside Buffer

#Virtualization: Advanced Page Tables

Introduction to Advanced Page Tables
Simple Solution: Bigger Pages
Hybrid Approach: Paging and Segments
Multi-level Page Tables
Inverted Page Tables
Swapping the Page Tables to Disk
Summary
Simulator
Exercise
Quiz on Advanced Page Tables

#Virtualization: Swapping: Mechanisms

Introduction to Swapping: Mechanisms
Swap Space
The Present Bit
The Page Fault
What If Memory Is Full?
Page Fault Control Flow
When Replacements Really Occur
Summary
Instructions for Exercise
Exercise
Quiz on Swapping: Mechanisms

#Virtualization: Swapping: Policies

Introduction to Swapping: Policies
Cache Management
The Optimal Replacement Policy
A Simple Policy: FIFO
Another Simple Policy: Random
Using History: LRU
Workload Examples
Implementing Historical Algorithms
Approximating LRU
Considering Dirty Pages
Other VM Policies
Thrashing
Summary
Simulator
Exercise
Quiz on Swapping: Policies

#Virtualization: Complete VM Systems

Introduction to Complete VM Systems
VAX/VMS Virtual Memory: Memory Management Hardware
VAX/VMS Virtual Memory: A Real Address Space
VAX/VMS Virtual Memory: Page Replacement
VAX/VMS Virtual Memory: Other Neat Tricks
The Linux Virtual Memory System: The Linux Address Space
The Linux Virtual Memory System: Page Table Structure
The Linux Virtual Memory System: Large Page Support
The Linux Virtual Memory System: The Page Cache
The Linux Virtual Memory System: Security And Buffer Overflows
The Linux Virtual Memory System: Other Security Problems
Summary
Quiz on Complete VM Systems
Summary Dialogue on Memory Virtualization

#Concurrency: Concurrency and Threads

A Dialogue on Concurrency
Introduction to Concurrency and Threads
Why Use Threads?
An Example: Thread Creation
Why It Gets Worse: Shared Data
The Heart Of The Problem: Uncontrolled Scheduling
The Wish For Atomicity
One More Problem: Waiting For Another
Summary: Why in OS Class?
Simulator
Exercise
Quiz on Concurrency and Threads

#Concurrency: Thread API

Introduction to Thread API
Thread Creation
Thread Completion
Locks
Condition Variables
Compiling and Running
Summary
Simulator
Exercise
Quiz on Thread API

#Concurrency: Locks

Introduction to Locks
Locks: The Basic Idea
Pthread Locks
Building a Lock
Evaluating Locks
Controlling Interrupts
A Failed Attempt: Just Using Loads/Stores
Building Working Spin Locks with Test-And-Set
Evaluating Spin Locks
Compare-And-Swap
Load-Linked and Store-Conditional
Fetch-And-Add
Too Much Spinning: What Now?
A Simple Approach: Just Yield, Baby
Using Queues: Sleeping Instead of Spinning
Different OS, Different Support
Two-Phase Locks
Summary
Exercise
Quiz on Locks

#Concurrency: Locked Data Structures

Introduction to Locked Data Structures
Concurrent Counters
Concurrent Linked Lists
Concurrent Queues
Concurrent Hash Table
Summary
Exercise
Quiz on Locked Data Structures

#Concurrency: Conditional Variables

Introduction to Conditional Variables
Definition and Routines
The Producer/Consumer (Bounded Buffer) Problem
Better, But Still Broken: While, Not If
The Single Buffer Producer/Consumer Solution
Covering Conditions
Summary
Instructions For Exercise
Exercise
Quiz on Condition Variables

#Concurrency: Semaphores

Introduction to Semaphore
Semaphores: A Definition
Binary Semaphores (Locks)
Semaphores for Ordering
The Producer/Consumer (Bounded Buffer) Problem
Extending The Solution for Multiple Producers And Consumers
Reader-Writer Locks
The Dining Philosophers
Thread Throttling
How to Implement Semaphores
Summary
Exercise
Quiz on Semaphores

#Concurrency: Concurrency Bugs

Introduction to Concurrency Bugs
What Types of Bugs Exist?
Non-Deadlock Bugs
Deadlock Bugs
Prevention
Deadlock Avoidance via Scheduling
Detection And Recovery
Summary
Instructions for Exercise
Exercise
Quiz on Concurrency Bugs

#Concurrency: Event-Based Concurrency

Introduction to Event-Based Concurrency
The Basic Idea: An Event Loop
An Important API: select() or poll()
Using select()
A Problem: Blocking System Calls
A Solution: Asynchronous I/O
Another Problem: State Management
What Is Still Difficult With Events
Summary
Exercise
Quiz on Event-based Concurrency
Summary Dialogue on Concurrency

#Persistence: I/O Devices

A Dialogue on Persistence
Introduction to I/O Devices
System Architecture
A Canonical Device
The Canonical Protocol
Lowering CPU Overhead with Interrupts
More Efficient Data Movement with DMA
Methods of Device Interaction
Fitting into the OS: The Device Driver
Case Study: A Simple IDE Disk Driver
Historical Notes
Summary
Quiz on I/O Devices

#Persistence: Hard Disk Drives

Introduction to Hard Disk Drives
The Interface
Basic Geometry
A Simple Disk Drive
A Disk Drive with Multiple Tracks: Seek Time
More Details About Hard Drives
I/O Time: Doing the Math
Disk Scheduling
Some Other Scheduling Issues
Summary
Simulator
Exercise
Quiz on Hard Disk Drives

#Persistence: Redundant Disk Arrays (RAID)

Introduction to RAID
Interface and RAID Internals
Fault Model
How to Evaluate a RAID
RAID Level 0: Striping
RAID Level 1: Mirroring
RAID Level 4: Saving Space With Parity
RAID Level 5: Rotating Parity
RAID Comparison: A Summary
Other Interesting RAID Issues
Summary
Simulator
Exercise
Quiz on Redundant Disk Arrays (RAID)

#Persistence: Files and Directories

Introduction to Files and Directories
Files and Directories
The File System Interface
Reading and Writing Files
Reading and Writing, but not Sequentially
Shared File Table Entries: fork() and dup()
Writing Immediately With fsync()
Renaming Files
Getting Information About Files
Removing Files
Making Directories
Reading and Deleting Directories
Hard Links
Symbolic Links
Permission Bits and Access Control Lists
Making and Mounting a File System
Summary
Exercise
Quiz on Files and Directories

#Persistence: File System Implementation

Introduction to File System Implementation
The Way to Think
Overall Organization
File Organization: The Inode
Directory Organization
Free Space Management
Access Paths: Reading and Writing
Caching and Buffering
Summary
Simulator
Exercise
Quiz on File System Implementation

#Persistence: Fast File System

Introduction to Fast File System
The Problem: Poor Performance
FFS: Disk Awareness Is The Solution
Policies: How to Allocate Files and Directories
Measuring File Locality
The Large-File Exception
A Few Other Things About FFS
Summary
Simulator
Exercise
Quiz on Fast File System

#Persistence: FSCK and Journaling

Introduction to FSCK and Journaling
A Detailed Example
Solution #1: The File System Checker
Solution #2: Journaling (or Write-Ahead Logging)
Metadata Journaling
Solution #3: Other Approaches
Summary
Simulator
Exercise
Quiz on FSCK and Journaling

#Persistence: Log-Structured File System

Introduction to Log-Structured File System
Writing to Disk Sequentially
Writing Sequentially and Effectively
How Much to Buffer?
Problem: Finding Inodes
Solution Through Indirection: The Inode Map
Completing the Solution: The Checkpoint Region
Reading a File from Disk: A Recap
What About Directories?
A New Problem: Garbage Collection
Determining Block Liveness
A Policy Question: Which Blocks to Clean, and When?
Crash Recovery and the Log
Summary
Simulator
Exercise
Quiz on Log-Structured File System

#Persistence: Flash-based SSDs

Introduction to Flash-based SSDs
Storing a Single Bit
From Bits to Banks/Planes
Basic Flash Operations
Flash Performance and Reliability
From Raw Flash to Flash-Based SSDs
FTL Organization: A Bad Approach
A Log-Structured FTL
Garbage Collection
Mapping Table Size
Wear Leveling
SSD Performance and Cost
Summary
Simulator
Exercise
Quiz on Flash-based SSDs

#Persistence: Data Integrity and Protection

Introduction to Data Integrity and Protection
Disk Failure Modes
Handling Latent Sector Errors
Detecting Corruption: The Checksum
Using Checksums
A New Problem: Misdirected Writes
One Last Problem: Lost Writes
Scrubbing
Overheads of Checksumming
Summary
Simulator
Exercise
Quiz on Data Integrity and Protection
Summary Dialogue on Persistence

#Distribution: Distributed Systems

A Dialogue on Distribution
Introduction to Distributed Systems
Communication Basics
Unreliable Communication Layers
Reliable Communication Layers
Communication Abstractions
Remote Procedure Call (RPC)
Summary
Exercise
Quiz on Distributed Systems

#Distribution: Network File System (NFS)

Introduction to Network File System (NFS)
A Basic Distributed File System
On to NFS
Key to Fast Crash Recovery: Statelessness
The NFSv2 Protocol
From Protocol to Distributed File System
Handling Server Failure with Idempotent Operations
Improving Performance: Client-side Caching
The Cache Consistency Problem
Implications on Server-Side Write Buffering
Summary
Instructions For Exercise
Exercise
Quiz on Network File System (NFS)

#Distribution: Andrew File System (AFS)

Introduction to Andrew File System (AFS)
AFS Version 1
Problems with Version 1
AFS Version 2
Cache Consistency
Crash Recovery
Scale and Performance of AFSv2
AFS: Other Improvements
Summary
Simulator
Exercise
Quiz on Andrew File System (AFS)
Summary Dialogue on Distribution
