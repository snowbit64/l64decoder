// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XmlInitEncodingNS
// Entry Point: 00d3b440
// Size: 112 bytes
// Signature: undefined XmlInitEncodingNS(void)


undefined8 XmlInitEncodingNS(code **param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00d3ac48(param_3);
  if (iVar1 != -1) {
    *(char *)((long)param_1 + 0x85) = (char)iVar1;
    param_1[0x11] = (code *)param_2;
    *param_1 = FUN_00d3b4b0;
    param_1[1] = FUN_00d3b4d4;
    param_1[0xc] = FUN_00d3aec8;
    *param_2 = param_1;
    return 1;
  }
  return 0;
}


