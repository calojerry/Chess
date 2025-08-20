# run: `%pip install python-chess` before running next line
import chess

# ASCII title and instructions
TITLE = r"""
  ____ _   _ _____ ____ ____  
 / ___| | | | ____/ ___/ ___| 
| |   | |_| |  _| \___ \___ \ 
| |___|  _  | |___ ___) |__) |
 \____|_| |_|_____|____/____/ 
"""

INSTRUCTIONS = "Enter moves in UCI format (e.g., e2e4) or END to quit\n"

def print_board_with_axes(board, invert=False):
    """Prints the board with rank and file axes."""

    board_str = board.unicode()  # use unicode representation
    lines = board_str.splitlines()

    if invert:
        # for black’s perspective: flip ranks and rows
        lines = [line[::-1] for line in lines[::-1]]
        files = "h  g  f  e  d  c  b  a"  # black sees files reversed
    else:
        files = "a  b  c  d  e  f  g  h" # for white

    print("  " + files)

    for i, line in enumerate(lines):
        if invert:
            rank = i + 1 # black sees ranks 1→e8 from top to bottom
        else:
            rank = 8 - i # white sees ranks 8→1 from top to bottom
        print(f"{rank} {line}")

    print("  " + files)

def check_end_conditions(board):
    """Check why the game ended and return a message if so."""

    outcome = board.outcome()  # unified result object

    if outcome:  
        # game ended, check why
        if outcome.termination == chess.Termination.CHECKMATE:
            winner = "White" if outcome.winner else "Black"
            return f"Checkmate — {winner} wins!"
        elif outcome.termination == chess.Termination.STALEMATE:
            return "Stalemate — draw."
        elif outcome.termination == chess.Termination.INSUFFICIENT_MATERIAL:
            return "Draw — insufficient material."
        elif outcome.termination == chess.Termination.SEVENTYFIVE_MOVES:
            return "Draw — 75-move rule."
        elif outcome.termination == chess.Termination.FIVEFOLD_REPETITION:
            return "Draw — fivefold repetition."
        elif outcome.termination == chess.Termination.FIFTY_MOVES:
            return "Draw — 50-move rule (claimed)."
        elif outcome.termination == chess.Termination.THREEFOLD_REPETITION:
            return "Draw — threefold repetition (claimed)."
        else:
            return f"Game ended: {outcome.termination}"
    return None  # game not over yet

def play_game():
    """Main game loop where players enter moves in UCI format."""

    board = chess.Board()

    # print ascii title and instructions once at the start
    print(TITLE)
    print(INSTRUCTIONS)

    while not board.is_game_over():
        # fullmove number (starts at 1 for white's first move)
        move_number = board.fullmove_number

        # show which side's turn and display board
        if board.turn == chess.WHITE:
            print(f"\nMove {move_number} — White's turn:")
            print_board_with_axes(board)
        else:
            print(f"\nMove {move_number} — Black's turn:")
            print_board_with_axes(board, invert=True)

        try:
            # ask player for input
            move_uci = input("Enter your move: ")

            # allow manual exit by typing END
            if move_uci.strip().upper() == "END":
                print("Game terminated by user.")
                break  # exit the game loop immediately

            # convert uci string into a move object
            move = chess.Move.from_uci(move_uci)

            # check legality of the move
            if move in board.legal_moves:
                board.push(move)  # apply move to board
            else:
                print("Invalid move. Please try again.")

        except ValueError:
            # raised if uci string is malformed
            print("Invalid input format. Please use UCI format (e.g., e2e4).")
        except Exception as e:
            # catch-all for any other error
            print(f"An unexpected error occurred: {e}")

    # reached if the loop ends by game over or END command
    result_msg = check_end_conditions(board)

    print("\nGame over!")

    if result_msg:
        print(result_msg)

    print_board_with_axes(board)

if __name__ == "__main__":
    try:
        play_game()
    except KeyboardInterrupt:
        # handle Ctrl+C gracefully
        print("\nGame interrupted by user.")
    except Exception as e:
        # catch fatal errors in main game
        print(f"Fatal error: {e}")
