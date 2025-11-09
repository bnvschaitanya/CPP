x = input("Enter the pattern: ").strip()

output = "".join(chr(ord(x[i-1]) + int(x[i])) if i % 2 != 0 else x[i] for i in range(len(x)))
print(output)
