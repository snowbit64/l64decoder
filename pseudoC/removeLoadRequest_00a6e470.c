// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeLoadRequest
// Entry Point: 00a6e470
// Size: 208 bytes
// Signature: undefined __thiscall removeLoadRequest(LocalGeometryLoadBalancer * this, LocalGeometryTransformGroup * param_1, short param_2, short param_3)


/* LocalGeometryLoadBalancer::removeLoadRequest(LocalGeometryTransformGroup const*, short, short) */

void __thiscall
LocalGeometryLoadBalancer::removeLoadRequest
          (LocalGeometryLoadBalancer *this,LocalGeometryTransformGroup *param_1,short param_2,
          short param_3)

{
  LocalGeometryTransformGroup **ppLVar1;
  int iVar2;
  ulong uVar3;
  LocalGeometryTransformGroup **ppLVar4;
  ulong uVar5;
  long lVar6;
  LocalGeometryTransformGroup *pLVar7;
  LocalGeometryTransformGroup *pLVar8;
  
  ppLVar1 = *(LocalGeometryTransformGroup ***)this;
  uVar3 = (*(long *)(this + 8) - (long)ppLVar1) / 0x18;
  iVar2 = (int)uVar3;
  if (iVar2 != 0) {
    lVar6 = 1;
    ppLVar4 = ppLVar1;
    do {
      if (((*ppLVar4 == param_1) && (*(short *)(ppLVar4 + 2) == param_2)) &&
         (*(short *)((long)ppLVar4 + 0x12) == param_3)) {
        uVar5 = (ulong)(iVar2 - 1);
        if (iVar2 != (int)lVar6) {
          ppLVar1 = ppLVar1 + uVar5 * 3;
          pLVar8 = ppLVar1[1];
          pLVar7 = *ppLVar1;
          ppLVar4[2] = ppLVar1[2];
          ppLVar4[1] = pLVar8;
          *ppLVar4 = pLVar7;
          ppLVar1 = *(LocalGeometryTransformGroup ***)this;
          uVar3 = (*(long *)(this + 8) - (long)ppLVar1 >> 3) * -0x5555555555555555;
        }
        if (uVar5 <= uVar3) {
          if (uVar3 <= uVar5) {
            return;
          }
          *(LocalGeometryTransformGroup ***)(this + 8) = ppLVar1 + uVar5 * 3;
          return;
        }
        std::__ndk1::
        vector<LocalGeometryLoadBalancer::LoadRequest,std::__ndk1::allocator<LocalGeometryLoadBalancer::LoadRequest>>
        ::__append((vector<LocalGeometryLoadBalancer::LoadRequest,std::__ndk1::allocator<LocalGeometryLoadBalancer::LoadRequest>>
                    *)this,uVar5 - uVar3);
        return;
      }
      lVar6 = lVar6 + 1;
      ppLVar4 = ppLVar4 + 3;
    } while (lVar6 - (uVar3 & 0xffffffff) != 1);
  }
  return;
}


