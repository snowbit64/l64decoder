// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnyMessages
// Entry Point: 00c7aa54
// Size: 104 bytes
// Signature: undefined AnyMessages(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::AnyMessages() const */

ulong CryptoPP::BufferedTransformation::AnyMessages(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  lVar2 = (**(code **)(*in_x0 + 0x168))();
  if (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*in_x0 + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00c7aa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0xe0))();
    return uVar4;
  }
  iVar1 = (**(code **)(*in_x0 + 0xd8))();
  return (ulong)(iVar1 != 0);
}


