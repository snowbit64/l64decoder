// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,BufferedFileReader>>
// Entry Point: 00b98b48
// Size: 744 bytes
// Signature: void __cdecl _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,BufferedFileReader>>(CompressedFileInput * param_1, uint param_2, uint param_3, BitVector * param_4)


/* void RLEUtil::_decode<BitVector, unsigned char, CompressedIoUtil::CompressedFileInput<unsigned
   char, BufferedFileReader> >(CompressedIoUtil::CompressedFileInput<unsigned char,
   BufferedFileReader>*, unsigned int, unsigned int, BitVector*) */

void RLEUtil::
     _decode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,BufferedFileReader>>
               (CompressedFileInput *param_1,uint param_2,uint param_3,BitVector *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte local_70 [4];
  byte local_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    iVar15 = 0;
    uVar16 = 0;
    uVar4 = ~(-1 << (ulong)(param_3 & 0x1f));
    bVar18 = 0;
    do {
      iVar6 = BufferedFileReader::readInlined(*(BufferedFileReader **)param_1,local_6c,1);
      if (iVar6 != 1) break;
      uVar8 = iVar15 * param_2;
      lVar10 = *(long *)param_4;
      uVar17 = uVar8 & 7;
      lVar7 = *(long *)(lVar10 + (ulong)(uVar8 >> 0x13) * 8);
      uVar9 = (ulong)(uVar8 >> 3) & 0xffff;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      if ((uint)uVar9 < 0xfffd) {
        *(uint *)(lVar7 + uVar9) =
             *(uint *)(lVar7 + uVar9) & (uVar4 << (ulong)uVar17 ^ 0xffffffff) |
             (uint)local_6c[0] << (ulong)uVar17;
      }
      else {
        uVar1 = (uVar8 >> 3) + 1;
        uVar8 = (uVar8 >> 3) + 2;
        lVar13 = (ulong)(uVar1 >> 0x10) * 8;
        lVar14 = (ulong)(uVar8 >> 0x10) * 8;
        uVar12 = (ulong)uVar1 & 0xffff;
        uVar11 = (ulong)uVar8 & 0xffff;
        uVar8 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar10 + lVar14) + uVar11),
                               CONCAT11(*(undefined *)(*(long *)(lVar10 + lVar13) + uVar12),
                                        *(undefined *)(lVar7 + uVar9))) &
                (uVar4 << (ulong)uVar17 ^ 0xffffffff);
        uVar17 = uVar8 | (uint)local_6c[0] << (ulong)uVar17;
        *(char *)(lVar7 + uVar9) = (char)uVar17;
        *(char *)(*(long *)(*(long *)param_4 + lVar13) + uVar12) = (char)(uVar17 >> 8);
        *(char *)(*(long *)(*(long *)param_4 + lVar14) + uVar11) = (char)(uVar8 >> 0x10);
      }
      iVar15 = iVar15 + 1;
      uVar17 = 1;
      if ((((local_6c[0] == bVar18) && (((uVar16 ^ 1) & 1) == 0)) &&
          (uVar17 = uVar16, *(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8))) &&
         (iVar6 = BufferedFileReader::readInlined(*(BufferedFileReader **)param_1,local_70,1),
         iVar6 == 1)) {
        uVar17 = (uint)local_70[0];
        uVar16 = *(int *)(param_1 + 0xc) + 1;
        *(uint *)(param_1 + 0xc) = uVar16;
        uVar8 = uVar17;
        while (((uVar8 == 0xff && (uVar16 < *(uint *)(param_1 + 8))) &&
               (iVar6 = BufferedFileReader::readInlined(*(BufferedFileReader **)param_1,local_70,1),
               iVar6 == 1))) {
          uVar16 = *(int *)(param_1 + 0xc) + 1;
          uVar8 = (uint)local_70[0];
          uVar17 = uVar17 + uVar8;
          *(uint *)(param_1 + 0xc) = uVar16;
        }
        if (uVar17 != 0) {
          uVar16 = param_2 * iVar15;
          iVar15 = iVar15 + uVar17;
          do {
            lVar10 = *(long *)param_4;
            uVar9 = (ulong)(uVar16 >> 3) & 0xffff;
            lVar7 = *(long *)(lVar10 + (ulong)(uVar16 >> 0x13) * 8);
            uVar8 = uVar4 << (ulong)(uVar16 & 7);
            uVar1 = (uint)local_6c[0] << (ulong)(uVar16 & 7);
            if ((uint)uVar9 < 0xfffd) {
              *(uint *)(lVar7 + uVar9) = *(uint *)(lVar7 + uVar9) & (uVar8 ^ 0xffffffff) | uVar1;
            }
            else {
              uVar2 = (uVar16 >> 3) + 1;
              uVar3 = (uVar16 >> 3) + 2;
              lVar13 = (ulong)(uVar2 >> 0x10) * 8;
              lVar14 = (ulong)(uVar3 >> 0x10) * 8;
              uVar12 = (ulong)uVar2 & 0xffff;
              uVar11 = (ulong)uVar3 & 0xffff;
              uVar8 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar10 + lVar14) + uVar11),
                                     CONCAT11(*(undefined *)(*(long *)(lVar10 + lVar13) + uVar12),
                                              *(undefined *)(lVar7 + uVar9))) & (uVar8 ^ 0xffffffff)
              ;
              uVar1 = uVar8 | uVar1;
              *(char *)(lVar7 + uVar9) = (char)uVar1;
              *(char *)(*(long *)(*(long *)param_4 + lVar13) + uVar12) = (char)(uVar1 >> 8);
              *(char *)(*(long *)(*(long *)param_4 + lVar14) + uVar11) = (char)(uVar8 >> 0x10);
            }
            uVar17 = uVar17 - 1;
            uVar16 = uVar16 + param_2;
          } while (uVar17 != 0);
        }
      }
      uVar16 = uVar17;
      bVar18 = local_6c[0];
    } while (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


