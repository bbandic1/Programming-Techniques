## Explanation of the Provided C Code

The provided C code defines structures and functions to represent and verify a chessboard's configuration. The `main` function serves as an entry point to the program, printing a simple message.

### Enumerations

Two enumerations are defined to represent chess pieces and their colors:

#### `enum figure`
- `PIJUN` (Pawn)
- `LOVAC` (Bishop)
- `SKAKAC` (Knight)
- `TOP` (Rook)
- `KRALJICA` (Queen)
- `KRALJ` (King)
- `PRAZNO` (Empty)

#### `enum colour`
- `CRNA` (Black)
- `BIJELA` (White)
- `PRAZNA` (Empty)

### Structure: `Figura`

The `Figura` structure combines a chess piece with its color.

## Function: `provjeri_plocu`

The `provjeri_plocu` function verifies the validity of a given chessboard configuration against the standard initial setup. It takes a single argument:
- `struct Figura ploca[8][8]`: The chessboard represented as an 8x8 array of `Figura` structures.

### Steps of `provjeri_plocu`

1. **Initialization**:
    - An array `brojac` is initialized to count occurrences of each piece for each color.
    - The `poc_ploca` array defines the standard initial setup of a chessboard.

2. **Counting Pieces**:
    - The function iterates through the board, updating the `brojac` array with the count of each piece for each color.

3. **Validation**:
    - The function checks if any piece exceeds its maximum allowed count:
        - No more than 8 pawns of each color.
        - No more than 2 bishops, knights, or rooks of each color.
        - No more than 1 queen of each color.
        - Exactly 1 king of each color.

4. **Comparison with Initial Setup**:
    - If all pieces have valid counts, the function compares the current board with the initial setup to check for any deviations.

5. **Return Values**:
    - Returns `0` if any piece count exceeds the allowed maximum.
    - Returns `1` if the piece counts are valid but the configuration differs from the initial setup.
    - Returns `2` if the board matches the initial setup exactly.