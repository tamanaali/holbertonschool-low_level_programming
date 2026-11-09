# Algorithm Execution Time Comparison

## 1. Objective

Compare the execution time of two algorithms that count even numbers in an array of 50,000 elements.

## 2. Execution Results

### Run 1

- Naive algorithm result: 625025000
- Naive algorithm time: 2.742526 seconds
- Single-pass algorithm result: 25000
- Single-pass algorithm time: 0.000107 seconds

### Run 2

- Naive algorithm result: 625025000
- Naive algorithm time: 2.746789 seconds
- Single-pass algorithm result: 25000
- Single-pass algorithm time: 0.000106 seconds

### Run 3

- Naive algorithm result: 625025000
- Naive algorithm time: 2.741307 seconds
- Single-pass algorithm result: 25000
- Single-pass algorithm time: 0.000107 seconds

## 3. Average Execution Time

| Implementation | Average execution time |
|---|---:|
| Naive algorithm | 2.743541 seconds |
| Single-pass algorithm | 0.000106667 seconds |

## 4. Relative Performance

The relative execution time was calculated by dividing the average execution time of the naive algorithm by the average execution time of the single-pass algorithm.

**Result:** The naive algorithm is approximately 25,721 times slower than the single-pass algorithm.

## 5. Conclusion

The single-pass implementation executes significantly faster than the naive implementation.

The naive implementation uses nested loops, resulting in O(n²) time complexity. The single-pass implementation uses one loop, resulting in O(n) time complexity.

This comparison demonstrates how choosing a more efficient algorithm can significantly reduce processing time and unnecessary computational work.
