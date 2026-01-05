#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// #include "lib.h"

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

bool isNumeric(char character)
{
    if ((character >= '0') && (character <= '9'))
    {
        return true;
    };

    return false;
}

bool isUpperCase(char character)
{
    if ((character >= 'A') && (character <= 'Z'))
    {
        return true;
    };

    return false;
}

bool isLowerCase(char character)
{
    if ((character >= 'a') && (character <= 'z'))
    {
        return true;
    };

    return false;
}

bool isAlpha(char character)
{
    if (isUpperCase(character) || isLowerCase(character))
    {
        return true;
    };

    return false;
}

bool isAlphaNumeric(char character)
{
    if (isAlpha(character) || isNumeric(character))
    {
        return true;
    };

    return false;
}

char toUpperCase(char character)
{
    if (isLowerCase(character))
    {
        return character - 32;
    };

    return character;
}

char toLowerCase(char character)
{
    if (isUpperCase(character))
    {
        return character + 32;
    };

    return character;
}

void performeTestCases()
{
    const char lowercaseAlpha = 'a';
    const char uppercaseAlpha = 'A';
    const char numeric = '5';
    const char somethingElse = '#';

    // Write the test cases for the function: isNumeric
    assert(isNumeric(lowercaseAlpha) == false);
    assert(isNumeric(uppercaseAlpha) == false);
    assert(isNumeric(numeric) == true);
    assert(isNumeric(somethingElse) == false);

    // Write the test cases for the function: isAlpha
    assert(isAlpha(lowercaseAlpha) == true);
    assert(isAlpha(uppercaseAlpha) == true);
    assert(isAlpha(numeric) == false);
    assert(isAlpha(somethingElse) == false);

    // Write the test cases for the function: isAlphaNumeric
    assert(isAlphaNumeric(lowercaseAlpha) == true);
    assert(isAlphaNumeric(uppercaseAlpha) == true);
    assert(isAlphaNumeric(numeric) == true);
    assert(isAlphaNumeric(somethingElse) == false);

    // Write the test cases for the function: isUpperCase
    assert(isUpperCase(lowercaseAlpha) == false);
    assert(isUpperCase(uppercaseAlpha) == true);
    assert(isUpperCase(numeric) == false);
    assert(isUpperCase(somethingElse) == false);

    // Write the test cases for the function: isLowerCase
    assert(isLowerCase(lowercaseAlpha) == true);
    assert(isLowerCase(uppercaseAlpha) == false);
    assert(isLowerCase(numeric) == false);
    assert(isLowerCase(somethingElse) == false);

    // Write the test cases for the function: toUpperCase
    assert(toUpperCase(lowercaseAlpha) == uppercaseAlpha);
    assert(toUpperCase(uppercaseAlpha) == uppercaseAlpha);
    assert(toUpperCase(numeric) == numeric);
    assert(toUpperCase(somethingElse) == somethingElse);

    // Write the test cases for the function: toLowerCase
    assert(toLowerCase(lowercaseAlpha) == lowercaseAlpha);
    assert(toLowerCase(uppercaseAlpha) == lowercaseAlpha);
    assert(toLowerCase(numeric) == numeric);
    assert(toLowerCase(somethingElse) == somethingElse);
}
