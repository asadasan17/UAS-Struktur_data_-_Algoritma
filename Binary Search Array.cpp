using System;

namespace BinarySearchExample
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] data = new int[] { 19, 40, 10, 90, 2, 50, 60, 50, 1 };
            Array.Sort(data);

            Console.Write("Data setelah diurutkan: ");
            for (int i = 0; i < data.Length; i++)
            {
                Console.Write(data[i] + " ");
            }
            Console.WriteLine();

            Console.Write("Masukkan angka yang ingin dicari: ");
            int target = int.Parse(Console.ReadLine());

            int result = BinarySearch(data, target);

            if (result != -1)
            {
                Console.WriteLine("Angka " + target + " ditemukan pada indeks ke-" + result);
            }
            else
            {
                Console.WriteLine("Angka " + target + " tidak ditemukan dalam array");
            }
        }

        static int BinarySearch(int[] data, int target)
        {
            int left = 0;
            int right = data.Length - 1;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;

                if (data[mid] == target)
                {
                    return mid;
                }
                else if (data[mid] < target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }

            return -1;
        }
    }
}
