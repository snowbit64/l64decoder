// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reset
// Entry Point: 00fa79a0
// Size: 60 bytes
// Signature: undefined Reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileNode::Reset() */

void CProfileNode::Reset(void)

{
  long in_x0;
  
  do {
    *(undefined8 *)(in_x0 + 8) = 0;
    if (*(long *)(in_x0 + 0x28) != 0) {
      Reset();
    }
    in_x0 = *(long *)(in_x0 + 0x30);
  } while (in_x0 != 0);
  return;
}


