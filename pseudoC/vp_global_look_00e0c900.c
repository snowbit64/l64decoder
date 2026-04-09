// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_global_look
// Entry Point: 00e0c900
// Size: 72 bytes
// Signature: undefined _vp_global_look(void)


void _vp_global_look(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  puVar2 = (undefined4 *)calloc(1,0x28);
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(long *)(puVar2 + 2) = lVar3 + 0x1350;
  *puVar2 = 0xc61c3c00;
  puVar2[1] = uVar1;
  return;
}


