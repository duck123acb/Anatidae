# Anatidae
Second attempt at a UCI Chess Engine

## TODO

- [x] Set up CMake

### Board Representation
- [x] Set up Board class
- [x] Set up bitboards
- [x] Basic moving
- [ ] Store side to move
- [ ] Store castling rights
- [ ] Store en passant square
- [ ] Store halfmove/fullmove counters
- [ ] Load starting position
- [ ] Load FEN strings

### Move Generation
- [ ] Pawn moves
- [ ] Knight moves
- [ ] Bishop moves
- [ ] Rook moves
- [ ] Queen moves
- [ ] King moves
- [ ] Captures
- [ ] Promotions
- [ ] En passant
- [ ] Castling

### Legality
- [ ] Detect checks
- [ ] Generate pseudo-legal moves
- [ ] Filter illegal moves
- [ ] Detect checkmate
- [ ] Detect stalemate

### Move Making
- [x] Make move
- [ ] Undo move
- [ ] Move history

### Testing
- [ ] Board printer
- [ ] FEN testing
- [ ] Perft
- [ ] Perft validation against known positions

### Search
- [ ] Static evaluation
- [ ] Minimax
- [ ] Alpha-beta pruning
- [ ] Iterative deepening
- [ ] Move ordering
- [ ] Transposition table

### UCI
- [x] uci
- [x] isready
- [ ] ucinewgame
- [ ] position
- [ ] go
- [ ] stop
- [x] quit

### Misc.
- [ ] Opening book
- [ ] Endgame tablebases
- [ ] Multithreading