// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findLongestMatch
// Entry Point: 00c0175c
// Size: 120 bytes
// Signature: undefined __cdecl findLongestMatch(uchar * param_1, uint param_2, uchar * param_3, uint param_4, Character * param_5, uint param_6)


/* DictionaryCreator::Main::findLongestMatch(unsigned char const*, unsigned int, unsigned char
   const*, unsigned int, DictionaryCreator::Main::Character const*, unsigned int) */

uint DictionaryCreator::Main::findLongestMatch
               (uchar *param_1,uint param_2,uchar *param_3,uint param_4,Character *param_5,
               uint param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (param_6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    do {
      uVar3 = param_4 - *(uint *)(param_5 + uVar2 * 8 + 4);
      if (param_2 <= uVar3) {
        uVar3 = param_2;
      }
      if (uVar3 != 0) {
        lVar4 = 0;
        do {
          if (param_1[lVar4] != param_3[lVar4 + (ulong)*(uint *)(param_5 + uVar2 * 8 + 4)]) {
            uVar3 = (uint)lVar4;
            break;
          }
          lVar4 = lVar4 + 1;
        } while (uVar3 != (uint)lVar4);
      }
      uVar2 = uVar2 + 1;
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
      uVar1 = uVar3;
    } while (uVar2 != param_6);
  }
  return uVar3;
}


