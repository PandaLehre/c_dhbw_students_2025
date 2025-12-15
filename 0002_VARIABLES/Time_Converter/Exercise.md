# Exercise

In this exercise, you have to use the datatype **float** for certain computations.

Implement the following time conversions:

- milliseconds to seconds
- seconds to minutes
- minutes to hours
- hours to days

Note:

- 1.000 Milliseconds = 1 Second
- 60 Seconds = 1 Minute
- 60 Minutes = 1 Hour
- 24 Hours = 1 Day

## Main Function

```cpp
int main()
{
    float milliseconds = 0.0F;

    printf("Please enter a millisecond value: ");
    scanf("%f", &milliseconds);

    ...

    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}
```
