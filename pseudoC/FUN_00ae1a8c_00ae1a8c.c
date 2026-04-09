// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ae1a8c
// Entry Point: 00ae1a8c
// Size: 180 bytes
// Signature: undefined FUN_00ae1a8c(void)


void FUN_00ae1a8c(undefined8 *param_1,undefined4 param_2)

{
  param_1[0x10] = 0xfdbff0;
  param_1[1] = 0;
  param_1[2] = 0xfdbeb0;
  *param_1 = 0xfdbfc8;
                    /* try { // try from 00ae1ad8 to 00ae1ae3 has its CatchHandler @ 00ae1b5c */
  std::__ndk1::ios_base::init(param_1 + 0x10);
  param_1[0x21] = 0;
  param_1[2] = 0xfdbeb0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = 0xfdbe88;
  param_1[0x10] = 0xfdbed8;
                    /* try { // try from 00ae1b04 to 00ae1b0b has its CatchHandler @ 00ae1b40 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  *(undefined4 *)(param_1 + 0xf) = param_2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[3] = &PTR__basic_stringbuf_00fd8fa0;
  return;
}


