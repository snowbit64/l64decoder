// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecursiveInverseModPower2
// Entry Point: 00cf3790
// Size: 564 bytes
// Signature: undefined __cdecl RecursiveInverseModPower2(uint * param_1, uint * param_2, uint * param_3, ulong param_4)


/* CryptoPP::RecursiveInverseModPower2(unsigned int*, unsigned int*, unsigned int const*, unsigned
   long) */

void CryptoPP::RecursiveInverseModPower2(uint *param_1,uint *param_2,uint *param_3,ulong param_4)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  pcVar8 = DAT_02120930;
  if (param_4 == 2) {
    uVar5 = *param_3;
    iVar6 = (2 - (uVar5 & 7) * uVar5) * (uVar5 & 7);
    iVar6 = (2 - iVar6 * uVar5) * iVar6;
    iVar6 = (2 - iVar6 * uVar5) * iVar6;
    *param_2 = (2 - iVar6 * uVar5) * iVar6;
    param_2[1] = 0;
    (*pcVar8)(param_2 + 2,param_2,param_3);
    uVar5 = param_2[2];
    uVar7 = param_2[3] - (uint)(uVar5 == 0);
    param_2[2] = 2 - uVar5;
    param_2[3] = ~uVar7;
    if (uVar5 - 1 < 2) {
      param_2[3] = -uVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x00cf385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_02120930)(param_1,param_2,param_2 + 2);
    return;
  }
  uVar11 = param_4 >> 1;
  RecursiveInverseModPower2(param_1,param_2,param_3,uVar11);
  *param_2 = 1;
  if (uVar11 != 1) {
    memset(param_2 + 1,0,uVar11 * 4 - 4);
  }
  puVar2 = param_1 + uVar11;
  puVar3 = param_2 + uVar11;
  MultiplyTop(puVar2,puVar3,param_2,param_1,param_3,uVar11);
  RecursiveMultiplyBottom(param_2,puVar3,param_1,param_3 + uVar11,uVar11);
  if (param_4 < 2) {
    *param_2 = *param_2 - 1;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar1 = uVar9 + 2;
      puVar4 = param_2 + uVar9;
      uVar10 = uVar10 + puVar2[uVar9] + (ulong)*puVar4;
      *puVar4 = (uint)uVar10;
      uVar9 = (ulong)(puVar2 + uVar9)[1] + (uVar10 >> 0x20) + (ulong)puVar4[1];
      uVar10 = uVar9 >> 0x20;
      puVar4[1] = (uint)uVar9;
      uVar9 = uVar1;
    } while (uVar1 < uVar11);
    uVar5 = *param_2;
    *param_2 = uVar5 - 1;
    if ((3 < param_4) && (uVar5 == 0)) {
      uVar9 = 1;
      do {
        uVar10 = (ulong)((int)uVar9 + 1);
        uVar5 = param_2[uVar9];
        param_2[uVar9] = uVar5 - 1;
        uVar9 = uVar10;
      } while (uVar5 == 0 && uVar10 < uVar11);
    }
    uVar9 = 0;
    do {
      uVar10 = (ulong)((int)uVar9 + 1);
      param_2[uVar9] = ~param_2[uVar9];
      uVar9 = uVar10;
    } while (uVar10 < uVar11);
  }
  RecursiveMultiplyBottom(puVar2,puVar3,param_1,param_2,uVar11);
  return;
}


