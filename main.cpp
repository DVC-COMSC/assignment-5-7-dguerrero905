def generate_sequence(first, second, n):
    sequence = [first, second]
    for i in range(2, n):
        next_num = sequence[-1] + sequence[-2]
        sequence.append(next_num)
    return sequence

def main():
    first = int(input("Enter the first initial value: "))
    second = int(input("Enter the second initial value: "))
    n = int(input("Enter the number of sequences (N > 2): "))
    
    if n <= 2:
        print("Number of sequences must be greater than 2.")
        return
    
    sequence = generate_sequence(first, second, n)
    
    print("Sequence of numbers:")
    for num in sequence:
        print(num)

if __name__ == "__main__":
    main()
