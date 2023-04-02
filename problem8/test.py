def find_nearest_power_of_two(n):
    power = 1
    while power < n:
        power *= 2
    return power

t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    # find the nearest power of two greater than or equal to a and b
    a_power = find_nearest_power_of_two(a)
    b_power = find_nearest_power_of_two(b)

    # calculate the maximum area of the rectangular region
    max_area = a_power * b_power

    # calculate the minimum possible value of the third side of the triangle
    min_c = max(a_power - a, b_power - b)

    # calculate the maximum possible value of the third side of the triangle
    max_c = ((a_power + b_power - 2) - max(a_power - a, b_power - b)) + 1

    # check if c is within the valid range
    if c < min_c or c > max_c:
        print(-1)
    else:
        # calculate the minimum possible value of the area of the triangle
        min_triangle_area = max(a_power - c, 1) * max(b_power - (c - (a_power - a)), 1)

        # calculate the maximum possible value of the area of the triangle
        max_triangle_area = min(max_area - (a_power - c) * (b_power - (c - (a_power - a))), a_power * b_power)

        # print the range of possible areas of the triangle
        print(min_triangle_area, max_triangle_area, end=" ")
        if min_triangle_area == max_triangle_area:
            print(1)
        elif min_triangle_area < max_triangle_area:
            print(2)
        else:
            print(0)
