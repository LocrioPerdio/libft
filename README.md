*This project has been created as part of the 42 curriculum by <<paduarte>>*

# Libft

##  Description

Libft is a custom C library that reimplements standard C functions, along with additional utilities and a linked list API.  
The goal is to understand low-level programming concepts such as memory management, pointers, and data structures.

---

##  Library Overview

###  Part 1 – Libc Functions

Reimplementation of standard C library functions:

- `ft_isalpha` → checks if a character is alphabetic  
- `ft_isdigit` → checks if a character is a digit  
- `ft_isalnum` → checks if a character is alphanumeric  
- `ft_isascii` → checks if a character is in ASCII  
- `ft_isprint` → checks if a character is printable  
- `ft_strlen` → returns the length of a string  
- `ft_memset` → fills memory with a constant byte  
- `ft_bzero` → sets memory to zero  
- `ft_memcpy` → copies memory area (no overlap)  
- `ft_memmove` → copies memory safely (handles overlap)  
- `ft_strlcpy` → copies string with size limit  
- `ft_strlcat` → concatenates string with size limit  
- `ft_toupper` → converts character to uppercase  
- `ft_tolower` → converts character to lowercase  
- `ft_strchr` → finds first occurrence of a character  
- `ft_strrchr` → finds last occurrence of a character  
- `ft_strncmp` → compares two strings (limited)  
- `ft_memchr` → searches memory for a byte  
- `ft_memcmp` → compares memory areas  
- `ft_strnstr` → finds substring in a string  
- `ft_atoi` → converts string to integer  
- `ft_calloc` → allocates zero-initialized memory  
- `ft_strdup` → duplicates a string  

---

###  Part 2 – Additional Functions

Custom utility functions:

- `ft_substr` → extracts a substring  
- `ft_strjoin` → joins two strings  
- `ft_strtrim` → trims characters from start/end  
- `ft_split` → splits string into array  
- `ft_itoa` → converts integer to string  
- `ft_strmapi` → applies function to each char (new string)  
- `ft_striteri` → applies function to each char (in-place)  
- `ft_putchar_fd` → writes a char to file descriptor  
- `ft_putstr_fd` → writes a string to file descriptor  
- `ft_putendl_fd` → writes string + newline  
- `ft_putnbr_fd` → writes integer  

---

###  Part 3 – Linked List Functions

Structure:

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

Functions:

- `ft_lstnew` → creates a new node
- `ft_lstadd_front` → adds node at the beginning
- `ft_lstsize` → counts number of nodes
- `ft_lstlast` → returns last node
- `ft_lstadd_back` → adds node at the end
- `ft_lstdelone` → deletes a node
- `ft_lstclear` → deletes entire list
- `ft_lstiter` → applies function to each node
- `ft_lstmap` → creates new list applying a function

#### Compilation

`make`

Generates: libft.a

Rules:

- `make`        → compile the library
- `make clean`  → remove object files
- `make fclean` → remove object files and library
- `make re`     → recompile everything

##### Usage

#include "libft.h"

cc main.c libft.a

###### Technical Considerations

    Written in C following 42 Norm

    No memory leaks

    Flags: -Wall -Wextra -Werror

    No global variables

    Only authorized functions used

###### # Resources

    man pages

    C documentation

    CS50 YouTube videos

##### ## AI Usage

AI was used for:

    Concept clarification
    
    Debugging guidance

##### ### Author

<paduarte>
