// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplyByPower2Mod
// Entry Point: 00cf4a7c
// Size: 260 bytes
// Signature: undefined __cdecl MultiplyByPower2Mod(uint * param_1, uint * param_2, ulong param_3, uint * param_4, ulong param_5)


/* CryptoPP::MultiplyByPower2Mod(unsigned int*, unsigned int const*, unsigned long, unsigned int
   const*, unsigned long) */

void CryptoPP::MultiplyByPower2Mod
               (uint *param_1,uint *param_2,ulong param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    memcpy(param_1,param_2,param_5 << 2);
  }
  if ((param_3 != 0) && (param_5 != 0)) {
    do {
      uVar7 = 0;
      param_3 = param_3 - 1;
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        uVar4 = param_1[uVar6];
        uVar5 = uVar7 | uVar4 << 1;
        uVar7 = uVar4 >> 0x1f;
        param_1[uVar6] = uVar5;
        uVar6 = uVar1;
      } while (param_5 != uVar1);
      uVar6 = param_5;
      if ((int)uVar4 < 0) {
LAB_00cf4b24:
        lVar8 = 0;
        uVar6 = 0;
        do {
          uVar1 = uVar6 + 2;
          puVar2 = param_1 + uVar6;
          lVar8 = (lVar8 + (ulong)*puVar2) - (ulong)param_4[uVar6];
          *puVar2 = (uint)lVar8;
          lVar3 = ((ulong)puVar2[1] - (ulong)(param_4 + uVar6)[1]) + (lVar8 >> 0x3f);
          lVar8 = lVar3 >> 0x3f;
          puVar2[1] = (uint)lVar3;
          uVar6 = uVar1;
        } while (uVar1 < param_5);
      }
      else {
        do {
          if (uVar6 == 0) goto LAB_00cf4b24;
          lVar8 = uVar6 - 1;
          lVar3 = uVar6 - 1;
          if (param_4[lVar3] < param_1[lVar8]) goto LAB_00cf4b24;
          uVar6 = uVar6 - 1;
        } while (param_4[lVar3] <= param_1[lVar8]);
      }
    } while (param_3 != 0);
  }
  return;
}


