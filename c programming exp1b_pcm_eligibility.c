/*
 * Experiment 1(b): Write a Program (WAP) to get student's PCM marks from the user
 * and find the average and eligibility.
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */

#include <stdio.h>

int main() {
    float physics, chemistry, maths, total, average;

    printf("--- Student PCM Eligibility Checker ---\n");
    printf("Enter Physics marks (out of 100): ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks (out of 100): ");
    scanf("%f", &chemistry);

    printf("Enter Mathematics marks (out of 100): ");
    scanf("%f", &maths);

    total = physics + chemistry + maths;
    average = total / 3.0f;

    printf("\nTotal PCM Marks : %.2f / 300\n", total);
    printf("Average PCM (%%) : %.2f%%\n", average);

    if (average >= 45.0f) {
        printf("Status          : Eligible for Engineering Admission!\n");
    } else {
        printf("Status          : Not Eligible (Minimum 45%% PCM average required).\n");
    }

    return 0;
}
