// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferInput<unsigned_short>>
// Entry Point: 00b97c70
// Size: 600 bytes
// Signature: void __cdecl _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferInput<unsigned_short>>(CompressedBufferInput * param_1, uint param_2, uint param_3, BitVector * param_4)


/* void RLEUtil::_decode<BitVector, unsigned short, CompressedIoUtil::CompressedBufferInput<unsigned
   short> >(CompressedIoUtil::CompressedBufferInput<unsigned short>*, unsigned int, unsigned int,
   BitVector*) */

void RLEUtil::
     _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferInput<unsigned_short>>
               (CompressedBufferInput *param_1,uint param_2,uint param_3,BitVector *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  
  uVar16 = *(uint *)(param_1 + 0xc);
  if (uVar16 < *(uint *)(param_1 + 8)) {
    iVar12 = 0;
    bVar4 = 0;
    uVar3 = ~(-1 << (ulong)(param_3 & 0x1f));
    uVar14 = 0;
    do {
      uVar20 = iVar12 * param_2;
      lVar6 = *(long *)param_4;
      uVar2 = *(ushort *)(*(long *)param_1 + (ulong)uVar16 * 2);
      uVar13 = uVar20 & 7;
      *(uint *)(param_1 + 0xc) = uVar16 + 1;
      lVar17 = *(long *)(lVar6 + (ulong)(uVar20 >> 0x13) * 8);
      uVar19 = (ulong)(uVar20 >> 3) & 0xffff;
      uVar11 = (uint)uVar2;
      if ((uint)uVar19 < 0xfffd) {
        *(uint *)(lVar17 + uVar19) =
             *(uint *)(lVar17 + uVar19) & (uVar3 << (ulong)uVar13 ^ 0xffffffff) |
             uVar11 << (ulong)uVar13;
      }
      else {
        uVar16 = (uVar20 >> 3) + 1;
        uVar20 = (uVar20 >> 3) + 2;
        lVar9 = (ulong)(uVar16 >> 0x10) * 8;
        lVar10 = (ulong)(uVar20 >> 0x10) * 8;
        uVar8 = (ulong)uVar16 & 0xffff;
        uVar7 = (ulong)uVar20 & 0xffff;
        uVar16 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar6 + lVar10) + uVar7),
                                CONCAT11(*(undefined *)(*(long *)(lVar6 + lVar9) + uVar8),
                                         *(undefined *)(lVar17 + uVar19))) &
                 (uVar3 << (ulong)uVar13 ^ 0xffffffff) | uVar11 << (ulong)uVar13;
        *(char *)(lVar17 + uVar19) = (char)uVar16;
        *(char *)(*(long *)(*(long *)param_4 + lVar9) + uVar8) = (char)(uVar16 >> 8);
        *(char *)(*(long *)(*(long *)param_4 + lVar10) + uVar7) = (char)(uVar16 >> 0x10);
      }
      iVar12 = iVar12 + 1;
      bVar5 = 1;
      if ((uVar11 == uVar14) && (!(bool)(bVar4 ^ 1))) {
        uVar16 = *(uint *)(param_1 + 8);
        uVar14 = *(uint *)(param_1 + 0xc);
        bVar5 = bVar4;
        if (uVar14 < uVar16) {
          lVar6 = (ulong)uVar14 + 1;
          uVar2 = *(ushort *)(*(long *)param_1 + (ulong)uVar14 * 2);
          uVar13 = (uint)uVar2;
          uVar20 = (uint)lVar6;
          *(uint *)(param_1 + 0xc) = uVar20;
          if (uVar2 == 0xffff) {
            iVar18 = uVar14 + 2;
            if (uVar20 <= uVar16) {
              uVar20 = uVar16;
            }
            lVar17 = (ulong)uVar20 - lVar6;
            uVar13 = 0xffff;
            puVar15 = (ushort *)(*(long *)param_1 + lVar6 * 2);
            do {
              if (lVar17 == 0) break;
              uVar2 = *puVar15;
              *(int *)(param_1 + 0xc) = iVar18;
              lVar17 = lVar17 + -1;
              iVar18 = iVar18 + 1;
              uVar13 = uVar13 + uVar2;
              puVar15 = puVar15 + 1;
            } while (uVar2 == 0xffff);
          }
          if (uVar13 != 0) {
            uVar16 = param_2 * iVar12;
            iVar12 = iVar12 + uVar13;
            do {
              lVar6 = *(long *)param_4;
              uVar14 = uVar16 & 7;
              uVar19 = (ulong)(uVar16 >> 3) & 0xffff;
              lVar17 = *(long *)(lVar6 + (ulong)(uVar16 >> 0x13) * 8);
              if ((uint)uVar19 < 0xfffd) {
                *(uint *)(lVar17 + uVar19) =
                     *(uint *)(lVar17 + uVar19) & (uVar3 << uVar14 ^ 0xffffffff) |
                     uVar11 << (ulong)uVar14;
              }
              else {
                uVar20 = (uVar16 >> 3) + 1;
                uVar1 = (uVar16 >> 3) + 2;
                lVar9 = (ulong)(uVar20 >> 0x10) * 8;
                lVar10 = (ulong)(uVar1 >> 0x10) * 8;
                uVar8 = (ulong)uVar20 & 0xffff;
                uVar7 = (ulong)uVar1 & 0xffff;
                uVar14 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar6 + lVar10) + uVar7),
                                        CONCAT11(*(undefined *)(*(long *)(lVar6 + lVar9) + uVar8),
                                                 *(undefined *)(lVar17 + uVar19))) &
                         (uVar3 << uVar14 ^ 0xffffffff) | uVar11 << (ulong)uVar14;
                *(char *)(lVar17 + uVar19) = (char)uVar14;
                *(char *)(*(long *)(*(long *)param_4 + lVar9) + uVar8) = (char)(uVar14 >> 8);
                *(char *)(*(long *)(*(long *)param_4 + lVar10) + uVar7) = (char)(uVar14 >> 0x10);
              }
              uVar13 = uVar13 - 1;
              uVar16 = uVar16 + param_2;
            } while (uVar13 != 0);
          }
          bVar5 = 0;
        }
      }
      bVar4 = bVar5;
      uVar16 = *(uint *)(param_1 + 0xc);
      uVar14 = uVar11;
    } while (uVar16 < *(uint *)(param_1 + 8));
  }
  return;
}


