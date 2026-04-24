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


/*
* Write a function that always returns 5

Sounds easy right? Just bear in mind that you can't use any of the following characters: 0123456789*+-/

Good luck :)
*/
//
// int unusual_five(void) {
//     return '}' ^ 'x';
// }
//
// int main() {
//     printf("%d", (int)unusual_five());
//
//     return 0;
// }    COMPLETE!!!!!!

/*
* Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

For example: month 2 (February), is part of the first quarter; month 6 (June), is part of the second quarter; and month 11 (November), is part of the fourth quarter.

Constraint:

1 <= month <= 12

*/

// int quarter_of(int month) {
//     if (month < 12)
//         return (month - month % 3) / 3;
//
//     return 1;
// }
//
// int main() {
//     printf("%d\n", quarter_of(5)); // 2
//     printf("%d\n", quarter_of(12)); // 1
//     printf("%d", quarter_of(1)); // 1
//
//     return 0;
// } уебанское задание

// https://www.codewars.com/kata/5626b561280a42ecc50000d1/train/c
// #include <stddef.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>
//
// typedef unsigned long long ull;
//
// bool validate(int num) {
//     char str[20];
//     sprintf(str, "%d", num);
//     int start = num;
//
//     double result = 0;
//     ull power = strlen(str);
//
//     while (num > 0.1) {
//         result += pow(num % 10, (double)power--);
//
//         num /= 10;
//     }
//
//     return result == start;
// }
//
// ull *sum_dig_pow(ull a, ull b, ull *results, size_t *length) {
//     *length = 0;
//
//     for (ull n = a; n <= b; ++n) {
//         if (validate(n)) {
//             ++(*length);
//
//             results[(*length) - 1] = n;
//         }
//     }
//
//     return results;
// }
//
// int main() {
//     ull* results = malloc(100);
//     size_t l;
//
//     results = sum_dig_pow(1, 100, results, &l);
//
//     for (ull i = 0; i < l; ++i) {
//         printf("%zu ", results[i]);
//     }
//
//     free(results);
//
//     return 0;
// }    ДАДАДАДАДАДАДАДАД + 10КЮ

// http://codewars.com/kata/5648b12ce68d9daa6b000099/train/c

// #include <stddef.h>
//
// int bus_terminus (size_t nb_stops, const short bus_stops[nb_stops][2]){
//     auto bus = 0;
//
//     for (size_t i = 0; i < nb_stops; ++i) {
//         bus += bus_stops[i][0];
//         bus -= bus_stops[i][1];
//     }
//
//     return bus;
// }
//
// int main(void) {
//     short a[3][2] = {
//         {1, 0}, {3, 1}, {5, 6}
//     };
//
//     auto t = bus_terminus(3, a);
//
//     printf("%d", t);
//
//     return 0;
// }        +22кю

///     119кю (^ w ^)

// https://www.codewars.com/kata/6288de23ab7ede0031602521/train/c
// #include <stdlib.h>
// #include <string.h>
//
// void dtob(char* result, const int n, const int s) {
//     for (int i = s - 1; i >= 0; --i) {
//         auto k = n >> i;
//
//         if (k & 1)
//             result[s - i - 1] = '1';
//         else
//             result[s - i - 1] = '0';
//     }
// }
//
// void ipv4_to_binary(const char *ipv4_addr, char *ipv4_binary)
// {
//     *ipv4_binary = '\0';
//     const auto l = strlen(ipv4_addr);
//     char buffer[4], bin[9];
//     buffer[3] = '\0';
//     bin[8] = '\0';
//     int count = 0, index = 0;
//
//     for (auto i = 0; i < l; ++i) {
//         if (ipv4_addr[i] == '.') {
//             buffer[index] = '\0';
//
//             dtob(bin, atoi(buffer), 8);
//
//             char* p = ipv4_binary + 9 * count++;
//
//             strcpy(p, bin);
//
//             *(p + 8) = '.';
//
//             index = 0;
//
//             strcpy(bin, "\0");
//             strcpy(buffer, "\0");
//         }
//         else {
//             buffer[index++] = ipv4_addr[i];
//         }
//     }
//
//     buffer[index] = '\0';
//
//     dtob(bin, atoi(buffer), 8);
//
//     char* p = ipv4_binary + 9 * count++;
//
//     strcpy(p, bin);
//
//     *(ipv4_binary + 9 * count) = '\0';
// }
//
// int main(void) {
//     char* a = "255.255.255.252";
//     char r[37];
//
//     ipv4_to_binary(a, r);
//
//     printf("%s", r);
//
//     return 0;
// }        +8кю