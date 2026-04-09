// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4d2c
// Entry Point: 007b4d2c
// Size: 88 bytes
// Signature: undefined FUN_007b4d2c(void)


void FUN_007b4d2c(ConditionalAnimationEntity *param_1,uint *param_2)

{
  long lVar1;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2c = *param_2;
  local_30 = param_2[4];
  ConditionalAnimationEntity::setSpecificParameterIds(param_1,&uStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


