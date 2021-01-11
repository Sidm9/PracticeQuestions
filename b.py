badi_matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
r = [[1,1],[1,3],[2,1],[2,3]]
s = [[2,0],[2,3],[3,0],[3,3]]
t = [[0,1],[0,2],[3,1],[3,2]]
    #00,01,10,11,20,21,20,21

# print(len(badi_matrix)) # ROWS
# print(len(badi_matrix[0])) # COLUMNS

def print_matrix(matrix) -> None:
    for i in range(0,len(matrix)):
        for j in range(0,len(matrix[0])):
            print(matrix[i][j] , end= "\t")
        print("\n")



a = s[0][0]
b = s[0][1]




def aaa():
    sum=0
    for i in range(len(s[0])):
        for j in range(b,len(s)):
            sum += badi_matrix[i+a][j]
    print(sum)



aaa()
