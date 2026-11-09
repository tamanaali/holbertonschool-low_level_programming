## Measurement Methodology

The purpose of this experiment was to understand how the efficiency of an algorithm can affect program execution time and how this relates to green coding.

During this topic, I learned about Big O notation, which describes how the number of operations in an algorithm increases as the input size grows. For example, O(n) means that the number of operations increases proportionally with the input size, while O(n²) means that the operations can increase much faster because of nested loops.

To understand this in practice, I used the provided C programs. In the algorithm comparison experiment, the program processed an array containing 50,000 elements. I compared a naive implementation using nested loops with a single-pass implementation using one loop.

I compiled the program using GCC with the required compiler flags and executed it three times. The execution time was measured using `clock()` from the C time library. I recorded all three results and calculated the average execution time for each implementation.

## Observed Performance Differences

The results showed a significant difference between the two implementations.

The naive algorithm recorded these execution times:

- Run 1: 2.742526 seconds
- Run 2: 2.746789 seconds
- Run 3: 2.741307 seconds

The average execution time was approximately **2.743541 seconds**.

The single-pass algorithm recorded:

- Run 1: 0.000107 seconds
- Run 2: 0.000106 seconds
- Run 3: 0.000107 seconds

The average execution time was approximately **0.000106667 seconds**.

Based on these averages, the naive implementation was approximately **25,721 times slower** than the single-pass implementation.

This difference can be understood through Big O notation. The naive implementation uses nested loops, which have O(n²) time complexity. The single-pass implementation uses one loop, which has O(n) time complexity. The nested loops perform repeated checks, while the single-pass approach visits each array element once.

One important observation is that the two implementations produced different results. The naive algorithm returned 625025000, while the single-pass algorithm returned 25000. This happens because the naive algorithm repeatedly counts even numbers from the beginning of the array, whereas the single-pass algorithm counts each even number once.

## Relation Between Runtime and Energy Consumption

Green coding means writing software that uses computing resources efficiently. This includes reducing unnecessary CPU processing, memory usage, storage and network activity.

My experiment showed that the single-pass algorithm required significantly less measured processor time than the naive algorithm. This is relevant to green coding because unnecessary calculations can increase the amount of work a processor needs to perform.

Big O notation helps us understand why choosing an efficient algorithm matters, especially when working with larger datasets. An algorithm with O(n²) complexity can become much more expensive as the input grows compared with an O(n) algorithm.

However, execution time and electricity consumption are not exactly the same thing. Although shorter execution time can contribute to more efficient resource use, this experiment did not directly measure electricity consumption or carbon emissions.

## Limitations of the Experiment

There were several limitations. First, I only performed three runs, so the results represent a small sample. Execution times can also vary depending on background processes and computer performance.

Second, I measured processor time using `clock()`, rather than measuring actual energy consumption. I therefore cannot calculate the exact amount of electricity or carbon emissions saved.

Another limitation is that the two algorithms returned different results. This means they did not perform exactly the same counting operation, even though both were presented as ways to count even numbers.

Finally, the experiment used a fixed dataset of 50,000 elements, so the results do not show how both implementations would perform with every possible input size.

## Practical Engineering Takeaway

This experiment helped me understand that efficient programming is not simply about writing fewer lines of code. It is about choosing the right approach and avoiding unnecessary work.

I learned that nested loops can significantly increase the number of operations, while a single loop can be more efficient when each element only needs to be checked once. Understanding Big O notation makes it easier to recognise these differences before running a program.

My main takeaway is that developers should consider time complexity, CPU processing and memory usage when writing software. Choosing efficient algorithms can improve performance and support green coding by reducing unnecessary computational work.
