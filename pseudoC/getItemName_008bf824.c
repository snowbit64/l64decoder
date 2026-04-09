// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getItemName
// Entry Point: 008bf824
// Size: 164 bytes
// Signature: undefined getItemName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::getItemName() */

long LocalFileListChannel::getItemName(void)

{
  char *pcVar1;
  ulong uVar2;
  long in_x0;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = (char *)(**(code **)(**(long **)(in_x0 + 0x28) + 0x20))();
  (**(code **)(**(long **)(in_x0 + 0x28) + 0x10))();
  pcVar1 = (char *)(in_x0 + 0x38);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(pcVar1);
  uVar2 = (ulong)(*(byte *)(in_x0 + 0x38) >> 1);
  if ((*(byte *)(in_x0 + 0x38) & 1) != 0) {
    uVar2 = *(ulong *)(in_x0 + 0x40);
  }
  if ((uVar2 != 0) && (*pcVar3 != '\0')) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pcVar1);
  lVar4 = *(long *)(in_x0 + 0x48);
  if ((*(byte *)(in_x0 + 0x38) & 1) == 0) {
    lVar4 = in_x0 + 0x39;
  }
  return lVar4;
}


