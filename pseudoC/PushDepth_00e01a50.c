// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushDepth
// Entry Point: 00e01a50
// Size: 44 bytes
// Signature: undefined PushDepth(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLDocument::PushDepth() */

void tinyxml2::XMLDocument::PushDepth(void)

{
  int iVar1;
  XMLError in_w0;
  undefined4 in_register_00004004;
  
  iVar1 = *(int *)(CONCAT44(in_register_00004004,in_w0) + 0xa4) + 1;
  *(int *)(CONCAT44(in_register_00004004,in_w0) + 0xa4) = iVar1;
  if (iVar1 == 100) {
    SetError(in_w0,0x12,(char *)(ulong)*(uint *)(CONCAT44(in_register_00004004,in_w0) + 0xa0),
             "Element nesting is too deep.");
    return;
  }
  return;
}


