// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplineData
// Entry Point: 0089546c
// Size: 216 bytes
// Signature: undefined __thiscall getSplineData(PedestrianSystem * this, vector * param_1, vector * param_2)


/* PedestrianSystem::getSplineData(std::__ndk1::vector<Spline*, std::__ndk1::allocator<Spline*> >&,
   std::__ndk1::vector<TransformGroup*, std::__ndk1::allocator<TransformGroup*> >&) */

void __thiscall
PedestrianSystem::getSplineData(PedestrianSystem *this,vector *param_1,vector *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = (uint *)(this + 0x258f8);
  uVar3 = (ulong)*puVar2;
  uVar6 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  if (uVar6 < uVar3) {
    std::__ndk1::vector<Spline*,std::__ndk1::allocator<Spline*>>::__append
              ((vector<Spline*,std::__ndk1::allocator<Spline*>> *)param_1,uVar3 - uVar6);
    uVar3 = (ulong)*puVar2;
  }
  else if (uVar3 < uVar6) {
    *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar3 * 8;
  }
  uVar6 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  if (uVar3 < uVar6 || uVar3 - uVar6 == 0) {
    if (uVar3 < uVar6) {
      *(ulong *)(param_2 + 8) = *(long *)param_2 + uVar3 * 8;
    }
  }
  else {
    std::__ndk1::vector<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::__append
              ((vector<TransformGroup*,std::__ndk1::allocator<TransformGroup*>> *)param_2,
               uVar3 - uVar6);
    uVar3 = (ulong)*puVar2;
  }
  if ((int)uVar3 != 0) {
    lVar5 = 0;
    puVar4 = (undefined8 *)(this + 0x48);
    do {
      *(undefined8 *)(*(long *)param_1 + lVar5) = *puVar4;
      puVar1 = puVar4 + -2;
      puVar4 = puVar4 + 0x10;
      *(undefined8 *)(*(long *)param_2 + lVar5) = *puVar1;
      lVar5 = lVar5 + 8;
    } while (uVar3 * 8 - lVar5 != 0);
  }
  return;
}


