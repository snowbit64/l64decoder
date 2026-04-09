// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeInterShapeJointsToAdd
// Entry Point: 0092284c
// Size: 188 bytes
// Signature: undefined removeInterShapeJointsToAdd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionShape::removeInterShapeJointsToAdd() */

void DestructionShape::removeInterShapeJointsToAdd(void)

{
  bool bVar1;
  long *in_x0;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  
  pplVar4 = (long **)in_x0[0x4f];
  while (pplVar4 != (long **)(in_x0 + 0x50)) {
    plVar2 = pplVar4[5];
    if (plVar2 == in_x0) {
      plVar2 = pplVar4[6];
    }
    std::__ndk1::
    __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
    ::__erase_unique<DestructionShape::InterShapeJointToAdd>
              ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                *)(plVar2 + 0x4f),(InterShapeJointToAdd *)(pplVar4 + 4));
    pplVar3 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar3 = pplVar4 + 2;
      bVar1 = (long **)**pplVar3 != pplVar4;
      pplVar4 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar2 = *pplVar3;
          pplVar3 = (long **)(plVar2 + 2);
          pplVar4 = (long **)*pplVar3;
        } while (*pplVar4 != plVar2);
      }
    }
    else {
      do {
        pplVar4 = pplVar3;
        pplVar3 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  ::destroy((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             *)(in_x0 + 0x4f),(__tree_node *)in_x0[0x50]);
  in_x0[0x4f] = (long)(in_x0 + 0x50);
  in_x0[0x51] = 0;
  in_x0[0x50] = 0;
  return;
}


