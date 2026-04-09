// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVendorFromPciId
// Entry Point: 00aa7a0c
// Size: 116 bytes
// Signature: undefined __cdecl getVendorFromPciId(ushort param_1)


/* RenderDeviceInformation::getVendorFromPciId(unsigned short) */

undefined8 RenderDeviceInformation::getVendorFromPciId(ushort param_1)

{
  if (param_1 < 0x10de) {
    if ((param_1 == 0x1002) || (param_1 == 0x1022)) {
      return 0;
    }
  }
  else {
    if (param_1 == 0x10de) {
      return 1;
    }
    if (param_1 == 0x5333) {
      return 3;
    }
    if (param_1 == 0x8086) {
      return 2;
    }
  }
  return 5;
}


