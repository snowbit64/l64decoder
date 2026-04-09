// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseString
// Entry Point: 00b29adc
// Size: 888 bytes
// Signature: undefined __cdecl parseString(basic_string * param_1, char * * param_2, ParamSet * param_3)


/* JSONUtil::parseString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, char const*&, JSONUtil::ParamSet const*) */

void JSONUtil::parseString(basic_string *param_1,char **param_2,ParamSet *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  undefined8 uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char acStack_4c [4];
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  pbVar10 = (byte *)*param_2;
  bVar2 = *pbVar10;
  while (bVar2 - 1 < 0x20) {
    pbVar10 = pbVar10 + 1;
    *param_2 = (char *)pbVar10;
    bVar2 = *pbVar10;
  }
  if (bVar2 != 0x22) {
LAB_00b29e14:
    uVar9 = 0;
switchD_00b29c0c_caseD_23:
    if (*(long *)(lVar7 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  pbVar10 = pbVar10 + 1;
  *param_2 = (char *)pbVar10;
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar8 = (char)param_1;
      if (bVar2 < 0x5c) break;
      if (bVar2 == 0x5c) {
        uVar9 = 0;
        *param_2 = (char *)(pbVar10 + 2);
        switch(pbVar10[1]) {
        case 0x22:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        default:
          goto switchD_00b29c0c_caseD_23;
        case 0x2f:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x5c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x62:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x66:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x6e:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x72:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x74:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar8);
          pbVar10 = (byte *)*param_2;
          break;
        case 0x75:
          bVar2 = pbVar10[2];
          if (bVar2 - 0x30 < 10) {
            iVar11 = 0xffd0;
          }
          else if (bVar2 - 0x41 < 6) {
            iVar11 = 0xffc9;
          }
          else {
            if (5 < bVar2 - 0x61) goto LAB_00b29e14;
            iVar11 = 0xffa9;
          }
          *param_2 = (char *)(pbVar10 + 3);
          bVar3 = pbVar10[3];
          if (bVar3 - 0x30 < 10) {
            iVar12 = 0xffd0;
          }
          else if (bVar3 - 0x41 < 6) {
            iVar12 = 0xffc9;
          }
          else {
            if (5 < bVar3 - 0x61) goto LAB_00b29e14;
            iVar12 = 0xffa9;
          }
          *param_2 = (char *)(pbVar10 + 4);
          bVar4 = pbVar10[4];
          if (bVar4 - 0x30 < 10) {
            iVar13 = 0xffd0;
          }
          else if (bVar4 - 0x41 < 6) {
            iVar13 = 0xffc9;
          }
          else {
            if (5 < bVar4 - 0x61) goto LAB_00b29e14;
            iVar13 = 0xffa9;
          }
          *param_2 = (char *)(pbVar10 + 5);
          bVar5 = pbVar10[5];
          if (bVar5 - 0x30 < 10) {
            iVar14 = 0xffd0;
          }
          else if (bVar5 - 0x41 < 6) {
            iVar14 = 0xffc9;
          }
          else {
            if (5 < bVar5 - 0x61) goto LAB_00b29e14;
            iVar14 = 0xffa9;
          }
          *param_2 = (char *)(pbVar10 + 6);
          StringUtil::unicodeToUtf8
                    ((iVar14 + (uint)bVar5 |
                     (iVar13 + (uint)bVar4 |
                     (iVar11 + (uint)bVar2) * 0x100 | (iVar12 + (uint)bVar3) * 0x10) << 4) & 0xffff,
                     acStack_4c);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)param_1,(ulong)acStack_4c);
          pbVar10 = (byte *)*param_2;
        }
      }
      else {
LAB_00b29b58:
        *param_2 = (char *)(pbVar10 + 1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar8);
        pbVar10 = (byte *)*param_2;
      }
    }
    if (bVar2 != 0x25) {
      if (bVar2 == 0) goto LAB_00b29e14;
      if (bVar2 != 0x22) goto LAB_00b29b58;
      uVar9 = 1;
      *param_2 = (char *)(pbVar10 + 1);
      goto switchD_00b29c0c_caseD_23;
    }
    if ((param_3 == (ParamSet *)0x0) || (uVar6 = pbVar10[1] - 0x30, 9 < uVar6)) goto LAB_00b29b58;
    if (*(uint *)param_3 < uVar6) goto LAB_00b29e14;
    uVar9 = 0;
    pcVar1 = (char *)(*(long *)(param_3 + 8) + (ulong)uVar6 * 0x10);
    if ((*pcVar1 != '\x03') || (*(long *)(pcVar1 + 8) == 0)) goto switchD_00b29c0c_caseD_23;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
    pbVar10 = (byte *)(*param_2 + 2);
    *param_2 = (char *)pbVar10;
  } while( true );
}


