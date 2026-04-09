// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PreprocessorDesc
// Entry Point: 00bf0ae4
// Size: 200 bytes
// Signature: undefined __thiscall PreprocessorDesc(PreprocessorDesc * this)


/* PreprocessorDesc::PreprocessorDesc() */

void __thiscall PreprocessorDesc::PreprocessorDesc(PreprocessorDesc *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00bf0b34 to 00bf0b97 has its CatchHandler @ 00bf0bac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 8));
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  uVar3 = s_defaultOperatorCharset._24_8_;
  uVar2 = s_defaultOperatorCharset._16_8_;
  uVar1 = s_defaultOperatorCharset._0_8_;
  *(undefined8 *)(this + 0xd8) = s_defaultOperatorCharset._8_8_;
  *(undefined8 *)(this + 0xd0) = uVar1;
  *(undefined8 *)(this + 0xe8) = uVar3;
  *(undefined8 *)(this + 0xe0) = uVar2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  uVar4 = s_defaultOperatorExtCharset._24_8_;
  uVar3 = s_defaultOperatorExtCharset._16_8_;
  uVar2 = s_defaultOperatorExtCharset._8_8_;
  uVar1 = s_defaultOperatorExtCharset._0_8_;
  *(undefined8 *)(this + 0x14a) = 0;
  *(undefined8 *)(this + 0xf8) = uVar2;
  *(undefined8 *)(this + 0xf0) = uVar1;
  *(undefined8 *)(this + 0x108) = uVar4;
  *(undefined8 *)(this + 0x100) = uVar3;
  uVar3 = s_defaultIdentifierCharset._24_8_;
  uVar2 = s_defaultIdentifierCharset._16_8_;
  uVar1 = s_defaultIdentifierCharset._0_8_;
  *(undefined8 *)(this + 0x118) = s_defaultIdentifierCharset._8_8_;
  *(undefined8 *)(this + 0x110) = uVar1;
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined8 *)(this + 0x120) = uVar2;
  setToCParseMode();
  return;
}


