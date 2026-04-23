#include <stdio.h>

/*
Create a method named "rotate" that returns a given array with the elements inside the array rotated n spaces.

If n is greater than 0 it should rotate the array to the right. If n is less than 0 it should rotate the array to the left. If n is 0, then it should return the array unchanged.
*/

// void rotate_array(int len, int rotated[len], const int array[len], int n) {
//     auto temp = array[len - 1];
//
//     while (n != 0) {
//         for (int i = 0; i < len; ++i) {
//             const auto t = rotated[i];
//             rotated[i] = temp;
//             temp = t;
//         }
//
//         --n;
//     }
// }
//
// int main() {
//     constexpr auto length = 5;
//     int arr[] = {1, 2, 3, 4, 5};
//
//     rotate_array(length, arr, arr, 3); // 3 4 5 1 2
//
//     for (auto i = 0; i < length; ++i) {
//         printf("%d\n", arr[i]);
//     }
//
//     return 0;
// }


/*
Let us begin with an example:

Take a number: 56789. Rotate left, you get 67895.

Keep the first digit in place and rotate left the other digits: 68957.

Keep the first two digits in place and rotate the other ones: 68579.

Keep the first three digits and rotate left the rest: 68597. Now it is over since keeping the first four it remains only one digit which rotated is itself.

You have the following sequence of numbers:

56789 -> 67895 -> 68957 -> 68579 -> 68597

and you must return the greatest: 68957.

Task
Write function max_rot(n) which given a positive integer n returns the maximum number you got doing rotations similar to the above example.

So max_rot (or maxRot or ... depending on the language) is such as:

max_rot(56789) should return 68957

max_rot(38458215) should return 85821534
*/
//
// long long maxRot(long long n) {
//
// }
//
// int main() {
//     int a = 123;
//
//     printf("%d", a %  10);
//
//     return 0;
// }

/*
* Description:
Remove an exclamation mark from the end of a string. For a beginner kata, you can assume that the input data is always a string, no need to verify it.

Examples
"Hi!"     ---> "Hi"
"Hi!!!"   ---> "Hi!!"
"!Hi"     ---> "!Hi"
"!Hi!"    ---> "!Hi"
"Hi! Hi!" ---> "Hi! Hi"
"Hi"      ---> "Hi"
*/

// #include <stdlib.h>
// #include <string.h>
//
// char* remove_mark(char* string) {
//     if (strlen(string) == 0) return string;
//     if (string[strlen(string) - 1] == '!') string[strlen(string) - 1] = '\0';
//     return string;
// }
//
// int main(void) {
//     char* string = malloc(8);
//     if (!string)
//         return 1;
//
//     strcpy(string, "");
//
//     string = remove_mark(string);
//
//     printf("%s", string);
//
//     free(string);
//
//     return 0;
// }    COMPLETE!!!!!!!!!!!!!