/* You are given a positive integer represented as a string number. Your task is to count the number of its substrings that form an integer divisible by 3. The substring must not have any leading zeros unless it's a single-character substring "0".

Example

For number = "456", the output should be threeDivSubsequences(number) = 3.

Let's consider all substrings of the given string:

number[0..0] = 4 isn't divisible by 3.
number[1..1] = 5 isn't divisible by 3.
number[2..2] = 6 is divisible by 3.
number[0..1] = 45 is divisible by 3.
number[1..2] = 56 isn't divisible by 3.
number[0..2] = 456 is divisible by 3.
There are 3 substrings that meet the conditions, so the answer is 3.

For number = "6666", the output should be threeDivSubsequences(number) = 10.

All substrings are divisible by 3 and have no leading zeros, so the answer is equal the number of possible substrings, which is 10.

For number = "303", the output should be threeDivSubsequences(number) = 5.

number[0..0] = 3 is divisible by 3.
number[1..1] = 0 is divisible by 3.
number[2..2] = 3 is divisible by 3.
number[0..1] = 30 is divisible by 3.
number[1..2] = 03 is divisible by 3, but it has leading zeroes, so we don't count it.
number[0..2] = 303 is divisible by 3.
There are 5 substrings that meet the conditions, so the answer is 5.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string number

An integer in the form of a string.

Guaranteed constraints:
2 ≤ number.length ≤ 10,
10 ≤ (int)number ≤ 109.

[output] integer

Return the number of substrings that form an integer divisible by 3. */

int threeDivSubsequences(string number)
{
    int count = 0;
    int length = number.length();

    for (int i = 0; i < length; i++)
    {
        int num = 0;
        for (int j = i; j < length; j++)
        {
            num = num * 10 + (number[j] - '0');
            if (num % 3 == 0)
                count++;
        }
    }
    return count;
}
