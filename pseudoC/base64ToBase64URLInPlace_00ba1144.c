// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64ToBase64URLInPlace
// Entry Point: 00ba1144
// Size: 716 bytes
// Signature: undefined __cdecl base64ToBase64URLInPlace(basic_string * param_1)


/* WARNING: Type propagation algorithm not settling */
/* StringUtil::base64ToBase64URLInPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::base64ToBase64URLInPlace(basic_string *param_1)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  
  bVar3 = *(byte *)param_1;
  pcVar1 = (char *)((long)param_1 + 1);
  uVar7 = *(ulong *)(param_1 + 2);
  while( true ) {
    bVar4 = (bVar3 & 1) != 0;
    uVar2 = (ulong)(bVar3 >> 1);
    if (bVar4) {
      uVar2 = uVar7;
    }
    if (uVar2 == 0) goto LAB_00ba12b0;
    pcVar5 = pcVar1;
    if (bVar4) {
      pcVar5 = *(char **)(param_1 + 4);
    }
    if (pcVar5[uVar2 - 1] != '=') break;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)param_1,(char)uVar2 + -1);
    bVar3 = *(byte *)param_1;
    uVar7 = *(ulong *)(param_1 + 2);
  }
  pcVar5 = pcVar1;
  if (bVar4) {
    pcVar5 = *(char **)(param_1 + 4);
  }
  pcVar6 = pcVar5;
  if (7 < uVar2) {
    uVar8 = uVar2 & 0xfffffffffffffff8;
    pcVar6 = pcVar5 + uVar8;
    pcVar9 = pcVar5 + 3;
    uVar7 = uVar8;
    do {
      uVar10 = NEON_cmeq(*(undefined8 *)(pcVar9 + -3),0x2b2b2b2b2b2b2b2b,1);
      if ((uVar10 & 1) != 0) {
        pcVar9[-3] = '-';
      }
      if ((uVar10 & 0x100) != 0) {
        pcVar9[-2] = '-';
      }
      if ((uVar10 & 0x10000) != 0) {
        pcVar9[-1] = '-';
      }
      if ((uVar10 & 0x1000000) != 0) {
        *pcVar9 = '-';
      }
      if ((uVar10 & 0x100000000) != 0) {
        pcVar9[1] = '-';
      }
      if ((uVar10 & 0x10000000000) != 0) {
        pcVar9[2] = '-';
      }
      if ((uVar10 & 0x1000000000000) != 0) {
        pcVar9[3] = '-';
      }
      if ((uVar10 & 0x100000000000000) != 0) {
        pcVar9[4] = '-';
      }
      uVar7 = uVar7 - 8;
      pcVar9 = pcVar9 + 8;
    } while (uVar7 != 0);
    if (uVar2 == uVar8) goto LAB_00ba12a8;
  }
  do {
    if (*pcVar6 == '+') {
      *pcVar6 = '-';
    }
    pcVar6 = pcVar6 + 1;
  } while (pcVar6 != pcVar5 + uVar2);
LAB_00ba12a8:
  bVar3 = *(byte *)param_1;
  uVar7 = *(ulong *)(param_1 + 2);
LAB_00ba12b0:
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
    uVar2 = uVar7;
  }
  if (uVar2 != 0) {
    pcVar5 = pcVar1;
    if (7 < uVar2) {
      uVar8 = uVar2 & 0xfffffffffffffff8;
      pcVar5 = pcVar1 + uVar8;
      pcVar6 = pcVar1 + 3;
      uVar7 = uVar8;
      do {
        uVar10 = NEON_cmeq(*(undefined8 *)(pcVar6 + -3),0x2f2f2f2f2f2f2f2f,1);
        if ((uVar10 & 1) != 0) {
          pcVar6[-3] = '_';
        }
        if ((uVar10 & 0x100) != 0) {
          pcVar6[-2] = '_';
        }
        if ((uVar10 & 0x10000) != 0) {
          pcVar6[-1] = '_';
        }
        if ((uVar10 & 0x1000000) != 0) {
          *pcVar6 = '_';
        }
        if ((uVar10 & 0x100000000) != 0) {
          pcVar6[1] = '_';
        }
        if ((uVar10 & 0x10000000000) != 0) {
          pcVar6[2] = '_';
        }
        if ((uVar10 & 0x1000000000000) != 0) {
          pcVar6[3] = '_';
        }
        if ((uVar10 & 0x100000000000000) != 0) {
          pcVar6[4] = '_';
        }
        uVar7 = uVar7 - 8;
        pcVar6 = pcVar6 + 8;
      } while (uVar7 != 0);
      if (uVar2 == uVar8) {
        return;
      }
    }
    do {
      if (*pcVar5 == '/') {
        *pcVar5 = '_';
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar1 + uVar2);
  }
  return;
}


