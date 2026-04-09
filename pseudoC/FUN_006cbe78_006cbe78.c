// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cbe78
// Entry Point: 006cbe78
// Size: 192 bytes
// Signature: undefined FUN_006cbe78(void)


void FUN_006cbe78(long *param_1)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  EngineManager *pEVar4;
  long lVar5;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (1 < (ulong)((param_1[1] - *param_1 >> 3) * -0x5555555555555555)) {
    local_3c = 0.0;
    pEVar4 = (EngineManager *)EngineManager::getInstance();
    bVar3 = EngineManager::getFrameLimiter(pEVar4,&local_3c);
    lVar5 = *param_1;
    pcVar1 = (char *)(lVar5 + 0x19);
    if ((*(byte *)(lVar5 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar5 + 0x28);
    }
    StringUtil::atof(pcVar1,&local_3c);
    if (local_3c <= 1.0) {
      local_3c = 1.0;
    }
    pEVar4 = (EngineManager *)EngineManager::getInstance();
    EngineManager::setFrameLimiter(pEVar4,(bool)(bVar3 & 1),local_3c);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


