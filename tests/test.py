from sorted_squares import sorted_squares

test_cases = [
    ([-4, -1, 0, 3, 10], [0, 1, 9, 16, 100]),
    ([-7, -3, 2, 3, 11], [4, 9, 9, 49, 121]),
    ([1, 2, 3, 4, 5], [1, 4, 9, 16, 25]),
    ([-5, -4, -2, -1], [1, 4, 16, 25]),
    ([0], [0]),
    ([], []),
    ([-2, 0, 1], [0, 1, 4]),
    ([-10, -10, -5, 0, 5, 10], [0, 25, 25, 100, 100, 100]),
    ([2, 2, 2, 2], [4, 4, 4, 4]),
    ([-3, -3, -3, -3], [9, 9, 9, 9]),
]

for idx, (inp, expected) in enumerate(test_cases):
    result = sorted_squares(inp)
    print(f"Test {idx + 1}: {'✅ Passed' if result == expected else '❌ Failed'}")
