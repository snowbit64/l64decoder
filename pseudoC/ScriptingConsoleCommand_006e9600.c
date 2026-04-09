// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingConsoleCommand
// Entry Point: 006e9600
// Size: 36 bytes
// Signature: undefined __thiscall ~ScriptingConsoleCommand(ScriptingConsoleCommand * this)


/* ScriptingConsoleCommand::~ScriptingConsoleCommand() */

void __thiscall ScriptingConsoleCommand::~ScriptingConsoleCommand(ScriptingConsoleCommand *this)

{
  ~ScriptingConsoleCommand(this);
  operator_delete(this);
  return;
}


