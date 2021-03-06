#include<iostream>
using namespace std;

int search(int a[], int n, int x) {
  int right = n - 1; 
  int left = 0; 
  while (right >= left) {
    int mid = (left + right) / 2; 
 
    if (a[mid] == x)
      return mid;
 
    if (a[mid] > x)
      right = mid - 1;
      
    if (a[mid] < x)
      left = mid + 1;
  }
 
  return -1;
}
 
int main() 
{
  int a[1000], n, x;
  cin >> n >> x;
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  }
  int check = search(a, n, x);
  if(check == -1){
  	cout << "NO";
  }else{
  	cout << "YES";
  }
  return 0;
}
