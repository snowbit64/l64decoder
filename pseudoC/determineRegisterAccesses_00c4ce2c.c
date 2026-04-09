// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: determineRegisterAccesses
// Entry Point: 00c4ce2c
// Size: 956 bytes
// Signature: undefined determineRegisterAccesses(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::determineRegisterAccesses() */

void IR_Section::determineRegisterAccesses(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *in_x0;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  uVar3 = *(uint *)(*in_x0 + 0x98);
  uVar16 = (ulong)uVar3;
  if (uVar3 == 0) {
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_78 = 0;
  }
  else {
    lVar14 = (uVar16 - 1 >> 6) + 1;
    local_70 = operator_new(lVar14 * 8);
    uStack_68 = 0;
    local_60 = lVar14;
    FUN_00af6bb0(&local_70,uVar16,0);
                    /* try { // try from 00c4ce9c to 00c4cebb has its CatchHandler @ 00c4d1e8 */
    local_88 = operator_new(lVar14 * 8);
    uStack_80 = 0;
    local_78 = lVar14;
    FUN_00af6bb0(&local_88,uVar16,0);
  }
  lVar14 = in_x0[4];
  if (in_x0[5] != lVar14) {
    uVar18 = 0;
    do {
      piVar17 = *(int **)(lVar14 + uVar18 * 8);
      iVar1 = *piVar17;
      uVar2 = piVar17[1];
      uVar9 = (ulong)uVar2 & 0xffff;
      uVar6 = uVar2 >> 0x10;
      if ((int)uVar9 != 0) {
        puVar10 = (uint *)(piVar17 + (ulong)uVar6 + 2);
        do {
          uVar4 = *puVar10;
          if (-1 < (int)uVar4) {
            uVar13 = 1L << ((ulong)uVar4 & 0x3f);
            if ((*(ulong *)((long)local_88 + (ulong)(uVar4 >> 6) * 8) & uVar13) == 0) {
              lVar14 = (ulong)(uVar4 >> 6) * 8;
              *(ulong *)((long)local_70 + lVar14) = *(ulong *)((long)local_70 + lVar14) | uVar13;
            }
          }
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (0xffff < uVar2) {
        puVar10 = (uint *)(piVar17 + 2);
        uVar2 = uVar6;
        if (uVar6 < 2) {
          uVar2 = 1;
        }
        uVar9 = (ulong)uVar2;
        do {
          uVar2 = *puVar10;
          if (-1 < (int)uVar2) {
            uVar13 = (ulong)(uVar2 >> 3) & 0x1ffffff8;
            *(ulong *)((long)local_88 + uVar13) =
                 *(ulong *)((long)local_88 + uVar13) | 1L << ((ulong)uVar2 & 0x3f);
          }
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (iVar1 == 2) {
                    /* try { // try from 00c4d050 to 00c4d057 has its CatchHandler @ 00c4d1fc */
        lVar14 = IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)in_x0,piVar17[uVar6 + 3]);
                    /* try { // try from 00c4d070 to 00c4d10b has its CatchHandler @ 00c4d204 */
        lVar7 = IR_InstructionSequence::getSection
                          ((IR_InstructionSequence *)in_x0,
                           *(uint *)((long)piVar17 +
                                    ((ulong)((uint)piVar17[1] >> 0xe) & 0x3fffc) + 0x10));
        if ((lVar14 != 0) && (determineRegisterAccesses(), uVar3 != 0)) {
          uVar9 = 0;
          lVar8 = *(long *)(lVar14 + 0x68);
          lVar14 = *(long *)(lVar14 + 0x80);
          do {
            uVar15 = 1L << (uVar9 & 0x3f);
            uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
            uVar9 = uVar9 + 1;
            uVar12 = *(ulong *)((long)local_70 + uVar11);
            uVar13 = uVar12 & (uVar15 ^ 0xffffffffffffffff);
            if (((*(ulong *)(lVar8 + uVar11) | uVar12 | *(ulong *)(lVar14 + uVar11)) & uVar15) != 0)
            {
              uVar13 = uVar12 | uVar15;
            }
            *(ulong *)((long)local_70 + uVar11) = uVar13;
            uVar12 = *(ulong *)((long)local_88 + uVar11);
            uVar13 = uVar12 & (uVar15 ^ 0xffffffffffffffff);
            if (((*(ulong *)(lVar14 + uVar11) | uVar12) & uVar15) != 0) {
              uVar13 = uVar12 | uVar15;
            }
            *(ulong *)((long)local_88 + uVar11) = uVar13;
          } while (uVar16 != uVar9);
        }
        if ((lVar7 != 0) && (determineRegisterAccesses(), uVar3 != 0)) {
          uVar9 = 0;
          lVar14 = *(long *)(lVar7 + 0x68);
          lVar7 = *(long *)(lVar7 + 0x80);
          do {
            uVar15 = 1L << (uVar9 & 0x3f);
            uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
            uVar9 = uVar9 + 1;
            uVar12 = *(ulong *)((long)local_70 + uVar11);
            uVar13 = uVar12 & (uVar15 ^ 0xffffffffffffffff);
            if (((*(ulong *)(lVar14 + uVar11) | uVar12 | *(ulong *)(lVar7 + uVar11)) & uVar15) != 0)
            {
              uVar13 = uVar12 | uVar15;
            }
            *(ulong *)((long)local_70 + uVar11) = uVar13;
            uVar12 = *(ulong *)((long)local_88 + uVar11);
            uVar13 = uVar12 & (uVar15 ^ 0xffffffffffffffff);
            if (((*(ulong *)(lVar7 + uVar11) | uVar12) & uVar15) != 0) {
              uVar13 = uVar12 | uVar15;
            }
            *(ulong *)((long)local_88 + uVar11) = uVar13;
          } while (uVar16 != uVar9);
        }
      }
      else if (iVar1 == 4) {
                    /* try { // try from 00c4cf7c to 00c4cf8b has its CatchHandler @ 00c4d200 */
        lVar14 = IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)in_x0,piVar17[uVar6 + 3]);
        determineRegisterAccesses();
        if (uVar3 != 0) {
          uVar9 = 0;
          lVar7 = *(long *)(lVar14 + 0x68);
          lVar14 = *(long *)(lVar14 + 0x80);
          do {
            uVar15 = 1L << (uVar9 & 0x3f);
            uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
            uVar9 = uVar9 + 1;
            uVar12 = *(ulong *)((long)local_70 + uVar11);
            uVar13 = uVar12 & (uVar15 ^ 0xffffffffffffffff);
            if (((*(ulong *)(lVar7 + uVar11) | uVar12 | *(ulong *)(lVar14 + uVar11)) & uVar15) != 0)
            {
              uVar13 = uVar12 | uVar15;
            }
            *(ulong *)((long)local_70 + uVar11) = uVar13;
            uVar12 = *(ulong *)((long)local_88 + uVar11);
            uVar13 = uVar12 & (uVar15 ^ 0xffffffffffffffff);
            if (((*(ulong *)(lVar14 + uVar11) | uVar12) & uVar15) != 0) {
              uVar13 = uVar12 | uVar15;
            }
            *(ulong *)((long)local_88 + uVar11) = uVar13;
          } while (uVar16 != uVar9);
        }
      }
      lVar14 = in_x0[4];
      uVar18 = (ulong)((int)uVar18 + 1);
    } while (uVar18 < (ulong)(in_x0[5] - lVar14 >> 3));
  }
                    /* try { // try from 00c4d18c to 00c4d19f has its CatchHandler @ 00c4d1f8 */
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::operator=
            ((vector<bool,std::__ndk1::allocator<bool>> *)(in_x0 + 0xd),(vector *)&local_70);
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::operator=
            ((vector<bool,std::__ndk1::allocator<bool>> *)(in_x0 + 0x10),(vector *)&local_88);
  if (local_88 != (void *)0x0) {
    operator_delete(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


