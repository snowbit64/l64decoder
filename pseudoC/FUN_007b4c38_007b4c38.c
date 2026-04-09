// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4c38
// Entry Point: 007b4c38
// Size: 144 bytes
// Signature: undefined FUN_007b4c38(void)


void FUN_007b4c38(long param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ConditionalAnimationValue aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_2;
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_40);
  ConditionalAnimationInformation::getValue
            ((ConditionalAnimationInformation *)(param_1 + 0x88),uVar3,aCStack_40);
  uVar2 = ConditionalAnimationValue::isFloat();
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = ConditionalAnimationValue::getFloat();
  }
  param_2[0x40] = uVar3;
  param_2[0x42] = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


