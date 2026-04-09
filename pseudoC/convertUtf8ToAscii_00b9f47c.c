// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUtf8ToAscii
// Entry Point: 00b9f47c
// Size: 292 bytes
// Signature: undefined __cdecl convertUtf8ToAscii(char * param_1, basic_string * param_2, bool param_3)


/* StringUtil::convertUtf8ToAscii(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */

void StringUtil::convertUtf8ToAscii(char *param_1,basic_string *param_2,bool param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  bVar2 = *param_1;
  cVar4 = '\0';
  pbVar1 = (byte *)param_1;
  do {
    if (bVar2 == 0) {
LAB_00b9f568:
      uVar6 = 0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize((ulong)param_2,cVar4);
      pcVar5 = *(char **)(param_2 + 4);
      if ((*(byte *)param_2 & 1) == 0) {
        pcVar5 = (char *)((long)param_2 + 1);
      }
      convertUtf8ToAscii(param_1,pcVar5,uVar6,param_3);
      return;
    }
    uVar6 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      bVar2 = pbVar1[1];
      uVar7 = (uint)bVar2;
      if (bVar2 != 0) {
        if ((uVar6 & 0xe0) == 0xc0) {
          uVar6 = (uVar6 & 0x1f) << 6;
          lVar8 = 2;
        }
        else {
          bVar3 = pbVar1[2];
          uVar7 = (uint)bVar3;
          if (bVar3 == 0) goto LAB_00b9f560;
          if ((uVar6 & 0xf0) == 0xe0) {
            uVar6 = (uVar6 & 0xf) << 0xc | (bVar2 & 0x3f) << 6;
            lVar8 = 3;
          }
          else {
            uVar7 = (uint)pbVar1[3];
            if ((uVar7 == 0) || ((uVar6 & 0xf8) != 0xf0)) goto LAB_00b9f560;
            uVar6 = (uVar6 & 7) << 0x12 | (bVar2 & 0x3f) << 0xc | (bVar3 & 0x3f) << 6;
            lVar8 = 4;
          }
        }
        uVar6 = uVar6 | uVar7 & 0x3f;
        if (uVar6 != 0) goto LAB_00b9f550;
      }
LAB_00b9f560:
      if (param_3) {
LAB_00b9f564:
        cVar4 = '\0';
      }
      goto LAB_00b9f568;
    }
    lVar8 = 1;
LAB_00b9f550:
    if (uVar6 < 0xff) {
      cVar4 = cVar4 + '\x01';
    }
    else if (param_3) goto LAB_00b9f564;
    pbVar1 = pbVar1 + lVar8;
    bVar2 = *pbVar1;
  } while( true );
}


