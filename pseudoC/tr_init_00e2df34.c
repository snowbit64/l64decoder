// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _tr_init
// Entry Point: 00e2df34
// Size: 72 bytes
// Signature: undefined _tr_init(void)


void _tr_init(long param_1)

{
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(long *)(param_1 + 0xb58) = param_1 + 0xd4;
  *(undefined ***)(param_1 + 0xb68) = &PTR_DAT_01013c30;
  *(undefined ***)(param_1 + 0xb80) = &PTR_DAT_01013c50;
  *(long *)(param_1 + 0xb70) = param_1 + 0x9c8;
  *(long *)(param_1 + 0xb88) = param_1 + 0xabc;
  *(undefined **)(param_1 + 0xb98) = &DAT_01013c70;
  FUN_00e2df7c();
  return;
}


