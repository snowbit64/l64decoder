// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64URLToBase64InPlace
// Entry Point: 00ba16fc
// Size: 612 bytes
// Signature: undefined __cdecl base64URLToBase64InPlace(basic_string * param_1)


/* WARNING: Type propagation algorithm not settling */
/* StringUtil::base64URLToBase64InPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::base64URLToBase64InPlace(basic_string *param_1)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *(ulong *)(param_1 + 2);
  pcVar3 = *(char **)(param_1 + 4);
  bVar2 = *(byte *)param_1;
  uVar7 = (ulong)(bVar2 >> 1);
  pcVar1 = pcVar3;
  uVar5 = uVar4;
  if ((bVar2 & 1) == 0) {
    pcVar1 = (char *)((long)param_1 + 1);
    uVar5 = uVar7;
  }
  if (uVar5 == 0) goto LAB_00ba1810;
  pcVar3 = pcVar1;
  if (uVar5 < 8) {
LAB_00ba18fc:
    do {
      if (*pcVar3 == '-') {
        *pcVar3 = '+';
      }
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != pcVar1 + uVar5);
  }
  else {
    uVar7 = uVar5 & 0xfffffffffffffff8;
    pcVar3 = pcVar1 + uVar7;
    pcVar6 = pcVar1 + 3;
    uVar4 = uVar7;
    do {
      uVar8 = NEON_cmeq(*(undefined8 *)(pcVar6 + -3),0x2d2d2d2d2d2d2d2d,1);
      if ((uVar8 & 1) != 0) {
        pcVar6[-3] = '+';
      }
      if ((uVar8 & 0x100) != 0) {
        pcVar6[-2] = '+';
      }
      if ((uVar8 & 0x10000) != 0) {
        pcVar6[-1] = '+';
      }
      if ((uVar8 & 0x1000000) != 0) {
        *pcVar6 = '+';
      }
      if ((uVar8 & 0x100000000) != 0) {
        pcVar6[1] = '+';
      }
      if ((uVar8 & 0x10000000000) != 0) {
        pcVar6[2] = '+';
      }
      if ((uVar8 & 0x1000000000000) != 0) {
        pcVar6[3] = '+';
      }
      if ((uVar8 & 0x100000000000000) != 0) {
        pcVar6[4] = '+';
      }
      uVar4 = uVar4 - 8;
      pcVar6 = pcVar6 + 8;
    } while (uVar4 != 0);
    if (uVar5 != uVar7) goto LAB_00ba18fc;
  }
  bVar2 = *(byte *)param_1;
  uVar4 = *(ulong *)(param_1 + 2);
  pcVar3 = *(char **)(param_1 + 4);
  uVar7 = (ulong)(bVar2 >> 1);
LAB_00ba1810:
  pcVar1 = (char *)((long)param_1 + 1);
  if ((bVar2 & 1) != 0) {
    pcVar1 = pcVar3;
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    pcVar3 = pcVar1;
    if (7 < uVar7) {
      uVar5 = uVar7 & 0xfffffffffffffff8;
      pcVar3 = pcVar1 + uVar5;
      pcVar6 = pcVar1 + 3;
      uVar4 = uVar5;
      do {
        uVar8 = NEON_cmeq(*(undefined8 *)(pcVar6 + -3),0x5f5f5f5f5f5f5f5f,1);
        if ((uVar8 & 1) != 0) {
          pcVar6[-3] = '/';
        }
        if ((uVar8 & 0x100) != 0) {
          pcVar6[-2] = '/';
        }
        if ((uVar8 & 0x10000) != 0) {
          pcVar6[-1] = '/';
        }
        if ((uVar8 & 0x1000000) != 0) {
          *pcVar6 = '/';
        }
        if ((uVar8 & 0x100000000) != 0) {
          pcVar6[1] = '/';
        }
        if ((uVar8 & 0x10000000000) != 0) {
          pcVar6[2] = '/';
        }
        if ((uVar8 & 0x1000000000000) != 0) {
          pcVar6[3] = '/';
        }
        if ((uVar8 & 0x100000000000000) != 0) {
          pcVar6[4] = '/';
        }
        uVar4 = uVar4 - 8;
        pcVar6 = pcVar6 + 8;
      } while (uVar4 != 0);
      if (uVar7 == uVar5) {
        return;
      }
    }
    do {
      if (*pcVar3 == '_') {
        *pcVar3 = '/';
      }
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != pcVar1 + uVar7);
  }
  return;
}


