// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_MemMalloc
// Entry Point: 00d2ee70
// Size: 20 bytes
// Signature: undefined XML_MemMalloc(void)


void XML_MemMalloc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d2ee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_2);
    return;
  }
  return;
}


