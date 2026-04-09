// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findInBuffer
// Entry Point: 00ba1bbc
// Size: 132 bytes
// Signature: undefined __cdecl findInBuffer(uchar * param_1, uchar * param_2, uchar * param_3, uint param_4)


/* StringUtil::findInBuffer(unsigned char const*, unsigned char const*, unsigned char const*,
   unsigned int) */

uchar * StringUtil::findInBuffer(uchar *param_1,uchar *param_2,uchar *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  uchar *puVar3;
  ulong uVar4;
  
  uVar2 = (ulong)param_4;
  if ((param_1 + uVar2 < param_2) && (puVar3 = param_1, param_1 < param_2 + -uVar2)) {
    do {
      if (param_4 == 0) {
        return param_1;
      }
      if (*puVar3 == *param_3) {
        uVar1 = 1;
        do {
          uVar4 = uVar1;
          if (uVar2 == uVar4) break;
          uVar1 = uVar4 + 1;
        } while (puVar3[uVar4] == param_3[uVar4]);
        if (uVar2 <= uVar4) {
          return puVar3;
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != param_2 + -uVar2);
  }
  return (uchar *)0x0;
}


