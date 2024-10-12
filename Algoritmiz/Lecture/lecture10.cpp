#include <iostream>
#include <ctime>
void add_element(int*& array, int& size){
  int* newarr = new int[size + 1];
  for (size_t i = 0; i < size; i++){
    newarr[i] = array[i];
  }
  newarr[size + 1] = 0;

  delete[] array;
  
  array = newarr;

  size++; 
}

int main()
{

  srand(time(nullptr));
  // void srand(unsigned int seed)
  // srand - initializes rand(),
  // initializes with argument seed
  // usually seed is initialized with
  // different values, for example
  // function time().

  // time_t time(time_t* timeptr);
  // returns number of seconds
  // since 01.01.1970

  
  int row = 5, col = 5;
  /*
    int* arr = new int[row];

    for(size_t i = 0; i < row; i++){
      arr[i] = rand() % 10;
    }

    for (size_t i = 0; i < row; i++)
    {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    add_element(arr, row);

    for (size_t i = 0; i < row; i++)
    {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    */


  int** arr = new int* [row];
  for (int i = 0; i < row; i++){
    arr[i] = new int[col];
  }

  

for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      arr[i][j] = rand() % 10;
    }
}

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << std::endl;
}
std::cout << std::endl;
//create new array 
//with no. of cols less by 1 
//than previous array
int** newarr = new int*[row];
for (size_t i = 0; i < row; i++){
  newarr[i] = new int [col - 1];
}

//delete 3rd element
int index = 3;
for (size_t i = 0; i < row; i++){
  int cnt = 0;
  for (size_t j = 0; j < col; j++){
    if (j != index){
      newarr[i][cnt] = arr[i][j];
      cnt++;
    }
  }
}

for (size_t i = 0; i < row; i++){
  delete[] arr[i];
}
delete[] arr;

arr = newarr;
col--;


  for (int i = 0; i < row; i++)
  {
      for (int j = 0; j < col; j++)
      {
        std::cout << arr[i][j] << ' ';
      }
      std::cout << std::endl;
    }
}
