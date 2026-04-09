// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 009bc19c
// Size: 2032 bytes
// Signature: undefined __cdecl update(Bt2ScenegraphPhysicsContext * param_1)


/* Bt2Rope::update(Bt2ScenegraphPhysicsContext*) */

void Bt2Rope::update(Bt2ScenegraphPhysicsContext *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  btSoftBody *this;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  ulong *puVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  this = *(btSoftBody **)param_1;
  if (((this == (btSoftBody *)0x0) || (this[0x4b4] != (btSoftBody)0x0)) ||
     (*(int *)(param_1 + 0x38) == 0)) goto LAB_009bc1e0;
  fVar30 = *(float *)(param_1 + 0x1c);
  uVar10 = *(uint *)(this + 0x374);
  fVar35 = *(float *)(param_1 + 0x20);
  if (fVar30 <= *(float *)(param_1 + 0x20)) {
    fVar35 = fVar30;
  }
  fVar32 = *(float *)(param_1 + 0x24);
  iVar9 = (int)(fVar35 / fVar32 + 0.5);
  uVar11 = 2;
  if (2 < iVar9 + 1U) {
    uVar11 = iVar9 + 1;
  }
  if (uVar10 + 1 < uVar11) {
    uVar11 = uVar10 + 1;
  }
  uVar4 = uVar11 - 2;
  fVar44 = fVar30 - fVar32 * (float)(ulong)uVar4;
  fVar35 = fVar35 - fVar32 * (float)(ulong)uVar4;
  if (fVar32 * 1.6 <= fVar44) {
    fVar44 = fVar32 * 1.6;
  }
  if (fVar44 <= fVar35) {
    fVar35 = fVar44;
  }
  if (uVar10 <= uVar11) {
    if (uVar11 <= uVar10) {
      if (fVar44 <= fVar35 + 1e-05) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(float *)(param_1 + 0x20) = fVar30;
        fVar35 = fVar44;
      }
      lVar27 = *(long *)(this + 0x3a0) + (long)(int)(uVar10 - 2) * 0x48;
      *(float *)(lVar27 + 0x20) = fVar35;
      *(float *)(lVar27 + 0x2c) = fVar35 * fVar35;
      *(float *)(lVar27 + 0x30) = fVar44 * fVar44;
      goto LAB_009bc1e0;
    }
    iVar9 = uVar10 - 1;
    lVar28 = (long)iVar9;
    lVar27 = *(long *)(this + 0x380) + (long)iVar9 * 0x78;
    uStack_98 = *(undefined8 *)(lVar27 + 0x18);
    local_a0 = *(undefined8 *)(lVar27 + 0x10);
    btSoftBody::appendNode(this,(btVector3 *)&local_a0,fVar32 * *(float *)(param_1 + 0x28));
    lVar13 = (long)(int)uVar10 * 0x78;
    lVar19 = *(long *)(*(long *)param_1 + 0x380) + (long)iVar9 * 0x78;
    lVar27 = *(long *)(*(long *)param_1 + 0x380) + lVar13;
    uVar21 = *(undefined8 *)(lVar19 + 0x20);
    *(undefined8 *)(lVar27 + 0x28) = *(undefined8 *)(lVar19 + 0x28);
    *(undefined8 *)(lVar27 + 0x20) = uVar21;
    lVar19 = *(long *)(*(long *)param_1 + 0x380) + (long)iVar9 * 0x78;
    lVar27 = *(long *)(*(long *)param_1 + 0x380) + lVar13;
    uVar21 = *(undefined8 *)(lVar19 + 0x30);
    *(undefined8 *)(lVar27 + 0x38) = *(undefined8 *)(lVar19 + 0x38);
    *(undefined8 *)(lVar27 + 0x30) = uVar21;
    lVar13 = *(long *)(*(long *)param_1 + 0x380) + lVar13;
    *(byte *)(lVar13 + 0x70) =
         *(byte *)(lVar13 + 0x70) & 0xfe |
         *(byte *)(*(long *)(*(long *)param_1 + 0x380) + (long)iVar9 * 0x78 + 0x70) & 1;
    btSoftBody::appendLink(*(btSoftBody **)param_1,iVar9,uVar10,(Material *)0x0,false);
    lVar27 = *(long *)param_1;
    local_7c = 0;
    *(undefined *)(lVar27 + 0x4b4) = 0;
    lVar13 = *(long *)(lVar27 + 0x3a0) + (long)iVar9 * 0x48;
    fVar30 = *(float *)(*(long *)(lVar13 + 0x10) + 0x60);
    iVar6 = uVar10 - 2;
    fVar32 = *(float *)(*(long *)(lVar13 + 0x18) + 0x60);
    fVar33 = *(float *)(*(long *)(lVar13 + 8) + 8);
    *(float *)(lVar13 + 0x20) = fVar35;
    *(float *)(lVar13 + 0x2c) = fVar35 * fVar35;
    *(float *)(lVar13 + 0x30) = fVar44 * fVar44;
    *(float *)(lVar13 + 0x28) = (fVar30 + fVar32) / fVar33;
    lVar27 = *(long *)(lVar27 + 0x380);
    lVar13 = lVar27 + (long)iVar9 * 0x78;
    lVar19 = lVar27 + (long)iVar6 * 0x78;
    puVar12 = (undefined8 *)(lVar13 + 0x10);
    uVar36 = *puVar12;
    uVar21 = *(undefined8 *)(lVar19 + 0x10);
    fVar44 = *(float *)(lVar19 + 0x18);
    fVar30 = (float)uVar21;
    fVar33 = (float)uVar36;
    fVar32 = (float)((ulong)uVar21 >> 0x20);
    fVar37 = (float)((ulong)uVar36 >> 0x20);
    fVar42 = ABS(fVar33 - fVar30);
    fVar43 = ABS(fVar37 - fVar32);
    pfVar18 = (float *)(lVar13 + 0x18);
    fVar40 = *pfVar18;
    local_80 = ABS(fVar40 - fVar44);
    local_88 = CONCAT44(fVar43,fVar42);
    fVar35 = fVar43;
    if (fVar42 >= fVar43) {
      fVar35 = fVar42;
    }
    uVar17 = 2;
    if (local_80 <= fVar35) {
      uVar17 = (ulong)(fVar42 < fVar43);
    }
    fVar35 = *(float *)((long)&local_88 + uVar17 * 4);
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
      fVar33 = 1.0;
      fVar37 = 0.0;
    }
    else {
      fVar35 = 1.0 / fVar35;
      fVar33 = (fVar33 - fVar30) * fVar35;
      fVar37 = (fVar37 - fVar32) * fVar35;
      fVar35 = (fVar40 - fVar44) * fVar35;
      fVar40 = (float)NEON_fmadd(fVar35,fVar35,fVar37 * fVar37 + fVar33 * fVar33);
      fVar40 = 1.0 / SQRT(fVar40);
      fVar33 = fVar33 * fVar40;
      fVar37 = fVar37 * fVar40;
      fVar35 = fVar35 * fVar40;
    }
    fVar40 = *(float *)(param_1 + 0x24);
    *(undefined4 *)(lVar27 + lVar28 * 0x78 + 0x1c) = 0;
    *puVar12 = CONCAT44(fVar32 + fVar37 * fVar40,fVar30 + fVar33 * fVar40);
    *pfVar18 = fVar44 + fVar35 * fVar40;
    fVar30 = *(float *)(param_1 + 0x24);
    lVar13 = *(long *)(*(long *)param_1 + 0x380) + (long)iVar6 * 0x78;
    lVar27 = *(long *)(*(long *)param_1 + 0x380) + lVar28 * 0x78;
    *(undefined4 *)(lVar27 + 0x2c) = 0;
    uVar21 = *(undefined8 *)(lVar13 + 0x20);
    fVar32 = *(float *)(lVar13 + 0x28);
    *(ulong *)(lVar27 + 0x20) =
         CONCAT44((float)((ulong)uVar21 >> 0x20) + fVar37 * fVar30,(float)uVar21 + fVar33 * fVar30);
    *(float *)(lVar27 + 0x28) = fVar35 * fVar30 + fVar32;
    lVar13 = *(long *)param_1;
    fVar35 = *(float *)(param_1 + 0x24);
    lVar27 = *(long *)(lVar13 + 0x3a0) + (long)iVar6 * 0x48;
    *(float *)(lVar27 + 0x20) = fVar35;
    *(float *)(lVar27 + 0x2c) = fVar35 * fVar35;
    *(float *)(lVar27 + 0x30) = fVar35 * fVar35;
    uVar11 = *(uint *)(lVar13 + 0x3f4);
    uVar17 = (ulong)uVar11;
    if ((int)uVar11 < 1) {
      lVar27 = *(long *)(lVar13 + 0x380);
    }
    else {
      lVar27 = *(long *)(lVar13 + 0x380);
      plVar22 = *(long **)(lVar13 + 0x400);
      lVar13 = lVar27 + lVar28 * 0x78;
      lVar19 = lVar27 + (long)(int)uVar10 * 0x78;
      if (uVar11 == 1) {
        uVar24 = 0;
      }
      else {
        uVar24 = uVar17 & 0xfffffffe;
        uVar16 = uVar24;
        plVar26 = plVar22;
        do {
          if (*plVar26 == lVar13) {
            *plVar26 = lVar19;
          }
          if (plVar26[0xd] == lVar13) {
            plVar26[0xd] = lVar19;
          }
          plVar26 = plVar26 + 0x1a;
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
        if (uVar24 == uVar17) goto LAB_009bc788;
      }
      lVar14 = uVar17 - uVar24;
      plVar22 = plVar22 + uVar24 * 0xd;
      do {
        if (*plVar22 == lVar13) {
          *plVar22 = lVar19;
        }
        plVar22 = plVar22 + 0xd;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
LAB_009bc788:
    lVar27 = lVar27 + lVar28 * 0x78;
    *(byte *)(lVar27 + 0x70) = *(byte *)(lVar27 + 0x70) & 0xfe;
    goto LAB_009bc1e0;
  }
  uVar5 = uVar11 - 1;
  uVar29 = uVar11;
  if (uVar5 < uVar10 - 1) {
    do {
      btDbvt::remove((btDbvt *)(this + 0x578),
                     *(btDbvtNode **)
                      (*(long *)(this + 0x380) + (long)(int)(uVar29 - 1) * 0x78 + 0x68));
      this = *(btSoftBody **)param_1;
      uVar29 = uVar29 + 1;
    } while (uVar10 != uVar29);
  }
  puVar15 = (undefined8 *)(*(long *)(this + 0x380) + (long)(int)(uVar10 - 1) * 0x78);
  lVar27 = (long)(int)uVar5;
  puVar12 = (undefined8 *)(*(long *)(this + 0x380) + (long)(int)uVar5 * 0x78);
  uVar31 = puVar15[4];
  uVar36 = puVar15[7];
  uVar21 = puVar15[6];
  uVar41 = puVar15[1];
  uVar39 = *puVar15;
  uVar38 = puVar15[3];
  uVar34 = puVar15[2];
  puVar12[5] = puVar15[5];
  puVar12[4] = uVar31;
  puVar12[7] = uVar36;
  puVar12[6] = uVar21;
  puVar12[1] = uVar41;
  *puVar12 = uVar39;
  puVar12[3] = uVar38;
  puVar12[2] = uVar34;
  uVar31 = puVar15[10];
  uVar36 = puVar15[0xd];
  uVar21 = puVar15[0xc];
  uVar3 = *(undefined *)(puVar15 + 0xe);
  uVar38 = puVar15[9];
  uVar34 = puVar15[8];
  puVar12[0xb] = puVar15[0xb];
  puVar12[10] = uVar31;
  puVar12[0xd] = uVar36;
  puVar12[0xc] = uVar21;
  *(undefined *)(puVar12 + 0xe) = uVar3;
  puVar12[9] = uVar38;
  puVar12[8] = uVar34;
  lVar13 = *(long *)(*(long *)param_1 + 0x380) + (long)(int)uVar5 * 0x78;
  *(long *)(*(long *)(lVar13 + 0x68) + 0x28) = lVar13;
  lVar13 = *(long *)param_1;
  uVar29 = *(uint *)(lVar13 + 0x3f4);
  uVar17 = (ulong)uVar29;
  if (0 < (int)uVar29) {
    uVar16 = *(long *)(lVar13 + 0x380) + lVar27 * 0x78;
    puVar20 = *(ulong **)(lVar13 + 0x400);
    if (uVar29 == 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar17 & 0xfffffffe;
      uVar24 = uVar23;
      puVar25 = puVar20;
      do {
        uVar1 = *puVar25;
        if (uVar16 <= *puVar25) {
          uVar1 = uVar16;
        }
        uVar2 = puVar25[0xd];
        if (uVar16 <= puVar25[0xd]) {
          uVar2 = uVar16;
        }
        uVar24 = uVar24 - 2;
        *puVar25 = uVar1;
        puVar25[0xd] = uVar2;
        puVar25 = puVar25 + 0x1a;
      } while (uVar24 != 0);
      if (uVar23 == uVar17) goto LAB_009bc5a8;
    }
    lVar19 = uVar17 - uVar23;
    puVar20 = puVar20 + uVar23 * 0xd;
    do {
      uVar17 = *puVar20;
      if (uVar16 <= *puVar20) {
        uVar17 = uVar16;
      }
      lVar19 = lVar19 + -1;
      *puVar20 = uVar17;
      puVar20 = puVar20 + 0xd;
    } while (lVar19 != 0);
  }
LAB_009bc5a8:
  puVar15 = (undefined8 *)(*(long *)(lVar13 + 0x3a0) + (long)(int)(uVar10 - 2) * 0x48);
  lVar19 = ((long)(int)uVar4 + (long)(int)uVar4 * 8) * 8;
  puVar12 = (undefined8 *)(*(long *)(lVar13 + 0x3a0) + lVar19);
  uVar21 = *puVar15;
  puVar12[1] = puVar15[1];
  *puVar12 = uVar21;
  uVar34 = puVar15[4];
  uVar31 = puVar15[7];
  uVar36 = puVar15[6];
  uVar21 = puVar15[8];
  uVar39 = puVar15[3];
  uVar38 = puVar15[2];
  puVar12[5] = puVar15[5];
  puVar12[4] = uVar34;
  puVar12[7] = uVar31;
  puVar12[6] = uVar36;
  puVar12[8] = uVar21;
  puVar12[3] = uVar39;
  puVar12[2] = uVar38;
  *(long *)(*(long *)(*(long *)param_1 + 0x3a0) + lVar19 + 0x10) =
       *(long *)(*(long *)param_1 + 0x380) + (long)(int)uVar4 * 0x78;
  *(long *)(*(long *)(*(long *)param_1 + 0x3a0) + lVar19 + 0x18) =
       *(long *)(*(long *)param_1 + 0x380) + lVar27 * 0x78;
  lVar28 = *(long *)param_1;
  lVar19 = *(long *)(lVar28 + 0x3a0) + lVar19;
  *(float *)(lVar19 + 0x20) = fVar35;
  *(float *)(lVar19 + 0x2c) = fVar35 * fVar35;
  *(float *)(lVar19 + 0x30) = fVar35 * fVar35;
  uVar10 = *(uint *)(lVar28 + 0x374);
  lVar13 = lVar28;
  if ((int)uVar10 < (int)uVar11) {
    lVar13 = (long)(int)uVar10;
    if (*(int *)(lVar28 + 0x378) < (int)uVar11) {
      if (uVar11 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = btAlignedAllocInternal((long)(int)uVar11 * 0x78,0x10);
        uVar10 = *(uint *)(lVar28 + 0x374);
      }
      if (0 < (int)uVar10) {
        lVar14 = 0;
        do {
          puVar12 = (undefined8 *)(lVar19 + lVar14);
          puVar15 = (undefined8 *)(*(long *)(lVar28 + 0x380) + lVar14);
          lVar14 = lVar14 + 0x78;
          uVar31 = puVar15[4];
          uVar36 = puVar15[7];
          uVar21 = puVar15[6];
          uVar41 = puVar15[1];
          uVar39 = *puVar15;
          uVar38 = puVar15[3];
          uVar34 = puVar15[2];
          puVar12[5] = puVar15[5];
          puVar12[4] = uVar31;
          puVar12[7] = uVar36;
          puVar12[6] = uVar21;
          puVar12[1] = uVar41;
          *puVar12 = uVar39;
          puVar12[3] = uVar38;
          puVar12[2] = uVar34;
          uVar34 = puVar15[10];
          uVar31 = puVar15[0xd];
          uVar36 = puVar15[0xc];
          uVar21 = puVar15[0xe];
          uVar39 = puVar15[9];
          uVar38 = puVar15[8];
          puVar12[0xb] = puVar15[0xb];
          puVar12[10] = uVar34;
          puVar12[0xd] = uVar31;
          puVar12[0xc] = uVar36;
          puVar12[0xe] = uVar21;
          puVar12[9] = uVar39;
          puVar12[8] = uVar38;
        } while ((ulong)uVar10 * 0x78 - lVar14 != 0);
      }
      if ((*(void **)(lVar28 + 0x380) != (void *)0x0) && (*(char *)(lVar28 + 0x388) != '\0')) {
        btAlignedFreeInternal(*(void **)(lVar28 + 0x380));
      }
      *(long *)(lVar28 + 0x380) = lVar19;
      *(uint *)(lVar28 + 0x378) = uVar11;
      *(undefined *)(lVar28 + 0x388) = 1;
    }
    lVar19 = (int)uVar11 - lVar13;
    lVar13 = lVar13 * 0x78;
    do {
      lVar19 = lVar19 + -1;
      puVar12 = (undefined8 *)(*(long *)(lVar28 + 0x380) + lVar13);
      lVar13 = lVar13 + 0x78;
      puVar12[0xe] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
    } while (lVar19 != 0);
    lVar13 = *(long *)param_1;
  }
  *(uint *)(lVar28 + 0x374) = uVar11;
  uVar10 = *(uint *)(lVar13 + 0x394);
  if ((int)uVar10 < (int)uVar5) {
    lVar19 = (long)(int)uVar10;
    if (*(int *)(lVar13 + 0x398) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar28 = 0;
      }
      else {
        lVar28 = btAlignedAllocInternal(lVar27 * 0x48,0x10);
        uVar10 = *(uint *)(lVar13 + 0x394);
      }
      if (0 < (int)uVar10) {
        lVar14 = 0;
        do {
          puVar12 = (undefined8 *)(lVar28 + lVar14);
          puVar15 = (undefined8 *)(*(long *)(lVar13 + 0x3a0) + lVar14);
          lVar14 = lVar14 + 0x48;
          uVar21 = *puVar15;
          puVar12[1] = puVar15[1];
          *puVar12 = uVar21;
          uVar34 = puVar15[4];
          uVar31 = puVar15[7];
          uVar36 = puVar15[6];
          uVar21 = puVar15[8];
          uVar39 = puVar15[3];
          uVar38 = puVar15[2];
          puVar12[5] = puVar15[5];
          puVar12[4] = uVar34;
          puVar12[7] = uVar31;
          puVar12[6] = uVar36;
          puVar12[8] = uVar21;
          puVar12[3] = uVar39;
          puVar12[2] = uVar38;
        } while ((ulong)uVar10 * 0x48 - lVar14 != 0);
      }
      if ((*(void **)(lVar13 + 0x3a0) != (void *)0x0) && (*(char *)(lVar13 + 0x3a8) != '\0')) {
        btAlignedFreeInternal(*(void **)(lVar13 + 0x3a0));
      }
      *(long *)(lVar13 + 0x3a0) = lVar28;
      *(uint *)(lVar13 + 0x398) = uVar5;
      *(undefined *)(lVar13 + 0x3a8) = 1;
    }
    lVar27 = lVar19 - lVar27;
    lVar19 = lVar19 * 0x48;
    do {
      bVar8 = lVar27 != -1;
      lVar27 = lVar27 + 1;
      puVar12 = (undefined8 *)(*(long *)(lVar13 + 0x3a0) + lVar19);
      lVar19 = lVar19 + 0x48;
      puVar12[8] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
    } while (bVar8);
  }
  *(uint *)(lVar13 + 0x394) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
LAB_009bc1e0:
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


