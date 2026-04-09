// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flattenTopLevelReloops
// Entry Point: 00c4c4dc
// Size: 152 bytes
// Signature: undefined flattenTopLevelReloops(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::flattenTopLevelReloops() */

void IR_Section::flattenTopLevelReloops(void)

{
  IR_InstructionSequence *in_x0;
  int *piVar1;
  IR_OPCODE IVar3;
  ulong uVar4;
  undefined auVar5 [12];
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 0x20);
  if (*(long *)(in_x0 + 0x28) != lVar2) {
    uVar4 = 0;
    do {
      piVar1 = *(int **)(lVar2 + uVar4 * 8);
      if (*piVar1 == 5) {
        IVar3 = 8;
LAB_00c4c508:
        auVar5 = IR_InstructionSequence::getSection
                           (in_x0,*(uint *)((long)piVar1 +
                                           ((ulong)((uint)piVar1[1] >> 0xe) & 0x3fffc) + 8));
        flattenSectionReloops(auVar5._0_8_,auVar5._8_4_,IVar3,0);
      }
      else if (*piVar1 == 3) {
        IVar3 = 9;
        goto LAB_00c4c508;
      }
      lVar2 = *(long *)(in_x0 + 0x20);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(in_x0 + 0x28) - lVar2 >> 3));
  }
  return;
}


