#include <stdio.h>
int remove_digit_at(int number, int position)
{
    int index = 0, result = 0;
    while (number != 0)
    {
        if (index++ != position)
            result = result * 10 + number % 10;
        number /= 10;
    }
}
int digit_at(int number, int position);
int min_digit_position(int number);
int min_number_with_digits_of(int number);
int main()
{
    printf("%d/n", digit_at(3214, 0));
    printf("%d/n", digit_at(1234, 3));
    printf("%d/n", remove_digit_at(3214, 0));
    printf("%d/n", remove_digit_at(12345, 2));
    printf("%d/n", min_digit_position(73584));
    printf("%d/n", min_digit_position(112233));
    printf("%d/n", min_number_with_digits_of(321744));
    printf("%d/n", min_number_with_digits_of(11443322));
    return 0;
}

int digit_at(int number, int position)
{
    for (int i = 0; number > 0; i++)
    {
        if (position == i)
        {
            return number % 10;
        }
        number /= 10;
    }
    return -1;
}
int min_digit_position(int number)
{
    int pos, min = 9, digit;
    for (int i = 0; number > 0; i++)
    {
        digit = number % 10;
        if (min > digit)
        {
            min = digit;
            pos = i;
        }
        number /= 10;
    }
    return pos;
}
int remove_digit_at(int number, int position)
{
    int index = 0, result = 0;
    while (number != 0)
    {
        if (index++ != position)
            result = result * 10 + number % 10;
        number /= 10;
    }
    return result;
}
int min_number_with_digits_of(int number)
{
    int pos, digit, result = 0;
    while (number > 0)
    {
        pos = min_digit_position(number);
        digit = digit_at(number, pos);
        number = remove_digit_at(number, pos);
        result = result * 10 + digit;
    }
    return result;
}