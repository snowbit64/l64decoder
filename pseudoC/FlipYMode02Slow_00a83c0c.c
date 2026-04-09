// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode02Slow
// Entry Point: 00a83c0c
// Size: 552 bytes
// Signature: undefined FlipYMode02Slow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BC6BC7Util::D3DX_BC7::FlipYMode02Slow() */

void BC6BC7Util::D3DX_BC7::FlipYMode02Slow(void)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  D3DX_BC7 *in_x0;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  bool local_bc [4];
  BlockData local_b8;
  undefined local_b7;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99;
  undefined local_98;
  undefined local_97;
  byte abStack_96 [38];
  BlockData local_70;
  byte local_6f;
  undefined2 local_6e;
  undefined auStack_54 [6];
  byte local_4e [38];
  long local_28;
  
  lVar11 = tpidr_el0;
  local_28 = *(long *)(lVar11 + 0x28);
  uVar13 = ReadBlockData(in_x0,&local_70);
  if ((uVar13 & 1) == 0) {
LAB_00a83e0c:
    uVar14 = 1;
  }
  else {
    if ((0xc800000180000000U >> ((ulong)local_6f & 0x3f) & 1) == 0) {
      uVar8 = *(uint *)(s_flipInfoP3 + (ulong)local_6f * 0x10);
      uVar13 = (ulong)uVar8;
      if (uVar8 >> (ulong)((byte)(&DAT_0051f9a1)[(ulong)(byte)local_70 * 0xf] & 0x1f) == 0) {
        lVar12 = uVar13 * 3;
        lVar1 = uVar13 * 0x10;
        uVar15 = (ulong)&local_70 | 4;
        lVar17 = 0;
        bVar9 = (&DAT_0051f9a5)[(ulong)(byte)local_70 * 0xf];
        local_b8 = local_70;
        iVar10 = 1 << (ulong)(bVar9 - 1 & 0x1f);
        local_b7 = (char)uVar8;
        local_b6 = local_6e;
        local_bc[0] = iVar10 <= (int)(uint)local_4e[(uint)(&s_flipIndices)
                                                          [(byte)s_aFixUp[lVar12 + 0x180]]];
        local_bc[1] = iVar10 <= (int)(uint)local_4e[(uint)(&s_flipIndices)
                                                          [(byte)s_aFixUp[lVar12 + 0x181]]];
        uVar5 = (uint)local_bc[0] | *(int *)(s_flipInfoP3 + lVar1 + 4) << 1;
        uVar8 = (*(int *)(s_flipInfoP3 + lVar1 + 4) * 2 - (uint)local_bc[0]) + 1;
        local_bc[2] = iVar10 <= (int)(uint)local_4e[(uint)(&s_flipIndices)
                                                          [(byte)s_aFixUp[lVar12 + 0x182]]];
        uVar6 = (uint)local_bc[1] | *(int *)(s_flipInfoP3 + lVar1 + 8) << 1;
        uVar4 = (*(int *)(s_flipInfoP3 + lVar1 + 8) * 2 - (uint)local_bc[1]) + 1;
        local_b4 = *(undefined4 *)(uVar15 + (ulong)uVar5 * 4);
        uStack_b0 = *(undefined4 *)(uVar15 + (ulong)uVar8 * 4);
        local_9c = auStack_54[uVar5];
        uVar16 = (ulong)((uint)local_bc[2] | *(int *)(s_flipInfoP3 + lVar1 + 0xc) << 1);
        uVar18 = (ulong)((*(int *)(s_flipInfoP3 + lVar1 + 0xc) * 2 - (uint)local_bc[2]) + 1);
        local_9b = auStack_54[uVar8];
        local_ac = *(undefined4 *)(uVar15 + (ulong)uVar6 * 4);
        uStack_a8 = *(undefined4 *)(uVar15 + (ulong)uVar4 * 4);
        local_9a = auStack_54[uVar6];
        local_99 = auStack_54[uVar4];
        local_a4 = *(undefined4 *)(uVar15 + uVar16 * 4);
        uStack_a0 = *(undefined4 *)(uVar15 + uVar18 * 4);
        local_98 = auStack_54[uVar16];
        local_97 = auStack_54[uVar18];
        do {
          puVar2 = &s_flipIndices + lVar17;
          pbVar3 = local_4e + lVar17;
          lVar17 = lVar17 + 1;
          bVar7 = *pbVar3;
          if (local_bc[(byte)s_aPartitionTable[uVar13 * 0x10 + (ulong)*puVar2 + 0x800]] != false) {
            bVar7 = ~(byte)(-1 << (ulong)(bVar9 & 0x1f)) - *pbVar3;
          }
          abStack_96[*puVar2] = bVar7;
        } while (lVar17 != 0x10);
        WriteBlockData(in_x0,&local_b8);
        goto LAB_00a83e0c;
      }
    }
    uVar14 = 0;
  }
  if (*(long *)(lVar11 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}


