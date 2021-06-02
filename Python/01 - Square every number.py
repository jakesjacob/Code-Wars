def square_digits(num):

    string = ""

    for digit in str(num):
        digitInt = int(digit)
        square = digitInt*digitInt
        string = string + str(square)
        output = int(string)
    return output
