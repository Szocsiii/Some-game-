#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include <string>

class Piece {
public:
    virtual std::vector<std::string> getValidMoves() const = 0;
    virtual std::string getType() const = 0;
    virtual ~Piece() {}
};

class Pawn : public Piece {
public:
    std::vector<std::string> getValidMoves() const override;
    std::string getType() const override { return "Pawn"; }
};

class Rook : public Piece {
public:
    std::vector<std::string> getValidMoves() const override;
    std::string getType() const override { return "Rook"; }
};

class Knight : public Piece {
public:
    std::vector<std::string> getValidMoves() const override;
    std::string getType() const override { return "Knight"; }
};

class Bishop : public Piece {
public:
    std::vector<std::string> getValidMoves() const override;
    std::string getType() const override { return "Bishop"; }
};

class Queen : public Piece {
public:
    std::vector<std::string> getValidMoves() const override;
    std::string getType() const override { return "Queen"; }
};

class King : public Piece {
public:
    std::vector<std::string> getValidMoves() const override;
    std::string getType() const override { return "King"; }
};

#endif // PIECE_H