// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Enter_Parent
// Entry Point: 00fa7ea4
// Size: 32 bytes
// Signature: undefined Enter_Parent(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileIterator::Enter_Parent() */

void CProfileIterator::Enter_Parent(void)

{
  long *in_x0;
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*in_x0 + 0x20);
  lVar1 = *in_x0;
  if (lVar2 != 0) {
    *in_x0 = lVar2;
    lVar1 = lVar2;
  }
  in_x0[1] = *(long *)(lVar1 + 0x28);
  return;
}


