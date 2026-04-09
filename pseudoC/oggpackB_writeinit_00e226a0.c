// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_writeinit
// Entry Point: 00e226a0
// Size: 64 bytes
// Signature: undefined oggpackB_writeinit(void)


void oggpackB_writeinit(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = (undefined *)malloc(0x100);
  param_1[3] = puVar1;
  param_1[4] = 0x100;
  param_1[2] = puVar1;
  *puVar1 = 0;
  return;
}


