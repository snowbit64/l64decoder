// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findLongestMatch
// Entry Point: 00c049b8
// Size: 156 bytes
// Signature: undefined __cdecl findLongestMatch(uchar * param_1, uint param_2, uchar * param_3, DictString * param_4, uint param_5, uint * param_6)


/* DictionaryCompressor::Main::findLongestMatch(unsigned char const*, unsigned int, unsigned char
   const*, DictionaryCompressor::Main::DictString const*, unsigned int, unsigned int&) */

uint DictionaryCompressor::Main::findLongestMatch
               (uchar *param_1,uint param_2,uchar *param_3,DictString *param_4,uint param_5,
               uint *param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = (uint)(byte)param_4[uVar3 * 0xc + 2];
      if (param_2 <= (byte)param_4[uVar3 * 0xc + 2]) {
        uVar1 = param_2;
      }
      if (uVar1 != 0) {
        lVar4 = 0;
        do {
          if (param_1[lVar4] != param_3[lVar4 + (ulong)*(uint *)(param_4 + uVar3 * 0xc + 4)]) {
            uVar1 = (uint)lVar4;
            if ((uint)lVar4 <= uVar2) goto LAB_00c049d0;
            goto LAB_00c04a34;
          }
          lVar4 = lVar4 + 1;
        } while (uVar1 != (uint)lVar4);
        if (uVar2 < uVar1) {
LAB_00c04a34:
          uVar2 = uVar1;
          *param_6 = *(uint *)(param_4 + uVar3 * 0xc + 8);
        }
      }
LAB_00c049d0:
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_5);
  }
  return uVar2;
}


