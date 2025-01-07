/* Example application which uses testable component.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include "testable.h"
#include <stdio.h>

/* This application has a test subproject in 'test' directory, all the
 * interesting things happen there. See ../test/main/example_idf_test_runner_test.c
 * and the makefiles in ../test/ directory.
 *
 * This specific app_main function is provided only to illustrate the layout
 * of a project.
 */

void app_main(void)
{
    int numbers[10] = {5, 3, 7, 9, 11, 13, 15, 17, 19, 21};
    int count = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    int mean = testable_mean(numbers, count);
    printf("\nMean: %d\n", mean);
    
}

