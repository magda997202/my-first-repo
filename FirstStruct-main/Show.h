/*
* Programmer: Magda Hussein
 * Date:       11/14/2025
 * Program:    Show.h
 * Purpose:    First_struct
 */
#ifndef FIRSTSTRUCT_SHOW_H
#define FIRSTSTRUCT_SHOW_H

#include <string>

class Show {
private:
    std::string title;
    std::string venue;
    int showTime;

public:
    // Accessors
    std::string getTitle() const;
    std::string getVenue() const;
    int getShowTime() const;

    // Mutators
    void setTitle(const std::string& newTitle);
    void setVenue(const std::string& newVenue);
    void setShowTime(int newShowTime);
};

#endif // FIRSTSTRUCT_SHOW_H
