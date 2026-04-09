// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetRegisterBegin
// Entry Point: 00d0ada0
// Size: 24 bytes
// Signature: undefined GetRegisterBegin(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_ModePolicy::GetRegisterBegin() */

long CryptoPP::CFB_ModePolicy::GetRegisterBegin(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x30) + (ulong)(uint)(*(int *)(in_x0 + 0x28) - *(int *)(in_x0 + 0x60));
}


