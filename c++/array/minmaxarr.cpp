#include <bits/stdc++.h

using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[]) {
  struct Pair minmax;
  int i=0;

  int l = sizeof(arr)/sizeof(arr[0]);
  
  if (l%2 == 0) {
    if (arr[0]>arr[1]) {
      minmax.max = arr[0];
      minmax.min = arr[1];
    }
    else {
      minmax.min = arr[0];
      minmax.max = arr[1];
    }
    i=2;
  }
  else {
    minmax.min = arr[0];
    minmax.max = arr[0];
    i=1;
  }
  while(i<=n-1) {
    if (arr[i] > arr[i + 1])        
        {
            if(arr[i] > minmax.max)    
                minmax.max = arr[i];
                 
            if(arr[i + 1] < minmax.min)        
                minmax.min = arr[i + 1];    
        }
        else       
        {
            if (arr[i + 1] > minmax.max)    
                minmax.max = arr[i + 1];
                 
            if (arr[i] < minmax.min)        
                minmax.min = arr[i];    
        }
         
        // Increment the index by 2 as
        // two elements are processed in loop
        i += 2;
  }
}
