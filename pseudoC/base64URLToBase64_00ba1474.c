// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64URLToBase64
// Entry Point: 00ba1474
// Size: 648 bytes
// Signature: undefined __cdecl base64URLToBase64(basic_string * param_1, basic_string * param_2)


/* WARNING: Type propagation algorithm not settling */
/* StringUtil::base64URLToBase64(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::base64URLToBase64(basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_2,param_1);
  uVar5 = *(ulong *)(param_2 + 2);
  pcVar4 = *(char **)(param_2 + 4);
  bVar2 = *(byte *)param_2;
  bVar3 = (bVar2 & 1) != 0;
  uVar7 = (ulong)(bVar2 >> 1);
  uVar8 = uVar7;
  if (bVar3) {
    uVar8 = uVar5;
  }
  pcVar1 = pcVar4;
  if (!bVar3) {
    pcVar1 = (char *)((long)param_2 + 1);
  }
  if (uVar8 == 0) goto LAB_00ba15a4;
  pcVar4 = pcVar1;
  if (uVar8 < 8) {
LAB_00ba1690:
    do {
      if (*pcVar4 == '-') {
        *pcVar4 = '+';
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 != pcVar1 + uVar8);
  }
  else {
    uVar7 = uVar8 & 0xfffffffffffffff8;
    pcVar4 = pcVar1 + uVar7;
    pcVar6 = pcVar1 + 3;
    uVar5 = uVar7;
    do {
      uVar9 = NEON_cmeq(*(undefined8 *)(pcVar6 + -3),0x2d2d2d2d2d2d2d2d,1);
      if ((uVar9 & 1) != 0) {
        pcVar6[-3] = '+';
      }
      if ((uVar9 & 0x100) != 0) {
        pcVar6[-2] = '+';
      }
      if ((uVar9 & 0x10000) != 0) {
        pcVar6[-1] = '+';
      }
      if ((uVar9 & 0x1000000) != 0) {
        *pcVar6 = '+';
      }
      if ((uVar9 & 0x100000000) != 0) {
        pcVar6[1] = '+';
      }
      if ((uVar9 & 0x10000000000) != 0) {
        pcVar6[2] = '+';
      }
      if ((uVar9 & 0x1000000000000) != 0) {
        pcVar6[3] = '+';
      }
      if ((uVar9 & 0x100000000000000) != 0) {
        pcVar6[4] = '+';
      }
      uVar5 = uVar5 - 8;
      pcVar6 = pcVar6 + 8;
    } while (uVar5 != 0);
    if (uVar8 != uVar7) goto LAB_00ba1690;
  }
  bVar2 = *(byte *)param_2;
  uVar5 = *(ulong *)(param_2 + 2);
  pcVar4 = *(char **)(param_2 + 4);
  uVar7 = (ulong)(bVar2 >> 1);
LAB_00ba15a4:
  pcVar1 = (char *)((long)param_2 + 1);
  if ((bVar2 & 1) != 0) {
    pcVar1 = pcVar4;
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    pcVar4 = pcVar1;
    if (7 < uVar7) {
      uVar5 = uVar7 & 0xfffffffffffffff8;
      pcVar4 = pcVar1 + uVar5;
      pcVar6 = pcVar1 + 3;
      uVar8 = uVar5;
      do {
        uVar9 = NEON_cmeq(*(undefined8 *)(pcVar6 + -3),0x5f5f5f5f5f5f5f5f,1);
        if ((uVar9 & 1) != 0) {
          pcVar6[-3] = '/';
        }
        if ((uVar9 & 0x100) != 0) {
          pcVar6[-2] = '/';
        }
        if ((uVar9 & 0x10000) != 0) {
          pcVar6[-1] = '/';
        }
        if ((uVar9 & 0x1000000) != 0) {
          *pcVar6 = '/';
        }
        if ((uVar9 & 0x100000000) != 0) {
          pcVar6[1] = '/';
        }
        if ((uVar9 & 0x10000000000) != 0) {
          pcVar6[2] = '/';
        }
        if ((uVar9 & 0x1000000000000) != 0) {
          pcVar6[3] = '/';
        }
        if ((uVar9 & 0x100000000000000) != 0) {
          pcVar6[4] = '/';
        }
        uVar8 = uVar8 - 8;
        pcVar6 = pcVar6 + 8;
      } while (uVar8 != 0);
      if (uVar7 == uVar5) {
        return;
      }
    }
    do {
      if (*pcVar4 == '_') {
        *pcVar4 = '/';
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 != pcVar1 + uVar7);
  }
  return;
}


