// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _encode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>
// Entry Point: 00b96f84
// Size: 372 bytes
// Signature: void __cdecl _encode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>(uchar * param_1, uint param_2, uint param_3, uint param_4, CompressedFileOutput * param_5, bool param_6)


/* void RLEUtil::_encode<unsigned char, unsigned char,
   CompressedIoUtil::CompressedFileOutput<unsigned char> >(unsigned char const*, unsigned int,
   unsigned int, unsigned int, CompressedIoUtil::CompressedFileOutput<unsigned char>*, bool) */

void RLEUtil::
     _encode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>
               (uchar *param_1,uint param_2,uint param_3,uint param_4,CompressedFileOutput *param_5,
               bool param_6)

{
  long lVar1;
  long lVar2;
  uchar uVar3;
  uint uVar4;
  long lVar5;
  uchar uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 != 0) {
    uVar6 = *param_1;
    CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
              ((CompressedFileOutput<unsigned_char> *)param_5,uVar6);
    if (param_2 != 1) {
      uVar8 = 1;
      do {
        uVar3 = param_1[uVar8];
        uVar8 = uVar8 + 1;
        CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                  ((CompressedFileOutput<unsigned_char> *)param_5,uVar3);
        uVar4 = uVar8;
        if (uVar3 == uVar6) {
          do {
            uVar8 = uVar4;
            if (param_2 <= uVar8) {
              CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                        ((CompressedFileOutput<unsigned_char> *)param_5,'\0');
              goto joined_r0x00b970cc;
            }
            lVar5 = 0;
            do {
              uVar3 = param_1[lVar5 + (ulong)uVar8];
              if (uVar3 != uVar6) {
                uVar8 = uVar8 + (uint)lVar5 + 1;
                CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                          ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)lVar5);
                uVar6 = uVar3;
                goto joined_r0x00b970cc;
              }
              lVar1 = lVar5 + 1;
            } while (((uint)lVar5 < 0xfe) &&
                    (lVar2 = (ulong)uVar8 + lVar5, lVar5 = lVar1, lVar2 + 1U < (ulong)param_2));
            iVar7 = (int)lVar1;
            CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                      ((CompressedFileOutput<unsigned_char> *)param_5,(uchar)lVar1);
            uVar4 = uVar8 + iVar7;
          } while (iVar7 == 0xff);
          uVar8 = uVar8 + iVar7;
joined_r0x00b970cc:
          uVar3 = uVar6;
          if (uVar8 < param_2) {
            CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                      ((CompressedFileOutput<unsigned_char> *)param_5,uVar6);
          }
        }
        uVar6 = uVar3;
      } while (uVar8 < param_2);
    }
    if (param_6) {
      CompressedIoUtil::CompressedFileOutput<unsigned_char>::writeChar
                ((CompressedFileOutput<unsigned_char> *)param_5,'\0');
      return;
    }
  }
  return;
}


