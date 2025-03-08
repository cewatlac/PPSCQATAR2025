a = int (input())
b = 1
while True:
    a+=1
    ye_st = str(a)
    if ye_st[0] != ye_st[1] and ye_st[0] != ye_st[2] and  ye_st[0] != ye_st[3] and ye_st[1] != ye_st[2] and ye_st[1] != ye_st[3] and ye_st[2] != ye_st[3]:
        break
print(a)
