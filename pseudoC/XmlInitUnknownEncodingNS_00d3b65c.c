// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XmlInitUnknownEncodingNS
// Entry Point: 00d3b65c
// Size: 32 bytes
// Signature: undefined XmlInitUnknownEncodingNS(void)


void XmlInitUnknownEncodingNS(void)

{
  long lVar1;
  
  lVar1 = XmlInitUnknownEncoding();
  if (lVar1 != 0) {
    *(undefined *)(lVar1 + 0xc2) = 0x17;
  }
  return;
}


