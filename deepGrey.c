#include <stdio.h>
#include <math.h>

/**
 * Calculates linear regression coefficients.
 * n: number of data points
 * x, y: arrays of data
 * m: pointer to store calculated slope
 * b: pointer to store calculated intercept
 * returns: 0 on success, 1 if denominator is zero (vertical line/singular)
 */
int linear_regression(int n, const double x[], const double y[], double* m, double* b) {
    double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_xx = 0.0;

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_xx += x[i] * x[i];
    }

    double denominator = (n * sum_xx - sum_x * sum_x);
    if (denominator == 0) return 1; // Avoid division by zero

    *m = (n * sum_xy - sum_x * sum_y) / denominator;
    *b = (sum_y * sum_xx - sum_x * sum_xy) / denominator;

    return 0;
}

int main() {
    double x[] = {1, 2, 3, 4, 5};
    double y[] = {2, 4, 5, 4, 5};
    double m, b;

    if (linear_regression(5, x, y, &m, &b) == 0) {
        printf("Equation: y = %.2fx + %.2f\n", m, b);
    } else {
        printf("Error: Could not calculate regression.\n");
    }

    return 0;
}
