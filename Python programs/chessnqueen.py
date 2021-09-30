reserved = [[c == '*' for c in input()]for _ in range(8)]

count = 0
cols = [0] * 8
diag1 = [0] * 15
diag2 = [0] * 15


def queen(y):

    global count, cols, diag1, diag2

    if y == 8:
        count += 1
        return

    for x in range(8):
        if cols[x] or diag1[x + y] or diag2[x - y + 7] or reserved[y][x]:
            continue
        cols[x] = diag1[x + y] = diag2[x - y + 7] = 1
        queen(y+1)
        cols[x] = diag1[x + y] = diag2[x - y + 7] = 0


queen(0)
print(count)
