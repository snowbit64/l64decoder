// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getText
// Entry Point: 00a59c60
// Size: 24 bytes
// Signature: undefined getText(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NoteNode::getText() const */

long NoteNode::getText(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x159;
  if ((*(byte *)(in_x0 + 0x158) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x168);
  }
  return lVar1;
}


