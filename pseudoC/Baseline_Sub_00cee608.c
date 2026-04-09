// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Sub
// Entry Point: 00cee608
// Size: 88 bytes
// Signature: undefined __cdecl Baseline_Sub(ulong param_1, uint * param_2, uint * param_3, uint * param_4)


/* CryptoPP::Baseline_Sub(unsigned long, unsigned int*, unsigned int const*, unsigned int const*) */

ulong CryptoPP::Baseline_Sub(ulong param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar2 = 0;
    lVar6 = 0;
    puVar3 = param_2 + 1;
    puVar4 = param_4 + 1;
    puVar5 = param_3 + 1;
    do {
      uVar2 = uVar2 + 2;
      lVar6 = (lVar6 + (ulong)puVar5[-1]) - (ulong)puVar4[-1];
      puVar3[-1] = (uint)lVar6;
      uVar1 = ((ulong)*puVar5 - (ulong)*puVar4) + (lVar6 >> 0x3f);
      lVar6 = (long)uVar1 >> 0x3f;
      *puVar3 = (uint)uVar1;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar2 < param_1);
    param_1 = uVar1 >> 0x3f;
  }
  return param_1;
}


