// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 008742dc
// Size: 192 bytes
// Signature: undefined __thiscall resize(vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>> * this, ulong param_1)


/* std::__ndk1::vector<ObstacleAvoidance, std::__ndk1::allocator<ObstacleAvoidance>
   >::resize(unsigned long) */

void __thiscall
std::__ndk1::vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>>::resize
          (vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>> *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar3 = lVar4 * 0x2e8ba2e8ba2e8ba3;
  if (param_1 > uVar3) {
    __append(this,param_1 + lVar4 * -0x2e8ba2e8ba2e8ba3);
    return;
  }
  if (param_1 <= uVar3 && uVar3 - param_1 != 0) {
    lVar5 = *(long *)this + param_1 * 0x58;
    lVar4 = *(long *)(this + 8);
    while (lVar1 = lVar4, lVar1 != lVar5) {
      pvVar2 = *(void **)(lVar1 + -0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)(lVar1 + -0x20) = pvVar2;
        operator_delete(pvVar2);
      }
      pvVar2 = *(void **)(lVar1 + -0x40);
      if (pvVar2 != (void *)0x0) {
        *(void **)(lVar1 + -0x38) = pvVar2;
        operator_delete(pvVar2);
      }
      pvVar2 = *(void **)(lVar1 + -0x58);
      lVar4 = lVar1 + -0x58;
      if (pvVar2 != (void *)0x0) {
        *(void **)(lVar1 + -0x50) = pvVar2;
        operator_delete(pvVar2);
      }
    }
    *(long *)(this + 8) = lVar5;
  }
  return;
}


