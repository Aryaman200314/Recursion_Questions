// #include <iostream>
// using namespace std;
// int main()
// {
//     char *ptr;
//     char Str[] = "abcdefg";
//     ptr = Str;
//     ptr = ptr + 5;
//     cout << ptr;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main ()
// {
//   int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
//   return 0;
// }



// #include<iostream>
// using namespace std;
// int main() {
//   char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st];
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int x  = 5;
//     int *ptr = &x;
//     cout<<*ptr;
//     cout<<endl;
//     cout<<ptr;
// }

// #include <iostream>
// using namespace std;
// void changeSign(int *p){
//   *p = (*p)  *  -1;
// }

// int main(){
//   int a = 10;
//   changeSign(&a);
//   cout << a << endl;
// }



// #include<iostream>
// using namespace std;
// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }


// #include<iostream>
// using namespace std;
// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     // Null Pointer 
//     int * ptr = NULL;
//     cout << "The value of ptr is " << ptr;
//     return 0;
// }


//DOUBLE POINTER
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int *ptr = &a;
//     int **ptrr = &ptr;
//     cout << "Value of a" << a << endl;
//     cout << "This is the address of a" << &a << endl;
//     cout << "This will also print the value of a " << *ptr << endl;
//     cout << "This will also print the address of a " << ptr << endl;
//     cout << "This will also print the value of a" << **ptrr << endl;
//     cout << "This will also print the address  of pointer ptr " << ptrr << endl;
// }




// #include<iostream>
// using namespace std;
// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }

// int main()
// {
//    char *x = "ninjasquiz";
//    char *y = "codingninjas";
//    char *t;
//    swap(x, y);
//    cout<<x << " "<<y;
//    t = x;
//    x = y;
//    y = t; 
//    cout<<" "<<x<< " "<<y;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int f(int x, int *py, int **ppz)
// {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// int main()
// {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//   int ***r, **q, *p, i=8;
//   p = &i;
//   (*p)++;
//   q = &p;
//   (**q)++;
//   r = &q;
//   cout<<*p << " " <<**q << " "<<***r;
//   return 0;
// }

#include<iostream>
using namespace std;
void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}