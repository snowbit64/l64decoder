// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e98a0
// Entry Point: 006e98a0
// Size: 48 bytes
// Signature: undefined FUN_006e98a0(void)


void FUN_006e98a0(char **param_1)

{
  Console *this;
  
  this = (Console *)Application::getConsole();
  Console::removeCommand(this,*param_1);
  return;
}


