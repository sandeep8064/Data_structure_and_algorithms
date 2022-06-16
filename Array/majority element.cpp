 int majorityElement(int a[], int size)
    {
        
        // your code here
       int element = a[0];
        int count = 1;
        for (int i = 1; i < size; i++) {
            if (a[i] != element) {
                count--;
            } else {
                count++;
            }
            if (count < 0) {
                element = a[i];
                count = 1;
            }
        }
        
        count = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] == element)
                count ++;
        }
        
        return (count > size/2) ? element : -1;
        
       
    }