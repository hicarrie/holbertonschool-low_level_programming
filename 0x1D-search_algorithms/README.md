# 0x19. C - Hash tables
## Project Requirements
- Formatted with Betty style standards
- Compiled with gcc 4.8.4 (C90) using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- No global variables
- No more than 5 functions per file
- Function prototypes should be included in header file called `search_algos.h`
- `printf` is the only function allowed from the standard library

## File Descriptions
**0-linear.c:** a function that searches for a value in an array of integers using the Linear search algorithm

**1-binary.c:** a function that searches for a value in a sorted array of integers using the Binary search algorithm

**2-O:** What is the time complexity of a basic linear search algorithm in an array of size n?

**3-O:** What is the space complexity of a basic linear search algorithm in an array of size n?

**4-O:** What is the time complexity of a basic binary search algorithm of an array of size n?

**5-O:** What is the space complexity of a basic binary search algorithm of an array of size n?

**6-O:** What is the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Author
*Carrie Ybay* - [Twitter](http://twitter.com/hicarrie_)