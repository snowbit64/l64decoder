// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateVHACD
// Entry Point: 00ea5944
// Size: 172 bytes
// Signature: undefined CreateVHACD(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::CreateVHACD() */

undefined8 * VHACD::CreateVHACD(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2c0);
  puVar1[0x44] = 0x40;
  puVar1[0x53] = 0x40;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x46] = 0;
  puVar1[0x45] = 0;
  puVar1[0x48] = 0;
  puVar1[0x47] = 0;
  *puVar1 = &PTR_Cancel_01014320;
  puVar1[1] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x49] = 0;
  puVar1[0x50] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  puVar1[0x54] = 0x3ff0000000000000;
  *(undefined *)(puVar1 + 0x57) = 0;
  puVar1[0x56] = 0;
  puVar1[0x55] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4d] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar1 + 0x45));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar1 + 0x48));
  *(undefined4 *)(puVar1 + 0x57) = 0;
  return puVar1;
}


