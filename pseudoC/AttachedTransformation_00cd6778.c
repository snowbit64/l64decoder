// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AttachedTransformation
// Entry Point: 00cd6778
// Size: 100 bytes
// Signature: undefined AttachedTransformation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Filter::AttachedTransformation() */

long CryptoPP::Filter::AttachedTransformation(void)

{
  long *in_x0;
  long lVar1;
  long *plVar2;
  
  if (in_x0[3] != 0) {
    return in_x0[3];
  }
  lVar1 = (**(code **)(*in_x0 + 0x180))();
  plVar2 = (long *)in_x0[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  in_x0[3] = lVar1;
  return lVar1;
}


