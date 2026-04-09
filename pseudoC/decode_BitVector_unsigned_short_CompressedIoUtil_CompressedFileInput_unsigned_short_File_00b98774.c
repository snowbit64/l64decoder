// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileInput<unsigned_short,File>>
// Entry Point: 00b98774
// Size: 800 bytes
// Signature: void __cdecl _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileInput<unsigned_short,File>>(CompressedFileInput * param_1, uint param_2, uint param_3, BitVector * param_4)


/* void RLEUtil::_decode<BitVector, unsigned short, CompressedIoUtil::CompressedFileInput<unsigned
   short, File> >(CompressedIoUtil::CompressedFileInput<unsigned short, File>*, unsigned int,
   unsigned int, BitVector*) */

void RLEUtil::
     _decode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileInput<unsigned_short,File>>
               (CompressedFileInput *param_1,uint param_2,uint param_3,BitVector *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  ushort local_70 [2];
  ushort local_6c [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((ulong)*(uint *)(param_1 + 0xc) + 2 <= (ulong)*(uint *)(param_1 + 8)) {
    iVar15 = 0;
    uVar16 = 0;
    uVar5 = ~(-1 << (ulong)(param_3 & 0x1f));
    uVar18 = 0;
    do {
      iVar7 = (**(code **)(**(long **)param_1 + 0x28))(*(long **)param_1,local_6c,2);
      if (iVar7 != 2) break;
      uVar4 = iVar15 * param_2;
      lVar10 = *(long *)param_4;
      uVar17 = uVar4 & 7;
      lVar8 = *(long *)(lVar10 + (ulong)(uVar4 >> 0x13) * 8);
      uVar9 = (ulong)(uVar4 >> 3) & 0xffff;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
      if ((uint)uVar9 < 0xfffd) {
        *(uint *)(lVar8 + uVar9) =
             *(uint *)(lVar8 + uVar9) & (uVar5 << (ulong)uVar17 ^ 0xffffffff) |
             (uint)local_6c[0] << (ulong)uVar17;
      }
      else {
        uVar1 = (uVar4 >> 3) + 1;
        uVar4 = (uVar4 >> 3) + 2;
        lVar13 = (ulong)(uVar1 >> 0x10) * 8;
        lVar14 = (ulong)(uVar4 >> 0x10) * 8;
        uVar12 = (ulong)uVar1 & 0xffff;
        uVar11 = (ulong)uVar4 & 0xffff;
        uVar17 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar10 + lVar14) + uVar11),
                                CONCAT11(*(undefined *)(*(long *)(lVar10 + lVar13) + uVar12),
                                         *(undefined *)(lVar8 + uVar9))) &
                 (uVar5 << (ulong)uVar17 ^ 0xffffffff) | (uint)local_6c[0] << (ulong)uVar17;
        *(char *)(lVar8 + uVar9) = (char)uVar17;
        *(char *)(*(long *)(*(long *)param_4 + lVar13) + uVar12) = (char)(uVar17 >> 8);
        *(char *)(*(long *)(*(long *)param_4 + lVar14) + uVar11) = (char)(uVar17 >> 0x10);
      }
      iVar15 = iVar15 + 1;
      uVar17 = 1;
      if ((((local_6c[0] == uVar18) && (((uVar16 ^ 1) & 1) == 0)) &&
          (uVar17 = uVar16, (ulong)*(uint *)(param_1 + 0xc) + 2 <= (ulong)*(uint *)(param_1 + 8)))
         && (iVar7 = (**(code **)(**(long **)param_1 + 0x28))(*(long **)param_1,local_70,2),
            iVar7 == 2)) {
        uVar17 = (uint)local_70[0];
        uVar16 = *(int *)(param_1 + 0xc) + 2;
        *(uint *)(param_1 + 0xc) = uVar16;
        if (uVar17 == 0xffff) {
          uVar17 = 0xffff;
          do {
            if (((ulong)*(uint *)(param_1 + 8) < (ulong)uVar16 + 2) ||
               (iVar7 = (**(code **)(**(long **)param_1 + 0x28))(*(long **)param_1,local_70,2),
               iVar7 != 2)) break;
            uVar16 = *(int *)(param_1 + 0xc) + 2;
            uVar17 = uVar17 + local_70[0];
            *(uint *)(param_1 + 0xc) = uVar16;
          } while (local_70[0] == 0xffff);
        }
        if (uVar17 != 0) {
          uVar16 = param_2 * iVar15;
          iVar15 = iVar15 + uVar17;
          do {
            lVar10 = *(long *)param_4;
            uVar9 = (ulong)(uVar16 >> 3) & 0xffff;
            lVar8 = *(long *)(lVar10 + (ulong)(uVar16 >> 0x13) * 8);
            uVar4 = uVar5 << (ulong)(uVar16 & 7);
            uVar1 = (uint)local_6c[0] << (ulong)(uVar16 & 7);
            if ((uint)uVar9 < 0xfffd) {
              *(uint *)(lVar8 + uVar9) = *(uint *)(lVar8 + uVar9) & (uVar4 ^ 0xffffffff) | uVar1;
            }
            else {
              uVar2 = (uVar16 >> 3) + 1;
              uVar3 = (uVar16 >> 3) + 2;
              lVar13 = (ulong)(uVar2 >> 0x10) * 8;
              lVar14 = (ulong)(uVar3 >> 0x10) * 8;
              uVar12 = (ulong)uVar2 & 0xffff;
              uVar11 = (ulong)uVar3 & 0xffff;
              uVar1 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar10 + lVar14) + uVar11),
                                     CONCAT11(*(undefined *)(*(long *)(lVar10 + lVar13) + uVar12),
                                              *(undefined *)(lVar8 + uVar9))) & (uVar4 ^ 0xffffffff)
                      | uVar1;
              *(char *)(lVar8 + uVar9) = (char)uVar1;
              *(char *)(*(long *)(*(long *)param_4 + lVar13) + uVar12) = (char)(uVar1 >> 8);
              *(char *)(*(long *)(*(long *)param_4 + lVar14) + uVar11) = (char)(uVar1 >> 0x10);
            }
            uVar17 = uVar17 - 1;
            uVar16 = uVar16 + param_2;
          } while (uVar17 != 0);
        }
      }
      uVar16 = uVar17;
      uVar18 = local_6c[0];
    } while ((ulong)*(uint *)(param_1 + 0xc) + 2 <= (ulong)*(uint *)(param_1 + 8));
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


