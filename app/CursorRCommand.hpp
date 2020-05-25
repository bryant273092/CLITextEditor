#include "Command.hpp"

class CursorRCommand : public Command
{
public:
    CursorRCommand();
    void execute(EditorModel& model);
    void undo(EditorModel& model);

};