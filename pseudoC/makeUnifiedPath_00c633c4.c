// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeUnifiedPath
// Entry Point: 00c633c4
// Size: 116 bytes
// Signature: undefined __thiscall makeUnifiedPath(PathUtil * this, basic_string * param_1)


/* PathUtil::makeUnifiedPath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall PathUtil::makeUnifiedPath(PathUtil *this,basic_string *param_1)

{
  byte *in_x8;
  byte *pbVar1;
  
  StringUtil::substitute('\\','/',(basic_string *)this);
  pbVar1 = *(byte **)(in_x8 + 0x10);
  if ((*in_x8 & 1) == 0) {
    pbVar1 = in_x8 + 1;
  }
  if ((*pbVar1 == 0x2f) && (pbVar1[1] == 0x2f)) {
    pbVar1[1] = 0x5c;
    pbVar1 = in_x8 + 1;
    if ((*in_x8 & 1) != 0) {
      pbVar1 = *(byte **)(in_x8 + 0x10);
    }
    *pbVar1 = 0x5c;
  }
  return;
}


