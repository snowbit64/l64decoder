// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: warnMessage
// Entry Point: 006d4b6c
// Size: 88 bytes
// Signature: undefined __cdecl warnMessage(char * param_1, uint param_2)


/* Console::warnMessage(char const*, unsigned int) */

void Console::warnMessage(char *param_1,uint param_2)

{
  long lVar1;
  
  (**(code **)(*(long *)param_1 + 0x10))(param_1,param_2);
  lVar1 = EngineManager::getInstance();
  if (((*(char *)(lVar1 + 0x339) != '\0') &&
      (lVar1 = EngineManager::getInstance(), *(char *)(lVar1 + 0x33a) != '\0')) &&
     (param_1[0xb8] == '\0')) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 1;
    param_1[0xba] = '\x01';
  }
  return;
}


