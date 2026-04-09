// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4a88
// Entry Point: 007b4a88
// Size: 140 bytes
// Signature: undefined FUN_007b4a88(void)


void FUN_007b4a88(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ConditionalAnimationValue aCStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_40);
  ConditionalAnimationInformation::getValue
            ((ConditionalAnimationInformation *)(param_1 + 0x88),uVar1,aCStack_40);
  ConditionalAnimationValue::setBool(aCStack_40,*(bool *)(param_2 + 4));
  ConditionalAnimationInformation::setValue
            ((ConditionalAnimationInformation *)(param_1 + 0x88),uVar1,aCStack_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


