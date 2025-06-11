# oNsort - A Linear Time Sorting Algorithm

Overview

oNsort is a novel sorting algorithm designed to achieve **O(n + k)** time complexity, where `n` is the number of elements and `k` is the range of input values (`max - min + 1`). It leverages a hash-based counting approach, making it highly efficient for arrays with a **small range of integer values** (both positive and negative). This non-comparison-based algorithm is ideal for scenarios where the minimum and maximum values are close, outperforming traditional comparison-based sorts like QuickSort for such inputs.

Features

- **Time Complexity**: O(n + k), where `k = max - min + 1`.
- **Space Complexity**: O(k) for the hash arrays.
- **In-Place Sorting**: Modifies the input array directly.
- **Handles Positive and Negative Integers**: Supports a wide range of integer inputs.
- **Non-Comparison-Based**: Uses counting to achieve linear performance.

How It Works

1. **Find Min and Max**: Scans the array to determine the minimum and maximum values.
2. **Hash Counting**: Uses two dynamic arrays (`pos_hash` for non-negative numbers, `neg_hash` for negative numbers) to count occurrences of each value.
3. **Reconstruct Array**: Iterates through the hash arrays to rebuild the sorted array in ascending order, handling duplicates efficiently.

Usage

#include &lt;iostream&gt;

#include "oNsort.h"\
\
int main() {\
int arr\[\] = {7, -2, 0, 7, 9};\
int size = 5;\
oNsort(arr, size); // Sorts array in-place and prints: -2 0 7 7 9\
return 0;\
}

Limitations

- **Input Type**: Works only with integers.
- **Range Sensitivity**: Performance degrades when the range (`max - min`) is significantly larger than `n`, as it requires O(k) additional space and time.
- **Memory Usage**: Allocates dynamic arrays proportional to the input range, which may be inefficient for sparse or large-range inputs.
- **Stability**: The current implementation is not stable (does not preserve the relative order of equal elements).

Installation

1. Clone the repository:

   git clone https://github.com/onkarchaturvedi/oNsort.git

2. Include `oNsort.h` in your C++ project and compile with a C++11 (or later) compatible compiler.

Example

Input: `[7, -2, 0, 7, 9]`\\

Output: `[-2, 0, 7, 7, 9]`

Contributing

Contributions are welcome! Please feel free to:

- Submit bug reports or feature requests via Issues.
- Optimize the algorithm (e.g., improve memory usage, add stability).
- Add support for other data types or test cases.

Author

Created by Onkar Chaturvedi. Follow for more innovative projects!

---

Have a nice day! 😊
