// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createActor
// Entry Point: 009233ac
// Size: 552 bytes
// Signature: undefined __thiscall createActor(DestructionShape * this, uint param_1)


/* DestructionShape::createActor(unsigned int) */

uint __thiscall DestructionShape::createActor(DestructionShape *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  DestructionGeometryShared *this_00;
  float *pfVar3;
  ulonglong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  Bt2ScenegraphPhysicsContext *this_01;
  float fVar11;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(this + 0x170);
  this_00 = (DestructionGeometryShared *)DestructionGeometry::getShared();
  DestructionGeometryShared::getChunk(this_00,param_1);
  fVar11 = *(float *)(this + 0x2b8);
  this_01 = *(Bt2ScenegraphPhysicsContext **)(this + 0x290);
  pfVar3 = (float *)DestructionChunk::getHullVertices();
  uVar2 = DestructionChunk::getNumHullVertices();
  RawTransformGroup::updateWorldTransformation();
  uVar4 = DestructionChunk::getHullVertices();
  uVar2 = Bt2ScenegraphPhysicsContext::enqueueAddLightActor
                    (this_01,pfVar3,uVar2,(Matrix4x4 *)(this + 0xb8),
                     (IActorMoveReport *)(this + 0x200),param_1,fVar11,0.001,0xff,false,8,0.0,0.5,
                     0.5,uVar4);
  RawTransformGroup::updateWorldTransformation();
  DestructionGeometry::setChunkTransformation
            ((uint)uVar7,(Matrix4x4 *)(ulong)param_1,(Matrix4x4 *)(this + 0xb8),true,(GsShape *)0x1,
             *(float *)(this + 0x2ac),*(float *)(this + 0x2b0),*(float *)(this + 0x2b4));
  pplVar8 = (long **)(this + 0x238);
  pplVar9 = *(long ***)(this + 0x238);
  pplVar10 = pplVar8;
  while (pplVar9 != (long **)0x0) {
    while (pplVar10 = pplVar9, uVar2 < *(uint *)((long)pplVar10 + 0x1c)) {
      pplVar8 = pplVar10;
      pplVar9 = (long **)*pplVar10;
      if ((long **)*pplVar10 == (long **)0x0) {
        plVar6 = *pplVar10;
        goto joined_r0x0092352c;
      }
    }
    if (uVar2 <= *(uint *)((long)pplVar10 + 0x1c)) break;
    pplVar8 = pplVar10 + 1;
    pplVar9 = (long **)*pplVar8;
  }
  plVar6 = *pplVar8;
joined_r0x0092352c:
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)operator_new(0x28);
    *(uint *)((long)plVar6 + 0x1c) = uVar2;
    *(uint *)(plVar6 + 4) = param_1;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = (long)pplVar10;
    *pplVar8 = plVar6;
    if (**(long **)(this + 0x230) != 0) {
      *(long *)(this + 0x230) = **(long **)(this + 0x230);
      plVar6 = *pplVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x238),(__tree_node_base *)plVar6);
    *(long *)(this + 0x240) = *(long *)(this + 0x240) + 1;
  }
  *(uint *)(*(long *)(this + 0x228) + (long)(Matrix4x4 *)(ulong)param_1 * 0x30 + 0x20) = uVar2;
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


