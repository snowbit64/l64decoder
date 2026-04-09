// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecursiveSquare
// Entry Point: 00cf2ac0
// Size: 444 bytes
// Signature: undefined __cdecl RecursiveSquare(uint * param_1, uint * param_2, uint * param_3, ulong param_4)


/* CryptoPP::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned long) */

void CryptoPP::RecursiveSquare(uint *param_1,uint *param_2,uint *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_4 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x00cf2b20 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)&DAT_021208e8 + (param_4 & 0x7ffffffffffffffc) * 2))(param_1,param_3);
    return;
  }
  uVar9 = param_4 >> 1;
  puVar3 = param_2 + param_4;
  RecursiveSquare(param_1,puVar3,param_3,uVar9);
  RecursiveSquare(param_1 + param_4,puVar3,param_3 + uVar9,uVar9);
  RecursiveMultiply(param_2,puVar3,param_3,param_3 + uVar9,uVar9);
  uVar7 = 0;
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 2;
    puVar3 = param_1 + uVar9 + uVar8;
    uVar7 = uVar7 + *puVar3 + (ulong)param_2[uVar8];
    *puVar3 = (uint)uVar7;
    uVar4 = (ulong)puVar3[1] + (uVar7 >> 0x20) + (ulong)(param_2 + uVar8)[1];
    uVar7 = uVar4 >> 0x20;
    puVar3[1] = (uint)uVar4;
    uVar8 = uVar1;
  } while (uVar1 < param_4);
  uVar7 = 0;
  uVar8 = 0;
  do {
    uVar1 = uVar8 + 2;
    puVar3 = param_1 + uVar9 + uVar8;
    uVar7 = uVar7 + *puVar3 + (ulong)param_2[uVar8];
    *puVar3 = (uint)uVar7;
    uVar5 = (ulong)puVar3[1] + (uVar7 >> 0x20) + (ulong)(param_2 + uVar8)[1];
    uVar7 = uVar5 >> 0x20;
    puVar3[1] = (uint)uVar5;
    uVar8 = uVar1;
  } while (uVar1 < param_4);
  puVar3 = param_1 + param_4 + uVar9;
  uVar2 = (int)(uVar5 >> 0x20) + (int)(uVar4 >> 0x20);
  uVar6 = *puVar3;
  *puVar3 = uVar2 + uVar6;
  if ((3 < param_4) && (CARRY4(uVar2,uVar6) != false)) {
    uVar8 = 1;
    do {
      uVar7 = (ulong)((int)uVar8 + 1);
      uVar2 = puVar3[uVar8];
      puVar3[uVar8] = uVar2 + 1;
      uVar8 = uVar7;
    } while ((uVar2 == 0xffffffff && uVar7 <= uVar9) && (uVar2 != 0xffffffff || uVar9 != uVar7));
  }
  return;
}


