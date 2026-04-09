// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8568
// Entry Point: 006e8568
// Size: 96 bytes
// Signature: undefined FUN_006e8568(void)


void FUN_006e8568(void)

{
  long lVar1;
  StopWatch aSStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  StopWatch::StopWatch(aSStack_40);
  StopWatch::start();
  EngineManager::getInstance();
  EngineManager::getInputDevice();
  StopWatch::getMs();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


