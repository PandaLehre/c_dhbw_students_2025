# Exercise

Implement a libary with the the following checks as a function.

We have already implemented the function in the previous exercises.
Lets refactor the code and create a library:

- is numeric character
- is alpha character
- is alpha_numeric character
- is upper case character
- is lower case character

- to upper case character
- to lower case character

## Main Function

```cpp
int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    printf("is numeric: %d\n", isNumeric(character));
    printf("is alpha: %d\n", isAlpha(character));
    printf("is alpha numeric: %d\n", isAlphaNumeric(character));
    printf("is upper case: %d\n", isUpperCase(character));
    printf("is lower case: %d\n", isLowerCase(character));

    printf("to upper case: %c\n", toUpperCase(character));
    printf("to lower case: %c\n", toLowerCase(character));

    performeTestCases(); // These tests should not fail!

    return 0;
}
```
