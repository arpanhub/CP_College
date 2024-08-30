# Prime Number Check

## Explanation

### Basic Prime Check
1. We are checking from `2` to `sqrt(n)` because:
   - If a number is not prime, it will have a factor less than or equal to `sqrt(n)`.
   - Therefore, we only need to check up to `sqrt(n)` to determine if the number is prime.

### Optimized Prime Check
1. **Initial Conditions**:
   - `n == 1` returns `false` because 1 is not prime.
   - `n == 2` or `n == 3` returns `true` because both 2 and 3 are prime numbers.
   - If `n` is divisible by `2` or `3`, it's not prime, so return `false`.
2. **Looping through potential factors**:
   - We start the loop at `5` and continue until `i * i <= n`.
   - We increment `i` by `6` in each iteration to skip even numbers and multiples of 3.
   - We check both `i` and `i + 2` to handle numbers like 5 and 7, 11 and 13, and so on.
3. This approach significantly reduces the number of checks needed for large numbers, making it more efficient.

# Fermet's little theorem

*If p is a prime number and a is positive integer that is not multiple of p. such that a^p-1 is congruent to 1(mod p):*

   - Prove that fermet's little theorem holds true for p = 7 and a = 3.

3^7-1 is congruent to 1(mod 7)

   -  Prove that fermat’s little theorem doesn't hold for p =6 and a = 2




