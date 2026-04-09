// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearHeaders
// Entry Point: 00b381f8
// Size: 32 bytes
// Signature: undefined clearHeaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidHTTPSRequest::clearHeaders() */

void AndroidHTTPSRequest::clearHeaders(void)

{
  long in_x0;
  
  if ((*(byte *)(in_x0 + 0x20) & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x20) = 0;
    return;
  }
  **(undefined **)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  return;
}


