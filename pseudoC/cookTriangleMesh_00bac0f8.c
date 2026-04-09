// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cookTriangleMesh
// Entry Point: 00bac0f8
// Size: 372 bytes
// Signature: undefined __cdecl cookTriangleMesh(IndexedTriangleSet * param_1, bool param_2, Vector3 * param_3, Bt2PhysicsUserMemoryStream * param_4)


/* Bt2PhysicsCookingUtil::cookTriangleMesh(IndexedTriangleSet*, bool, Vector3 const&,
   Bt2PhysicsUserMemoryStream&) */

uint Bt2PhysicsCookingUtil::cookTriangleMesh
               (IndexedTriangleSet *param_1,bool param_2,Vector3 *param_3,
               Bt2PhysicsUserMemoryStream *param_4)

{
  long lVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  long *this;
  float *pfVar5;
  ushort *puVar6;
  long *plVar7;
  ulong uVar8;
  IndexedTriangleSet *pIVar9;
  undefined auVar10 [16];
  uint local_64;
  uchar *local_60;
  long local_58;
  
  uVar8 = (ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pIVar9 = param_1;
  if (param_1 != (IndexedTriangleSet *)0x0) {
    auVar10 = TriangleSet::getPositions();
    if (((auVar10._0_8_ == 0) || (auVar10 = IndexedTriangleSet::getIndices16(), auVar10._0_8_ == 0))
       || (auVar10 = IndexedTriangleSet::is16Bit(),
          (auVar10 & (undefined  [16])0x1) == (undefined  [16])0x0)) {
      uVar8 = auVar10._8_8_;
      param_1 = auVar10._0_8_;
      pIVar9 = (IndexedTriangleSet *)0x0;
    }
    else {
      this = (long *)btAlignedAllocInternal(0x30,0x10);
                    /* try { // try from 00bac160 to 00bac1ab has its CatchHandler @ 00bac26c */
      uVar3 = TriangleSet::getNumVertices();
      pfVar5 = (float *)TriangleSet::getPositions();
      uVar4 = IndexedTriangleSet::getNumIndices();
      puVar6 = (ushort *)IndexedTriangleSet::getIndices16();
      Bt2PhysicsMeshInterface::Bt2PhysicsMeshInterface
                ((Bt2PhysicsMeshInterface *)this,uVar3,pfVar5,uVar4,puVar6,true,true);
      plVar7 = (long *)createTriangleColShape
                                 ((Bt2PhysicsMeshInterface *)this,(btOptimizedBvh *)0x0,
                                  (BtTriangleInfoMap *)0x0);
      local_60 = (uchar *)0x0;
      local_64 = 0;
      uVar8 = Bt2PhysicsSerialization::saveCookedTriangleMesh
                        ((btBvhTriangleMeshShape *)plVar7,(Bt2PhysicsMeshInterface *)this,&local_60,
                         &local_64);
      puVar2 = local_60;
      uVar3 = local_64;
      pIVar9 = (IndexedTriangleSet *)(uVar8 & 0xffffffff);
      if ((uVar8 & 1) != 0) {
        if ((param_4[0x18] != (Bt2PhysicsUserMemoryStream)0x0) &&
           (*(void **)(param_4 + 8) != (void *)0x0)) {
          operator_delete__(*(void **)(param_4 + 8));
        }
        *(uint *)param_4 = uVar3;
        *(uchar **)(param_4 + 8) = puVar2;
        *(uchar **)(param_4 + 0x10) = puVar2;
        param_4[0x18] = (Bt2PhysicsUserMemoryStream)0x1;
      }
      auVar10 = (**(code **)(*this + 8))(this);
      uVar8 = auVar10._8_8_;
      param_1 = auVar10._0_8_;
      if (plVar7 != (long *)0x0) {
        auVar10 = (**(code **)(*plVar7 + 8))(plVar7);
        uVar8 = auVar10._8_8_;
        param_1 = auVar10._0_8_;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return (uint)pIVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar8);
}


