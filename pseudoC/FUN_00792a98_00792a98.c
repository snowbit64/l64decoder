// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792a98
// Entry Point: 00792a98
// Size: 60 bytes
// Signature: undefined FUN_00792a98(void)


void FUN_00792a98(char *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = I3DStreamingManager::getInstance();
  cVar1 = *param_1;
  *(char *)(lVar2 + 0x38) = cVar1;
  if (cVar1 != '\0') {
    Event::post();
    return;
  }
  return;
}


