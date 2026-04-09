// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_forward_dct
// Entry Point: 00d5de58
// Size: 140 bytes
// Signature: undefined jinit_forward_dct(void)


void jinit_forward_dct(long param_1)

{
  int iVar1;
  code **ppcVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  ppcVar2 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0xf8);
  iVar4 = *(int *)(param_1 + 0x5c);
  *(code ***)(param_1 + 0x218) = ppcVar2;
  *ppcVar2 = FUN_00d5dee4;
  if (0 < iVar4) {
    iVar4 = 0;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x58);
    do {
      uVar3 = (***(code ***)(param_1 + 8))(param_1,1,0x100);
      iVar1 = *(int *)(param_1 + 0x5c);
      iVar4 = iVar4 + 1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}


