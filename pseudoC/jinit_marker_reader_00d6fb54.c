// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_marker_reader
// Entry Point: 00d6fb54
// Size: 192 bytes
// Signature: undefined jinit_marker_reader(void)


void jinit_marker_reader(long param_1)

{
  code **ppcVar1;
  long lVar2;
  
  ppcVar1 = (code **)(***(code ***)(param_1 + 8))(param_1,0,0x108);
  *(code ***)(param_1 + 0x248) = ppcVar1;
  *(undefined4 *)(ppcVar1 + 0x1e) = 0;
  *ppcVar1 = FUN_00d6fc14;
  ppcVar1[1] = FUN_00d6fc34;
  ppcVar1[0x16] = (code *)0x0;
  ppcVar1[0x18] = (code *)0x0;
  ppcVar1[0x17] = (code *)0x0;
  ppcVar1[2] = FUN_00d71970;
  ppcVar1[0x1a] = (code *)0x0;
  ppcVar1[0x19] = (code *)0x0;
  ppcVar1[0x1c] = (code *)0x0;
  ppcVar1[0x1b] = (code *)0x0;
  ppcVar1[0x1d] = (code *)0x0;
  ppcVar1[7] = FUN_00d71a3c;
  ppcVar1[8] = FUN_00d71a3c;
  ppcVar1[9] = FUN_00d71a3c;
  ppcVar1[10] = FUN_00d71a3c;
  ppcVar1[0xb] = FUN_00d71a3c;
  ppcVar1[0xc] = FUN_00d71a3c;
  ppcVar1[0xd] = FUN_00d71a3c;
  ppcVar1[0xe] = FUN_00d71a3c;
  ppcVar1[0xf] = FUN_00d71a3c;
  ppcVar1[0x10] = FUN_00d71a3c;
  ppcVar1[0x11] = FUN_00d71a3c;
  ppcVar1[0x12] = FUN_00d71a3c;
  ppcVar1[5] = FUN_00d71a3c;
  ppcVar1[6] = FUN_00d71b44;
  ppcVar1[0x13] = FUN_00d71a3c;
  ppcVar1[0x14] = FUN_00d71b44;
  ppcVar1[0x15] = FUN_00d71a3c;
  lVar2 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  return;
}


