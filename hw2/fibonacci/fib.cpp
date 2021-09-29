#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long fibonacci(long n)
{
    // Recursive Solution
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    // // Dynamic Programming Solution
    // long f[n + 2];
    // long i;
    // f[0] = 1;
    // f[1] = 1;
    // for (i = 2; i <= n; i++)
    // {
    //     f[i] = f[i - 1] + f[i - 2];
    // }

    // return f[n];
}

int main()
{
    long num_1 = 35;
    long num_2 = 36;
    long num_3 = 37;
    auto start = high_resolution_clock::now();
    // long result_1 = fibonacci(num_1);
    // long result_2 = fibonacci(num_2);
    long result_3 = fibonacci(num_3);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;

    // cout << "The 45th fibonacci number is: " << result_1 << endl;
    // // cout << "The 50th fibonacci number is: " << result_2 << endl;
    // // cout << "The 55th fibonacci number is: " << result_3 << endl;
}
