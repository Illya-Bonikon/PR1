# PR1
# swap Macro in C

This program defines a `swap(t, x, y)` macro that swaps the values of two variables `x` and `y` of a given type `t`. It includes a type compatibility check using `_Static_assert` to ensure that `x` and `y` have the same type before swapping.

### Key Features:
- **Type Safety**: Ensures `x` and `y` are of the same type, triggering a compile-time error if not.
- **Swapping**: Uses a temporary variable to perform the swap.


### Conclusion:
A simple and type-safe way to swap two variables in C.

