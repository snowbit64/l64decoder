// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeBackReferencesInPlace
// Entry Point: 00c638b4
// Size: 544 bytes
// Signature: undefined __cdecl removeBackReferencesInPlace(basic_string * param_1)


/* PathUtil::removeBackReferencesInPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::removeBackReferencesInPlace(basic_string *param_1)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  char *pcVar9;
  long lVar10;
  
  StringUtil::substituteInPlace('\\','/',param_1);
  bVar3 = *(byte *)param_1;
  uVar6 = (ulong)bVar3;
  pcVar1 = (char *)((long)param_1 + 1);
  pcVar7 = *(char **)(param_1 + 4);
  bVar8 = bVar3 & 1;
  pcVar9 = pcVar7;
  if ((bVar3 & 1) == 0) {
    pcVar9 = (char *)((long)param_1 + 1);
  }
  if ((*pcVar9 == '/') && (pcVar9[1] == '/')) {
    pcVar9[1] = '\\';
    pcVar9 = pcVar1;
    if ((*(byte *)param_1 & 1) != 0) {
      pcVar9 = *(char **)(param_1 + 4);
    }
    *pcVar9 = '\\';
    uVar6 = (ulong)*(byte *)param_1;
    pcVar7 = *(char **)(param_1 + 4);
    bVar8 = *(byte *)param_1 & 1;
  }
  uVar6 = uVar6 >> 1;
  pcVar9 = pcVar1;
  if (bVar8 != 0) {
    uVar6 = *(ulong *)(param_1 + 2);
    pcVar9 = pcVar7;
  }
  if (3 < (long)uVar6) {
    piVar5 = (int *)(pcVar9 + uVar6);
    pcVar7 = pcVar9;
    do {
      piVar4 = (int *)memchr(pcVar7,0x2f,uVar6 - 3);
      if (piVar4 == (int *)0x0) {
        return;
      }
      if (*piVar4 == 0x2f2e2e2f) {
        do {
          if (piVar4 == piVar5) {
            return;
          }
          lVar10 = (long)piVar4 - (long)pcVar9;
          while( true ) {
            if (lVar10 == -1) {
              return;
            }
            uVar6 = std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    rfind((char)param_1,0x2f);
            if (uVar6 == 0xffffffffffffffff) break;
            bVar8 = *(byte *)param_1;
            pcVar7 = *(char **)(param_1 + 4);
            pcVar9 = pcVar1;
            if ((bVar8 & 1) != 0) {
              pcVar9 = pcVar7;
            }
            if (pcVar9[uVar6 + 1] == '.') goto LAB_00c63a60;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
                      ((ulong)param_1,uVar6 + 1);
            uVar2 = (ulong)(*(byte *)param_1 >> 1);
            pcVar9 = pcVar1;
            if ((*(byte *)param_1 & 1) != 0) {
              uVar2 = *(ulong *)(param_1 + 2);
              pcVar9 = *(char **)(param_1 + 4);
            }
            if (uVar2 < uVar6) {
              return;
            }
            pcVar7 = pcVar9 + uVar6;
            while( true ) {
              lVar10 = (long)(pcVar9 + uVar2) - (long)pcVar7;
              if (lVar10 < 4) {
                return;
              }
              piVar5 = (int *)memchr(pcVar7,0x2f,lVar10 - 3);
              if (piVar5 == (int *)0x0) {
                return;
              }
              if (*piVar5 == 0x2f2e2e2f) break;
              pcVar7 = (char *)((long)piVar5 + 1);
            }
            if (piVar5 == (int *)(pcVar9 + uVar2)) {
              return;
            }
            lVar10 = (long)piVar5 - (long)pcVar9;
          }
          bVar8 = *(byte *)param_1;
          pcVar7 = *(char **)(param_1 + 4);
LAB_00c63a60:
          uVar6 = (ulong)(bVar8 >> 1);
          pcVar9 = pcVar1;
          if ((bVar8 & 1) != 0) {
            uVar6 = *(ulong *)(param_1 + 2);
            pcVar9 = pcVar7;
          }
          if (uVar6 < lVar10 + 3U) {
            return;
          }
          pcVar7 = pcVar9 + lVar10 + 3U;
          piVar5 = (int *)(pcVar9 + uVar6);
          while( true ) {
            if ((long)piVar5 - (long)pcVar7 < 4) {
              return;
            }
            piVar4 = (int *)memchr(pcVar7,0x2f,((long)piVar5 - (long)pcVar7) - 3);
            if (piVar4 == (int *)0x0) {
              return;
            }
            if (*piVar4 == 0x2f2e2e2f) break;
            pcVar7 = (char *)((long)piVar4 + 1);
          }
        } while( true );
      }
      pcVar7 = (char *)((long)piVar4 + 1);
      uVar6 = (long)piVar5 - (long)pcVar7;
    } while (3 < (long)uVar6);
  }
  return;
}


