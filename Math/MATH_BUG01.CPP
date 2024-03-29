/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int isPrime(int A)
{
    int upperLimit = (int)(sqrt(A));
    int i;
    if (A == 1)
        return 0;
    for (i = 2; i <= upperLimit; i++)
    {
        if (A % i == 0)
            return 0;
    }
    return 1;
}
