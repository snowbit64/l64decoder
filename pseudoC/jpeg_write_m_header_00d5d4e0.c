// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_write_m_header
// Entry Point: 00d5d4e0
// Size: 120 bytes
// Signature: undefined jpeg_write_m_header(void)


void jpeg_write_m_header(long *param_1,undefined4 param_2,undefined4 param_3)

{
  code **ppcVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x29) != 0) || (2 < *(int *)((long)param_1 + 0x24) - 0x65U)) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00d5d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x40] + 0x28))(param_1,param_2,param_3);
  return;
}


