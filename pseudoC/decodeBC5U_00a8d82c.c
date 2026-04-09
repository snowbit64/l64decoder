// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC5U
// Entry Point: 00a8d82c
// Size: 224 bytes
// Signature: undefined __cdecl decodeBC5U(uchar * param_1, uint param_2, uint param_3, uchar * param_4)


/* DXTUtil::decodeBC5U(unsigned char*, unsigned int, unsigned int, unsigned char*) */

void DXTUtil::decodeBC5U(uchar *param_1,uint param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (3 < param_3) {
    uVar1 = param_2 >> 2;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar2 = 0;
    do {
      if (3 < param_2) {
        uVar3 = 0;
        do {
          decodeBC4UBlock((BC4Block *)param_1,
                          param_4 + (uVar3 & 0xfffffff8) + (ulong)(param_2 * 8 * (int)uVar2),2,
                          param_2 << 1);
          decodeBC4UBlock((BC4Block *)param_1 + 8,
                          param_4 + (uVar3 & 0xfffffff8) + (ulong)(param_2 * 8 * (int)uVar2) + 1,2,
                          param_2 << 1);
          param_1 = (uchar *)((BC4Block *)param_1 + 0x10);
          uVar3 = uVar3 + 8;
        } while ((ulong)uVar1 * 8 - uVar3 != 0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3 >> 2);
  }
  return;
}


