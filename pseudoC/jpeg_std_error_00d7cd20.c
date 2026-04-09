// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_std_error
// Entry Point: 00d7cd20
// Size: 88 bytes
// Signature: undefined jpeg_std_error(void)


void jpeg_std_error(code **param_1)

{
  *param_1 = FUN_00d7cd78;
  param_1[1] = FUN_00d7cda4;
  param_1[2] = FUN_00d7ce08;
  param_1[3] = FUN_00d7ce74;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x7e;
  param_1[4] = FUN_00d7cf54;
  param_1[0x10] = (code *)0x0;
  param_1[0x11] = (code *)jpeg_std_message_table;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x13] = (code *)0x0;
  param_1[0x14] = (code *)0x0;
  return;
}


