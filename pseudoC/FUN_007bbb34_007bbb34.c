// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbb34
// Entry Point: 007bbb34
// Size: 96 bytes
// Signature: undefined FUN_007bbb34(void)


void FUN_007bbb34(AnimalCompanionManager *param_1,uint *param_2)

{
  long lVar1;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2[4];
  uStack_34 = param_2[8];
  local_30 = param_2[0xc];
  AnimalCompanionManager::setAnimalPosition(param_1,*param_2,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


