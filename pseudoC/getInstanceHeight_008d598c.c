// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstanceHeight
// Entry Point: 008d598c
// Size: 728 bytes
// Signature: undefined __thiscall getInstanceHeight(FoliageBendingSystem * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* FoliageBendingSystem::getInstanceHeight(unsigned int, unsigned int, unsigned int, unsigned int)
    */

float __thiscall
FoliageBendingSystem::getInstanceHeight
          (FoliageBendingSystem *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint local_68;
  
  lVar8 = *(long *)(this + 0x4c8);
  if (*(long *)(this + 0x4d0) == lVar8) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = 0.0;
    uVar11 = 0;
    do {
      uVar13 = 0;
      lVar8 = lVar8 + uVar11 * 0x28;
      uVar3 = *(uint *)(lVar8 + 0xc);
      uVar4 = param_1 >> (ulong)(uVar3 & 0x1f);
      uVar5 = param_2 >> (ulong)(uVar3 & 0x1f);
      local_68 = uVar5;
      do {
        uVar16 = 0;
        uVar2 = uVar13 + uVar5;
        do {
          lVar9 = *(long *)(lVar8 + 0x10);
          uVar7 = *(uint *)(lVar9 + 0x20);
          if (uVar7 == 0) {
            uVar7 = 0;
          }
          else if (*(ChunkedBitSquare **)(lVar9 + 0x10) == (ChunkedBitSquare *)0x0) {
            uVar6 = (uVar4 + uVar16 + local_68 * *(int *)(lVar9 + 0x24)) * *(int *)(lVar9 + 0x2c);
            lVar15 = **(long **)(lVar9 + 0x18);
            lVar14 = *(long *)(lVar15 + (ulong)(uVar6 >> 0x13) * 8);
            uVar12 = (ulong)(uVar6 >> 3) & 0xffff;
            if ((uint)uVar12 < 0xfffd) {
              uVar10 = *(uint *)(lVar14 + uVar12);
            }
            else {
              uVar10 = (uVar6 >> 3) + 1;
              uVar1 = (uVar6 >> 3) + 2;
              uVar10 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar15 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar15 + (ulong)(uVar10 >> 0x10) * 8) +
                                                ((ulong)uVar10 & 0xffff)),
                                               *(undefined *)(lVar14 + uVar12)));
            }
            uVar7 = uVar10 >> (ulong)(uVar6 & 7) & (-1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU) &
                    0xffff;
          }
          else {
            uVar7 = ChunkedBitSquare::readBits
                              (*(ChunkedBitSquare **)(lVar9 + 0x10),uVar4 + uVar16,uVar2,0,uVar7);
            lVar9 = *(long *)(lVar8 + 0x10);
          }
          if (*(ChunkedBitSquare **)(lVar9 + 0x10) == (ChunkedBitSquare *)0x0) {
            uVar6 = (uint)*(byte *)(lVar8 + 0x19) +
                    (uVar4 + uVar16 + local_68 * *(int *)(lVar9 + 0x24)) * *(int *)(lVar9 + 0x2c);
            lVar14 = **(long **)(lVar9 + 0x18);
            uVar12 = (ulong)(uVar6 >> 3) & 0xffff;
            lVar9 = *(long *)(lVar14 + (ulong)(uVar6 >> 0x13) * 8);
            if ((uint)uVar12 < 0xfffd) {
              uVar10 = *(uint *)(lVar9 + uVar12);
            }
            else {
              uVar10 = (uVar6 >> 3) + 1;
              uVar1 = (uVar6 >> 3) + 2;
              uVar10 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar14 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar14 + (ulong)(uVar10 >> 0x10) * 8) +
                                                ((ulong)uVar10 & 0xffff)),
                                               *(undefined *)(lVar9 + uVar12)));
            }
            uVar6 = uVar10 >> (ulong)(uVar6 & 7) &
                    (-1 << (ulong)(*(byte *)(lVar8 + 0x1a) & 0x1f) ^ 0xffffffffU) & 0xffff;
          }
          else {
            uVar6 = ChunkedBitSquare::readBits
                              (*(ChunkedBitSquare **)(lVar9 + 0x10),uVar4 + uVar16,uVar2,
                               (uint)*(byte *)(lVar8 + 0x19),(uint)*(byte *)(lVar8 + 0x1a));
          }
          uVar16 = uVar16 + 1;
          fVar17 = *(float *)(*(long *)(lVar8 + 0x20) +
                             (ulong)(uVar6 + *(int *)(lVar8 + 0x1c) * uVar7) * 4);
          if (fVar17 <= fVar18) {
            fVar17 = fVar18;
          }
          fVar18 = fVar17;
        } while (uVar16 < param_3 >> (ulong)(uVar3 & 0x1f));
        local_68 = local_68 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4 >> (ulong)(uVar3 & 0x1f));
      lVar8 = *(long *)(this + 0x4c8);
      uVar12 = (*(long *)(this + 0x4d0) - lVar8 >> 3) * -0x3333333333333333;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 <= uVar12 && uVar12 - uVar11 != 0);
  }
  return fVar18;
}


