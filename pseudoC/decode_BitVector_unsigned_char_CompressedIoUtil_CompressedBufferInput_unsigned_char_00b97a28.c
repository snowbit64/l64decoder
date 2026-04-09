// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>
// Entry Point: 00b97a28
// Size: 584 bytes
// Signature: void __cdecl _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>(CompressedBufferInput * param_1, uint param_2, uint param_3, BitVector * param_4)


/* void RLEUtil::_decode<BitVector, unsigned char, CompressedIoUtil::CompressedBufferInput<unsigned
   char> >(CompressedIoUtil::CompressedBufferInput<unsigned char>*, unsigned int, unsigned int,
   BitVector*) */

void RLEUtil::
     _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>
               (CompressedBufferInput *param_1,uint param_2,uint param_3,BitVector *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  
  uVar14 = *(uint *)(param_1 + 0xc);
  if (uVar14 < *(uint *)(param_1 + 8)) {
    iVar13 = 0;
    bVar4 = 0;
    uVar6 = ~(-1 << (ulong)(param_3 & 0x1f));
    uVar17 = 0;
    do {
      uVar5 = iVar13 * param_2;
      lVar18 = *(long *)param_4;
      *(uint *)(param_1 + 0xc) = uVar14 + 1;
      uVar16 = (ulong)(uVar5 >> 3) & 0xffff;
      lVar15 = *(long *)(lVar18 + (ulong)(uVar5 >> 0x13) * 8);
      uVar3 = uVar5 & 7;
      uVar12 = (uint)*(byte *)(*(long *)param_1 + (ulong)uVar14);
      if ((uint)uVar16 < 0xfffd) {
        *(uint *)(lVar15 + uVar16) =
             *(uint *)(lVar15 + uVar16) & (uVar6 << (ulong)uVar3 ^ 0xffffffff) |
             uVar12 << (ulong)uVar3;
      }
      else {
        uVar14 = (uVar5 >> 3) + 1;
        uVar5 = (uVar5 >> 3) + 2;
        lVar10 = (ulong)(uVar14 >> 0x10) * 8;
        lVar11 = (ulong)(uVar5 >> 0x10) * 8;
        uVar9 = (ulong)uVar14 & 0xffff;
        uVar8 = (ulong)uVar5 & 0xffff;
        uVar14 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar18 + lVar11) + uVar8),
                                CONCAT11(*(undefined *)(*(long *)(lVar18 + lVar10) + uVar9),
                                         *(undefined *)(lVar15 + uVar16))) &
                 (uVar6 << (ulong)uVar3 ^ 0xffffffff);
        uVar3 = uVar14 | uVar12 << (ulong)uVar3;
        *(char *)(lVar15 + uVar16) = (char)uVar3;
        *(char *)(*(long *)(*(long *)param_4 + lVar10) + uVar9) = (char)(uVar3 >> 8);
        *(char *)(*(long *)(*(long *)param_4 + lVar11) + uVar8) = (char)(uVar14 >> 0x10);
      }
      iVar13 = iVar13 + 1;
      bVar7 = 1;
      if ((uVar12 == uVar17) && (!(bool)(bVar4 ^ 1))) {
        uVar14 = *(uint *)(param_1 + 0xc);
        uVar16 = (ulong)uVar14;
        bVar7 = bVar4;
        if (uVar14 < *(uint *)(param_1 + 8)) {
          *(uint *)(param_1 + 0xc) = uVar14 + 1;
          bVar4 = *(byte *)(*(long *)param_1 + uVar16);
          uVar14 = (uint)bVar4;
          if (bVar4 == 0xff) {
            do {
              if (*(uint *)(param_1 + 8) <= (int)uVar16 + 1U) break;
              *(int *)(param_1 + 0xc) = (int)uVar16 + 2;
              pbVar1 = (byte *)(*(long *)param_1 + 1 + uVar16);
              uVar16 = uVar16 + 1;
              uVar17 = (uint)*pbVar1;
              uVar14 = uVar14 + uVar17;
            } while (uVar17 == 0xff);
          }
          if (uVar14 != 0) {
            uVar17 = param_2 * iVar13;
            iVar13 = iVar13 + uVar14;
            do {
              lVar18 = *(long *)param_4;
              uVar3 = uVar17 & 7;
              uVar16 = (ulong)(uVar17 >> 3) & 0xffff;
              lVar15 = *(long *)(lVar18 + (ulong)(uVar17 >> 0x13) * 8);
              if ((uint)uVar16 < 0xfffd) {
                *(uint *)(lVar15 + uVar16) =
                     *(uint *)(lVar15 + uVar16) & (uVar6 << uVar3 ^ 0xffffffff) |
                     uVar12 << (ulong)uVar3;
              }
              else {
                uVar5 = (uVar17 >> 3) + 1;
                uVar2 = (uVar17 >> 3) + 2;
                lVar10 = (ulong)(uVar5 >> 0x10) * 8;
                lVar11 = (ulong)(uVar2 >> 0x10) * 8;
                uVar9 = (ulong)uVar5 & 0xffff;
                uVar8 = (ulong)uVar2 & 0xffff;
                uVar5 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar18 + lVar11) + uVar8),
                                       CONCAT11(*(undefined *)(*(long *)(lVar18 + lVar10) + uVar9),
                                                *(undefined *)(lVar15 + uVar16))) &
                        (uVar6 << uVar3 ^ 0xffffffff);
                uVar3 = uVar5 | uVar12 << (ulong)uVar3;
                *(char *)(lVar15 + uVar16) = (char)uVar3;
                *(char *)(*(long *)(*(long *)param_4 + lVar10) + uVar9) = (char)(uVar3 >> 8);
                *(char *)(*(long *)(*(long *)param_4 + lVar11) + uVar8) = (char)(uVar5 >> 0x10);
              }
              uVar14 = uVar14 - 1;
              uVar17 = uVar17 + param_2;
            } while (uVar14 != 0);
          }
          bVar7 = 0;
        }
      }
      bVar4 = bVar7;
      uVar14 = *(uint *)(param_1 + 0xc);
      uVar17 = uVar12;
    } while (uVar14 < *(uint *)(param_1 + 8));
  }
  return;
}


