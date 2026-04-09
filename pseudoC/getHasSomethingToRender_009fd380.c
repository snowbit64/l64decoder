// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHasSomethingToRender
// Entry Point: 009fd380
// Size: 316 bytes
// Signature: undefined getHasSomethingToRender(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeferredDebugRenderer::getHasSomethingToRender() */

bool DeferredDebugRenderer::getHasSomethingToRender(void)

{
  long *in_x0;
  
  if (in_x0[9] != in_x0[10]) {
    return true;
  }
  if (in_x0[0xc] != in_x0[0xd]) {
    return true;
  }
  if (in_x0[3] != in_x0[4]) {
    return true;
  }
  if (in_x0[6] != in_x0[7]) {
    return true;
  }
  if (*in_x0 != in_x0[1]) {
    return true;
  }
  if (in_x0[0x27] != in_x0[0x28]) {
    return true;
  }
  if (in_x0[0x2a] != in_x0[0x2b]) {
    return true;
  }
  if (in_x0[0x21] != in_x0[0x22]) {
    return true;
  }
  if (in_x0[0x24] != in_x0[0x25]) {
    return true;
  }
  if (in_x0[0x1e] != in_x0[0x1f]) {
    return true;
  }
  if (in_x0[0x36] != in_x0[0x37]) {
    return true;
  }
  if (in_x0[0x39] != in_x0[0x3a]) {
    return true;
  }
  if (in_x0[0x30] != in_x0[0x31]) {
    return true;
  }
  if (in_x0[0x33] != in_x0[0x34]) {
    return true;
  }
  if (in_x0[0x2d] != in_x0[0x2e]) {
    return true;
  }
  return in_x0[0x3c] != in_x0[0x3d];
}


