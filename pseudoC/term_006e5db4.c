// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 006e5db4
// Size: 32 bytes
// Signature: undefined term(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GameScriptBinding::term() */

void GameScriptBinding::term(void)

{
  Application::getConsole();
  Console::removeScriptCommands();
  return;
}


