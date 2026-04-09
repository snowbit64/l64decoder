// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markSections
// Entry Point: 00c4afc4
// Size: 232 bytes
// Signature: undefined markSections(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::markSections() */

void IR_Section::markSections(void)

{
  IR_InstructionSequence *in_x0;
  long lVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(in_x0 + 0x20);
  in_x0[0x98] = (IR_InstructionSequence)0x1;
  if (*(long *)(in_x0 + 0x28) != lVar1) {
    uVar4 = 0;
    do {
      piVar3 = *(int **)(lVar1 + uVar4 * 8);
      if (*piVar3 == 4) {
        IR_InstructionSequence::getSection
                  (in_x0,*(uint *)((long)piVar3 + ((ulong)((uint)piVar3[1] >> 0xe) & 0x3fffc) + 0xc)
                  );
LAB_00c4b014:
        markSections();
      }
      else if (*piVar3 == 2) {
        lVar1 = IR_InstructionSequence::getSection
                          (in_x0,*(uint *)((long)piVar3 +
                                          ((ulong)((uint)piVar3[1] >> 0xe) & 0x3fffc) + 0xc));
        lVar2 = IR_InstructionSequence::getSection
                          (in_x0,*(uint *)((long)piVar3 +
                                          ((ulong)((uint)piVar3[1] >> 0xe) & 0x3fffc) + 0x10));
        if (lVar1 != 0) {
          markSections();
        }
        if (lVar2 != 0) goto LAB_00c4b014;
      }
      lVar1 = *(long *)(in_x0 + 0x20);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(in_x0 + 0x28) - lVar1 >> 3));
  }
  return;
}


