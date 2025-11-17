/*
* Programmer: Magda Hussein
 * Date:       11/14/2025
 * Program:    Show.cpp
 * Purpose:    First_struct
 */
#include "Show.h"

// Getters
std::string Show::getTitle() const {
    return title;
}

std::string Show::getVenue() const {
    return venue;
}

int Show::getShowTime() const {
    return showTime;
}

// Setters
void Show::setTitle(const std::string& newTitle) {
    title = newTitle;
}

void Show::setVenue(const std::string& newVenue) {
    venue = newVenue;
}

void Show::setShowTime(int newShowTime) {
    showTime = newShowTime;
}
