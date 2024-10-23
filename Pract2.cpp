// Pract2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>  
//v11(3)
//struct Address
//    { 
//    char city[50];
//    char street[50];
//    char zipCode[10];
//};
//v11(3)
//void Print(Address&add)
//{
//    std::cout << "Your full address:"<<std::endl; 
//    std::cout << "City:" <<" " << add.city << std::endl;
//    std::cout << "Street:" << " " << add.street << std::endl;
//    std::cout << "Mailing address:" << " " << add.zipCode << std::endl;
//
//}
//11(4)
//class Matrix
//{
//private: int data[2][2];
//public: Matrix() 
//{
//        for (int i = 0; i < 2; i++)
//        {
//            for (int j = 0; j < 2; j++)
//            {
//                data[i][j] = 0;
//            }
//        }
//}
//public: void Zap(int data2[2][2]) 
//{
//        for (int i = 0; i < 2; i++) 
//        {
//            for (int j = 0; j < 2; j++) 
//            {
//                data[i][j] = data2[i][j];
//            }
//        }
//};
//      void Plus(Matrix&m) 
//      {
//          for (int i = 0; i < 2; i++)
//          {
//              for (int j = 0; j < 2; j++) 
//              {
//                  data[i][j] += m.data[i][j];
//              }
//          }
//      }
//
//   
//      void Print() {
//          for (int i = 0; i < 2; i++)
//          {
//              for (int j = 0; j < 2; j++)
//              {
//                  std::cout << data[i][j] << " ";
//              }
//              std::cout << std::endl;
//          }
//      }
//};
int main()
{
   // srand(time(NULL));
   //     //v11(1)
   // int array[20];
   // int c = 0;
   // for (int i = 0; i < 20; i++)
   //{
   //     array[i] = rand() % 20-10;
   //    std::cout << array[i] << " ";
   //     if (array[i] > 0)
   //     {
   //         c++;
   //     }
   //   
   //}
   // std::cout<<std::endl << "Count of positive values=" << c << std::endl;
 
   
   //v11(2)
 /* int sum = 0;
    int array[3][3][3];
    std::cout << "Еnter 27 values" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                std::cin >> array[i][j][k];
            }
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        sum = 0;
        std::cout << std::endl;
        for (int j = 0; j < 3; j++) 
        {
            sum = 0;
            std::cout << std::endl;
            for (int p = 0; p < 3; p++) 
            {

               std:: cout << "[" << i << "][" << j << "][" << p << "]=" << array[i][j][p] << std::endl;
                sum += array[i][j][p];

            }
            std::cout << std::endl << sum << std::endl;

        }
    }*/
    //v11(3)
  //Address ad;
  //std::cout << "Enter your city:"<<std::endl;
  //std::cin.getline(ad.city, 50);
  //std::cout << "Enter your street:"<< std::endl;
  //std::cin.getline(ad.street, 50);
  //std::cout << "Enter your mailing address:"<< std::endl;
  //std::cin.getline(ad.zipCode, 10);
  //Print(ad);
    //v11(4)
  /*  Matrix mat1;
    int m1[2][2] = { {2, 2}, {3, 3} };
    mat1.Zap(m1);

    Matrix mat2;
    int m2[2][2] = { {4, 5}, {1, 7} };
    mat2.Zap(m2);

    std::cout << "Matrix 1=" << std::endl;
    mat1.Print();

    std::cout << "Matrix 2=" << std::endl;
    mat2.Print();

    mat1.Plus(mat2);
    std::cout << "Result=" << std::endl;
    mat1.Print();*/
   


}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
