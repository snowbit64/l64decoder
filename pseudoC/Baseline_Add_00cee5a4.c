// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Add
// Entry Point: 00cee5a4
// Size: 100 bytes
// Signature: undefined __cdecl Baseline_Add(ulong param_1, uint * param_2, uint * param_3, uint * param_4)


/* CryptoPP::Baseline_Add(unsigned long, unsigned int*, unsigned int const*, unsigned int const*) */

ulong CryptoPP::Baseline_Add(ulong param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_1 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    puVar4 = param_2 + 1;
    puVar5 = param_4 + 1;
    puVar6 = param_3 + 1;
    do {
      uVar3 = uVar3 + 2;
      uVar2 = uVar2 + puVar6[-1] + (ulong)puVar5[-1];
      puVar4[-1] = (uint)uVar2;
      uVar1 = (ulong)*puVar5 + (ulong)*puVar6 + (uVar2 >> 0x20);
      uVar2 = uVar1 >> 0x20;
      *puVar4 = (uint)uVar1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (uVar3 < param_1);
    return uVar2;
  }
  return 0;
}


