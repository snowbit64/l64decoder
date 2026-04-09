// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 007328dc
// Size: 192 bytes
// Signature: undefined __thiscall resize(vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> * this, ulong param_1)


/* std::__ndk1::vector<RoadSegment, std::__ndk1::allocator<RoadSegment> >::resize(unsigned long) */

void __thiscall
std::__ndk1::vector<RoadSegment,std::__ndk1::allocator<RoadSegment>>::resize
          (vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> *this,ulong param_1)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar3 = lVar4 * -0x3333333333333333;
  if (param_1 > uVar3) {
    __append(this,param_1 + lVar4 * 0x3333333333333333);
    return;
  }
  if (param_1 <= uVar3 && uVar3 - param_1 != 0) {
    lVar5 = *(long *)this + param_1 * 0x50;
    lVar4 = *(long *)(this + 8);
    while (lVar4 != lVar5) {
      pvVar1 = *(void **)(lVar4 + -0x18);
      if (pvVar1 != (void *)0x0) {
        *(void **)(lVar4 + -0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)(lVar4 + -0x30);
      if (pvVar1 != (void *)0x0) {
        *(void **)(lVar4 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      plVar2 = *(long **)(lVar4 + -0x50);
      lVar6 = lVar4 + -0x50;
      *(undefined8 *)(lVar4 + -0x50) = 0;
      lVar4 = lVar6;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    *(long *)(this + 8) = lVar5;
  }
  return;
}


