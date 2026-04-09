// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00d4cc44
// Size: 232 bytes
// Signature: undefined __thiscall resize(vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> * this, ulong param_1)


/* std::__ndk1::vector<HACD::GraphVertex, std::__ndk1::allocator<HACD::GraphVertex>
   >::resize(unsigned long) */

void __thiscall
std::__ndk1::vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>>::resize
          (vector<HACD::GraphVertex,std::__ndk1::allocator<HACD::GraphVertex>> *this,ulong param_1)

{
  void *pvVar1;
  void **ppvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 8);
  lVar4 = lVar5 - *(long *)this >> 4;
  uVar3 = lVar4 * 0x7d6343eb1a1f58d1;
  if (param_1 > uVar3) {
    __append(this,param_1 + lVar4 * -0x7d6343eb1a1f58d1);
    return;
  }
  if (param_1 <= uVar3 && uVar3 - param_1 != 0) {
    lVar4 = *(long *)this + param_1 * 0x310;
    while (lVar5 != lVar4) {
      if (*(long **)(lVar5 + -0xa0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0xa0) + 8))();
      }
      if (*(void **)(lVar5 + -0x18) != (void *)0x0) {
        operator_delete__(*(void **)(lVar5 + -0x18));
      }
      if (*(long *)(lVar5 + -200) != 0) {
        operator_delete__((void *)(*(long *)(lVar5 + -200) + -8));
      }
      pvVar1 = *(void **)(lVar5 + -0x260);
      if (pvVar1 != (void *)0x0) {
        *(void **)(lVar5 + -600) = pvVar1;
        operator_delete(pvVar1);
      }
      ppvVar2 = (void **)(lVar5 + -0x280);
      lVar5 = lVar5 + -0x310;
      if (*ppvVar2 != (void *)0x0) {
        operator_delete__(*ppvVar2);
      }
    }
    *(long *)(this + 8) = lVar4;
  }
  return;
}


