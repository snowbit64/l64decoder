// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 009241ac
// Size: 460 bytes
// Signature: undefined removeFromScene(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionShape::removeFromScene() */

void DestructionShape::removeFromScene(void)

{
  long **pplVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  DestructionShape *in_x0;
  ulong uVar6;
  void *pvVar7;
  DestructionShape **ppDVar8;
  long **pplVar9;
  DestructionShape *pDVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long **pplVar14;
  DestructionShape **ppDVar15;
  
  ppDVar15 = *(DestructionShape ***)(in_x0 + 0x248);
  while (ppDVar15 != (DestructionShape **)(in_x0 + 0x250)) {
    uVar3 = *(uint *)((long)ppDVar15 + 0x1c);
    Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint
              (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x290),uVar3);
    onJointRemoved(in_x0,uVar3,false);
    ppDVar8 = (DestructionShape **)ppDVar15[1];
    if ((DestructionShape **)ppDVar15[1] == (DestructionShape **)0x0) {
      ppDVar8 = ppDVar15 + 2;
      bVar4 = *(DestructionShape ***)*ppDVar8 != ppDVar15;
      ppDVar15 = (DestructionShape **)*ppDVar8;
      if (bVar4) {
        do {
          pDVar10 = *ppDVar8;
          ppDVar8 = (DestructionShape **)(pDVar10 + 0x10);
          ppDVar15 = (DestructionShape **)*ppDVar8;
        } while (*ppDVar15 != pDVar10);
      }
    }
    else {
      do {
        ppDVar15 = ppDVar8;
        ppDVar8 = (DestructionShape **)*ppDVar15;
      } while ((DestructionShape **)*ppDVar15 != (DestructionShape **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>>>
             *)(in_x0 + 0x248),*(__tree_node **)(in_x0 + 0x250));
  *(DestructionShape **)(in_x0 + 0x248) = in_x0 + 0x250;
  *(undefined8 *)(in_x0 + 600) = 0;
  *(undefined8 *)(in_x0 + 0x250) = 0;
  removeInterShapeJoints();
  pplVar1 = (long **)(in_x0 + 0x238);
  pplVar14 = *(long ***)(in_x0 + 0x230);
  while (pplVar14 != pplVar1) {
    Bt2ScenegraphPhysicsContext::enqueueRemoveLightActor((uint)*(undefined8 *)(in_x0 + 0x290));
    pplVar9 = (long **)pplVar14[1];
    if (pplVar14[1] == (long *)0x0) {
      pplVar9 = pplVar14 + 2;
      bVar4 = (long **)**pplVar9 != pplVar14;
      pplVar14 = (long **)*pplVar9;
      if (bVar4) {
        do {
          plVar11 = *pplVar9;
          pplVar9 = (long **)(plVar11 + 2);
          pplVar14 = (long **)*pplVar9;
        } while (*pplVar14 != plVar11);
      }
    }
    else {
      do {
        pplVar14 = pplVar9;
        pplVar9 = (long **)*pplVar14;
      } while (*pplVar14 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(in_x0 + 0x230),*(__tree_node **)(in_x0 + 0x238));
  *(long ***)(in_x0 + 0x230) = pplVar1;
  *(undefined8 *)(in_x0 + 0x240) = 0;
  *pplVar1 = (long *)0x0;
  DestructionGeometry::getShared();
  iVar5 = DestructionGeometryShared::getNumChunks();
  if (iVar5 != 0) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      puVar2 = (undefined4 *)(*(long *)(in_x0 + 0x228) + lVar12);
      pvVar7 = *(void **)(puVar2 + 2);
      *puVar2 = 0;
      if (pvVar7 != (void *)0x0) {
        *(void **)(puVar2 + 4) = pvVar7;
        operator_delete(pvVar7);
      }
      puVar2[10] = 0;
      uVar13 = uVar13 + 1;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      DestructionGeometry::getShared();
      uVar6 = DestructionGeometryShared::getNumChunks();
      lVar12 = lVar12 + 0x30;
    } while (uVar13 < (uVar6 & 0xffffffff));
  }
  *(undefined4 *)(in_x0 + 0x350) = 0;
  *(undefined8 *)(in_x0 + 0x290) = 0;
  return;
}


