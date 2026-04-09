// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isAlwaysNeeded
// Entry Point: 00c46908
// Size: 296 bytes
// Signature: undefined isAlwaysNeeded(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::isAlwaysNeeded() */

undefined8 IR_Section::isAlwaysNeeded(void)

{
  bool bVar1;
  IR_InstructionSequence *in_x0;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(in_x0 + 0x20);
  if (*(long *)(in_x0 + 0x28) != lVar4) {
    uVar5 = 0;
    uVar7 = 1;
    do {
      piVar6 = *(int **)(lVar4 + uVar5 * 8);
      if (*piVar6 - 0x16U < 3) {
        return 1;
      }
      uVar2 = 1;
      switch(*piVar6) {
      case 2:
        lVar4 = IR_InstructionSequence::getSection
                          (in_x0,*(uint *)((long)piVar6 +
                                          ((ulong)((uint)piVar6[1] >> 0xe) & 0x3fffc) + 0xc));
        lVar3 = IR_InstructionSequence::getSection
                          (in_x0,*(uint *)((long)piVar6 +
                                          ((ulong)((uint)piVar6[1] >> 0xe) & 0x3fffc) + 0x10));
        if ((lVar4 != 0) && (uVar5 = isAlwaysNeeded(), (uVar5 & 1) != 0)) {
          return 1;
        }
        if (lVar3 != 0) {
          uVar5 = isAlwaysNeeded();
joined_r0x00c46a0c:
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
        break;
      case 4:
        lVar4 = IR_InstructionSequence::getSection(in_x0,piVar6[((uint)piVar6[1] >> 0x10) + 3]);
        if (lVar4 != 0) {
          uVar5 = isAlwaysNeeded();
          goto joined_r0x00c46a0c;
        }
        break;
      case 0xd:
      case 0x15:
        goto switchD_00c4698c_caseD_d;
      }
      lVar4 = *(long *)(in_x0 + 0x20);
      bVar1 = uVar7 < (ulong)(*(long *)(in_x0 + 0x28) - lVar4 >> 3);
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
  }
  uVar2 = 0;
switchD_00c4698c_caseD_d:
  return uVar2;
}


