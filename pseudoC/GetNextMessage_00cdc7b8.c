// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNextMessage
// Entry Point: 00cdc7b8
// Size: 92 bytes
// Signature: undefined GetNextMessage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Store::GetNextMessage() */

undefined8 CryptoPP::Store::GetNextMessage(void)

{
  long *in_x0;
  ulong uVar1;
  
  if (*(char *)(in_x0 + 3) != '\0') {
    return 0;
  }
  uVar1 = (**(code **)(*in_x0 + 0xa0))();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  *(undefined *)(in_x0 + 3) = 1;
  return 1;
}


