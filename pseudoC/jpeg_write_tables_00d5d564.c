// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_write_tables
// Entry Point: 00d5d564
// Size: 140 bytes
// Signature: undefined jpeg_write_tables(void)


void jpeg_write_tables(long *param_1)

{
  code **ppcVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  jinit_marker_writer(param_1);
  (**(code **)(param_1[0x40] + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00d5d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[5] + 0x20))(param_1);
  return;
}


