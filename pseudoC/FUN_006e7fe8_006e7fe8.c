// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7fe8
// Entry Point: 006e7fe8
// Size: 104 bytes
// Signature: undefined FUN_006e7fe8(void)


void FUN_006e7fe8(void)

{
  long lVar1;
  EngineManager *this;
  ushort local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (EngineManager *)EngineManager::getInstance();
  local_40 = 0;
                    /* try { // try from 006e800c to 006e801b has its CatchHandler @ 006e8050 */
  EngineManager::requestExit(this,false,false,(basic_string *)&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


