#include <stdio.h>

int main() {
    // Party Invitations (Data Types)
    char guest1 = 'A';             // Character data type
    int guest2 = 25;               // Integer data type
    float guest3 = 3.14f;          // Float data type
    double guest4 = 3.1415926535;  // Double data type
    unsigned int guest5 = 42;      // Unsigned Integer data type
    long guest6 = 1234567890L;     // Long data type
    long double guest7=3.1415926535L;//Long double data type

    // The Character Party
    printf("Welcome to the Character Party!\n\n");

    // Guest 1: The Char
    printf("Guest 1: The Char arrives as '%c' and says, \"I represent a single character and my space is %d.\"\n", guest1,sizeof(guest1));

    // Guest 2: The Integer
    printf("Guest 2: The Integer arrives as '%d' and says, \"I bring whole numbers to the party and my space is %d\"\n", guest2,sizeof(guest2));

    // Guest 3: The Float
    printf("Guest 3: The Float arrives with '%.2f' in hand and says, \"I handle decimals but I keep it light! My size is %d\"\n", guest3,sizeof(guest3));

    // Guest 4: The Double
    printf("Guest 4: The Double arrives with '%.10lf' in hand and says, \"I bring precision to the table. I occupy %d bytes\"\n", guest4, sizeof(guest4));

    // Guest 5: The Unsigned Integer
    printf("Guest 5: The Unsigned Integer arrives as '%u' and says, \"I only allow positive vibes but within %d bytes!\"\n", guest5,sizeof(guest5));

    // Guest 6: The Long
    printf("Guest 6: The Long Integer arrives fashionably late with '%ld' and says, \"I hold the big numbers! Know my space: %d\"\n", guest6,sizeof(guest6));

    //Guest 7: The Long Double
     printf("Guest 7: The Long Double arrives fashionably late with '%Lf' and says, \"I hold the big numbers! Know my space: %d\"\n", guest7,sizeof(guest7));
    // Interactions at the Party

    printf("\nLet's see how the guests interact!\n\n");

    // Char meets Integer
    printf("Guest 1 (Char) and Guest 2 (Integer) try to combine: '%c' + '%d' = '%d'\n", guest1, guest2, guest1 + guest2);

    // Float meets Double
    printf("Guest 3 (Float) and Guest 4 (Double) decide to add their precision: '%.2f' + '%.10f' = '%.10f'\n", guest3, guest4, guest3 + guest4);

    // Unsigned Integer meets Long
    printf("Guest 5 (Unsigned Integer) and Guest 6 (Long) compare their sizes: '%u' < '%ld' is %s\n", guest5, guest6, guest5 < guest6 ? "True" : "False");

    // The Party Ends
    printf("\nThe party ends with everyone having a great time and learning about each other's strengths!\n");

    return 0;
}
