
#include <iostream>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <vector>
#define N 5                                            
 
using namespace std;
 

int search(int *mas, int b, int e, int x) {
    int mid=floor((b+e)/2); 
    int m, j, k; vector<int> massiv(0); m=mid;
    if (b>=e) return -1;
    if (mas[mid]==x) 
        {
                                   
        }
    else if (x<mas[mid]) search(mas, b, mid, x);
        else search(mas,mid+1,e,x);     
}
 
int main(int argc, char** argv) {
    cout << "Massiv iz " << N << " chisel" << endl;
    int mas[N]; int s; clock_t start, end; 
//ввод элементов и их вывод
    for (int i=0; i<N; ++i)
        cin >> mas[i];
    for (int i=0; i<N; ++i)
        cout << mas[i] << " ";
    
    cout << endl;
    start=clock();
    search(mas, 0, N-1, 3);             
    end=clock();
    
    
    printf("\nSearch %f second(s)\n", ((double)end-start)/(double) CLOCKS_PER_SEC );
    return 0;
}
