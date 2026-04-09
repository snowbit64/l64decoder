// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_list_size
// Entry Point: 00d280bc
// Size: 48 bytes
// Signature: undefined enet_list_size(void)


long enet_list_size(long **param_1)

{
  long lVar1;
  long **pplVar2;
  
  pplVar2 = (long **)*param_1;
  if (pplVar2 != param_1) {
    lVar1 = 0;
    do {
      pplVar2 = (long **)*pplVar2;
      lVar1 = lVar1 + 1;
    } while (pplVar2 != param_1);
    return lVar1;
  }
  return 0;
}


