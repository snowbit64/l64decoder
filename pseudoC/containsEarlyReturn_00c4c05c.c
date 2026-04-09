// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: containsEarlyReturn
// Entry Point: 00c4c05c
// Size: 180 bytes
// Signature: undefined containsEarlyReturn(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::containsEarlyReturn() */

undefined8 IR_Section::containsEarlyReturn(void)

{
  int iVar1;
  uint uVar2;
  IR_InstructionSequence *in_x0;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(in_x0 + 0x20);
  uVar2 = (int)((ulong)(*(long *)(in_x0 + 0x28) - lVar5) >> 3) - (uint)(*(int *)(in_x0 + 0x38) == 0)
  ;
  if (uVar2 == 0) {
    return 0;
  }
  lVar6 = 0;
  while( true ) {
    piVar4 = *(int **)(lVar5 + lVar6);
    iVar1 = *piVar4;
    if (iVar1 == 3 || iVar1 == 5) {
      IR_InstructionSequence::getSection
                (in_x0,*(uint *)((long)piVar4 + ((ulong)((uint)piVar4[1] >> 0xe) & 0x3fffc) + 8));
      uVar3 = containsEarlyReturn();
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    else if (iVar1 == 6) {
      return 1;
    }
    if ((ulong)uVar2 * 8 + -8 == lVar6) break;
    lVar5 = *(long *)(in_x0 + 0x20);
    lVar6 = lVar6 + 8;
  }
  return 0;
}


