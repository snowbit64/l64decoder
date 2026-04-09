// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC4S
// Entry Point: 00a8d5e4
// Size: 180 bytes
// Signature: undefined __cdecl decodeBC4S(uchar * param_1, uint param_2, uint param_3, signed * param_4)


/* DXTUtil::decodeBC4S(unsigned char*, unsigned int, unsigned int, signed char*) */

void DXTUtil::decodeBC4S(uchar *param_1,uint param_2,uint param_3,signed *param_4)

{
  uint uVar1;
  signed *psVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (3 < param_3) {
    uVar1 = param_2 >> 2;
    uVar3 = 0;
    uVar4 = 0;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      if (3 < param_2) {
        psVar2 = param_4 + uVar3;
        uVar5 = (ulong)uVar1;
        do {
          decodeBC4SBlock((BC4Block *)param_1,psVar2,1,param_2);
          param_1 = (uchar *)((BC4Block *)param_1 + 8);
          psVar2 = psVar2 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + param_2 * 4;
    } while (uVar4 != param_3 >> 2);
  }
  return;
}


