// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingConsoleCommand
// Entry Point: 006e9550
// Size: 140 bytes
// Signature: undefined __thiscall ~ScriptingConsoleCommand(ScriptingConsoleCommand * this)


/* ScriptingConsoleCommand::~ScriptingConsoleCommand() */

void __thiscall ScriptingConsoleCommand::~ScriptingConsoleCommand(ScriptingConsoleCommand *this)

{
  ScriptingConsoleCommand SVar1;
  LuauScriptSystem *this_00;
  
  *(undefined ***)this = &PTR__ScriptingConsoleCommand_00fd9448;
  if (*(long *)(this + 0x50) != 0) {
                    /* try { // try from 006e9578 to 006e9587 has its CatchHandler @ 006e95dc */
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,*(void **)(this + 0x50));
  }
  if (((byte)this[0x38] & 1) == 0) {
    SVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    SVar1 = this[0x20];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    SVar1 = this[8];
  }
  if (((byte)SVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


