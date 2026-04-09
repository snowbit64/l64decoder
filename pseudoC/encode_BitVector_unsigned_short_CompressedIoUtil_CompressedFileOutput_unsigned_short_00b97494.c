// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileOutput<unsigned_short>>
// Entry Point: 00b97494
// Size: 576 bytes
// Signature: void __cdecl _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileOutput<unsigned_short>>(BitVector * param_1, uint param_2, uint param_3, uint param_4, CompressedFileOutput * param_5, bool param_6)


/* void RLEUtil::_encode<BitVector, unsigned short, CompressedIoUtil::CompressedFileOutput<unsigned
   short> >(BitVector const*, unsigned int, unsigned int, unsigned int,
   CompressedIoUtil::CompressedFileOutput<unsigned short>*, bool) */

void RLEUtil::
     _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileOutput<unsigned_short>>
               (BitVector *param_1,uint param_2,uint param_3,uint param_4,
               CompressedFileOutput *param_5,bool param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != 0) {
    uVar2 = -1 << (ulong)(param_4 & 0x1f);
    uVar10 = ***(uint ***)param_1 & (uVar2 ^ 0xffffffff);
    CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
              ((CompressedFileOutput<unsigned_short> *)param_5,(ushort)uVar10);
    if (param_2 != 1) {
      uVar2 = ~uVar2;
      uVar11 = 1;
      do {
        uVar3 = uVar11 * param_3;
        lVar9 = *(long *)param_1;
        uVar7 = (ulong)(uVar3 >> 3) & 0xffff;
        lVar5 = *(long *)(lVar9 + (ulong)(uVar3 >> 0x13) * 8);
        if ((uint)uVar7 < 0xfffd) {
          uVar4 = *(uint *)(lVar5 + uVar7);
        }
        else {
          uVar4 = (uVar3 >> 3) + 1;
          uVar8 = (uVar3 >> 3) + 2;
          uVar4 = (uint)CONCAT12(*(undefined *)
                                  (*(long *)(lVar9 + (ulong)(uVar8 >> 0x10) * 8) +
                                  ((ulong)uVar8 & 0xffff)),
                                 CONCAT11(*(undefined *)
                                           (*(long *)(lVar9 + (ulong)(uVar4 >> 0x10) * 8) +
                                           ((ulong)uVar4 & 0xffff)),*(undefined *)(lVar5 + uVar7)));
        }
        uVar11 = uVar11 + 1;
        uVar3 = uVar4 >> (ulong)(uVar3 & 7) & uVar2;
        CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
                  ((CompressedFileOutput<unsigned_short> *)param_5,(ushort)uVar3);
        if ((uVar10 & 0xffff) == (uVar3 & 0xffff)) {
          do {
            if (param_2 <= uVar11) {
              uVar3 = 0;
LAB_00b976ac:
              CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
                        ((CompressedFileOutput<unsigned_short> *)param_5,(ushort)uVar3);
              uVar3 = uVar10;
              if (param_2 <= uVar11) goto LAB_00b9754c;
              goto LAB_00b976bc;
            }
            uVar4 = param_3 * uVar11;
            lVar5 = *(long *)param_1;
            iVar6 = 1;
            do {
              uVar7 = (ulong)(uVar4 >> 3) & 0xffff;
              lVar9 = *(long *)(lVar5 + (ulong)(uVar4 >> 0x13) * 8);
              if ((uint)uVar7 < 0xfffd) {
                uVar8 = *(uint *)(lVar9 + uVar7);
              }
              else {
                uVar3 = (uVar4 >> 3) + 1;
                uVar8 = (uVar4 >> 3) + 2;
                uVar8 = (uint)CONCAT12(*(undefined *)
                                        (*(long *)(lVar5 + (ulong)(uVar8 >> 0x10) * 8) +
                                        ((ulong)uVar8 & 0xffff)),
                                       CONCAT11(*(undefined *)
                                                 (*(long *)(lVar5 + (ulong)(uVar3 >> 0x10) * 8) +
                                                 ((ulong)uVar3 & 0xffff)),
                                                *(undefined *)(lVar9 + uVar7)));
              }
              uVar3 = iVar6 - 1;
              uVar8 = uVar8 >> (ulong)(uVar4 & 7) & uVar2;
              if ((uVar10 & 0xffff) != (uVar8 & 0xffff)) {
                uVar11 = uVar11 + iVar6;
                uVar10 = uVar8;
                goto LAB_00b976ac;
              }
              iVar1 = iVar6 + 1;
            } while ((uVar3 < 0xfffe) &&
                    (uVar3 = uVar11 + iVar6, uVar4 = uVar4 + param_3, iVar6 = iVar1, uVar3 < param_2
                    ));
            CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
                      ((CompressedFileOutput<unsigned_short> *)param_5,(short)iVar1 - 1);
            uVar11 = (uVar11 + iVar1) - 1;
          } while (iVar1 == 0x10000);
          uVar3 = uVar10;
          if (uVar11 < param_2) {
LAB_00b976bc:
            CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
                      ((CompressedFileOutput<unsigned_short> *)param_5,(ushort)uVar10);
            uVar3 = uVar10;
          }
        }
LAB_00b9754c:
        uVar10 = uVar3;
      } while (uVar11 < param_2);
    }
    if (param_6) {
      CompressedIoUtil::CompressedFileOutput<unsigned_short>::writeChar
                ((CompressedFileOutput<unsigned_short> *)param_5,0);
      return;
    }
  }
  return;
}


