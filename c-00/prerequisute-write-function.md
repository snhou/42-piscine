# Prerequisute: write function

## C Pointer : store address

#### Pointer Syntax

```
#include <unistd.h>
write(int fildes, const void *buf, size_t nbytes);
```

| Field            | Description                                                                                                                                                                                                                                                                            |
| ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| int fildes       | The file descriptor of where to write the output. You can either use a file descriptor obtained from the [open](http://codewiki.wikidot.com/c:system-calls:open) system call, or you can use 0, 1, or 2, to refer to standard input, standard output, or standard error, respectively. |
| const void \*buf | A pointer to a buffer of at least nbytes bytes, which will be written to the file.                                                                                                                                                                                                     |
| size\_t nbytes   | The number of bytes to write. If smaller than the provided buffer, the output is truncated.                                                                                                                                                                                            |
| return value     | Returns the number of bytes that were written. If value is negative, then the system call returned an error.                                                                                                                                                                           |
