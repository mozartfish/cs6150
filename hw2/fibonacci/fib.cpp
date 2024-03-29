#include <iostream>
#include <chrono>
#include <unistd.h>

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
    long num_1 = 45;
    long num_2 = 50;
    long num_3 = 55;
       // time stuff
    auto start = chrono::steady_clock::now();
    // long result_1 = fibonacci(num_1);
    // long result_2 = fibonacci(num_2);
    long result_3 = fibonacci(num_3);
    auto end = chrono::steady_clock::now();


    // auto start = high_resolution_clock::now();
    // long result_1 = fibonacci(num_1);
    // long result_2 = fibonacci(num_2);
    // long result_3 = fibonacci(num_3);
    // auto stop = high_resolution_clock::now();

    cout << "Elapsed time in seconds: "
    << chrono::duration_cast<chrono::seconds>(end - start).count()
    << " sec" << endl;

    return 0;

    // cout << "The 45th fibonacci number is: " << result_1 << endl;
    // // cout << "The 50th fibonacci number is: " << result_2 << endl;
    // // cout << "The 55th fibonacci number is: " << result_3 << endl;
}
