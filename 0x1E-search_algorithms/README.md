# 0x1E-search_algorithms
<img src=https://blog.ndepend.com/wp-content/uploads/global-coding-standards-2-960x460.jpg>

## About
An introductory project on:
* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
**[0-linear.c](0-linear.c)** - Function that searches for a value in an array of integers using the Linear search algorithm.

**[1-binary.c](1-binary.c)** - Function that searches for a value in a sorted array of integers using the Binary search algorithm.

**[2-O](2-O)** - `time complexity` (worst case) of a linear search in an array of size `n`?

**[3-O](3-O)** - `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

**[4-O](4-O)** - `time complexity` (worst case) of a binary search in an array of size `n`?

**[5-O](5-O)** - `space complexity` (worst case) of a binary search in an array of size `n`?

**[6-O](6-O)** - `space complexity` of this function / algorithm? array of size `n`?
```c
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

### Advanced

**[100-jump.c](100-jump.c)** - Function that searches for a value in a sorted array of integers using the Jump search algorithm.

**[101-O](101-O)** - `time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`?

**[102-interpolation.c](102-interpolation.c)** - Function that searches for a value in a sorted array of integers using the Interpolation search algorithm.

**[103-exponential.c](103-exponential.c)** - Function that searches for a value in a sorted array of integers using the Exponential search algorithm.

**[104-advanced_binary.c](104-advanced_binary.c)** - Function that searches for a value in a sorted array of integers.

**[105-jump_list.c](105-jump_list.c)** - Function that searches for a value in a sorted list of integers using the Jump search algorithm.

**[106-linear_skip.c](106-linear_skip.c)** - Function that searches for a value in a sorted skip list of integers.

**[107-O](107-O)** - `time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`?

**[108-O](108-O)** -  `time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)`?