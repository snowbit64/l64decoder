// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteChunk
// Entry Point: 00925dcc
// Size: 836 bytes
// Signature: undefined __thiscall deleteChunk(DestructionShape * this, uint param_1)


/* DestructionShape::deleteChunk(unsigned int) */

void __thiscall DestructionShape::deleteChunk(DestructionShape *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  DestructionGeometryShared *this_00;
  undefined4 *puVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void **ppvVar12;
  DestructionGeometry *this_01;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar16 = (ulong)param_1;
  lVar10 = *(long *)(this + 0x228);
  lVar14 = lVar10 + (ulong)param_1 * 0x30;
  plVar15 = (long *)(lVar14 + 8);
  lVar9 = *plVar15;
  plVar13 = (long *)(lVar14 + 0x10);
  uVar11 = *plVar13 - lVar9;
  if ((int)(uVar11 >> 2) != 0) {
    lVar10 = (uVar11 >> 2 & 0xffffffff) * 4 + -4;
    do {
      uVar17 = *(uint *)(lVar9 + lVar10);
      Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint
                (*(Bt2ScenegraphPhysicsContext **)(this + 0x290),uVar17);
      onJointRemoved(this,uVar17,true);
      lVar9 = *plVar15;
      lVar10 = lVar10 + -4;
    } while (lVar10 != -4);
    lVar10 = *(long *)(this + 0x228);
  }
  *plVar13 = lVar9;
  uVar17 = *(uint *)(lVar10 + uVar16 * 0x30 + 0x20);
  if (uVar17 != 0) {
    deleteActor(this,uVar17,true);
  }
  this_01 = *(DestructionGeometry **)(this + 0x170);
  if (*(long *)(this + 0x398) != *(long *)(this + 0x390)) {
    this_00 = (DestructionGeometryShared *)DestructionGeometry::getShared();
    DestructionGeometryShared::getChunk(this_00,param_1);
    DestructionGeometry::getShared();
    plVar13 = (long *)DestructionGeometryShared::getVertexDeclaration();
    iVar4 = (**(code **)(*plVar13 + 0x10))(plVar13,0);
    lVar9 = DestructionChunk::getIndices();
    DestructionGeometry::getShared();
    lVar10 = DestructionGeometryShared::getVertices();
    puVar7 = (undefined4 *)DestructionGeometry::getChunkWorldTransformation(this_01,param_1);
    iVar5 = DestructionChunk::getNumIndices();
    if (iVar5 != 0) {
      uVar17 = 0;
      do {
        fVar27 = (float)puVar7[6];
        fVar20 = (float)puVar7[4];
        fVar21 = (float)puVar7[5];
        uVar18 = *puVar7;
        uVar19 = puVar7[1];
        puVar1 = (undefined4 *)
                 (lVar10 + (ulong)(iVar4 * (uint)*(ushort *)(lVar9 + (ulong)uVar17 * 2)));
        uVar22 = puVar7[2];
        uVar23 = *puVar1;
        fVar25 = (float)puVar1[1];
        puVar2 = (undefined4 *)
                 (lVar10 + (ulong)(iVar4 * (uint)*(ushort *)(lVar9 + (ulong)(uVar17 + 1) * 2)));
        uVar28 = puVar1[2];
        puVar1 = (undefined4 *)
                 (lVar10 + (ulong)(iVar4 * (uint)*(ushort *)(lVar9 + (ulong)(uVar17 + 2) * 2)));
        uVar35 = puVar7[8];
        uVar36 = puVar7[9];
        uVar30 = *puVar2;
        fVar31 = (float)puVar2[1];
        uVar33 = *puVar1;
        fVar34 = (float)puVar1[1];
        uVar29 = NEON_fmadd(uVar23,uVar18,fVar25 * fVar20);
        uVar32 = NEON_fmadd(uVar23,uVar19,fVar25 * fVar21);
        uVar24 = NEON_fmadd(uVar23,uVar22,fVar25 * fVar27);
        uVar26 = puVar7[10];
        uVar37 = NEON_fmadd(uVar30,uVar18,fVar31 * fVar20);
        uVar38 = NEON_fmadd(uVar30,uVar19,fVar31 * fVar21);
        uVar30 = NEON_fmadd(uVar30,uVar22,fVar31 * fVar27);
        uVar18 = NEON_fmadd(uVar33,uVar18,fVar34 * fVar20);
        uVar19 = NEON_fmadd(uVar33,uVar19,fVar34 * fVar21);
        uVar23 = NEON_fmadd(uVar33,uVar22,fVar34 * fVar27);
        local_78 = (float)NEON_fmadd(uVar28,uVar35,uVar29);
        fStack_74 = (float)NEON_fmadd(uVar28,uVar36,uVar32);
        local_70 = (float)NEON_fmadd(uVar28,uVar26,uVar24);
        uVar24 = puVar2[2];
        uVar22 = puVar1[2];
        local_98 = (float)puVar7[0xc];
        fStack_94 = (float)puVar7[0xd];
        local_88 = (float)NEON_fmadd(uVar24,uVar35,uVar37);
        fStack_84 = (float)NEON_fmadd(uVar24,uVar36,uVar38);
        local_80 = (float)NEON_fmadd(uVar24,uVar26,uVar30);
        fVar20 = (float)NEON_fmadd(uVar22,uVar35,uVar18);
        fVar21 = (float)NEON_fmadd(uVar22,uVar36,uVar19);
        fVar25 = (float)NEON_fmadd(uVar22,uVar26,uVar23);
        local_90 = (float)puVar7[0xe];
        local_78 = local_98 + local_78;
        fStack_74 = fStack_94 + fStack_74;
        local_88 = local_98 + local_88;
        fStack_84 = fStack_94 + fStack_84;
        local_98 = local_98 + fVar20;
        local_70 = local_90 + local_70;
        local_80 = local_90 + local_80;
        fStack_94 = fStack_94 + fVar21;
        local_90 = local_90 + fVar25;
        lVar14 = *(long *)(this + 0x390);
        if (*(long *)(this + 0x398) != lVar14) {
          uVar11 = 0;
          do {
            DestructionEmitterShape::addEmitTriangle
                      (*(DestructionEmitterShape **)(lVar14 + uVar11 * 8),&local_78,&local_88,
                       &local_98);
            uVar11 = (ulong)((int)uVar11 + 1);
            lVar14 = *(long *)(this + 0x390);
          } while (uVar11 < (ulong)(*(long *)(this + 0x398) - lVar14 >> 3));
        }
        uVar17 = uVar17 + 3;
        uVar6 = DestructionChunk::getNumIndices();
      } while (uVar17 < uVar6);
    }
  }
  DestructionGeometry::deleteChunk((uint)this_01,(GsShape *)(ulong)param_1);
  lVar10 = *(long *)(this + 0x228);
  lVar9 = lVar10 + uVar16 * 0x30;
  *(undefined4 *)(lVar10 + uVar16 * 0x30) = 0;
  ppvVar12 = (void **)(lVar9 + 8);
  pvVar8 = *ppvVar12;
  if (pvVar8 != (void *)0x0) {
    *(void **)(lVar10 + uVar16 * 0x30 + 0x10) = pvVar8;
    operator_delete(pvVar8);
    *ppvVar12 = (void *)0x0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
  }
  *(undefined4 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *ppvVar12 = (void *)0x0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


