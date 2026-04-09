// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_marker_writer
// Entry Point: 00d65fd8
// Size: 128 bytes
// Signature: undefined jinit_marker_writer(void)


void jinit_marker_writer(long param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0x40);
  *(code ***)(param_1 + 0x200) = ppcVar1;
  *(undefined4 *)(ppcVar1 + 7) = 0;
  *ppcVar1 = FUN_00d66058;
  ppcVar1[1] = FUN_00d66cb0;
  ppcVar1[2] = FUN_00d67958;
  ppcVar1[3] = FUN_00d68558;
  ppcVar1[4] = FUN_00d68624;
  ppcVar1[5] = FUN_00d688b0;
  ppcVar1[6] = FUN_00d68a58;
  return;
}


