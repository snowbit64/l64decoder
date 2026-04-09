// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4ba0
// Entry Point: 007b4ba0
// Size: 152 bytes
// Signature: undefined FUN_007b4ba0(void)


void FUN_007b4ba0(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ConditionalAnimationValue aCStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_40);
  ConditionalAnimationInformation::getValue
            ((ConditionalAnimationInformation *)(param_1 + 0x88),uVar1,aCStack_40);
  uVar4 = ConditionalAnimationValue::isBool();
  if ((uVar4 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = ConditionalAnimationValue::getBool();
    bVar3 = bVar3 & 1;
  }
  *(byte *)(param_2 + 0x40) = bVar3;
  param_2[0x42] = 3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


