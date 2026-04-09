// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _decode<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>
// Entry Point: 00b97f54
// Size: 428 bytes
// Signature: void __cdecl _decode<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>(CompressedBufferInput * param_1, uint param_2, uint param_3, basic_string * param_4)


/* void RLEUtil::_decode<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned char, CompressedIoUtil::CompressedBufferInput<unsigned
   char> >(CompressedIoUtil::CompressedBufferInput<unsigned char>*, unsigned int, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*)
    */

void RLEUtil::
     _decode<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_char,CompressedIoUtil::CompressedBufferInput<unsigned_char>>
               (CompressedBufferInput *param_1,uint param_2,uint param_3,basic_string *param_4)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = *(uint *)(param_1 + 0xc);
  if (uVar12 < *(uint *)(param_1 + 8)) {
    uVar8 = 0;
    bVar5 = 0;
    cVar10 = '\0';
    do {
      uVar9 = uVar8 + 1;
      *(uint *)(param_1 + 0xc) = uVar12 + 1;
      bVar3 = *(byte *)param_4;
      cVar4 = *(char *)(*(long *)param_1 + (ulong)uVar12);
      uVar6 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar6 = *(ulong *)(param_4 + 2);
      }
      if (uVar6 <= uVar8) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::resize((ulong)param_4,(char)uVar9);
        bVar3 = *(byte *)param_4;
      }
      lVar2 = (long)param_4 + 1;
      if ((bVar3 & 1) != 0) {
        lVar2 = *(long *)(param_4 + 4);
      }
      *(char *)(lVar2 + (ulong)uVar8) = cVar4;
      bVar3 = 1;
      if ((cVar4 == cVar10) && (!(bool)(bVar5 ^ 1))) {
        uVar12 = *(uint *)(param_1 + 0xc);
        uVar6 = (ulong)uVar12;
        bVar3 = bVar5;
        if (uVar12 < *(uint *)(param_1 + 8)) {
          *(uint *)(param_1 + 0xc) = uVar12 + 1;
          bVar5 = *(byte *)(*(long *)param_1 + uVar6);
          uVar12 = (uint)bVar5;
          if (bVar5 == 0xff) {
            do {
              if (*(uint *)(param_1 + 8) <= (int)uVar6 + 1U) break;
              *(int *)(param_1 + 0xc) = (int)uVar6 + 2;
              pbVar1 = (byte *)(*(long *)param_1 + 1 + uVar6);
              uVar6 = uVar6 + 1;
              uVar7 = (uint)*pbVar1;
              uVar12 = uVar12 + uVar7;
            } while (uVar7 == 0xff);
          }
          if (uVar12 != 0) {
            uVar9 = uVar9 + uVar12;
            iVar11 = uVar8 + 2;
            do {
              bVar5 = *(byte *)param_4;
              uVar8 = iVar11 - 1;
              uVar6 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                uVar6 = *(ulong *)(param_4 + 2);
              }
              if (uVar6 <= uVar8) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                resize((ulong)param_4,(char)iVar11);
                bVar5 = *(byte *)param_4;
              }
              iVar11 = iVar11 + 1;
              lVar2 = (long)param_4 + 1;
              if ((bVar5 & 1) != 0) {
                lVar2 = *(long *)(param_4 + 4);
              }
              uVar12 = uVar12 - 1;
              *(char *)(lVar2 + (ulong)uVar8) = cVar10;
            } while (uVar12 != 0);
          }
          bVar3 = 0;
        }
      }
      bVar5 = bVar3;
      uVar8 = uVar9;
      uVar12 = *(uint *)(param_1 + 0xc);
      cVar10 = cVar4;
    } while (uVar12 < *(uint *)(param_1 + 8));
  }
  return;
}


