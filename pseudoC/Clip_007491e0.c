// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clip
// Entry Point: 007491e0
// Size: 180 bytes
// Signature: undefined __thiscall Clip(Clip * this, char * param_1, float param_2, float param_3)


/* Clip::Clip(char const*, float, float) */

void __thiscall Clip::Clip(Clip *this,char *param_1,float param_2,float param_3)

{
  size_t __n;
  Clip *__dest;
  ulong uVar1;
  
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 9;
    this[8] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00749264;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (Clip *)operator_new(uVar1);
    *(size_t *)(this + 0x10) = __n;
    *(Clip **)(this + 0x18) = __dest;
    *(ulong *)(this + 8) = uVar1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00749264:
  __dest[__n] = (Clip)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(float *)this = param_3;
  return;
}


