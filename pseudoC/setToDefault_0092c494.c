// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setToDefault
// Entry Point: 0092c494
// Size: 176 bytes
// Signature: undefined setToDefault(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystemDesc::setToDefault() */

void ParticleSystemDesc::setToDefault(void)

{
  undefined8 *in_x0;
  
  *(undefined4 *)(in_x0 + 2) = 0;
  *in_x0 = 0;
  in_x0[1] = 0x3dcccccd000003e8;
  in_x0[5] = 0x3a83126f;
  in_x0[4] = 0x3f0000003f000000;
  *(undefined8 *)((long)in_x0 + 0x14) = 0;
  *(undefined4 *)((long)in_x0 + 0x1c) = 0x447a0000;
  in_x0[0xb] = 0x3f800000;
  *(undefined *)(in_x0 + 0xf) = 0;
  in_x0[6] = 0;
  *(undefined8 *)((long)in_x0 + 0x3c) = 0x3e4ccccd3eb33333;
  *(undefined4 *)(in_x0 + 7) = 0;
  *(undefined2 *)((long)in_x0 + 0x79) = 0;
  *(undefined4 *)((long)in_x0 + 0x44) = 0x3f4ccccd;
  *(undefined *)((long)in_x0 + 0x7b) = 0;
  in_x0[0xc] = 0;
  in_x0[9] = 0;
  in_x0[10] = 0;
  in_x0[0xd] = 0x100000001;
  in_x0[0xe] = 0x447a0000;
  in_x0[0x13] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x10));
  in_x0[0x14] = 0;
  return;
}


