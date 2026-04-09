// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecursiveMultiplyBottom
// Entry Point: 00cf2c7c
// Size: 360 bytes
// Signature: undefined __cdecl RecursiveMultiplyBottom(uint * param_1, uint * param_2, uint * param_3, uint * param_4, ulong param_5)


/* CryptoPP::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned long) */

void CryptoPP::RecursiveMultiplyBottom
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_5 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x00cf2cd4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)&DAT_02120930 + (param_5 & 0x7ffffffffffffffc) * 2))(param_1,param_3,param_4)
    ;
    return;
  }
  uVar5 = param_5 >> 1;
  RecursiveMultiply(param_1,param_2,param_3,param_4,uVar5);
  RecursiveMultiplyBottom(param_2,param_2 + uVar5,param_3 + uVar5,param_4,uVar5);
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar1 = uVar3 + 2;
    puVar2 = param_1 + uVar5 + uVar3;
    uVar4 = uVar4 + *puVar2 + (ulong)param_2[uVar3];
    *puVar2 = (uint)uVar4;
    uVar3 = (ulong)puVar2[1] + (uVar4 >> 0x20) + (ulong)(param_2 + uVar3)[1];
    uVar4 = uVar3 >> 0x20;
    puVar2[1] = (uint)uVar3;
    uVar3 = uVar1;
  } while (uVar1 < uVar5);
  RecursiveMultiplyBottom(param_2,param_2 + uVar5,param_3,param_4 + uVar5,uVar5);
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar1 = uVar3 + 2;
    puVar2 = param_1 + uVar5 + uVar3;
    uVar4 = uVar4 + *puVar2 + (ulong)param_2[uVar3];
    *puVar2 = (uint)uVar4;
    uVar3 = (ulong)puVar2[1] + (uVar4 >> 0x20) + (ulong)(param_2 + uVar3)[1];
    uVar4 = uVar3 >> 0x20;
    puVar2[1] = (uint)uVar3;
    uVar3 = uVar1;
  } while (uVar1 < uVar5);
  return;
}


