// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplineData
// Entry Point: 0071a5b4
// Size: 228 bytes
// Signature: undefined __thiscall getSplineData(TrafficSystem * this, vector * param_1, vector * param_2)


/* TrafficSystem::getSplineData(std::__ndk1::vector<Spline*, std::__ndk1::allocator<Spline*> >&,
   std::__ndk1::vector<TransformGroup*, std::__ndk1::allocator<TransformGroup*> >&) */

void __thiscall TrafficSystem::getSplineData(TrafficSystem *this,vector *param_1,vector *param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = (uint *)(this + 0x4c90);
  uVar3 = (ulong)*puVar1;
  uVar5 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  if (uVar5 < uVar3) {
    std::__ndk1::vector<Spline*,std::__ndk1::allocator<Spline*>>::__append
              ((vector<Spline*,std::__ndk1::allocator<Spline*>> *)param_1,uVar3 - uVar5);
    uVar3 = (ulong)*puVar1;
  }
  else if (uVar3 < uVar5) {
    *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar3 * 8;
  }
  uVar5 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
    if (uVar3 < uVar5) {
      *(ulong *)(param_2 + 8) = *(long *)param_2 + uVar3 * 8;
    }
  }
  else {
    std::__ndk1::vector<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::__append
              ((vector<TransformGroup*,std::__ndk1::allocator<TransformGroup*>> *)param_2,
               uVar3 - uVar5);
    uVar3 = (ulong)*puVar1;
  }
  if ((int)uVar3 != 0) {
    lVar4 = 0;
    lVar6 = 8;
    do {
      *(undefined8 *)(*(long *)param_1 + lVar4) = *(undefined8 *)(*(long *)(this + 0x4ca0) + lVar6);
      lVar2 = *(long *)(this + 0x4ca0) + lVar6;
      lVar6 = lVar6 + 0x88;
      *(undefined8 *)(*(long *)param_2 + lVar4) = *(undefined8 *)(lVar2 + -8);
      lVar4 = lVar4 + 8;
    } while (uVar3 * 8 - lVar4 != 0);
  }
  return;
}


