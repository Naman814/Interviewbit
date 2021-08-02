// check palindrome in O(1) space
int Solution::isPalindrome(int A)
{
    if (A < 0)
        return 0;
    int original = A;
    int rev = 0, rem;
    while (A > 0)
    {
        rev = rev * 10 + A % 10;
        A = A / 10;
    }
    if (rev == original)
        return 1;
    return 0;
}
