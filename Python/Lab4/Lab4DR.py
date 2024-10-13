#7-8

# def horner_scheme(coeffs, x):
#     result = complex(0)
#     for coeff in reversed(coeffs):
#         result = result * x + complex(coeff[0], coeff[1])
#     return result

# Example usage:
# n = 3  # Degree of the polynomial
# x = complex(1, 1)  # The complex number x
# coeffs = [(1, 0), (2, 1), (3, 2), (4, 3)]  # List of tuples representing the coefficients (a, b)
# print(horner_scheme(coeffs, x))

# def complex_arithmetic(u1, u2, v1, v2, w1, w2):
#     u = complex(u1, u2)
#     v = complex(v1, v2)
#     w = complex(w1, w2)
#     result = (2*u + 3*u*v) / (2 + w - v)
#     return result

# Example usage:
# u1, u2 = 1, 2
# v1, v2 = 3, 4
# w1, w2 = 5, 6
# print(complex_arithmetic(u1, u2, v1, v2, w1, w2))




# # Task 7: Horner's scheme for polynomial evaluation with complex numbers without "complex" function
# def horner_scheme(coeffs, x_real, x_imag):
#     real_part = 0
#     imag_part = 0
#     for a, b in reversed(coeffs):
#         # (real_part + i*imag_part) * (x_real + i*x_imag) + (a + i*b)
#         temp_real = real_part * x_real - imag_part * x_imag + a
#         temp_imag = real_part * x_imag + imag_part * x_real + b
#         real_part = temp_real
#         imag_part = temp_imag
#     return real_part, imag_part

# # Task 8: Arithmetic operations on complex numbers without "complex" function
# def complex_arithmetic(u1, u2, v1, v2, w1, w2):
#     # Calculate 2u
#     two_u_real = 2 * u1
#     two_u_imag = 2 * u2
    
#     # Calculate 3uv
#     three_uv_real = 3 * (u1 * v1 - u2 * v2)
#     three_uv_imag = 3 * (u1 * v2 + u2 * v1)
    
#     # Calculate numerator: 2u + 3uv
#     numerator_real = two_u_real + three_uv_real
#     numerator_imag = two_u_imag + three_uv_imag
    
#     # Calculate denominator: 2 + w - v
#     denominator_real = 2 + w1 - v1
#     denominator_imag = w2 - v2
    
#     # Division of complex numbers (numerator / denominator)
#     denom = denominator_real**2 + denominator_imag**2
#     result_real = (numerator_real * denominator_real + numerator_imag * denominator_imag) / denom
#     result_imag = (numerator_imag * denominator_real - numerator_real * denominator_imag) / denom
    
#     return result_real, result_imag

# # Example coefficients for a polynomial (real, imaginary)
# coeffs = [(1, 0), (2, 1), (3, 2), (4, 3)]  # a_n, a_n-1, ..., a_0, b_0
# x_real = 1  # Real part of x
# x_imag = 1  # Imaginary part of x

# # Evaluate the polynomial using Horner's scheme
# horner_result = horner_scheme(coeffs, x_real, x_imag)

# # Example values for the arithmetic operations on complex numbers
# u1, u2 = 1, 2  # u = u1 + i*u2
# v1, v2 = 3, 4  # v = v1 + i*v2
# w1, w2 = 5, 6  # w = w1 + i*w2

# # Perform the arithmetic operation
# arithmetic_result = complex_arithmetic(u1, u2, v1, v2, w1, w2)

# horner_result, arithmetic_result



#9
import math

# Implement the functions as described to solve Task 9

# Function to check if a number is a perfect square
def is_perfect_square(n):
    sqrt_n = math.isqrt(n)
    return n == sqrt_n * sqrt_n

# Function to check if a number is a power of five
def is_power_of_five(n):
    while n % 5 == 0 and n > 1:
        n //= 5
    return n == 1

# Function to check if a number is prime
def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

# Function to find the longest segment of numbers that satisfy a given condition
def find_longest_segment(sequence, condition_function):
    longest = 0
    current_length = 0
    for number in sequence:
        if condition_function(number):
            current_length += 1
            longest = max(longest, current_length)
        else:
            current_length = 0
    return longest

# Example sequence for testing
sequence = [1, 4, 9, 16, 25, 2, 5, 25, 125, 11, 13, 17]

# Find the longest segment for each condition
longest_perfect_squares = find_longest_segment(sequence, is_perfect_square)
longest_powers_of_five = find_longest_segment(sequence, is_power_of_five)
longest_prime_numbers = find_longest_segment(sequence, is_prime)

(longest_perfect_squares, longest_powers_of_five, longest_prime_numbers)
