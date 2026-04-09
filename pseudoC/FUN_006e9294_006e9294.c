// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9294
// Entry Point: 006e9294
// Size: 176 bytes
// Signature: undefined FUN_006e9294(void)


void FUN_006e9294(char **param_1)

{
  byte bVar1;
  Console *pCVar2;
  ScriptingConsoleCommand *this;
  char *pcVar3;
  
  pCVar2 = (Console *)Application::getConsole();
  bVar1 = Console::hasCommand(pCVar2,*param_1);
  if ((bVar1 & 1) == 0) {
    if (*(int *)(param_1 + 7) == 8) {
      pcVar3 = param_1[6];
    }
    else {
      pcVar3 = (char *)0x0;
    }
    pCVar2 = (Console *)Application::getConsole();
    this = (ScriptingConsoleCommand *)operator_new(0x58);
                    /* try { // try from 006e9308 to 006e930f has its CatchHandler @ 006e9344 */
    ScriptingConsoleCommand::ScriptingConsoleCommand(this,*param_1,param_1[2],param_1[4],pcVar3);
    Console::addCommand(pCVar2,(IConsoleCommand *)this);
  }
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = ~bVar1 & 1;
  return;
}


