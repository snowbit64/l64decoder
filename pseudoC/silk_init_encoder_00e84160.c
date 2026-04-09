// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_init_encoder
// Entry Point: 00e84160
// Size: 84 bytes
// Signature: undefined silk_init_encoder(void)


void silk_init_encoder(void *param_1,undefined4 param_2)

{
  int iVar1;
  
  memset(param_1,0,0x21d0);
  *(undefined4 *)((long)param_1 + 0x13f4) = param_2;
  iVar1 = silk_lin2log(0x3c0000);
  iVar1 = iVar1 * 0x100 + -0x80000;
  *(undefined4 *)((long)param_1 + 0x1238) = 1;
  *(int *)((long)param_1 + 8) = iVar1;
  *(int *)((long)param_1 + 0xc) = iVar1;
  silk_VAD_Init((long)param_1 + 0x24);
  return;
}


