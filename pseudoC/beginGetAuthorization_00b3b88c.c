// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginGetAuthorization
// Entry Point: 00b3b88c
// Size: 80 bytes
// Signature: undefined beginGetAuthorization(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::beginGetAuthorization() */

void MasterServerManager::beginGetAuthorization(void)

{
  long in_x0;
  undefined *puVar1;
  
  *(undefined *)(in_x0 + 0x4c0) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x4c8));
  if (*(void **)(in_x0 + 0x4b8) != (void *)0x0) {
    operator_delete(*(void **)(in_x0 + 0x4b8));
  }
  puVar1 = (undefined *)operator_new(1);
  *(undefined **)(in_x0 + 0x4b8) = puVar1;
  *puVar1 = 1;
  return;
}


