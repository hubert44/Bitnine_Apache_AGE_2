# Bitnine_Apache_AGE_2
To determine the fibonacci number at position n, the first technique employs recursion. This approach is straightforward and simple to comprehend, but because of the overhead of the function calls, it may be slow for high values of n.

To determine the fibonacci number at position n, the second technique use iteration. Because it does not require function calls, this approach is more effective than recursion. On the other hand, it could be harder to grasp and requires more code to implement.
To save the values of previously calculated fibonacci numbers, the third technique makes advantage of memoization. Being able to avoid repeatedly computing the same fibonacci numbers makes this method the most effective of the three. But to store the memoized values, more memory is needed, and may not be as efficient for small values of n.

To compile and run any of the above methods, save/pull the repo and then compile it using a C compiler like gcc:
gcc -o {folder saved} {file name}.c
Then run the compiled executable: ./{folder saved}
