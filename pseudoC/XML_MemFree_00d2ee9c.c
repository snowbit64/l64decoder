// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_MemFree
// Entry Point: 00d2ee9c
// Size: 20 bytes
// Signature: undefined XML_MemFree(void)


void XML_MemFree(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d2eea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_2);
    return;
  }
  return;
}


