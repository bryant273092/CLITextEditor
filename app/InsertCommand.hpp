#include "Command.hpp"
class InsertCommand : public Command
{
public:
    explicit InsertCommand(char character);
    void execute(EditorModel& model);
    void undo(EditorModel& model);
    
};