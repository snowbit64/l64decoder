// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CombinedLayer
// Entry Point: 008e9278
// Size: 212 bytes
// Signature: undefined __thiscall CombinedLayer(CombinedLayer * this, uint param_1, char * param_2, uint param_3, uint * param_4, float param_5)


/* BaseTerrain::CombinedLayer::CombinedLayer(unsigned int, char const*, unsigned int, unsigned int
   const*, float) */

void __thiscall
BaseTerrain::CombinedLayer::CombinedLayer
          (CombinedLayer *this,uint param_1,char *param_2,uint param_3,uint *param_4,float param_5)

{
  size_t __n;
  CombinedLayer *__dest;
  ulong uVar1;
  
  *(uint *)this = param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 9;
    this[8] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_008e930c;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (CombinedLayer *)operator_new(uVar1);
    *(size_t *)(this + 0x10) = __n;
    *(CombinedLayer **)(this + 0x18) = __dest;
    *(ulong *)(this + 8) = uVar1 | 1;
  }
  memcpy(__dest,param_2,__n);
LAB_008e930c:
  __dest[__n] = (CombinedLayer)0x0;
  *(uint *)(this + 0x20) = param_3;
  *(float *)(this + 0x34) = param_5;
  memcpy(this + 0x24,param_4,(ulong)param_3 << 2);
  return;
}


