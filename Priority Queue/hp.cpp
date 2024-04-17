        #include <iostream>

        // Function to partition the array and return the pivot index
        int partition(int arr[], int low, int high)
        {
            int pivot = arr[high];
            int i = low - 1;

            for (int j = low; j <= high - 1; j++)
            {
                if (arr[j] < pivot)
                {
                    i++;
                    std::swap(arr[i], arr[j]);
                }
            }
            std::swap(arr[i + 1], arr[high]);
            return i + 1;
        }

        // Function to perform quicksort
        void quicksort(int arr[], int low, int high)
        {
            if (low < high)
            {
                int pivotIndex = partition(arr, low, high);
                quicksort(arr, low, pivotIndex - 1);
                quicksort(arr, pivotIndex + 1, high);
            }
        }

        int main()
        {
            const int N = 100000;
            int *array = new int[N];

            // Initialize the array
            for (int i = 0; i < N; ++i)
            {
                array[i] = rand() % 1000;
            }

            // Perform Quicksort
            quicksort(array, 0, N - 1);

            // Print sorted array (you can comment this part out if you're not interested in printing)
            for (int i = 0; i < N; ++i)
            {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;

            delete[] array;

            return 0;
        }
