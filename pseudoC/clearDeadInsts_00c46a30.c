// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearDeadInsts
// Entry Point: 00c46a30
// Size: 564 bytes
// Signature: undefined clearDeadInsts(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::clearDeadInsts() */

undefined4 IR_Section::clearDeadInsts(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t __n;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  IR_Function **in_x0;
  long lVar7;
  IR_Function *pIVar8;
  IR_Function *pIVar9;
  ulong uVar10;
  uint *puVar11;
  IR_Function *pIVar12;
  IR_Function *pIVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  IR_InstructionSequence aIStack_a0 [32];
  IR_Function *local_80;
  IR_Function *pIStack_78;
  IR_Function *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_a0,*in_x0);
  pIVar8 = in_x0[4];
  pIVar13 = in_x0[5];
  if (pIVar13 == pIVar8) {
    bVar5 = false;
    uVar16 = 0;
    pIVar8 = pIVar13;
  }
  else {
    uVar10 = 0;
    uVar16 = 0;
    bVar5 = false;
    uVar15 = 0;
    do {
      puVar14 = *(uint **)(pIVar8 + uVar10 * 8);
      uVar2 = *puVar14;
      if (0x19 < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x20002c3U) == 0) {
        bVar5 = true;
      }
      if (uVar2 - 0x16 < 3) {
LAB_00c46ae8:
                    /* try { // try from 00c46ae8 to 00c46af3 has its CatchHandler @ 00c46c6c */
        IR_InstructionSequence::emit(aIStack_a0,puVar14);
        uVar6 = uVar16;
      }
      else {
        uVar3 = puVar14[1];
        uVar1 = uVar3 >> 0x10;
        if (uVar2 < 0x1a) {
          if ((1 << (ulong)(uVar2 & 0x1f) & 0x22022c2U) == 0) {
            if (uVar2 == 2) {
                    /* try { // try from 00c46b38 to 00c46b47 has its CatchHandler @ 00c46c64 */
              lVar7 = IR_InstructionSequence::getSection
                                ((IR_InstructionSequence *)in_x0,puVar14[(ulong)uVar1 + 4]);
              if ((lVar7 != 0) && (uVar10 = isAlwaysNeeded(), (uVar10 & 1) != 0)) goto LAB_00c46ae8;
            }
            else if (uVar2 != 4) goto LAB_00c46b74;
                    /* try { // try from 00c46b60 to 00c46b6f has its CatchHandler @ 00c46c68 */
            lVar7 = IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)in_x0,
                               *(uint *)((long)puVar14 +
                                        ((ulong)(puVar14[1] >> 0xe) & 0x3fffc) + 0xc));
            if ((lVar7 == 0) || (uVar10 = isAlwaysNeeded(), (uVar10 & 1) == 0)) goto LAB_00c46b74;
          }
          goto LAB_00c46ae8;
        }
LAB_00c46b74:
        if (uVar3 < 0x10000) {
          uVar6 = 1;
        }
        else {
          puVar11 = puVar14 + 2;
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          uVar10 = (ulong)uVar1;
          do {
            if (-1 < (int)*puVar11) goto LAB_00c46ae8;
            puVar11 = puVar11 + 1;
            uVar10 = uVar10 - 1;
            uVar6 = 1;
          } while (uVar10 != 0);
        }
      }
      uVar16 = uVar6;
      pIVar8 = in_x0[4];
      pIVar13 = in_x0[5];
      uVar15 = uVar15 + 1;
      uVar10 = (ulong)uVar15;
    } while (uVar10 < (ulong)((long)pIVar13 - (long)pIVar8 >> 3));
  }
  pIVar9 = in_x0[6];
  in_x0[4] = local_80;
  in_x0[5] = pIStack_78;
  in_x0[6] = local_70;
  local_70 = pIVar9;
  if (!bVar5) {
    uVar10 = (long)pIStack_78 - (long)local_80;
    pIVar12 = local_80;
    pIVar9 = pIStack_78;
    while (pIStack_78 = pIVar13, local_80 = pIVar8, pIVar8 = local_80, pIVar13 = pIStack_78,
          0x10 < uVar10) {
      pIVar8 = pIVar12 + 8;
      __n = (long)pIVar9 - (long)(pIVar12 + 0x10);
      if (__n != 0) {
        memmove(pIVar8,pIVar12 + 0x10,__n);
        pIVar12 = in_x0[4];
      }
      pIVar9 = pIVar8 + __n;
      in_x0[5] = pIVar9;
      pIVar8 = local_80;
      pIVar13 = pIStack_78;
      uVar10 = (long)pIVar9 - (long)pIVar12;
    }
  }
  pIStack_78 = pIVar13;
  local_80 = pIVar8;
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_a0);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


