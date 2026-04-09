// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivideByPower2Mod
// Entry Point: 00cf493c
// Size: 320 bytes
// Signature: undefined __cdecl DivideByPower2Mod(uint * param_1, uint * param_2, ulong param_3, uint * param_4, ulong param_5)


/* CryptoPP::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned long, unsigned int
   const*, unsigned long) */

void CryptoPP::DivideByPower2Mod
               (uint *param_1,uint *param_2,ulong param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 != param_2) {
    memcpy(param_1,param_2,param_5 << 2);
  }
  if ((param_3 != 0) && (param_5 != 0)) {
    do {
      param_3 = param_3 - 1;
      if ((*param_1 & 1) == 0) {
        uVar3 = 0;
        uVar5 = param_5;
        do {
          uVar4 = uVar5 - 1;
          uVar2 = uVar3 | param_1[uVar5 - 1] >> 1;
          uVar3 = param_1[uVar5 - 1] << 0x1f;
          param_1[uVar5 - 1] = uVar2;
          uVar5 = uVar4;
        } while (uVar4 != 0);
      }
      else {
        uVar5 = (ulong)*param_1 + (ulong)*param_4;
        *param_1 = (uint)uVar5;
        uVar5 = (ulong)param_1[1] + (uVar5 >> 0x20) + (ulong)param_4[1];
        uVar4 = uVar5 >> 0x20;
        param_1[1] = (uint)uVar5;
        if (2 < param_5) {
          lVar6 = 0;
          do {
            uVar4 = uVar4 + param_1[lVar6 + 2] + (ulong)param_4[lVar6 + 2];
            uVar5 = lVar6 + 4;
            param_1[lVar6 + 2] = (uint)uVar4;
            uVar1 = (ulong)param_1[lVar6 + 3] + (uVar4 >> 0x20) + (ulong)param_4[lVar6 + 3];
            uVar4 = uVar1 >> 0x20;
            param_1[lVar6 + 3] = (uint)uVar1;
            lVar6 = lVar6 + 2;
          } while (uVar5 < param_5);
        }
        uVar3 = 0;
        uVar5 = param_5;
        do {
          uVar1 = uVar5 - 1;
          uVar2 = uVar3 | param_1[uVar5 - 1] >> 1;
          uVar3 = param_1[uVar5 - 1] << 0x1f;
          param_1[uVar5 - 1] = uVar2;
          uVar5 = uVar1;
        } while (uVar1 != 0);
        param_1[param_5 - 1] = param_1[param_5 - 1] + (int)uVar4 * -0x80000000;
      }
    } while (param_3 != 0);
  }
  return;
}


