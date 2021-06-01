def prints(a, n, ind):
    i = ind
     

    while i < n + ind :
        temp = a[(i % n)]
        print(temp, end = " ")
        i = i + 1
 
a = ['A', 'B', 'C', 'D', 'E', 'F']
n = len(a);
prints(a, n, 3);