// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_FreeContentModel
// Entry Point: 00d2ee5c
// Size: 20 bytes
// Signature: undefined XML_FreeContentModel(void)


void XML_FreeContentModel(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d2ee68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_2);
    return;
  }
  return;
}


