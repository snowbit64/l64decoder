// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetHashSalt
// Entry Point: 00d2e4f8
// Size: 52 bytes
// Signature: undefined XML_SetHashSalt(void)


undefined8 XML_SetHashSalt(long param_1,undefined8 param_2)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    if (lVar1 == 0) {
      return 0;
    }
    param_1 = *(long *)(lVar1 + 0x380);
  } while (*(long *)(lVar1 + 0x380) != 0);
  if ((*(uint *)(lVar1 + 0x388) | 2) != 3) {
    *(undefined8 *)(lVar1 + 0x398) = param_2;
    return 1;
  }
  return 0;
}


