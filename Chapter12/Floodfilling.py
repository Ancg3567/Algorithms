M = 8
N = 8


def FloodFilling(screen, x, l, OldColor, NewColor):
    if (x < 0 or x >= M or l < 0 or
            l >= N or screen[x][y] != OldColor or
            screen[x][l] == NewColor):
        return

    screen[x][l] = NewColor

    FloodFilling(screen, x + 1, l, OldColor, NewColor)
    FloodFilling(screen, x - 1, l, OldColor, NewColor)
    FloodFilling(screen, x, l + 1, OldColor, NewColor)
    FloodFilling(screen, x, l - 1, OldColor, NewColor)

def floodFill(screen, x, l, NewColor):
    OldColor = screen[x][l]
    if (OldColor == NewColor):
        return
    FloodFilling(screen, x, l, OldColor, NewColor)


screen = [[1, 1, 1, 1, 1, 1, 1, 1],
          [1, 1, 1, 1, 1, 1, 0, 0],
          [1, 0, 0, 1, 1, 0, 1, 1],
          [1, 2, 2, 2, 2, 0, 1, 0],
          [1, 1, 1, 2, 2, 0, 1, 0],
          [1, 1, 1, 2, 2, 2, 2, 0],
          [1, 1, 1, 1, 1, 2, 1, 1],
          [1, 1, 1, 1, 1, 2, 2, 1]]

x = 4
y = 4
NewColor = 3
floodFill(screen, x, l, NewColor)

print("After call to floodFill:")
for i in range(M):
    for j in range(N):
        print(screen[i][j], end=' ')
    print()
