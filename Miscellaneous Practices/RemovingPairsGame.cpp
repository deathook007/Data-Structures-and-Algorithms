/* Alice and Bob are playing a game. At the beginning of the game, the players are given an array of integers numbers. Then, on each move one of the players can remove any two consecutive elements numbers[i] and numbers[i + 1] from the array if numbers[i] = numbers[i + 1], i.e. any matching pair of neighbouring elements can be removed.

The first player who is unable to make a move loses the game. Alice goes first.

Your task is to find out who will win the game, assuming both Alice and Bob play optimally. Return the name of the winner - "Alice" if Alice will win, and "Bob" if Bob will win.

Example

For numbers = [1, 4, 5, 5, 6], the output should be removingPairsGame(numbers) = "Alice".

Alice starts the game and removes the pair (numbers[2] = 5, numbers[3] = 5) from the array. After her move the array looks like [1, 4, 6].
Bob cannot make a move. So the winner is "Alice".
For numbers = [1, 3, 3, 1, 5], the output should be removingPairsGame(numbers) = "Bob".

Alice starts the game by removing the pair (numbers[1] = 3, numbers[2] = 3). After her move the array looks like [1, 1, 5].
Bob removes the pair (numbers[0] = 1, numbers[1] = 1), which leaves Alice with the array [5].
Alice can't play, so the winner is "Bob".
For numbers = [1, 2, 2, 3, 3, 1, 1], the output should be removingPairsGame(numbers) = "Alice".

Alice starts the game by removing the pair (numbers[1] = 2, numbers[2] = 2). After her move the array looks like [1, 3, 3, 1, 1]. Note, that Alice could also have removed any of pairs (numbers[3] = 3, numbers[4] = 3) or (numbers[5] = 1, numbers[6] = 1) as her first move.
After that Bob has several possible moves: he can either remove (numbers[1] = 3, numbers[2] = 3) or remove (numbers[3] = 1, numbers[4] = 1).
But no matter which pair Bob will remove, Alice will remove the remaining pair, leaving Bob only one number remaining, and thus winning the game.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer numbers

The initial array of integers.

Guaranteed constraints:
1 ≤ numbers.length ≤ 105,
1 ≤ numbers[i] ≤ 109.

[output] string

The name of the winner of the game: "Alice" or "Bob". */

string removingPairsGame(vector<int> numbers)
{
    long long int i, count = 0, n;
    n = numbers.size();
    stack<long long int> st;
    for (i = 0; i < n; i++)
    {
        if (st.empty() || st.top() != numbers[i])
        {
            st.push(numbers[i]);
        }
        else
        {
            count++;
            st.pop();
        }
    }
    if (count % 2 == 0)
    {
        return "Bob";
    }
    else
    {
        return "Alice";
    }
}
