// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildAbsolutePath
// Entry Point: 00c63ed4
// Size: 516 bytes
// Signature: undefined __cdecl buildAbsolutePath(basic_string * param_1, char * param_2, basic_string * param_3)


/* PathUtil::buildAbsolutePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::buildAbsolutePath(basic_string *param_1,char *param_2,basic_string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  if (*param_2 != '/') {
    bVar3 = *(byte *)param_1;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 2);
    }
    if (uVar1 != 0) {
      if (*param_2 == '.') {
        if (param_2[1] == '\0') {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_3,param_1);
          return;
        }
        uVar11 = 0;
        uVar6 = 0;
        do {
          if ((param_2[uVar11 + 1] != '.') || (param_2[uVar11 + 2] != '/')) break;
          uVar11 = uVar11 + 3;
          uVar6 = uVar6 + 1;
        } while (param_2[uVar11] == '.');
      }
      else {
        uVar6 = 0;
      }
      pcVar7 = *(char **)(param_1 + 4);
      if ((bVar3 & 1) == 0) {
        pcVar7 = (char *)((long)param_1 + 1);
      }
      uVar10 = uVar1 - 1;
      if (pcVar7[uVar1 - 1] != '/') {
        uVar10 = uVar1;
      }
      if (uVar6 != 0) {
        uVar11 = 0;
        bVar5 = true;
        do {
          uVar2 = uVar1;
          if (uVar10 - 1 <= uVar1) {
            uVar2 = uVar10 - 1;
          }
          uVar10 = uVar1;
          if (1 < uVar1 - uVar2) {
            uVar10 = uVar2 + 1;
          }
          if ((long)uVar10 < 1) {
LAB_00c64020:
            if (*pcVar7 == '/') {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (param_3,(ulong)param_1,0);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)param_3);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)param_3);
            }
            else {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)param_3);
            }
            if (bVar5) {
              return;
            }
            break;
          }
          lVar8 = -uVar10;
          lVar9 = -1;
          do {
            if (lVar8 == 0) goto LAB_00c64020;
            lVar4 = lVar9 + uVar10;
            lVar9 = lVar9 + -1;
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar4] != '/');
          uVar10 = 0xffffffffffffffff;
          if (lVar9 != -1) {
            uVar10 = -lVar8;
          }
          if (uVar10 + 1 < 2) goto LAB_00c64020;
          uVar11 = uVar11 + 1;
          bVar5 = uVar11 < uVar6;
        } while (uVar11 != uVar6);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_3,(ulong)param_1,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_3);
      return;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_3);
  return;
}


