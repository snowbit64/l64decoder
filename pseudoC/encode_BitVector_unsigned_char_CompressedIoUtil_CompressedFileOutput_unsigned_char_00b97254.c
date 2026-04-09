// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>
// Entry Point: 00b97254
// Size: 576 bytes
// Signature: void __cdecl _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>(BitVector * param_1, uint param_2, uint param_3, uint param_4, CompressedFileOutput * param_5, bool param_6)


/* void RLEUtil::_encode<BitVector, unsigned char, CompressedIoUtil::CompressedFileOutput<unsigned
   char> >(BitVector const*, unsigned int, unsigned int, unsigned int,
   CompressedIoUtil::CompressedFileOutput<unsigned char>*, bool) */

void RLEUtil::_encode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>
               (BitVector *param_1,uint param_2,uint param_3,uint param_4,
               CompressedFileOutput *param_5,bool param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != 0) {
    uVar3 = -1 << (ulong)(param_4 & 0x1f);
    uVar10 = ***(uint ***)param_1 & (uVar3 ^ 0xffffffff);
    CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
              ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)uVar10);
    if (param_2 != 1) {
      uVar3 = ~uVar3;
      uVar11 = 1;
      do {
        uVar4 = uVar11 * param_3;
        lVar9 = *(long *)param_1;
        uVar8 = (ulong)(uVar4 >> 3) & 0xffff;
        lVar6 = *(long *)(lVar9 + (ulong)(uVar4 >> 0x13) * 8);
        if ((uint)uVar8 < 0xfffd) {
          uVar5 = *(uint *)(lVar6 + uVar8);
        }
        else {
          uVar5 = (uVar4 >> 3) + 1;
          uVar7 = (uVar4 >> 3) + 2;
          uVar5 = (uint)CONCAT12(*(undefined *)
                                  (*(long *)(lVar9 + (ulong)(uVar7 >> 0x10) * 8) +
                                  ((ulong)uVar7 & 0xffff)),
                                 CONCAT11(*(undefined *)
                                           (*(long *)(lVar9 + (ulong)(uVar5 >> 0x10) * 8) +
                                           ((ulong)uVar5 & 0xffff)),*(undefined *)(lVar6 + uVar8)));
        }
        uVar11 = uVar11 + 1;
        uVar4 = uVar5 >> (ulong)(uVar4 & 7) & uVar3;
        CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                  ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)uVar4);
        if ((uVar10 & 0xff) == (uVar4 & 0xff)) {
          do {
            if (param_2 <= uVar11) {
              uVar4 = 0;
LAB_00b9746c:
              CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                        ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)uVar4);
              uVar4 = uVar10;
              if (param_2 <= uVar11) goto LAB_00b9730c;
              goto LAB_00b9747c;
            }
            uVar5 = param_3 * uVar11;
            lVar6 = *(long *)param_1;
            uVar4 = 0;
            do {
              uVar8 = (ulong)(uVar5 >> 3) & 0xffff;
              lVar9 = *(long *)(lVar6 + (ulong)(uVar5 >> 0x13) * 8);
              if ((uint)uVar8 < 0xfffd) {
                uVar7 = *(uint *)(lVar9 + uVar8);
              }
              else {
                uVar7 = (uVar5 >> 3) + 1;
                uVar1 = (uVar5 >> 3) + 2;
                uVar7 = (uint)CONCAT12(*(undefined *)
                                        (*(long *)(lVar6 + (ulong)(uVar1 >> 0x10) * 8) +
                                        ((ulong)uVar1 & 0xffff)),
                                       CONCAT11(*(undefined *)
                                                 (*(long *)(lVar6 + (ulong)(uVar7 >> 0x10) * 8) +
                                                 ((ulong)uVar7 & 0xffff)),
                                                *(undefined *)(lVar9 + uVar8)));
              }
              uVar7 = uVar7 >> (ulong)(uVar5 & 7) & uVar3;
              if ((uVar10 & 0xff) != (uVar7 & 0xff)) {
                uVar11 = uVar11 + uVar4 + 1;
                uVar10 = uVar7;
                goto LAB_00b9746c;
              }
              uVar7 = uVar4 + 1;
            } while ((uVar4 < 0xfe) &&
                    (iVar2 = uVar11 + uVar4, uVar5 = uVar5 + param_3, uVar4 = uVar7,
                    iVar2 + 1U < param_2));
            CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                      ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)uVar7);
            uVar11 = uVar11 + uVar7;
          } while (uVar7 == 0xff);
          uVar4 = uVar10;
          if (uVar11 < param_2) {
LAB_00b9747c:
            CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                      ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)uVar10);
            uVar4 = uVar10;
          }
        }
LAB_00b9730c:
        uVar10 = uVar4;
      } while (uVar11 < param_2);
    }
    if (param_6) {
      CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                ((CompressedFileOutput<unsigned_char> *)param_5,'\0');
      return;
    }
  }
  return;
}


