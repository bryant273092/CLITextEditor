// EditorModel.cpp
//
// ICS 45C Spring 2020
// Project #4: People Just Love to Play with Words
//
// Implementation of the EditorModel class

#include "EditorModel.hpp"
#include "EditorException.hpp"


EditorModel::EditorModel()
{
}


int EditorModel::cursorLine() const
{
    return cursor_line;
}


int EditorModel::cursorColumn() const
{
    return cursor_column;
}


int EditorModel::lineCount() const
{
    return line_map.size();
}


const std::string& EditorModel::line(int lineNumber) const
{
    static std::string removeThis = "heyhey!";
    return removeThis;
}


const std::string& EditorModel::currentErrorMessage() const
{
    static std::string removeThis = "";
    return removeThis;
}


void EditorModel::setErrorMessage(const std::string& errorMessage)
{
}


void EditorModel::clearErrorMessage()
{
}

void EditorModel::incrementLine()
{
    cursor_line++;
}
void EditorModel::decreaseLine()
{
    cursor_line--;
}
void EditorModel::increaseColumn()
{
    cursor_column++;
}
void EditorModel::decreaseColumn(){
    cursor_column--;
}
