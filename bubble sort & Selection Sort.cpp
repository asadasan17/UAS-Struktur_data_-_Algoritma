using System;

namespace Sorting
{
    class Program
    {
        static void Main(string[] args)
        {
            string[,] data = new string[,] { { "Fahmi", "Jakarta" }, { "Romi", "Solo" }, { "Andri", "Jakarta" }, { "Fadillah", "Banyuwangi" }, { "Ruli", "Bandung" }, { "Rudi", "Bali" }, { "Dendi", "Purwokerto" }, { "Zaki", "Madiun" } };
            Console.WriteLine("Data sebelum diurutkan:");
            for (int i = 0; i < data.GetLength(0); i++)
            {
                Console.WriteLine(data[i, 0] + "\t" + data[i, 1]);
            }

            // Bubble Sort
            for (int i = 0; i < data.GetLength(0) - 1; i++)
            {
                for (int j = 0; j < data.GetLength(0) - i - 1; j++)
                {
                    if (string.Compare(data[j, 0], data[j + 1, 0]) > 0)
                    {
                        string tempNama = data[j, 0];
                        string tempAlamat = data[j, 1];
                        data[j, 0] = data[j + 1, 0];
                        data[j, 1] = data[j + 1, 1];
                        data[j + 1, 0] = tempNama;
                        data[j + 1, 1] = tempAlamat;
                    }
                }
            }

            Console.WriteLine("\nData setelah diurutkan dengan Bubble Sort:");
            for (int i = 0; i < data.GetLength(0); i++)
            {
                Console.WriteLine(data[i, 0] + "\t" + data[i, 1]);
            }

            // Selection Sort
            for (int i = 0; i < data.GetLength(0) - 1; i++)
            {
                int minIndex = i;
                for (int j = i + 1; j < data.GetLength(0); j++)
                {
                    if (string.Compare(data[j, 0], data[minIndex, 0]) < 0)
                    {
                        minIndex = j;
                    }
                }
                string tempNama = data[minIndex, 0];
                string tempAlamat = data[minIndex, 1];
                data[minIndex, 0] = data[i, 0];
                data[minIndex, 1] = data[i, 1];
                data[i, 0] = tempNama;
                data[i, 1] = tempAlamat;
            }

            Console.WriteLine("\nData setelah diurutkan dengan Selection Sort:");
            for (int i = 0; i < data.GetLength(0); i++)
            {
                Console.WriteLine(data[i, 0] + "\t" + data[i, 1]);
            }
        }
    }
}