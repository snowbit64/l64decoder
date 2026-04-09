// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load_mode_parameters___un_3C_s_5B_unastc_mode_5D__3E_unu
// Entry Point: 00e551ac
// Size: 84 bytes
// Signature: undefined load_mode_parameters___un_3C_s_5B_unastc_mode_5D__3E_unu(void)


void load_mode_parameters___un_3C_s_5B_unastc_mode_5D__3E_unu(int *param_1,uint param_2)

{
  uint uVar1;
  
  *param_1 = (param_2 >> 0xd & 7) + 2;
  param_1[1] = (param_2 >> 0x10 & 7) + 2;
  *(byte *)(param_1 + 2) = -((byte)(param_2 >> 0x13) & 1);
  *(undefined8 *)(param_1 + 5) = 1;
  uVar1 = (param_2 >> 5 & 6) + 6;
  param_1[3] = param_2 & 0xf;
  param_1[4] = param_2 >> 4 & 3;
  param_1[7] = (uVar1 >> 2) + 1;
  param_1[8] = uVar1;
  param_1[10] = param_2 >> 8 & 0x1f;
  return;
}


