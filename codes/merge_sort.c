
    #include <stdio.h>
    void main()
    {
 
        int array1[50], array2[50], array3[100], m, n, i, j, k = 0;
        printf("\n Enter size of array Array 1: ");
        scanf("%d", &m);                                  // enter one array element
 
        printf("\n Enter sorted elements of array 1: \n");
        for (i = 0; i < m; i++) 
        {
            scanf("%d", &array1[i]);                      // enter other array element
        }
 
        printf("\n Enter size of array 2: ");
        scanf("%d", &n);
 
        printf("\n Enter sorted elements of array 2: \n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", &array2[i]);
        }
 
        i = 0;
        j = 0;
 
        while (i < m && j < n)                             //according to increasing order insert into third array
        {
            if (array1[i] < array2[j]) 
            {
                array3[k] = array1[i];
                i++;
            }
 
            else 
            {
                array3[k] = array2[j];
                j++;
            }
            k++;
        }
 
        if (i >= m)                                   // if first one array size lesser than other one then put remaining 
        {                                             // element from other one to third one
            while (j < n) 
            {
                array3[k] = array2[j];
                j++;
                k++;
            }
        }
 
        if (j >= n)                               // if second one array size lesser than first one then put remaining 
        {                                        // element from first one to third one
            while (i < m)
            {
                array3[k] = array1[i];
                i++;
                k++;
            }
        }
 
        printf("\n After merging: \n");
        for (i = 0; i < m + n; i++) 
        {
            printf("\n%d", array3[i]);
        }
 
    }