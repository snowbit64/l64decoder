// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: occluderRendering
// Entry Point: 00a18a80
// Size: 884 bytes
// Signature: undefined __thiscall occluderRendering(RenderList * this, float * param_1, float * param_2, float * param_3)


/* RenderList::occluderRendering(float const*, float const*, float const*) */

void __thiscall
RenderList::occluderRendering(RenderList *this,float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  type tVar4;
  float *pfVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  GsMaskedOcclusionCulling *this_00;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  FUN_00a1b6ac(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
  lVar10 = *(long *)(this + 0x100);
  lVar8 = *(long *)(this + 0x108);
  *(undefined4 *)(this + 0x1c) = 0;
  iVar3 = (int)((ulong)(lVar8 - lVar10) >> 3) * -0x55555555;
  if (iVar3 != 0) {
    lVar11 = 0;
    uVar9 = 0;
    do {
      pfVar5 = (float *)TriangleSet::getPositions();
      if ((pfVar5 != (float *)0x0) && (uVar6 = IndexedTriangleSet::is16Bit(), (uVar6 & 1) != 0)) {
        lVar10 = *(long *)(*(long *)(this + 0x100) + lVar11 + 8);
        RawTransformGroup::updateWorldTransformation();
        uVar28 = *(undefined4 *)(lVar10 + 0xb8);
        fVar23 = *(float *)(lVar10 + 0xbc);
        fVar22 = param_3[4];
        fVar19 = param_3[5];
        fVar13 = *param_3;
        fVar12 = param_3[1];
        fVar21 = param_3[6];
        fVar18 = param_3[7];
        uVar30 = *(undefined4 *)(lVar10 + 0xc0);
        uVar32 = *(undefined4 *)(lVar10 + 0xc4);
        fVar15 = param_3[2];
        fVar14 = param_3[3];
        uVar34 = *(undefined4 *)(lVar10 + 200);
        fVar35 = *(float *)(lVar10 + 0xcc);
        uVar27 = NEON_fmadd(uVar28,fVar13,fVar22 * fVar23);
        uVar25 = NEON_fmadd(uVar28,fVar12,fVar19 * fVar23);
        fVar16 = param_3[8];
        fVar17 = param_3[9];
        uVar33 = NEON_fmadd(uVar28,fVar15,fVar21 * fVar23);
        uVar38 = NEON_fmadd(uVar28,fVar14,fVar18 * fVar23);
        uVar27 = NEON_fmadd(uVar30,fVar16,uVar27);
        uVar28 = NEON_fmadd(uVar30,fVar17,uVar25);
        fVar26 = param_3[0xc];
        fVar24 = param_3[0xd];
        uVar39 = NEON_fmadd(uVar34,fVar13,fVar22 * fVar35);
        uVar41 = NEON_fmadd(uVar34,fVar12,fVar19 * fVar35);
        fVar23 = param_3[0xe];
        fVar20 = param_3[0xf];
        uVar25 = NEON_fmadd(uVar34,fVar15,fVar21 * fVar35);
        uVar34 = NEON_fmadd(uVar34,fVar14,fVar18 * fVar35);
        local_c8 = (float)NEON_fmadd(uVar32,fVar26,uVar27);
        uStack_c4 = NEON_fmadd(uVar32,fVar24,uVar28);
        fVar35 = param_3[10];
        fVar29 = param_3[0xb];
        uVar33 = NEON_fmadd(uVar30,fVar35,uVar33);
        uVar28 = NEON_fmadd(uVar30,fVar29,uVar38);
        uVar27 = *(undefined4 *)(lVar10 + 0xd0);
        uVar38 = *(undefined4 *)(lVar10 + 0xd4);
        local_c0 = NEON_fmadd(uVar32,fVar23,uVar33);
        uStack_bc = NEON_fmadd(uVar32,fVar20,uVar28);
        uVar32 = NEON_fmadd(uVar27,fVar16,uVar39);
        uVar28 = NEON_fmadd(uVar27,fVar17,uVar41);
        uVar30 = NEON_fmadd(uVar27,fVar35,uVar25);
        uVar25 = NEON_fmadd(uVar27,fVar29,uVar34);
        local_b8 = NEON_fmadd(uVar38,fVar26,uVar32);
        uStack_b4 = NEON_fmadd(uVar38,fVar24,uVar28);
        uVar27 = *(undefined4 *)(lVar10 + 0xd8);
        fVar31 = *(float *)(lVar10 + 0xdc);
        local_b0 = NEON_fmadd(uVar38,fVar23,uVar30);
        uStack_ac = NEON_fmadd(uVar38,fVar20,uVar25);
        uVar28 = *(undefined4 *)(lVar10 + 0xe8);
        fVar40 = *(float *)(lVar10 + 0xec);
        uVar32 = NEON_fmadd(uVar27,fVar13,fVar22 * fVar31);
        uVar33 = NEON_fmadd(uVar27,fVar12,fVar19 * fVar31);
        uVar36 = NEON_fmadd(uVar27,fVar15,fVar21 * fVar31);
        uVar38 = NEON_fmadd(uVar27,fVar14,fVar18 * fVar31);
        uVar41 = *(undefined4 *)(lVar10 + 0xe0);
        uVar37 = *(undefined4 *)(lVar10 + 0xe4);
        uVar27 = NEON_fmadd(uVar28,fVar13,fVar22 * fVar40);
        uVar25 = NEON_fmadd(uVar28,fVar12,fVar19 * fVar40);
        uVar30 = NEON_fmadd(uVar28,fVar15,fVar21 * fVar40);
        uVar28 = NEON_fmadd(uVar28,fVar14,fVar18 * fVar40);
        uVar39 = NEON_fmadd(uVar41,fVar16,uVar32);
        uVar33 = NEON_fmadd(uVar41,fVar17,uVar33);
        uVar34 = *(undefined4 *)(lVar10 + 0xf0);
        uVar32 = *(undefined4 *)(lVar10 + 0xf4);
        uVar38 = NEON_fmadd(uVar41,fVar29,uVar38);
        this_00 = *(GsMaskedOcclusionCulling **)(this + 8);
        local_a8 = NEON_fmadd(uVar37,fVar26,uVar39);
        uVar39 = NEON_fmadd(uVar41,fVar35,uVar36);
        uVar27 = NEON_fmadd(uVar34,fVar16,uVar27);
        uVar25 = NEON_fmadd(uVar34,fVar17,uVar25);
        uVar30 = NEON_fmadd(uVar34,fVar35,uVar30);
        uVar28 = NEON_fmadd(uVar34,fVar29,uVar28);
        uStack_a4 = NEON_fmadd(uVar37,fVar24,uVar33);
        uStack_9c = NEON_fmadd(uVar37,fVar20,uVar38);
        local_a0 = NEON_fmadd(uVar37,fVar23,uVar39);
        local_98 = NEON_fmadd(uVar32,fVar26,uVar27);
        uStack_94 = NEON_fmadd(uVar32,fVar24,uVar25);
        local_90 = NEON_fmadd(uVar32,fVar23,uVar30);
        uStack_8c = NEON_fmadd(uVar32,fVar20,uVar28);
        puVar7 = (ushort *)IndexedTriangleSet::getIndices16();
        uVar2 = IndexedTriangleSet::getNumIndices();
        GsMaskedOcclusionCulling::render(this_00,pfVar5,0,puVar7,uVar2,&local_c8);
        uVar6 = IndexedTriangleSet::getNumIndices();
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + (int)((uVar6 & 0xffffffff) / 3);
      }
      lVar10 = *(long *)(this + 0x100);
      lVar8 = *(long *)(this + 0x108);
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x18;
      uVar6 = (lVar8 - lVar10 >> 3) * -0x5555555555555555;
      iVar3 = (int)uVar6;
    } while (uVar9 < (uVar6 & 0xffffffff));
  }
  *(int *)(this + 0x14) = iVar3;
  if (lVar10 == lVar8) {
    *(undefined4 *)(this + 0x18) = 0;
    std::__ndk1::vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>
    ::assign<RenderList::ShapeViewInfo*>
              ((vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>
                *)(this + 0x70),*(ShapeViewInfo **)(this + 0x58),*(ShapeViewInfo **)(this + 0x60));
    std::__ndk1::vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>
    ::assign<RenderList::ShapeViewInfo*>
              ((vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>
                *)(this + 0xd0),*(ShapeViewInfo **)(this + 0xb8),*(ShapeViewInfo **)(this + 0xc0));
    tVar4 = std::__ndk1::
            vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>::
            assign<RenderList::ShapeViewInfo*>
                      ((vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>
                        *)(this + 0xa0),*(ShapeViewInfo **)(this + 0x88),
                       *(ShapeViewInfo **)(this + 0x90));
    uVar9 = (ulong)tVar4;
  }
  else {
    uVar25 = occlusionTestShapeList
                       (this,(vector *)(this + 0x58),(vector *)(this + 0x70),param_1,param_2);
    *(undefined4 *)(this + 0x18) = uVar25;
    iVar3 = occlusionTestShapeList
                      (this,(vector *)(this + 0xb8),(vector *)(this + 0xd0),param_1,param_2);
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar3;
    uVar9 = occlusionTestShapeList
                      (this,(vector *)(this + 0x88),(vector *)(this + 0xa0),param_1,param_2);
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + (int)uVar9;
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


