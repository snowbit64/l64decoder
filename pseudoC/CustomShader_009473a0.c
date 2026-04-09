// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CustomShader
// Entry Point: 009473a0
// Size: 360 bytes
// Signature: undefined __thiscall CustomShader(CustomShader * this, char * param_1)


/* CustomShader::CustomShader(char const*) */

void __thiscall CustomShader::CustomShader(CustomShader *this,char *param_1)

{
  size_t __n;
  CustomShader *__dest;
  ulong uVar1;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__CustomShader_00fe0430;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00947500 to 00947507 has its CatchHandler @ 00947508 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0x11;
    this[0x10] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00947430;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00947408 to 0094740f has its CatchHandler @ 00947508 */
    __dest = (CustomShader *)operator_new(uVar1);
    *(size_t *)(this + 0x18) = __n;
    *(CustomShader **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00947430:
  __dest[__n] = (CustomShader)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x78] = (CustomShader)0x8;
  *(undefined4 *)(this + 0x79) = 0x65736162;
  this[0x7d] = (CustomShader)0x0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0x70] = (CustomShader)0x1;
  this[0xa0] = (CustomShader)0x8;
  *(undefined4 *)(this + 0xa1) = 0x65736162;
  this[0xa5] = (CustomShader)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  this[0x98] = (CustomShader)0x1;
  this[200] = (CustomShader)0x8;
  *(undefined4 *)(this + 0xc9) = 0x65736162;
  this[0xcd] = (CustomShader)0x0;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xc0] = (CustomShader)0x1;
  this[0xf0] = (CustomShader)0x8;
  *(undefined4 *)(this + 0xf1) = 0x65736162;
  this[0xf5] = (CustomShader)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  this[0xe8] = (CustomShader)0x1;
  this[0x164] = (CustomShader)0x0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x15c) = 0x3f80000000000000;
  return;
}


