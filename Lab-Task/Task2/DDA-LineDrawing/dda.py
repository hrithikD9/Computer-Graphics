
def dda(x1, y1, x2, y2):
    dx = x2 - x1
    dy = y2 - y1

    steps = max(abs(dx), abs(dy))

    if steps == 0:
        print(f"({round(x1)}, {round(y1)})")
        return

    x_inc = dx / steps
    y_inc = dy / steps

    x, y = x1, y1

    for i in range(steps + 1):
        print(f"({round(x)}, {round(y)})")
        x += x_inc
        y += y_inc


# Example
dda(2,2,8,5)
