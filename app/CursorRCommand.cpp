#include "CursorRCommand.hpp"

CursorRCommand::CursorRCommand(){
    
}

void CursorRCommand::execute(EditorModel& model)
{
    model.increaseColumn();

}
void CursorRCommand::undo(EditorModel& model)
{
    model.decreaseColumn();
}