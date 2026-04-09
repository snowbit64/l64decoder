// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_inverse_dct
// Entry Point: 00d737c0
// Size: 196 bytes
// Signature: undefined jinit_inverse_dct(void)


void jinit_inverse_dct(long param_1)

{
  int iVar1;
  code **ppcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  ppcVar2 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0x80);
  iVar1 = *(int *)(param_1 + 0x38);
  *(code ***)(param_1 + 600) = ppcVar2;
  *ppcVar2 = FUN_00d73884;
  if (0 < iVar1) {
    lVar4 = 0;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x120) + 0x58);
    do {
      puVar3 = (undefined8 *)(***(code ***)(param_1 + 8))(param_1,1,0x100);
      *puVar5 = puVar3;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0x17] = 0;
      puVar3[0x16] = 0;
      puVar3[0x19] = 0;
      puVar3[0x18] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1f] = 0;
      puVar3[0x1e] = 0;
      *(undefined4 *)((long)ppcVar2 + lVar4 * 4 + 0x58) = 0xffffffff;
      lVar4 = lVar4 + 1;
      puVar5 = puVar5 + 0xc;
    } while (lVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}


