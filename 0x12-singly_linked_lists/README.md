### Concepts

_For this project, we expect you to look at this concept:_

-   [Data Structures](https://intranet.alxswe.com/concepts/120)

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif)

## Resources

**Read or watch**:

-   [Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA "Linked Lists")
-   [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ "Google")
-   [Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w "Youtube")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/xtUoOGrH_fQu_r19q1Tivw "explain to anyone"), **without the help of Google**:

### General

-   When and why using linked lists vs arrays
-   How to build and use linked lists

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
-   You are allowed to use [\_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded

## More Info

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

#### Question #0

What’s the “tail” of a linked list?

-   It’s the node with the highest value

-   It’s the node with the lowest value

-   It’s the first node

-   It’s the node with the pointer to the next equals to `NULL`


#### Question #1

In a singly linked list, what are possible directions to traverse it? (select all possible answers)

-   Backward

-   Forward


#### Question #2

What’s a node? (select all possible answers)

-   [ ]

    It’s a cell in an array

-   [x]

    It’s a space allocated in memory

-   [x]

    It’s a structure with a pointer to the next node and value information

-   [ ]

    It’s an integer

-   [ ]

    It’s a server


#### Question #3

What’s the “head” of a linked list?

-   It’s the first node

-   It’s the node with the pointer to the next equals to `NULL`

-   It’s the node with the highest value

-   It’s the node with the lowest value

-   It’s the last node


#### Question #4

Arrays Vs Linked Lists: select all true statements

-   [ ]

    We can easily remove an element from an Array

-   [x]

    Linked list can contain as value a structure

-   [x]

    Memory is aligned for an Array - each elements are back to back in the memory

-   [ ]

    We can add elements indefinitely to an array

-   [x]

    We can easily removed an element from a Linked list

-   [ ]

    Memory is aligned for a Linked list - each elements are back to back in the memory

-   [x]

    Array can contain as value a structure

-   [x]

    We can add elements indefinitely to a linked list

