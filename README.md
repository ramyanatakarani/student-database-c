# Student Record Management System

### C Mini Project \| Singly Linked List

A menu-driven C application for managing student records using a
**singly linked list**.

The project is divided into separate modules so that each operation has
its own responsibility. Student records are created dynamically,
assigned the **smallest available roll number**, and can be added,
deleted, modified, displayed, sorted, saved, read, and reversed.

------------------------------------------------------------------------

## 🎯 Project Objective

The objective of this project is to build a simple student record system
while getting practical experience with:

- Singly linked lists
- Structures
- Pointers and double pointers
- Dynamic memory allocation
- File handling
- Searching and sorting
- Modular C programming
- Memory deallocation

------------------------------------------------------------------------

## 📁 Module Structure

| File            | Responsibility                                                                       |
|-----------------|--------------------------------------------------------------------------------------|
| `student.h`     | Contains the student structure and function declarations used by all modules.        |
| `stud_main.c`   | Contains the main function and controls the menu-driven program.                     |
| `stud_add.c`    | Creates and inserts a new student record with an automatically assigned roll number. |
| `stud_del.c`    | Deletes a student record by roll number or name.                                     |
| `stud_delall.c` | Deletes all records and releases the allocated memory.                               |
| `stud_show.c`   | Displays the complete student list in a readable format.                             |
| `stud_mod.c`    | Modifies an existing student’s details.                                              |
| `stud_sort.c`   | Sorts student records according to the selected requirement.                         |
| `stud_read.c`   | Reads previously saved records from the data file.                                   |
| `stud_save.c`   | Saves the current student records into the data file.                                |
| `stud_rev.c`    | Reverses the linked list by changing the existing links.                             |
| `student.dat`   | Stores the saved student records.                                                    |
| `Makefile`      | Compiles the project modules together.                                               |

------------------------------------------------------------------------

## 🧩 Student Record

Each node in the linked list contains:

| Member       | Type               | Purpose                    |
|--------------|--------------------|----------------------------|
| `rollno`     | `int`              | Unique student roll number |
| `name`       | `char[50]`         | Student name               |
| `percentage` | `float`            | Student percentage         |
| `next`       | `struct student *` | Address of the next node   |

------------------------------------------------------------------------

## 🔢 Automatic Roll Number

Roll numbers are **not entered manually**.

The program searches the linked list and assigns the **smallest positive
roll number that is currently unused**.

Example:

``` text
Existing records : 1  2  4  5
New roll number  : 3
```

After deleting roll number `2`:

``` text
Existing records : 1  3  4  5
New roll number  : 2
```

This keeps roll numbers unique and also allows deleted numbers to be
reused.

------------------------------------------------------------------------

## ⚙️ Menu Operations

| Option  | Operation                     |
|---------|-------------------------------|
| `A / a` | Add a new student record      |
| `D / d` | Delete a student record       |
| `S / s` | Display all student records   |
| `M / m` | Modify a student record       |
| `V / v` | Save records to `student.dat` |
| `T / t` | Sort student records          |
| `L / l` | Delete all records            |
| `R / r` | Reverse the linked list       |
| `E / e` | Exit the program              |

------------------------------------------------------------------------

## 🔗 How the Linked List Works

A student record is stored as a dynamically allocated node.

``` text
+---------+----------+-------------+------+
| Roll No |   Name   | Percentage  | Next |
+---------+----------+-------------+------+
      ↓
+---------+----------+-------------+------+
|    1    |   Ramya  |    89.0     |  ●-------->
+---------+----------+-------------+------+
                                             |
                                             ↓
                                      +---------+
                                      | Node 2  |
                                      +---------+
```

The `next` pointer connects one student node to the next node.

------------------------------------------------------------------------

## 💾 Memory Management

The project uses dynamic memory because the number of students is not
fixed.

- `malloc()` is used when creating a new student node.
- `free()` is used when deleting a node.
- Delete-all releases every remaining node.
- Remaining allocated nodes are released before the program terminates.

This helps avoid memory leaks and invalid pointer access.

------------------------------------------------------------------------

## 📂 File Handling

The project uses `student.dat` for persistent storage.

**Save**

``` text
Linked List
     ↓
student.dat
```

**Read**

``` text
student.dat
     ↓
Linked List
```

This allows previously stored student records to be available when the
program is started again.

------------------------------------------------------------------------

## 🔄 Project Flow

``` text
             START
               │
               ▼
       Read saved records
               │
               ▼
          Display Menu
               │
               ▼
       Select an operation
               │
     ┌─────────┼─────────┐
     ▼         ▼         ▼
    Add      Delete     Show
     │         │         │
     └─────────┼─────────┘
               ▼
       Other operations
               │
               ▼
          Display Menu
               │
        ┌──────┴──────┐
        ▼             ▼
      Save          Exit
                      │
                      ▼
              Release memory
                      │
                      ▼
                    END
```

------------------------------------------------------------------------

## ✨ Features Implemented

- ✅ Add student records dynamically
- ✅ Automatically assign the smallest available roll number
- ✅ Delete by roll number or name
- ✅ Delete all records
- ✅ Modify existing records
- ✅ Display the complete list
- ✅ Sort records
- ✅ Reverse the linked-list order
- ✅ Save records to `student.dat`
- ✅ Read saved records when starting the program
- ✅ Menu accepts both upper-case and lower-case options
- ✅ Uses separate modules for different operations

------------------------------------------------------------------------

## 🛠️ Concepts Used

`Structure` • `Singly Linked List` • `Pointers` • `Double Pointers` •
`malloc()` • `free()` • `File Handling` • `String Handling` •
`Searching` • `Sorting` • `Modular Programming`

------------------------------------------------------------------------

## 👩‍💻 Developer

**Ramya Natakarani**

C Mini Project — Student Record Management System
