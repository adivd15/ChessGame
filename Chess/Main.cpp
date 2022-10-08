#include "ChessGame.h"

int main() {
    
    ChessGame game{};
    try {
        game.runChess();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << "/n";
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
    return 0;
}