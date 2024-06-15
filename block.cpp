#include "block.h"

Block::Block() {
    cellSize = 30;
    rotationSize = 0;
    colors = GetCellColors(); // Assuming this function is defined elsewhere and returns a vector of Color
    rowOffset = 0;
    columnOffset = 0;
}

void Block::Draw() {
    std::vector<Position> tiles = GetCellPositions();
    for (Position item : tiles) {
        DrawRectangle(item.column * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int columns) {
    rowOffset += rows;
    columnOffset += columns;
}

std::vector<Position> Block::GetCellPositions() {
    std::vector<Position> tiles = cells[rotationSize];
    std::vector<Position> movedTiles;
    for (Position item : tiles) {
        Position newPos(item.row + rowOffset, item.column + columnOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

void Block::Rotate(){
    rotationSize ++;
    if(rotationSize == (int)cells.size()){
        rotationSize=0;
    }
}