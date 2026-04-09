// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_input_controller
// Entry Point: 00d6eec8
// Size: 104 bytes
// Signature: undefined jinit_input_controller(void)


void jinit_input_controller(long param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)(***(code ***)(param_1 + 8))(param_1,0,0x30);
  *(code ***)(param_1 + 0x240) = ppcVar1;
  *(undefined2 *)(ppcVar1 + 4) = 0;
  *ppcVar1 = FUN_00d6ef30;
  ppcVar1[1] = FUN_00d6f544;
  *(undefined4 *)(ppcVar1 + 5) = 1;
  ppcVar1[2] = FUN_00d6f59c;
  ppcVar1[3] = FUN_00d6f848;
  return;
}


