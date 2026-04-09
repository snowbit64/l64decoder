// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_MemRealloc
// Entry Point: 00d2ee84
// Size: 24 bytes
// Signature: undefined XML_MemRealloc(void)


void XML_MemRealloc(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d2ee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(param_2,param_3);
    return;
  }
  return;
}


