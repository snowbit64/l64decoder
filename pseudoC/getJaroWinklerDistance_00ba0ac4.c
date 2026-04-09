// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getJaroWinklerDistance
// Entry Point: 00ba0ac4
// Size: 308 bytes
// Signature: undefined __cdecl getJaroWinklerDistance(basic_string * param_1, basic_string * param_2)


/* StringUtil::getJaroWinklerDistance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

float StringUtil::getJaroWinklerDistance(basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  
  fVar7 = (float)getJaroDistance(param_1,param_2);
  if (0.7 < fVar7) {
    pcVar3 = *(char **)(param_2 + 4);
    bVar5 = (*(byte *)param_2 & 1) != 0;
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
    if (bVar5) {
      uVar1 = *(ulong *)(param_2 + 2);
    }
    uVar2 = *(ulong *)(param_1 + 2);
    pcVar4 = *(char **)(param_1 + 4);
    if (!bVar5) {
      pcVar3 = (char *)((long)param_2 + 1);
    }
    if ((*(byte *)param_1 & 1) == 0) {
      pcVar4 = (char *)((long)param_1 + 1);
      uVar2 = (ulong)(*(byte *)param_1 >> 1);
    }
    uVar6 = (uint)uVar1;
    if (uVar2 <= uVar1) {
      uVar6 = (uint)uVar2;
    }
    if (4 < uVar6) {
      uVar6 = 5;
    }
    if (uVar6 != 0) {
      if (*pcVar4 == *pcVar3) {
        if (uVar6 != 1) {
          if (pcVar4[1] == pcVar3[1]) {
            if (uVar6 != 2) {
              if (pcVar4[2] == pcVar3[2]) {
                if (uVar6 != 3) {
                  if (pcVar4[3] == pcVar3[3]) {
                    if ((uVar6 != 4) && (pcVar4[4] != pcVar3[4])) {
                      uVar6 = 4;
                    }
                  }
                  else {
                    uVar6 = 3;
                  }
                }
              }
              else {
                uVar6 = 2;
              }
            }
          }
          else {
            uVar6 = 1;
          }
        }
      }
      else {
        uVar6 = 0;
      }
    }
    fVar7 = (float)NEON_fmadd((float)uVar6 * 0.1,1.0 - fVar7,fVar7);
  }
  return fVar7;
}


