// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeLoadRequestsFrom
// Entry Point: 00a6e540
// Size: 180 bytes
// Signature: undefined __thiscall removeLoadRequestsFrom(LocalGeometryLoadBalancer * this, LocalGeometryTransformGroup * param_1)


/* LocalGeometryLoadBalancer::removeLoadRequestsFrom(LocalGeometryTransformGroup const*) */

void __thiscall
LocalGeometryLoadBalancer::removeLoadRequestsFrom
          (LocalGeometryLoadBalancer *this,LocalGeometryTransformGroup *param_1)

{
  uint uVar1;
  ulong uVar2;
  LocalGeometryTransformGroup **ppLVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  LocalGeometryTransformGroup **ppLVar7;
  LocalGeometryTransformGroup *pLVar8;
  LocalGeometryTransformGroup *pLVar9;
  
  lVar4 = *(long *)this;
  uVar2 = (*(long *)(this + 8) - lVar4 >> 3) * -0x5555555555555555;
  uVar6 = uVar2;
  if ((int)uVar2 != 0) {
    uVar5 = 0;
    while( true ) {
      ppLVar7 = (LocalGeometryTransformGroup **)(lVar4 + (ulong)uVar5 * 0x18);
      if (*ppLVar7 == param_1) {
        uVar1 = (int)uVar2 - 1;
        uVar2 = (ulong)uVar1;
        if (uVar5 != uVar1) {
          ppLVar3 = (LocalGeometryTransformGroup **)(lVar4 + (ulong)uVar1 * 0x18);
          pLVar9 = ppLVar3[1];
          pLVar8 = *ppLVar3;
          ppLVar7[2] = ppLVar3[2];
          ppLVar7[1] = pLVar9;
          *ppLVar7 = pLVar8;
        }
        uVar5 = uVar5 - 1;
      }
      uVar5 = uVar5 + 1;
      if ((uint)uVar2 <= uVar5) break;
      lVar4 = *(long *)this;
    }
    lVar4 = *(long *)this;
    uVar6 = (*(long *)(this + 8) - lVar4 >> 3) * -0x5555555555555555;
  }
  uVar2 = uVar2 & 0xffffffff;
  if (uVar2 <= uVar6) {
    if (uVar2 < uVar6) {
      *(ulong *)(this + 8) = lVar4 + uVar2 * 0x18;
    }
    return;
  }
  std::__ndk1::
  vector<LocalGeometryLoadBalancer::LoadRequest,std::__ndk1::allocator<LocalGeometryLoadBalancer::LoadRequest>>
  ::__append((vector<LocalGeometryLoadBalancer::LoadRequest,std::__ndk1::allocator<LocalGeometryLoadBalancer::LoadRequest>>
              *)this,uVar2 - uVar6);
  return;
}


