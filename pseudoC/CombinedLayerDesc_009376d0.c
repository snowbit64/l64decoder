// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CombinedLayerDesc
// Entry Point: 009376d0
// Size: 240 bytes
// Signature: undefined __thiscall CombinedLayerDesc(CombinedLayerDesc * this, char * param_1, uint param_2, uint * param_3, float param_4)


/* TerrainTransformGroupDesc::CombinedLayerDesc::CombinedLayerDesc(char const*, unsigned int,
   unsigned int const*, float) */

void __thiscall
TerrainTransformGroupDesc::CombinedLayerDesc::CombinedLayerDesc
          (CombinedLayerDesc *this,char *param_1,uint param_2,uint *param_3,float param_4)

{
  size_t __n;
  CombinedLayerDesc *__dest;
  ulong uVar1;
  
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00937760;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (CombinedLayerDesc *)operator_new(uVar1);
    *(size_t *)(this + 8) = __n;
    *(CombinedLayerDesc **)(this + 0x10) = __dest;
    *(ulong *)this = uVar1 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00937760:
  __dest[__n] = (CombinedLayerDesc)0x0;
  *(uint *)(this + 0x18) = param_2;
  *(float *)(this + 0x2c) = param_4;
  if (param_2 == 0) {
    return;
  }
  memcpy(this + 0x1c,param_3,(ulong)param_2 << 2);
  return;
}


