# Prerequisute: Pointer

## C Pointer : store address

#### Pointer Syntax

```
int *ptr;
int c;

c = 7;
ptr = &c;
```

* 7 is assigned to the c variable.
* The address of c is assigned to the ptr pointer

```
*ptr = 5;
printf("%d", *ptr);
```

* `*` (dereference operator) gives the value stored in that pointer
* the address of c is the same, but c will be changed to 1



> [https://www.programiz.com/c-programming/c-pointers](https://www.programiz.com/c-programming/c-pointers)
>
>
