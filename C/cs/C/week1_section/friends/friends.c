#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");

    int age = get_int("What is your age? ");

    string town = get_string("What is your town? ");

    string number = get_string("What is your phone number? ");

    printf("My new friend's name is %s, %i, they are from %s, his phone number is %s\n", name, age, town, number);
}
