import java.util.Arrays;

class TestRunner {
    public static void main(String[] args) {
        int[][] inputs = {
            {-4, -1, 0, 3, 10},
            {-7, -3, 2, 3, 11},
            {1, 2, 3, 4, 5},
            {-5, -4, -2, -1},
            {0},
            {},
            {-2, 0, 1},
            {-10, -10, -5, 0, 5, 10},
            {2, 2, 2, 2},
            {-3, -3, -3, -3}
        };

        int[][] expected = {
            {0, 1, 9, 16, 100},
            {4, 9, 9, 49, 121},
            {1, 4, 9, 16, 25},
            {1, 4, 16, 25},
            {0},
            {},
            {0, 1, 4},
            {0, 25, 25, 100, 100, 100},
            {4, 4, 4, 4},
            {9, 9, 9, 9}
        };

        for (int i = 0; i < inputs.length; i++) {
            int[] result = SortedSquares.sortedSquares(inputs[i]);
            boolean pass = Arrays.equals(result, expected[i]);
            System.out.println("Test " + (i + 1) + ": " + (pass ? "✅ Passed" : "❌ Failed"));
        }
    }
}
