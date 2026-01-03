def solve():
    # Read two integers from input, separated by space
    a, b = map(int, input().split())

    # Check if their sum is equal to 1000
    if a + b == 1000:
        print("YES")
    else:
        print("NO")

# Ensure the solve function is called when the script is executed
if __name__ == '__main__':
    solve()
