// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Layer
// Entry Point: 00a64b04
// Size: 200 bytes
// Signature: undefined __thiscall Layer(Layer * this, uint param_1, char * param_2)


/* FoliageSystemDesc::Layer::Layer(unsigned int, char const*) */

void __thiscall FoliageSystemDesc::Layer::Layer(Layer *this,uint param_1,char *param_2)

{
  size_t __n;
  Layer *__dest;
  ulong uVar1;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00a64b84;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (Layer *)operator_new(uVar1);
    *(size_t *)(this + 8) = __n;
    *(Layer **)(this + 0x10) = __dest;
    *(ulong *)this = uVar1 | 1;
  }
  memcpy(__dest,param_2,__n);
LAB_00a64b84:
  __dest[__n] = (Layer)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x18] = (Layer)0x0;
  this[0x30] = (Layer)0x0;
  *(uint *)(this + 0x48) = param_1;
  return;
}


