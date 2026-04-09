// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b0044
// Size: 76 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSoundRuntimeSettings::reset() */

void StaticSoundRuntimeSettings::reset(void)

{
  char *in_x0;
  void *pvVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(in_x0);
  if (*(void **)(in_x0 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x18));
  }
  pvVar1 = *(void **)(in_x0 + 0x20);
  *(undefined8 *)(in_x0 + 0x18) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(void **)(in_x0 + 0x20) = (void *)0x0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined4 *)(in_x0 + 0x30) = 0;
  return;
}


