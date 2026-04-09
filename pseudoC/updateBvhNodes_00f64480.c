// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBvhNodes
// Entry Point: 00f64480
// Size: 1164 bytes
// Signature: undefined __cdecl updateBvhNodes(btStridingMeshInterface * param_1, int param_2, int param_3, int param_4)


/* btOptimizedBvh::updateBvhNodes(btStridingMeshInterface*, int, int, int) */

void btOptimizedBvh::updateBvhNodes
               (btStridingMeshInterface *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ushort *puVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  float fVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  int local_b4;
  undefined8 local_b0;
  long local_a8;
  int local_9c;
  int iStack_98;
  undefined4 local_94;
  long local_90;
  long local_88;
  
  plVar18 = (long *)(ulong)(uint)param_2;
  lVar15 = tpidr_el0;
  local_88 = *(long *)(lVar15 + 0x28);
  local_90 = 0;
  local_94 = 0;
  local_9c = 0;
  iStack_98 = 2;
  local_b0 = 0;
  local_a8 = 0;
  local_b4 = 2;
  if (param_3 < param_4) {
    fVar14 = -1e+18;
    lVar26 = (long)param_4;
    uVar27 = -(ulong)((uint)param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_4 << 4;
    iVar28 = param_4 + 1;
    uVar19 = 0xffffffff;
    do {
      lVar29 = *(long *)(param_1 + 0xb8);
      lVar26 = lVar26 + -1;
      puVar8 = (ushort *)(lVar29 + uVar27);
      iVar13 = *(int *)(puVar8 + -2);
      if (iVar13 < 0) {
        iVar24 = *(int *)(puVar8 + 6);
        uVar9 = puVar8[3];
        iVar13 = iVar24;
        if (iVar24 < 0) {
          iVar13 = -1;
        }
        uVar10 = *puVar8;
        puVar1 = (ushort *)(lVar29 + (long)(iVar28 + (iVar13 - iVar24)) * 0x10);
        puVar8[-8] = uVar10;
        uVar11 = *puVar1;
        puVar8[-5] = uVar9;
        if (uVar10 <= uVar11) {
          uVar11 = uVar10;
        }
        uVar10 = puVar8[1];
        puVar8[-8] = uVar11;
        uVar11 = puVar1[3];
        puVar8[-7] = uVar10;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        uVar12 = puVar8[4];
        puVar8[-5] = uVar11;
        uVar9 = puVar1[1];
        puVar8[-4] = uVar12;
        if (uVar10 <= uVar9) {
          uVar9 = uVar10;
        }
        uVar11 = puVar8[2];
        puVar8[-7] = uVar9;
        uVar9 = puVar1[4];
        puVar8[-6] = uVar11;
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        puVar8[-4] = uVar9;
        uVar9 = puVar1[2];
        if (uVar11 <= puVar1[2]) {
          uVar9 = uVar11;
        }
        uVar11 = puVar8[5];
        puVar8[-6] = uVar9;
        puVar8[-3] = uVar11;
        uVar9 = puVar1[5];
        if (puVar1[5] <= uVar11) {
          uVar9 = uVar11;
        }
        puVar8[-3] = uVar9;
      }
      else {
        uVar25 = (ulong)(long)iVar13 >> 0x15 & 0x7ff;
        iVar24 = (int)uVar25;
        if (iVar24 != (int)uVar19) {
          if (-1 < (int)uVar19) {
            (**(code **)(*plVar18 + 0x30))(plVar18);
          }
          (**(code **)(*plVar18 + 0x20))
                    (plVar18,&local_90,&local_94,&iStack_98,&local_9c,&local_a8,(long)&local_b0 + 4,
                     &local_b0,&local_b4,iVar24);
          uVar19 = uVar25;
        }
        puVar21 = (uint *)(local_a8 + (long)local_b0._4_4_ * ((long)iVar13 & 0x1fffffU));
        fVar30 = *(float *)(plVar18 + 1);
        if (iStack_98 == 0) {
          if (local_b4 == 3) {
            uVar23 = (uint)*(ushort *)(puVar21 + 1);
            uVar22 = (uint)*(ushort *)((long)puVar21 + 2);
            uVar20 = (uint)*(ushort *)puVar21;
          }
          else {
            uVar22 = puVar21[1];
            uVar23 = puVar21[2];
            uVar20 = *puVar21;
          }
          pfVar5 = (float *)(local_90 + (int)(local_9c * uVar23));
          pfVar6 = (float *)(local_90 + (int)(local_9c * uVar22));
          pfVar7 = (float *)(local_90 + (int)(local_9c * uVar20));
          uVar41 = *(undefined8 *)(pfVar5 + 1);
          uVar16 = *(undefined8 *)(pfVar6 + 1);
          fVar34 = fVar30 * *pfVar5;
          uVar17 = *(undefined8 *)(pfVar7 + 1);
          fVar37 = fVar30 * *pfVar6;
          fVar30 = fVar30 * *pfVar7;
          fVar39 = (float)*(undefined8 *)((long)plVar18 + 0xc);
          fVar31 = fVar39 * (float)uVar41;
          fVar48 = (float)((ulong)*(undefined8 *)((long)plVar18 + 0xc) >> 0x20);
          fVar33 = fVar48 * (float)((ulong)uVar41 >> 0x20);
          fVar38 = fVar39 * (float)uVar16;
          fVar40 = fVar48 * (float)((ulong)uVar16 >> 0x20);
          uVar41 = CONCAT44(fVar48 * (float)((ulong)uVar17 >> 0x20),fVar39 * (float)uVar17);
        }
        else {
          if (local_b4 == 3) {
            uVar22 = (uint)*(ushort *)(puVar21 + 1);
LAB_00f646bc:
            uVar23 = (uint)*(ushort *)((long)puVar21 + 2);
            if (local_b4 != 3) goto LAB_00f64690;
LAB_00f646c8:
            uVar20 = (uint)*(ushort *)puVar21;
          }
          else {
            uVar22 = puVar21[2];
            if (local_b4 == 3) goto LAB_00f646bc;
            uVar23 = puVar21[1];
            if (local_b4 == 3) goto LAB_00f646c8;
LAB_00f64690:
            uVar20 = *puVar21;
          }
          dVar32 = (double)fVar30;
          pdVar2 = (double *)(local_90 + (int)(local_9c * uVar22));
          dVar35 = (double)(float)*(undefined8 *)((long)plVar18 + 0xc);
          dVar36 = (double)(float)((ulong)*(undefined8 *)((long)plVar18 + 0xc) >> 0x20);
          pdVar3 = (double *)(local_90 + (int)(local_9c * uVar23));
          pdVar4 = (double *)(local_90 + (int)(local_9c * uVar20));
          fVar34 = (float)(*pdVar2 * dVar32);
          fVar31 = (float)(pdVar2[1] * dVar35);
          fVar33 = (float)(pdVar2[2] * dVar36);
          fVar37 = (float)(*pdVar3 * dVar32);
          fVar38 = (float)(pdVar3[1] * dVar35);
          fVar40 = (float)(pdVar3[2] * dVar36);
          fVar30 = (float)(*pdVar4 * dVar32);
          uVar41 = CONCAT44((float)(pdVar4[2] * dVar36),(float)(pdVar4[1] * dVar35));
        }
        uVar25 = NEON_fcmgt(0x5d5e0b6b5d5e0b6b,uVar41,4);
        fVar39 = (float)((ulong)uVar41 >> 0x20);
        fVar47 = *(float *)(param_1 + 0x10);
        fVar46 = *(float *)(param_1 + 0xc);
        uVar42 = NEON_fminnm(fVar30,0x5d5e0b6b);
        lVar29 = lVar29 + uVar27;
        fVar48 = (float)uVar41;
        if ((uVar25 & 1) == 0) {
          fVar48 = 1e+18;
        }
        fVar43 = fVar39;
        if ((uVar25 & 0x100000000) == 0) {
          fVar43 = 1e+18;
        }
        uVar42 = NEON_fminnm(fVar37,uVar42);
        uVar45 = NEON_fminnm(fVar38,fVar48);
        uVar44 = NEON_fminnm(fVar40,fVar43);
        fVar34 = (float)NEON_fminnm(fVar34,uVar42);
        fVar37 = (float)NEON_fminnm(fVar31,uVar45);
        fVar31 = (float)NEON_fminnm(fVar33,uVar44);
        fVar48 = *(float *)(param_1 + 0x2c);
        uVar25 = NEON_fcmgt(uVar41,0xdd5e0b6bdd5e0b6b,4);
        fVar38 = *(float *)(param_1 + 0x30);
        if (fVar30 <= -1e+18) {
          fVar30 = fVar14;
        }
        fVar43 = (float)uVar41;
        if ((uVar25 & 1) == 0) {
          fVar43 = fVar14;
        }
        if ((uVar25 & 0x100000000) == 0) {
          fVar39 = fVar14;
        }
        if (fVar39 <= fVar40) {
          fVar39 = fVar40;
        }
        *(ushort *)(lVar29 + -0x10) =
             (ushort)(int)(*(float *)(param_1 + 0x28) * (fVar34 - *(float *)(param_1 + 8))) & 0xfffe
        ;
        *(ushort *)(lVar29 + -0xe) = (ushort)(int)(fVar48 * (fVar37 - fVar46)) & 0xfffe;
        *(ushort *)(lVar29 + -0xc) = (ushort)(int)(fVar38 * (fVar31 - fVar47)) & 0xfffe;
        if (fVar39 <= fVar33) {
          fVar39 = fVar33;
        }
        fVar31 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar30 - *(float *)(param_1 + 8),
                                   0x3f800000);
        fVar30 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x2c),
                                   fVar43 - *(float *)(param_1 + 0xc),0x3f800000);
        fVar33 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x30),
                                   fVar39 - *(float *)(param_1 + 0x10),0x3f800000);
        *(ushort *)(lVar29 + -10) = (ushort)(int)fVar31 | 1;
        *(ushort *)(lVar29 + -8) = (ushort)(int)fVar30 | 1;
        *(ushort *)(lVar29 + -6) = (ushort)(int)fVar33 | 1;
      }
      uVar27 = uVar27 - 0x10;
      iVar28 = iVar28 + -1;
    } while (param_3 < lVar26);
    if (-1 < (int)uVar19) {
      (**(code **)(*plVar18 + 0x30))(plVar18);
    }
  }
  if (*(long *)(lVar15 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


