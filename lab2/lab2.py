if __name__ == "__main__":
    x_1 = int(input("x_1 : "))
    y_1 = int(input("y_1 : "))
    z_1 = int(input("z_1 : "))

    x_2 = int(input("\nx_2 : "))
    y_2 = int(input("y_2 : "))
    z_2 = int(input("z_2 : "))

    dx = x_2 / x_1
    dy = y_2 / y_1
    dz = z_2 / z_1

    if dx == dy and dy == dz and dz == dx:
        print("Vec's are collinear")
    else:
        print("Vec's are not collinear")

    input()

