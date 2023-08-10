#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "RU");
	int n, m;

	// Задача 1. Сортирова первых N элементов
	/*std::cout << "Задача 1. \nИзначальный массив: \n";
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;//[1...10]
		std::cout << arr1[i] << ' ';
	}
		std::cout << std::endl;

		std::cout << " Введите количество элементов для сортировки ->";
		std::cin >> n;
		while (n<2 || n>size1) {
			std::cout << "Ошибка ввода! Повторите ввод -> ";
			std::cin >> n;

		}
		// Пузырьковая сортировка
		for (int i = n - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (arr1[j] > arr1[j + 1])
					std::swap(arr1[j], arr1[j + 1]);

		std::cout << " Итоговый массив: \n";
		for (int i = 0; i < size1; i++)
			std::cout << arr1[i] << ' ';
			std::cout << "\n\n";*/


			// Задача 2. Температура в янавре
			/*std::cout << " Задача 2. \nТемпература в январе: \n ";
			const int january_days = 31;
			int january_temperature[january_days]{};
			for (int day_number = 0; day_number < january_days; day_number++) {
				january_temperature[day_number] = rand() % (-5 + 1 - (-30)) + (-30);
				//rand () % 26 -30 	//[-30..-5]
				std::cout << january_temperature[day_number] << ", ";

			}
			std::cout << "\b\b.\nВведите число -> ";
			std::cin >> n;
			int sum = 0; // для суммы температур января
			int counter = 0;// для подсчета температур < n
			for (int day_number = 0; day_number < january_days; day_number++) {
				sum += january_temperature[day_number];
				if (january_temperature[day_number] < n)
					counter++;
			 }
			std::cout << " Ср.температура: " << sum / double(january_days) << std::endl;
			std::cout << " Количество дней, когда температура ниже " << n << ": " << counter << "\n\n";
			*/

			// Задача 3. Вхождение в диапазон
			/*std::cout << " Задача 3. \nВведите начало диапазона -> ";
			std::cin >> n;
			std::cout << " Введите конец диапазона -> ";
			std::cin >> m;

			const int size3 = 20;
			int arr3[size3]{};
			std::cout << "Итог:\n";
			srand(time(NULL));
			for (int i = 0; i < size3; i++) {
				arr3[i] = rand() % 100; // [0...100)
				//if (arr3[i] >= n && arr3[i] <= m)
					//std::cout << i + 1 << ". " << arr3[i] << "!\n";
				//else
					//std::cout << i + 1 << ". " << arr3[i] << "\n";
				std::cout << i + 1 << ". " << arr3[i] << (arr3[i] >= n && arr3[i] <= m ? "!" : "") << '\n';
			}*/

	/*std::cout << "Задача 1. \nОдномерный массив размером в 10 элементов: \n\n";
	const int size1 = 10;
	int arr1[size1]{};
	int sum = 0;
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << ' ';
		sum += arr1[i];
	}
		std::cout << "\n\nСред.ариф. массива = " << sum / double(size1) << '\n';
		int k = 0;
		for(int i = 0; i < size1; i++)
		if (arr1[i] < sum / double(size1)) {
			k++;
		}
		std::cout << "\nКол-во элементов, значение которых меньше средн.ариф.= " << k << std::endl;
	*/

	std::cout << "Задача 2. \n Массив №1\n";


	return 0;
}