// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipHullAgainstHull
// Entry Point: 00f722c8
// Size: 932 bytes
// Signature: undefined __cdecl clipHullAgainstHull(btVector3 * param_1, btConvexPolyhedron * param_2, btConvexPolyhedron * param_3, btTransform * param_4, btTransform * param_5, float param_6, float param_7, Result * param_8)


/* btPolyhedralContactClipping::clipHullAgainstHull(btVector3 const&, btConvexPolyhedron const&,
   btConvexPolyhedron const&, btTransform const&, btTransform const&, float, float,
   btDiscreteCollisionDetectorInterface::Result&) */

void btPolyhedralContactClipping::clipHullAgainstHull
               (btVector3 *param_1,btConvexPolyhedron *param_2,btConvexPolyhedron *param_3,
               btTransform *param_4,btTransform *param_5,float param_6,float param_7,Result *param_8
               )

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  btAlignedObjectArray abStack_e0 [4];
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined8 *local_d0;
  char local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  local_c0 = *(float *)param_1;
  fVar18 = *(float *)(param_1 + 4);
  fVar34 = *(float *)param_5;
  uVar33 = *(undefined4 *)(param_5 + 4);
  fVar25 = *(float *)(param_5 + 0x10);
  uVar27 = *(undefined4 *)(param_5 + 0x14);
  fVar29 = *(float *)(param_5 + 0x20);
  uVar35 = *(undefined4 *)(param_5 + 0x24);
  uVar26 = *(undefined4 *)(param_5 + 8);
  uVar28 = *(undefined4 *)(param_5 + 0x18);
  uVar19 = NEON_fmadd(fVar18,fVar18,local_c0 * local_c0);
  uVar36 = *(undefined4 *)(param_5 + 0x28);
  local_b8 = *(float *)(param_1 + 8);
  uStack_b4 = *(undefined4 *)(param_1 + 0xc);
  fVar20 = (float)NEON_fmadd(local_b8,local_b8,uVar19);
  fStack_bc = 1.0 / SQRT(fVar20);
  local_b8 = fStack_bc * local_b8;
  local_c0 = fStack_bc * local_c0;
  fStack_bc = fStack_bc * fVar18;
  if ((int)*(uint *)(param_3 + 0x2c) < 1) {
    iVar16 = -1;
  }
  else {
    uVar8 = 0;
    puVar10 = (undefined4 *)(*(long *)(param_3 + 0x38) + 0x28);
    fVar18 = -3.402823e+38;
    iVar15 = -1;
    do {
      fVar20 = (float)puVar10[-2];
      uVar19 = puVar10[-1];
      uVar32 = *puVar10;
      uVar22 = NEON_fmadd(uVar33,uVar19,fVar34 * fVar20);
      uVar23 = NEON_fmadd(uVar27,uVar19,fVar25 * fVar20);
      uVar19 = NEON_fmadd(uVar35,uVar19,fVar29 * fVar20);
      fVar20 = (float)NEON_fmadd(uVar26,uVar32,uVar22);
      uVar22 = NEON_fmadd(uVar28,uVar32,uVar23);
      uVar19 = NEON_fmadd(uVar36,uVar32,uVar19);
      uVar22 = NEON_fmadd(uVar22,fStack_bc,fVar20 * local_c0);
      fVar20 = (float)NEON_fmadd(uVar19,local_b8,uVar22);
      iVar16 = (int)uVar8;
      if (fVar20 <= fVar18) {
        iVar16 = iVar15;
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 0xc;
      fVar18 = fVar20;
      iVar15 = iVar16;
    } while (*(uint *)(param_3 + 0x2c) != uVar8);
  }
  lVar6 = *(long *)(param_3 + 0x38) + (long)iVar16 * 0x30;
  local_c8 = 1;
  uVar2 = *(uint *)(lVar6 + 4);
  local_d0 = (undefined8 *)0x0;
  local_dc = 0;
  uStack_d8 = 0;
  if (0 < (int)uVar2) {
    puVar11 = (undefined8 *)0x0;
    uVar14 = 0;
    uVar8 = 0;
    puVar13 = (undefined8 *)0x0;
    do {
      fVar21 = *(float *)(param_5 + 0x30);
      fVar18 = *(float *)(param_5 + 0x34);
      fVar20 = *(float *)(param_5 + 0x38);
      pfVar1 = (float *)(*(long *)(param_3 + 0x18) +
                        (long)*(int *)(*(long *)(lVar6 + 0x10) + uVar8 * 4) * 0x10);
      fVar24 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar30 = pfVar1[2];
      puVar12 = puVar13;
      puVar7 = local_d0;
      if (uVar8 == uVar14) {
        uVar3 = (int)uVar8 << 1;
        if (uVar8 == 0) {
          uVar3 = 1;
        }
        uVar14 = (ulong)uVar3;
        if (uVar8 < uVar14) {
          puVar7 = puVar13;
          uVar9 = uVar8;
          if (uVar3 == 0) {
            puVar11 = (undefined8 *)0x0;
            puVar12 = puVar11;
            if (uVar8 == 0) goto LAB_00f724e8;
LAB_00f724c4:
            do {
              uVar17 = *puVar7;
              uVar9 = uVar9 - 1;
              puVar11[1] = puVar7[1];
              *puVar11 = uVar17;
              puVar11 = puVar11 + 2;
              puVar7 = puVar7 + 2;
            } while (uVar9 != 0);
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            puVar11 = (undefined8 *)
                      (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4,
                                 0x10);
            puVar12 = puVar11;
            if (uVar8 != 0) goto LAB_00f724c4;
LAB_00f724e8:
            puVar12 = puVar11;
            puVar7 = puVar11;
            if (puVar13 == (undefined8 *)0x0) goto LAB_00f72548;
          }
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(puVar13);
          puVar11 = puVar12;
          puVar7 = puVar12;
        }
        else {
          uVar14 = uVar8 & 0xffffffff;
        }
      }
LAB_00f72548:
      local_d0 = puVar7;
      puVar13 = puVar12 + uVar8 * 2;
      uVar8 = uVar8 + 1;
      uVar19 = NEON_fmadd(uVar33,fVar31,fVar34 * fVar24);
      uVar27 = NEON_fmadd(uVar27,fVar31,fVar25 * fVar24);
      uVar33 = NEON_fmadd(uVar35,fVar31,fVar29 * fVar24);
      *(float *)((long)puVar13 + 0xc) = 0.0;
      fVar25 = (float)NEON_fmadd(uVar26,fVar30,uVar19);
      fVar29 = (float)NEON_fmadd(uVar28,fVar30,uVar27);
      fVar34 = (float)NEON_fmadd(uVar36,fVar30,uVar33);
      *(float *)puVar13 = fVar25 + fVar21;
      *(float *)((long)puVar13 + 4) = fVar29 + fVar18;
      *(float *)(puVar13 + 1) = fVar34 + fVar20;
      if (uVar8 == uVar2) goto LAB_00f725b4;
      fVar34 = *(float *)param_5;
      uVar33 = *(undefined4 *)(param_5 + 4);
      fVar25 = *(float *)(param_5 + 0x10);
      uVar27 = *(undefined4 *)(param_5 + 0x14);
      fVar29 = *(float *)(param_5 + 0x20);
      uVar35 = *(undefined4 *)(param_5 + 0x24);
      uVar26 = *(undefined4 *)(param_5 + 8);
      uVar28 = *(undefined4 *)(param_5 + 0x18);
      uVar36 = *(undefined4 *)(param_5 + 0x28);
      puVar13 = puVar12;
    } while( true );
  }
  puVar11 = (undefined8 *)0x0;
joined_r0x00f725cc:
  if (iVar16 < 0) {
    local_c8 = '\x01';
    bVar5 = false;
  }
  else {
    local_c8 = '\x01';
    clipFaceAgainstHull((btVector3 *)&local_c0,param_2,param_4,abStack_e0,param_6,param_7,param_8);
    bVar5 = local_c8 == '\0';
    puVar11 = local_d0;
  }
  if ((puVar11 != (undefined8 *)0x0) && (!bVar5)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(puVar11);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00f725b4:
  local_dc = (undefined4)uVar8;
  uStack_d8 = (undefined4)uVar14;
  goto joined_r0x00f725cc;
}


