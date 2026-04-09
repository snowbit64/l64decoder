// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeInterShapeJoints
// Entry Point: 009243b8
// Size: 360 bytes
// Signature: undefined removeInterShapeJoints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionShape::removeInterShapeJoints() */

void DestructionShape::removeInterShapeJoints(void)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  DestructionShape *in_x0;
  DestructionShape *pDVar4;
  DestructionShape **ppDVar5;
  long **pplVar6;
  long *plVar7;
  DestructionShape **ppDVar8;
  long **pplVar9;
  
  ppDVar8 = *(DestructionShape ***)(in_x0 + 0x278);
  while (ppDVar8 != (DestructionShape **)(in_x0 + 0x280)) {
    pDVar4 = ppDVar8[5];
    if (pDVar4 == in_x0) {
      pDVar4 = ppDVar8[6];
    }
    std::__ndk1::
    __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
    ::__erase_unique<DestructionShape::InterShapeJointToAdd>
              ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                *)(pDVar4 + 0x278),(InterShapeJointToAdd *)(ppDVar8 + 4));
    ppDVar5 = (DestructionShape **)ppDVar8[1];
    if ((DestructionShape **)ppDVar8[1] == (DestructionShape **)0x0) {
      ppDVar5 = ppDVar8 + 2;
      bVar3 = *(DestructionShape ***)*ppDVar5 != ppDVar8;
      ppDVar8 = (DestructionShape **)*ppDVar5;
      if (bVar3) {
        do {
          pDVar4 = *ppDVar5;
          ppDVar5 = (DestructionShape **)(pDVar4 + 0x10);
          ppDVar8 = (DestructionShape **)*ppDVar5;
        } while (*ppDVar8 != pDVar4);
      }
    }
    else {
      do {
        ppDVar8 = ppDVar5;
        ppDVar5 = (DestructionShape **)*ppDVar8;
      } while ((DestructionShape **)*ppDVar8 != (DestructionShape **)0x0);
    }
  }
  std::__ndk1::
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  ::destroy((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             *)(in_x0 + 0x278),*(__tree_node **)(in_x0 + 0x280));
  plVar1 = (long *)(in_x0 + 0x268);
  *(DestructionShape **)(in_x0 + 0x278) = in_x0 + 0x280;
  *(undefined8 *)(in_x0 + 0x288) = 0;
  *(undefined8 *)(in_x0 + 0x280) = 0;
  pplVar9 = *(long ***)(in_x0 + 0x260);
  while (pplVar9 != (long **)plVar1) {
    uVar2 = *(uint *)(pplVar9 + 4);
    Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint
              (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x290),uVar2);
    onJointRemoved(in_x0,uVar2,false);
    pplVar6 = (long **)pplVar9[1];
    if (pplVar9[1] == (long *)0x0) {
      pplVar6 = pplVar9 + 2;
      bVar3 = (long **)**pplVar6 != pplVar9;
      pplVar9 = (long **)*pplVar6;
      if (bVar3) {
        do {
          plVar7 = *pplVar6;
          pplVar6 = (long **)(plVar7 + 2);
          pplVar9 = (long **)*pplVar6;
        } while (*pplVar9 != plVar7);
      }
    }
    else {
      do {
        pplVar9 = pplVar6;
        pplVar6 = (long **)*pplVar9;
      } while (*pplVar9 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>>>
             *)(in_x0 + 0x260),*(__tree_node **)(in_x0 + 0x268));
  *(long **)(in_x0 + 0x260) = plVar1;
  *(undefined4 *)(in_x0 + 0x35c) = 0;
  *(undefined8 *)(in_x0 + 0x270) = 0;
  *plVar1 = 0;
  return;
}


