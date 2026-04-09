// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MontgomeryReduce
// Entry Point: 00cf39c4
// Size: 328 bytes
// Signature: undefined __cdecl MontgomeryReduce(uint * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, ulong param_6)


/* CryptoPP::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int*, unsigned int const*,
   unsigned int const*, unsigned long) */

void CryptoPP::MontgomeryReduce
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  
  RecursiveMultiplyBottom(param_1,param_2,param_3,param_5,param_6);
  MultiplyTop(param_2,param_2 + param_6,param_3,param_1,param_4,param_6);
  if (param_6 == 0) {
    if (param_2 == param_1) {
      return;
    }
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar7 = uVar4 + 2;
      puVar5 = param_2 + uVar4;
      lVar3 = (lVar3 + (ulong)param_3[param_6 + uVar4]) - (ulong)*puVar5;
      *puVar5 = (uint)lVar3;
      lVar1 = ((ulong)(param_3 + param_6 + uVar4)[1] - (ulong)puVar5[1]) + (lVar3 >> 0x3f);
      lVar3 = lVar1 >> 0x3f;
      puVar5[1] = (uint)lVar1;
      uVar4 = uVar7;
    } while (uVar7 < param_6);
    uVar4 = 0;
    uVar7 = 0;
    puVar5 = param_4 + 1;
    puVar6 = param_2;
    do {
      uVar4 = uVar4 + 2;
      uVar7 = uVar7 + *puVar6 + (ulong)puVar5[-1];
      puVar6[param_6] = (uint)uVar7;
      uVar2 = (ulong)puVar6[1] + (uVar7 >> 0x20) + (ulong)*puVar5;
      uVar7 = uVar2 >> 0x20;
      puVar6[param_6 + 1] = (uint)uVar2;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (uVar4 < param_6);
    param_2 = param_2 + ((uint)param_6 & (uint)(lVar1 >> 0x3f));
    if (param_2 == param_1) {
      return;
    }
  }
  memcpy(param_1,param_2,param_6 * 4);
  return;
}


