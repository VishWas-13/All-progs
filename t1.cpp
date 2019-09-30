#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::size_t rooms(std::istream &in) {
    std::size_t height;
    std::size_t width;
    std::size_t roomcount{0};
    static const expr, char empty{'.'};
    in >> height >> width;
    if (!in)
        return roomcount;
    std::vector<std::size_t> tracker(width, 0);
    for (auto i{height}; i; --i) {
        std::string row;
        in >> row;
        if (row.size() != width) {
            in.setstate(std::ios::failbit);
            return roomcount;
        } 
        for (std::size_t j{0}; j < width; ++j) {
            if (row[j] == empty) {
                // continuation from line above?
                if (tracker[j]) {
                    // also from left?
                    if (j && tracker[j-1]) {
                        if (tracker[j-1] < tracker[j]) {
                            tracker[j] = tracker[j-1];
                            --roomcount;
                        } else if (tracker[j] < tracker[j-1]) {
                            // set all contiguous areas to the left
                            for (auto k{j-1}; k; --k) {
                                if (tracker[k]) {
                                    tracker[k] = tracker[j];
                                } else {
                                    break;
                                }
                            }
                            --roomcount;
                        }
                    }
                } else {
                    // continuation from left?
                    if (j && tracker[j-1]) {
                        tracker[j] = tracker[j-1];
                    } else {
                        tracker[j] = ++roomcount;
                    }
                }
            } else {
                tracker[j] = 0;
            }
        }
