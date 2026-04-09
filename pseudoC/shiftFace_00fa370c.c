// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shiftFace
// Entry Point: 00fa370c
// Size: 8876 bytes
// Signature: undefined __thiscall shiftFace(btConvexHullInternal * this, Face * param_1, float param_2, btAlignedObjectArray param_3)


/* btConvexHullInternal::shiftFace(btConvexHullInternal::Face*, float,
   btAlignedObjectArray<btConvexHullInternal::Vertex*>) */

void __thiscall
btConvexHullInternal::shiftFace(float param_2,btConvexHullInternal *this,long *param_1,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined *puVar17;
  float fVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  long **pplVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  long **pplVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 *puVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  long **pplVar52;
  long *plVar53;
  long **pplVar54;
  undefined8 *puVar55;
  int iVar56;
  long lVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  ulong uVar63;
  undefined8 *puVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  uint uVar73;
  uint uVar74;
  long *plVar75;
  ulong uVar76;
  uint uVar77;
  long **pplVar78;
  ulong uVar79;
  ulong uVar80;
  long **pplVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  int iVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined4 uVar94;
  float fVar95;
  float fVar96;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  undefined5 uStack_d0;
  int3 iStack_cb;
  uint uStack_c8;
  char cStack_c4;
  undefined8 local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined5 uStack_a0;
  float local_90 [4];
  long local_80;
  
  lVar16 = tpidr_el0;
  local_80 = *(long *)(lVar16 + 0x28);
  iVar26 = *(int *)(param_1 + 5);
  iVar56 = *(int *)((long)param_1 + 0x2c);
  iVar11 = *(int *)(this + 0xa8);
  iVar12 = *(int *)(this + 0xb0);
  iVar13 = *(int *)(param_1 + 6);
  local_90[3] = 0.0;
  iVar15 = *(int *)(this + 0xa4);
  iVar85 = *(int *)(param_1 + 7);
  iVar28 = *(int *)((long)param_1 + 0x3c);
  lVar29 = (long)iVar11 * 4;
  lVar33 = (long)iVar12 * 4;
  iVar14 = *(int *)(param_1 + 8);
  lVar34 = (long)iVar15 * 4;
  *(float *)((long)&local_c0 + lVar29) = (float)iVar26;
  *(float *)((long)&local_c0 + lVar33) = (float)iVar56;
  *(float *)((long)&local_c0 + lVar34) = (float)iVar13;
  fVar95 = (float)local_c0;
  fVar92 = local_c0._4_4_;
  fVar18 = (float)uStack_b8;
  *(float *)((long)&local_c0 + lVar29) = (float)iVar85;
  *(float *)((long)&local_c0 + lVar33) = (float)iVar28;
  fVar89 = *(float *)(this + 8);
  *(float *)((long)&local_c0 + lVar34) = (float)iVar14;
  fVar91 = *(float *)this;
  fVar90 = *(float *)(this + 4);
  fVar96 = (float)NEON_fnmsub(local_c0._4_4_ * fVar90,fVar91 * fVar95,
                              (float)local_c0 * fVar91 * fVar90 * fVar92);
  fVar93 = (float)NEON_fnmsub((float)uStack_b8 * fVar89,fVar90 * fVar92,
                              local_c0._4_4_ * fVar90 * fVar89 * fVar18);
  fVar92 = (float)NEON_fnmsub((float)local_c0 * fVar91,fVar89 * fVar18,
                              (float)uStack_b8 * fVar89 * fVar91 * fVar95);
  uVar94 = NEON_fmadd(fVar93,fVar93,fVar96 * fVar96);
  fVar95 = (float)NEON_fmadd(fVar92,fVar92,uVar94);
  fVar95 = -param_2 / SQRT(fVar95);
  local_90[0] = fVar95 * fVar93;
  local_90[1] = fVar95 * fVar92;
  local_90[2] = fVar95 * fVar96;
  if (fVar91 != 0.0) {
    local_90[0] = (fVar95 * fVar93) / fVar91;
  }
  if (fVar90 != 0.0) {
    local_90[1] = (fVar95 * fVar92) / fVar90;
  }
  if (fVar89 != 0.0) {
    local_90[2] = (fVar95 * fVar96) / fVar89;
  }
  if ((((int)local_90[iVar11] != 0) || ((int)local_90[iVar12] != 0)) || ((int)local_90[iVar15] != 0)
     ) {
    lVar34 = (long)(iVar85 * iVar13 - iVar14 * iVar26);
    lVar33 = (long)(iVar14 * iVar56 - iVar28 * iVar13);
    uVar1 = (long)*(int *)(param_1 + 3) + (long)(int)local_90[iVar11];
    uVar2 = (long)*(int *)(param_1 + 4) + (long)(int)local_90[iVar12];
    lVar29 = (long)(iVar28 * iVar26 - iVar85 * iVar56);
    uVar3 = (long)*(int *)(param_1 + 4) + (long)(int)local_90[iVar15];
    uVar72 = uVar1 * lVar33 + uVar2 * lVar34 + uVar3 * lVar29;
    if ((long)uVar72 <
        *(int *)(param_1 + 3) * lVar33 + *(int *)(param_1 + 4) * lVar34 +
        *(int *)(param_1 + 4) * lVar29) {
      lVar33 = *(long *)((Point64 *)param_1[1] + 0x10);
      Vertex::dot((Point64 *)param_1[1]);
      uVar25 = Rational128::compare((Rational128 *)&local_c0,uVar72);
      lVar29 = lVar33;
      if ((int)uVar25 < 0) {
        do {
          Vertex::dot(*(Point64 **)(lVar33 + 0x18));
          iVar26 = Rational128::compare((Rational128 *)&local_e8,(Rational128 *)&local_c0);
          if (0 < iVar26) {
            uVar25 = Rational128::compare((Rational128 *)&local_e8,uVar72);
            if (-1 < (int)uVar25) goto LAB_00fa3a24;
            uStack_b0 = local_d8;
            uStack_b8 = uStack_e0;
            local_c0 = local_e8;
            uStack_a0 = (undefined5)(CONCAT17(cStack_c4,CONCAT43(uStack_c8,iStack_cb)) >> 0x18);
            lVar33 = *(long *)(lVar33 + 0x10);
            lVar29 = lVar33;
          }
          lVar33 = *(long *)(lVar33 + 8);
        } while (lVar33 != lVar29);
        goto LAB_00fa3870;
      }
      do {
        Vertex::dot(*(Point64 **)(lVar33 + 0x18));
        iVar26 = Rational128::compare((Rational128 *)&local_e8,(Rational128 *)&local_c0);
        uVar27 = uVar25;
        if (iVar26 < 0) {
          uVar27 = Rational128::compare((Rational128 *)&local_e8,uVar72);
          uStack_b0 = local_d8;
          uStack_b8 = uStack_e0;
          local_c0 = local_e8;
          uStack_a0 = (undefined5)(CONCAT17(cStack_c4,CONCAT43(uStack_c8,iStack_cb)) >> 0x18);
          lVar33 = *(long *)(lVar33 + 0x10);
          lVar29 = lVar33;
          if ((int)uVar27 < 0) {
            if (lVar33 != 0) goto LAB_00fa3a24;
            break;
          }
        }
        uVar25 = uVar27;
        lVar33 = *(long *)(lVar33 + 8);
      } while (lVar33 != lVar29);
    }
    uVar30 = 0;
    goto LAB_00fa3984;
  }
LAB_00fa3870:
  uVar30 = 1;
LAB_00fa3984:
  if (*(long *)(lVar16 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar30);
  }
  return;
LAB_00fa3a24:
  if (uVar25 != 0) {
LAB_00fa3a28:
    iVar26 = (int)uVar1;
    puVar4 = (uint *)(param_4 + 8);
    uVar44 = -uVar1;
    if (-1 < iVar26) {
      uVar44 = uVar1;
    }
    iVar85 = (int)uVar2;
    uVar8 = -uVar2;
    if (-1 < iVar85) {
      uVar8 = uVar2;
    }
    iVar56 = (int)uVar3;
    uVar9 = -uVar3;
    if (-1 < iVar56) {
      uVar9 = uVar3;
    }
    pcVar5 = (char *)(param_4 + 0x18);
    puVar6 = (uint *)(param_4 + 4);
    plVar75 = (long *)(param_4 + 0x10);
    lVar29 = 0;
    pplVar78 = (long **)0x0;
    pplVar81 = (long **)0x0;
    while( true ) {
      lVar34 = lVar33;
      if (uVar25 == 0) {
        plVar53 = **(long ***)(lVar33 + 0x10);
        plVar36 = plVar53;
        while( true ) {
          Vertex::dot((Point64 *)plVar36[3]);
          iVar28 = Rational128::compare((Rational128 *)&local_e8,uVar72);
          lVar34 = lVar33;
          if (-1 < iVar28) break;
          lVar33 = plVar36[2];
          plVar36 = (long *)*plVar36;
          if (plVar36 == plVar53) goto LAB_00fa50bc;
        }
      }
      lVar32 = lVar34;
      if ((lVar29 != 0) && (lVar32 = lVar29, lVar34 == lVar29)) break;
      lVar33 = *(long *)(lVar34 + 0x10);
LAB_00fa3bcc:
      do {
        lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + 8);
        Vertex::dot(*(Point64 **)(lVar33 + 0x18));
        if (cStack_c4 == '\0') {
          if ((long)uVar72 < 1) {
            uVar27 = uStack_c8;
            if (-1 < (long)uVar72) goto LAB_00fa3bc8;
            uVar80 = -uVar72;
            if (-1 < (int)uStack_c8) goto LAB_00fa3d10;
          }
          else {
            uVar80 = uVar72;
            if ((int)uStack_c8 < 1) goto LAB_00fa3bcc;
          }
          uVar79 = CONCAT35(iStack_cb,uStack_d0);
          uVar58 = -uVar79;
          if (local_d8 != 0) {
            uVar58 = ~uVar79;
          }
          uVar82 = -local_d8;
          if (-1 < iStack_cb) {
            uVar58 = uVar79;
            uVar82 = local_d8;
          }
          uVar49 = (uVar82 & 0xffffffff) * (uVar80 & 0xffffffff);
          uVar60 = (uVar82 & 0xffffffff) * (uVar80 >> 0x20);
          uVar63 = (uVar82 >> 0x20) * (uVar80 & 0xffffffff);
          uVar86 = (uVar60 & 0xffffffff) + (uVar63 & 0xffffffff);
          uVar79 = uVar86 << 0x20;
          uVar51 = uVar49 + uVar79;
          uVar80 = (uVar82 >> 0x20) * (uVar80 >> 0x20) + (uVar60 >> 0x20) + (uVar63 >> 0x20) +
                   uVar58 * uVar80 + (uVar86 >> 0x20);
          if (CARRY8(uVar49,uVar79)) {
            uVar80 = uVar80 + 1;
          }
          uVar58 = -uVar80;
          if (uVar51 != 0) {
            uVar58 = ~uVar80;
          }
          uVar79 = -uVar51;
          if (-1 < iStack_cb) {
            uVar58 = uVar80;
            uVar79 = uVar51;
          }
          if (uVar58 <= uStack_e0) {
            if (uVar58 <= uStack_e0 && uStack_e0 != uVar58) {
              uVar27 = 1;
            }
            else {
              if (local_e8 < uVar79) goto LAB_00fa3c94;
              uVar27 = (uint)(uVar79 < local_e8);
            }
          }
          else {
LAB_00fa3c94:
            uVar27 = 0xffffffff;
          }
          uVar27 = uVar27 * uStack_c8;
        }
        else {
          lVar29 = local_e8 * (long)(int)uStack_c8;
          uVar27 = -(uint)(lVar29 < (long)uVar72);
          if (lVar29 - uVar72 != 0 && (long)uVar72 <= lVar29) {
LAB_00fa3d10:
            uVar27 = 1;
            goto LAB_00fa3d14;
          }
        }
LAB_00fa3bc8:
      } while ((int)uVar27 < 0);
      if (uVar27 == 0) {
        bVar19 = true;
      }
      else {
LAB_00fa3d14:
        plVar36 = *(long **)(lVar33 + 0x10);
        lVar29 = *(long *)(lVar33 + 0x18);
        plVar53 = (long *)plVar36[1];
        if (plVar53 == plVar36) {
          plVar53 = (long *)0x0;
        }
        else {
          lVar45 = *plVar36;
          *plVar53 = lVar45;
          *(long **)(lVar45 + 8) = plVar53;
          *plVar36 = (long)plVar36;
          plVar36[1] = (long)plVar36;
        }
        *(long **)(lVar29 + 0x10) = plVar53;
        lVar41 = *(long *)(lVar33 + 0x20);
        lVar46 = plVar36[4];
        lVar45 = (long)(*(int *)(lVar41 + 0x38) * *(int *)(lVar41 + 0x30) -
                       *(int *)(lVar41 + 0x28) * *(int *)(lVar41 + 0x40));
        lVar68 = (long)(*(int *)(lVar41 + 0x40) * *(int *)(lVar41 + 0x2c) -
                       *(int *)(lVar41 + 0x3c) * *(int *)(lVar41 + 0x30));
        lVar50 = (long)(*(int *)(lVar41 + 0x28) * *(int *)(lVar41 + 0x3c) -
                       *(int *)(lVar41 + 0x38) * *(int *)(lVar41 + 0x2c));
        lVar59 = (long)(*(int *)(lVar46 + 0x40) * *(int *)(lVar46 + 0x2c) -
                       *(int *)(lVar46 + 0x3c) * *(int *)(lVar46 + 0x30));
        uVar86 = *(int *)(param_1 + 5) * lVar68 + *(int *)(param_1 + 6) * lVar45 +
                 *(int *)(param_1 + 6) * lVar50;
        lVar61 = (long)(*(int *)(lVar46 + 0x38) * *(int *)(lVar46 + 0x30) -
                       *(int *)(lVar46 + 0x28) * *(int *)(lVar46 + 0x40));
        uVar82 = *(int *)(param_1 + 7) * lVar68 + *(int *)(param_1 + 8) * lVar45 +
                 *(int *)(param_1 + 8) * lVar50;
        lVar57 = (long)(*(int *)(lVar46 + 0x28) * *(int *)(lVar46 + 0x3c) -
                       *(int *)(lVar46 + 0x38) * *(int *)(lVar46 + 0x2c));
        uVar58 = *(int *)(param_1 + 5) * lVar59 + lVar61 * *(int *)(param_1 + 6) +
                 *(int *)(param_1 + 6) * lVar57;
        uVar79 = *(int *)(param_1 + 7) * lVar59 + *(int *)(param_1 + 8) * lVar61 +
                 *(int *)(param_1 + 8) * lVar57;
        uVar80 = -uVar86;
        if ((long)uVar86 >= 0) {
          uVar80 = uVar86;
        }
        uVar49 = uVar80 & 0xffffffff;
        uVar51 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar51 = uVar79;
        }
        uVar63 = uVar80 >> 0x20;
        uVar38 = uVar51 & 0xffffffff;
        uVar76 = uVar51 >> 0x20;
        uVar65 = (uVar51 & 0xffffffff) * (uVar80 & 0xffffffff);
        uVar80 = (uVar76 * uVar49 & 0xffffffff) + (uVar38 * uVar63 & 0xffffffff);
        uVar51 = uVar76 * uVar63 + (uVar76 * uVar49 >> 0x20) + (uVar38 * uVar63 >> 0x20) +
                 (uVar80 >> 0x20);
        uVar80 = uVar80 << 0x20;
        uVar60 = uVar65 + uVar80;
        if (CARRY8(uVar65,uVar80)) {
          uVar51 = uVar51 + 1;
        }
        bVar19 = (long)uVar86 < 0 == (long)uVar79 < 0;
        uVar80 = -uVar51;
        if (uVar60 != 0) {
          uVar80 = ~uVar51;
        }
        if (bVar19) {
          uVar80 = uVar51;
        }
        uVar51 = -uVar60;
        if (bVar19) {
          uVar51 = uVar60;
        }
        uVar60 = -uVar82;
        if ((long)uVar82 >= 0) {
          uVar60 = uVar82;
        }
        uVar65 = -uVar58;
        if ((long)uVar58 >= 0) {
          uVar65 = uVar58;
        }
        uVar39 = uVar60 & 0xffffffff;
        uVar37 = uVar65 >> 0x20;
        uVar35 = uVar65 & 0xffffffff;
        uVar40 = uVar60 >> 0x20;
        uVar62 = (uVar60 & 0xffffffff) * (uVar65 & 0xffffffff);
        uVar60 = (uVar39 * uVar37 & 0xffffffff) + (uVar40 * uVar35 & 0xffffffff);
        bVar19 = (long)uVar58 < 0 == (long)uVar82 < 0;
        uVar65 = uVar40 * uVar37 + (uVar39 * uVar37 >> 0x20) + (uVar40 * uVar35 >> 0x20) +
                 (uVar60 >> 0x20);
        uVar60 = uVar60 << 0x20;
        lVar7 = uVar62 + uVar60;
        if (CARRY8(uVar62,uVar60)) {
          uVar65 = uVar65 + 1;
        }
        uVar60 = -uVar65;
        if (lVar7 != 0) {
          uVar60 = ~uVar65;
        }
        lVar41 = ((long)*(int *)(lVar41 + 0x18) - (long)iVar26) * lVar68 +
                 ((long)*(int *)(lVar41 + 0x20) - (long)iVar85) * lVar45 +
                 ((long)*(int *)(lVar41 + 0x20) - (long)iVar56) * lVar50;
        lVar45 = -lVar7;
        if (bVar19) {
          lVar45 = lVar7;
        }
        uVar62 = uVar51 - lVar45;
        lVar46 = ((long)*(int *)(lVar46 + 0x18) - (long)iVar26) * lVar59 +
                 ((long)*(int *)(lVar46 + 0x20) - (long)iVar85) * lVar61 +
                 ((long)*(int *)(lVar46 + 0x20) - (long)iVar56) * lVar57;
        if (bVar19) {
          uVar60 = uVar65;
        }
        uVar51 = (ulong)(uVar62 < uVar51);
        if (lVar45 == 0) {
          uVar51 = uVar51 + 1;
        }
        puVar64 = *(undefined8 **)(this + 0x30);
        uVar80 = uVar51 + ~uVar60 + uVar80;
        if (puVar64 == (undefined8 *)0x0) {
          puVar64 = *(undefined8 **)(this + 0x28);
          if (puVar64 == (undefined8 *)0x0) {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            puVar64 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x18,0x10);
            iVar28 = *(int *)(this + 0x38);
            *(int *)(puVar64 + 1) = iVar28;
            puVar17 = PTR_FUN_01048e38;
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            puVar64[2] = 0;
            uVar30 = (*(code *)puVar17)((long)iVar28 << 7,0x10);
            *puVar64 = uVar30;
            puVar64[2] = *(undefined8 *)(this + 0x20);
            *(undefined8 **)(this + 0x20) = puVar64;
          }
          else {
            *(undefined8 *)(this + 0x28) = puVar64[2];
          }
          uVar77 = *(uint *)(puVar64 + 1);
          puVar64 = (undefined8 *)*puVar64;
          if (0 < (int)uVar77) {
            if (uVar77 - 1 == 0) {
              uVar51 = 0;
              puVar48 = puVar64;
            }
            else {
              uVar60 = (ulong)(uVar77 - 1) + 1;
              uVar65 = 0;
              uVar51 = uVar60 & 0x1fffffffe;
              puVar48 = puVar64 + 0x10;
              do {
                iVar28 = (int)uVar65;
                uVar65 = uVar65 + 2;
                puVar55 = puVar48 + 0x10;
                puVar10 = puVar48;
                if ((int)uVar77 <= iVar28 + 1) {
                  puVar10 = (undefined8 *)0x0;
                }
                if ((int)uVar77 <= (int)uVar65) {
                  puVar55 = (undefined8 *)0x0;
                }
                puVar48[-0x10] = puVar10;
                *puVar48 = puVar55;
                puVar48 = puVar48 + 0x20;
              } while (uVar51 != uVar65);
              if (uVar60 == uVar51) goto LAB_00fa40e8;
              puVar48 = puVar64 + uVar51 * 0x10;
            }
            do {
              uVar74 = (int)uVar51 + 1;
              uVar51 = (ulong)uVar74;
              puVar55 = puVar48 + 0x10;
              if ((int)uVar77 <= (int)uVar74) {
                puVar55 = (undefined8 *)0x0;
              }
              *puVar48 = puVar55;
              puVar48 = puVar48 + 0x10;
            } while (uVar77 != uVar74);
          }
        }
LAB_00fa40e8:
        bVar19 = (long)uVar58 < 0;
        bVar20 = (long)uVar82 < 0;
        *(undefined8 *)(this + 0x30) = *puVar64;
        *(undefined8 *)((long)puVar64 + 0x74) = 0xffffffffffffffff;
        bVar21 = (long)uVar79 < 0;
        puVar64[4] = 0;
        bVar22 = (long)uVar86 < 0;
        puVar64[1] = 0;
        *puVar64 = 0;
        puVar64[3] = 0;
        puVar64[2] = 0;
        uVar79 = lVar41 * *(int *)(param_1 + 5);
        uVar58 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar58 = uVar79;
        }
        uVar60 = (uVar58 & 0xffffffff) * uVar76;
        uVar86 = (uVar58 >> 0x20) * uVar38;
        uVar51 = (uVar58 & 0xffffffff) * uVar38;
        uVar82 = (uVar60 & 0xffffffff) + (uVar86 & 0xffffffff);
        uVar58 = (uVar58 >> 0x20) * uVar76 + (uVar60 >> 0x20) + (uVar86 >> 0x20) + (uVar82 >> 0x20);
        uVar82 = uVar82 << 0x20;
        uVar86 = uVar51 + uVar82;
        if (CARRY8(uVar51,uVar82)) {
          uVar58 = uVar58 + 1;
        }
        uVar82 = -uVar58;
        bVar23 = bVar21 == (long)uVar79 < 0;
        if (uVar86 != 0) {
          uVar82 = ~uVar58;
        }
        uVar79 = lVar46 * *(int *)(param_1 + 5);
        if (bVar23) {
          uVar82 = uVar58;
        }
        uVar58 = -uVar86;
        if (bVar23) {
          uVar58 = uVar86;
        }
        uVar86 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar86 = uVar79;
        }
        uVar69 = (uVar86 & 0xffffffff) * uVar40;
        uVar60 = (uVar86 >> 0x20) * uVar39;
        uVar65 = (uVar86 & 0xffffffff) * uVar39;
        uVar51 = (uVar69 & 0xffffffff) + (uVar60 & 0xffffffff);
        uVar86 = (uVar86 >> 0x20) * uVar40 + (uVar69 >> 0x20) + (uVar60 >> 0x20) + (uVar51 >> 0x20);
        uVar51 = uVar51 << 0x20;
        lVar45 = uVar65 + uVar51;
        if (CARRY8(uVar65,uVar51)) {
          uVar86 = uVar86 + 1;
        }
        uVar51 = -uVar86;
        bVar23 = bVar20 == (long)uVar79 < 0;
        if (lVar45 != 0) {
          uVar51 = ~uVar86;
        }
        uVar79 = lVar46 * *(int *)(param_1 + 7);
        if (bVar23) {
          uVar51 = uVar86;
        }
        lVar50 = -lVar45;
        if (bVar23) {
          lVar50 = lVar45;
        }
        uVar86 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar86 = uVar79;
        }
        uVar69 = lVar41 * *(int *)(param_1 + 7);
        uVar70 = (uVar86 & 0xffffffff) * uVar63;
        uVar65 = (uVar86 >> 0x20) * uVar49;
        uVar66 = (uVar86 & 0xffffffff) * uVar49;
        uVar60 = (uVar70 & 0xffffffff) + (uVar65 & 0xffffffff);
        uVar86 = (uVar86 >> 0x20) * uVar63 + (uVar70 >> 0x20) + (uVar65 >> 0x20) + (uVar60 >> 0x20);
        uVar60 = uVar60 << 0x20;
        uVar65 = uVar66 + uVar60;
        if (CARRY8(uVar66,uVar60)) {
          uVar86 = uVar86 + 1;
        }
        uVar60 = -uVar86;
        bVar23 = bVar22 == (long)uVar79 < 0;
        if (uVar65 != 0) {
          uVar60 = ~uVar86;
        }
        if (bVar23) {
          uVar60 = uVar86;
        }
        uVar79 = -uVar65;
        if (bVar23) {
          uVar79 = uVar65;
        }
        uVar86 = -uVar69;
        if ((long)uVar69 >= 0) {
          uVar86 = uVar69;
        }
        uVar71 = (uVar86 & 0xffffffff) * uVar37;
        uVar66 = (uVar86 >> 0x20) * uVar35;
        uVar70 = (uVar86 & 0xffffffff) * uVar35;
        uVar65 = (uVar71 & 0xffffffff) + (uVar66 & 0xffffffff);
        uVar86 = (uVar86 >> 0x20) * uVar37 + (uVar71 >> 0x20) + (uVar66 >> 0x20) + (uVar65 >> 0x20);
        uVar65 = uVar65 << 0x20;
        lVar45 = uVar70 + uVar65;
        if (CARRY8(uVar70,uVar65)) {
          uVar86 = uVar86 + 1;
        }
        bVar23 = bVar19 == (long)uVar69 < 0;
        uVar65 = -uVar86;
        if (lVar45 != 0) {
          uVar65 = ~uVar86;
        }
        if (bVar23) {
          uVar65 = uVar86;
        }
        lVar57 = -lVar45;
        if (bVar23) {
          lVar57 = lVar45;
        }
        uVar86 = -uVar80;
        if (uVar62 != 0) {
          uVar86 = ~uVar80;
        }
        bVar23 = (long)uVar80 < 0;
        if (!bVar23) {
          uVar86 = uVar80;
        }
        uVar69 = -uVar62;
        if (!bVar23) {
          uVar69 = uVar62;
        }
        uVar67 = uVar69 >> 0x20;
        uVar69 = uVar69 & 0xffffffff;
        bVar24 = iVar26 < 0 == bVar23;
        uVar87 = uVar69 * (uVar44 >> 0x20);
        uVar42 = uVar67 * (uVar44 & 0xffffffff);
        uVar47 = uVar69 * (uVar44 & 0xffffffff);
        uVar70 = (uVar87 & 0xffffffff) + (uVar42 & 0xffffffff);
        uVar66 = uVar70 << 0x20;
        uVar71 = uVar47 + uVar66;
        uVar70 = uVar86 * uVar44 + uVar67 * (uVar44 >> 0x20) + (uVar87 >> 0x20) + (uVar42 >> 0x20) +
                 (uVar70 >> 0x20);
        if (CARRY8(uVar47,uVar66)) {
          uVar70 = uVar70 + 1;
        }
        uVar66 = -uVar70;
        if (uVar71 != 0) {
          uVar66 = ~uVar70;
        }
        if (bVar24) {
          uVar66 = uVar70;
        }
        uVar70 = -uVar71;
        if (bVar24) {
          uVar70 = uVar71;
        }
        uVar71 = uVar58 - lVar50;
        if (lVar50 == 0) {
          uVar66 = uVar66 + 1;
        }
        if (lVar57 == 0) {
          uVar66 = uVar66 + 1;
        }
        if (uVar71 < uVar58) {
          uVar66 = uVar66 + 1;
        }
        lVar45 = uVar66 + ~uVar51 + uVar82;
        if (CARRY8(uVar79,uVar71)) {
          lVar45 = lVar45 + 1;
        }
        uVar58 = (uVar79 + uVar71) - lVar57;
        lVar45 = lVar45 + ~uVar65 + uVar60;
        if (uVar58 < uVar79 + uVar71) {
          lVar45 = lVar45 + 1;
        }
        uVar79 = lVar41 * *(int *)(param_1 + 6);
        if (CARRY8(uVar58,uVar70)) {
          lVar45 = lVar45 + 1;
        }
        uVar82 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar82 = uVar79;
        }
        uVar60 = (uVar82 & 0xffffffff) * uVar76;
        uVar65 = (uVar82 >> 0x20) * uVar38;
        uVar66 = (uVar82 & 0xffffffff) * uVar38;
        uVar51 = (uVar60 & 0xffffffff) + (uVar65 & 0xffffffff);
        uVar82 = (uVar82 >> 0x20) * uVar76 + (uVar60 >> 0x20) + (uVar65 >> 0x20) + (uVar51 >> 0x20);
        uVar51 = uVar51 << 0x20;
        uVar60 = uVar66 + uVar51;
        if (CARRY8(uVar66,uVar51)) {
          uVar82 = uVar82 + 1;
        }
        uVar51 = -uVar82;
        if (uVar60 != 0) {
          uVar51 = ~uVar82;
        }
        bVar24 = bVar21 == (long)uVar79 < 0;
        uVar79 = lVar46 * *(int *)(param_1 + 6);
        if (bVar24) {
          uVar51 = uVar82;
        }
        uVar82 = -uVar60;
        if (bVar24) {
          uVar82 = uVar60;
        }
        uVar60 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar60 = uVar79;
        }
        uVar66 = (uVar60 & 0xffffffff) * uVar40;
        uVar71 = (uVar60 >> 0x20) * uVar39;
        uVar42 = (uVar60 & 0xffffffff) * uVar39;
        uVar65 = (uVar66 & 0xffffffff) + (uVar71 & 0xffffffff);
        uVar60 = (uVar60 >> 0x20) * uVar40 + (uVar66 >> 0x20) + (uVar71 >> 0x20) + (uVar65 >> 0x20);
        uVar65 = uVar65 << 0x20;
        lVar50 = uVar42 + uVar65;
        if (CARRY8(uVar42,uVar65)) {
          uVar60 = uVar60 + 1;
        }
        uVar65 = -uVar60;
        bVar24 = bVar20 == (long)uVar79 < 0;
        if (lVar50 != 0) {
          uVar65 = ~uVar60;
        }
        uVar79 = lVar46 * *(int *)(param_1 + 8);
        if (bVar24) {
          uVar65 = uVar60;
        }
        lVar57 = -lVar50;
        if (bVar24) {
          lVar57 = lVar50;
        }
        uVar66 = lVar41 * *(int *)(param_1 + 8);
        uVar60 = -uVar79;
        if ((long)uVar79 >= 0) {
          uVar60 = uVar79;
        }
        uVar42 = (uVar60 & 0xffffffff) * uVar63;
        uVar87 = (uVar60 >> 0x20) * uVar49;
        uVar47 = (uVar60 & 0xffffffff) * uVar49;
        uVar71 = (uVar42 & 0xffffffff) + (uVar87 & 0xffffffff);
        uVar60 = (uVar60 >> 0x20) * uVar63 + (uVar42 >> 0x20) + (uVar87 >> 0x20) + (uVar71 >> 0x20);
        uVar71 = uVar71 << 0x20;
        uVar42 = uVar47 + uVar71;
        if (CARRY8(uVar47,uVar71)) {
          uVar60 = uVar60 + 1;
        }
        uVar71 = -uVar60;
        bVar24 = bVar22 == (long)uVar79 < 0;
        if (uVar42 != 0) {
          uVar71 = ~uVar60;
        }
        if (bVar24) {
          uVar71 = uVar60;
        }
        uVar79 = -uVar42;
        if (bVar24) {
          uVar79 = uVar42;
        }
        uVar60 = -uVar66;
        if ((long)uVar66 >= 0) {
          uVar60 = uVar66;
        }
        uVar47 = (uVar60 & 0xffffffff) * uVar37;
        uVar83 = (uVar60 >> 0x20) * uVar35;
        uVar88 = uVar69 * (uVar8 >> 0x20);
        uVar42 = (uVar47 & 0xffffffff) + (uVar83 & 0xffffffff);
        uVar84 = uVar67 * (uVar8 & 0xffffffff);
        uVar87 = (uVar60 & 0xffffffff) * uVar35;
        uVar47 = (uVar60 >> 0x20) * uVar37 + (uVar47 >> 0x20) + (uVar83 >> 0x20) + (uVar42 >> 0x20);
        uVar42 = uVar42 << 0x20;
        lVar50 = uVar87 + uVar42;
        uVar60 = (uVar88 & 0xffffffff) + (uVar84 & 0xffffffff);
        if (CARRY8(uVar87,uVar42)) {
          uVar47 = uVar47 + 1;
        }
        uVar87 = -uVar47;
        uVar42 = uVar86 * uVar8 + uVar67 * (uVar8 >> 0x20) + (uVar88 >> 0x20) + (uVar84 >> 0x20) +
                 (uVar60 >> 0x20);
        if (lVar50 != 0) {
          uVar87 = ~uVar47;
        }
        bVar24 = bVar19 == (long)uVar66 < 0;
        uVar66 = uVar69 * (uVar8 & 0xffffffff);
        if (bVar24) {
          uVar87 = uVar47;
        }
        lVar59 = -lVar50;
        if (bVar24) {
          lVar59 = lVar50;
        }
        uVar60 = uVar60 << 0x20;
        uVar47 = uVar66 + uVar60;
        if (CARRY8(uVar66,uVar60)) {
          uVar42 = uVar42 + 1;
        }
        uVar60 = -uVar42;
        if (uVar47 != 0) {
          uVar60 = ~uVar42;
        }
        bVar24 = iVar85 < 0 == bVar23;
        if (bVar24) {
          uVar60 = uVar42;
        }
        uVar66 = -uVar47;
        if (bVar24) {
          uVar66 = uVar47;
        }
        uVar42 = uVar82 - lVar57;
        if (lVar57 == 0) {
          uVar60 = uVar60 + 1;
        }
        if (lVar59 == 0) {
          uVar60 = uVar60 + 1;
        }
        if (uVar42 < uVar82) {
          uVar60 = uVar60 + 1;
        }
        lVar50 = uVar60 + ~uVar65 + uVar51;
        if (CARRY8(uVar79,uVar42)) {
          lVar50 = lVar50 + 1;
        }
        uVar82 = (uVar79 + uVar42) - lVar59;
        lVar50 = lVar50 + ~uVar87 + uVar71;
        uVar51 = lVar41 * *(int *)(param_1 + 6);
        if (uVar82 < uVar79 + uVar42) {
          lVar50 = lVar50 + 1;
        }
        if (CARRY8(uVar82,uVar66)) {
          lVar50 = lVar50 + 1;
        }
        uVar79 = -uVar51;
        if ((long)uVar51 >= 0) {
          uVar79 = uVar51;
        }
        uVar71 = lVar46 * *(int *)(param_1 + 6);
        uVar65 = (uVar79 & 0xffffffff) * uVar76;
        uVar42 = (uVar79 >> 0x20) * uVar38;
        uVar38 = (uVar79 & 0xffffffff) * uVar38;
        uVar60 = (uVar65 & 0xffffffff) + (uVar42 & 0xffffffff);
        uVar79 = (uVar79 >> 0x20) * uVar76 + (uVar65 >> 0x20) + (uVar42 >> 0x20) + (uVar60 >> 0x20);
        uVar60 = uVar60 << 0x20;
        uVar65 = uVar38 + uVar60;
        if (CARRY8(uVar38,uVar60)) {
          uVar79 = uVar79 + 1;
        }
        uVar60 = -uVar79;
        if (uVar65 != 0) {
          uVar60 = ~uVar79;
        }
        bVar21 = bVar21 == (long)uVar51 < 0;
        if (bVar21) {
          uVar60 = uVar79;
        }
        uVar79 = -uVar65;
        if (bVar21) {
          uVar79 = uVar65;
        }
        uVar51 = -uVar71;
        if ((long)uVar71 >= 0) {
          uVar51 = uVar71;
        }
        uVar65 = (uVar51 & 0xffffffff) * uVar40;
        uVar76 = (uVar51 >> 0x20) * uVar39;
        uVar39 = (uVar51 & 0xffffffff) * uVar39;
        uVar38 = (uVar65 & 0xffffffff) + (uVar76 & 0xffffffff);
        uVar51 = (uVar51 >> 0x20) * uVar40 + (uVar65 >> 0x20) + (uVar76 >> 0x20) + (uVar38 >> 0x20);
        uVar38 = uVar38 << 0x20;
        lVar57 = uVar39 + uVar38;
        if (CARRY8(uVar39,uVar38)) {
          uVar51 = uVar51 + 1;
        }
        uVar65 = lVar46 * *(int *)(param_1 + 8);
        uVar38 = -uVar51;
        if (lVar57 != 0) {
          uVar38 = ~uVar51;
        }
        bVar20 = bVar20 == (long)uVar71 < 0;
        if (bVar20) {
          uVar38 = uVar51;
        }
        lVar46 = -lVar57;
        if (bVar20) {
          lVar46 = lVar57;
        }
        uVar76 = lVar41 * *(int *)(param_1 + 8);
        uVar51 = -uVar65;
        if ((long)uVar65 >= 0) {
          uVar51 = uVar65;
        }
        uVar40 = (uVar51 & 0xffffffff) * uVar63;
        uVar71 = (uVar51 >> 0x20) * uVar49;
        uVar49 = (uVar51 & 0xffffffff) * uVar49;
        uVar39 = (uVar40 & 0xffffffff) + (uVar71 & 0xffffffff);
        uVar51 = (uVar51 >> 0x20) * uVar63 + (uVar40 >> 0x20) + (uVar71 >> 0x20) + (uVar39 >> 0x20);
        uVar39 = uVar39 << 0x20;
        uVar63 = uVar49 + uVar39;
        if (CARRY8(uVar49,uVar39)) {
          uVar51 = uVar51 + 1;
        }
        uVar49 = -uVar51;
        if (uVar63 != 0) {
          uVar49 = ~uVar51;
        }
        bVar20 = bVar22 == (long)uVar65 < 0;
        if (bVar20) {
          uVar49 = uVar51;
        }
        uVar51 = -uVar63;
        if (bVar20) {
          uVar51 = uVar63;
        }
        uVar63 = -uVar76;
        if ((long)uVar76 >= 0) {
          uVar63 = uVar76;
        }
        uVar39 = (uVar63 & 0xffffffff) * uVar37;
        uVar40 = (uVar63 >> 0x20) * uVar35;
        uVar35 = (uVar63 & 0xffffffff) * uVar35;
        uVar65 = (uVar39 & 0xffffffff) + (uVar40 & 0xffffffff);
        uVar63 = (uVar63 >> 0x20) * uVar37 + (uVar39 >> 0x20) + (uVar40 >> 0x20) + (uVar65 >> 0x20);
        uVar65 = uVar65 << 0x20;
        lVar41 = uVar35 + uVar65;
        if (CARRY8(uVar35,uVar65)) {
          uVar63 = uVar63 + 1;
        }
        uVar65 = -uVar63;
        if (lVar41 != 0) {
          uVar65 = ~uVar63;
        }
        bVar19 = bVar19 == (long)uVar76 < 0;
        uVar76 = uVar69 * (uVar9 >> 0x20);
        if (bVar19) {
          uVar65 = uVar63;
        }
        uVar35 = uVar67 * (uVar9 & 0xffffffff);
        uVar69 = uVar69 * (uVar9 & 0xffffffff);
        uVar63 = (uVar76 & 0xffffffff) + (uVar35 & 0xffffffff);
        lVar57 = -lVar41;
        if (bVar19) {
          lVar57 = lVar41;
        }
        uVar37 = uVar63 << 0x20;
        uVar39 = uVar69 + uVar37;
        uVar86 = uVar86 * uVar9 + uVar67 * (uVar9 >> 0x20) + (uVar76 >> 0x20) + (uVar35 >> 0x20) +
                 (uVar63 >> 0x20);
        if (CARRY8(uVar69,uVar37)) {
          uVar86 = uVar86 + 1;
        }
        uVar63 = -uVar86;
        if (uVar39 != 0) {
          uVar63 = ~uVar86;
        }
        bVar19 = iVar56 < 0 == bVar23;
        if (bVar19) {
          uVar63 = uVar86;
        }
        uVar86 = -uVar39;
        if (bVar19) {
          uVar86 = uVar39;
        }
        uVar76 = uVar79 - lVar46;
        if (lVar46 == 0) {
          uVar63 = uVar63 + 1;
        }
        if (lVar57 == 0) {
          uVar63 = uVar63 + 1;
        }
        if (uVar76 < uVar79) {
          uVar63 = uVar63 + 1;
        }
        lVar41 = uVar63 + ~uVar38 + uVar60;
        if (CARRY8(uVar51,uVar76)) {
          lVar41 = lVar41 + 1;
        }
        uVar79 = (uVar51 + uVar76) - lVar57;
        lVar41 = lVar41 + ~uVar65 + uVar49;
        if (uVar79 < uVar51 + uVar76) {
          lVar41 = lVar41 + 1;
        }
        puVar64[7] = uVar82 + uVar66;
        puVar64[5] = uVar58 + uVar70;
        puVar64[6] = lVar45;
        if (CARRY8(uVar79,uVar86)) {
          lVar41 = lVar41 + 1;
        }
        puVar64[9] = uVar79 + uVar86;
        puVar64[8] = lVar50;
        puVar64[10] = lVar41;
        puVar64[0xb] = uVar62;
        puVar64[0xc] = uVar80;
        fVar95 = (float)Int128::toScalar();
        fVar92 = (float)Int128::toScalar();
        *(int *)(puVar64 + 0xd) = (int)(fVar95 / fVar92);
        fVar95 = (float)Int128::toScalar();
        fVar92 = (float)Int128::toScalar();
        *(int *)((long)puVar64 + 0x6c) = (int)(fVar95 / fVar92);
        fVar95 = (float)Int128::toScalar();
        fVar92 = (float)Int128::toScalar();
        *(int *)(puVar64 + 0xe) = (int)(fVar95 / fVar92);
        *(undefined8 **)(lVar33 + 0x18) = puVar64;
        puVar64[2] = plVar36;
        uVar77 = *puVar6;
        uVar74 = *puVar4;
        if (uVar77 == *puVar4) {
          uVar73 = uVar77 << 1;
          if (uVar77 == 0) {
            uVar73 = 1;
          }
          uVar80 = (ulong)uVar73;
          uVar74 = uVar77;
          if ((int)uVar73 <= (int)uVar77) goto LAB_00fa49cc;
          if (uVar73 == 0) {
            lVar45 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar45 = (*(code *)PTR_FUN_01048e38)
                               (-(ulong)(uVar73 >> 0x1f) & 0xfffffff800000000 | uVar80 << 3,0x10);
            uVar77 = *puVar6;
          }
          if (0 < (int)uVar77) {
            lVar41 = 0;
            do {
              *(undefined8 *)(lVar45 + lVar41) = *(undefined8 *)(*plVar75 + lVar41);
              lVar41 = lVar41 + 8;
            } while ((ulong)uVar77 * 8 - lVar41 != 0);
          }
          if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar77 = *puVar6;
          }
          *plVar75 = lVar45;
          *puVar4 = uVar73;
          *pcVar5 = '\x01';
        }
        else {
LAB_00fa49cc:
          uVar80 = (ulong)uVar74;
        }
        uVar74 = uVar77 + 1;
        uVar73 = (uint)uVar80;
        *(undefined8 **)(*plVar75 + (long)(int)uVar77 * 8) = puVar64;
        *puVar6 = uVar74;
        if (uVar74 == uVar73) {
          uVar77 = uVar73 << 1;
          if (uVar73 == 0) {
            uVar77 = 1;
          }
          uVar74 = uVar73;
          if ((int)uVar73 < (int)uVar77) {
            if (uVar77 == 0) {
              lVar45 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar45 = (*(code *)PTR_FUN_01048e38)
                                 (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar77 << 3
                                  ,0x10);
              uVar80 = (ulong)*puVar6;
            }
            uVar74 = (uint)uVar80;
            if (0 < (int)uVar74) {
              lVar41 = 0;
              do {
                *(undefined8 *)(lVar45 + lVar41) = *(undefined8 *)(*plVar75 + lVar41);
                lVar41 = lVar41 + 8;
              } while (uVar80 * 8 - lVar41 != 0);
            }
            if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar74 = *puVar6;
            }
            *plVar75 = lVar45;
            *puVar4 = uVar77;
            *pcVar5 = '\x01';
            uVar80 = (ulong)uVar77;
          }
        }
        uVar77 = uVar74 + 1;
        uVar73 = (uint)uVar80;
        *(long *)(*plVar75 + (long)(int)uVar74 * 8) = lVar29;
        *puVar6 = uVar77;
        if (uVar77 == uVar73) {
          uVar74 = uVar73 << 1;
          if (uVar73 == 0) {
            uVar74 = 1;
          }
          uVar77 = uVar73;
          if ((int)uVar73 < (int)uVar74) {
            if (uVar74 == 0) {
              lVar29 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar29 = (*(code *)PTR_FUN_01048e38)
                                 (-(ulong)(uVar74 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar74 << 3
                                  ,0x10);
              uVar80 = (ulong)*puVar6;
            }
            uVar77 = (uint)uVar80;
            if (0 < (int)uVar77) {
              lVar45 = 0;
              do {
                *(undefined8 *)(lVar29 + lVar45) = *(undefined8 *)(*plVar75 + lVar45);
                lVar45 = lVar45 + 8;
              } while (uVar80 * 8 - lVar45 != 0);
            }
            if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              uVar77 = *puVar6;
            }
            *plVar75 = lVar29;
            *puVar4 = uVar74;
            *pcVar5 = '\x01';
          }
        }
        bVar19 = false;
        *(undefined8 *)(*plVar75 + (long)(int)uVar77 * 8) = 0;
        *puVar6 = uVar77 + 1;
      }
      if ((uVar27 | uVar25) == 0) {
        plVar36 = *(long **)(lVar33 + 0x18);
        pplVar31 = (long **)**(long ***)(lVar34 + 0x10);
        if (pplVar31[3] != plVar36) goto LAB_00fa4c84;
        if (pplVar78 != (long **)0x0) goto LAB_00fa4d3c;
      }
      else {
        plVar36 = *(long **)(lVar33 + 0x18);
LAB_00fa4c84:
        pplVar31 = (long **)newEdgePair(this,*(Vertex **)(lVar34 + 0x18),(Vertex *)plVar36);
        if (uVar25 == 0) {
          pplVar43 = *(long ***)(lVar34 + 0x10);
          plVar36 = *pplVar43;
          *pplVar31 = plVar36;
          plVar36[1] = (long)pplVar31;
LAB_00fa4cd8:
          *pplVar43 = (long *)pplVar31;
          pplVar31[1] = (long *)pplVar43;
        }
        else if (pplVar78 != (long **)0x0) {
          pplVar43 = *(long ***)(lVar34 + 0x10);
          goto LAB_00fa4cd8;
        }
        if (bVar19) {
          lVar29 = *(long *)(lVar33 + 0x10);
          plVar36 = pplVar31[2];
          pplVar43 = *(long ***)(lVar29 + 8);
          *pplVar43 = plVar36;
          plVar36[1] = (long)pplVar43;
        }
        else {
          plVar36 = pplVar31[2];
          lVar29 = *(long *)(lVar33 + 0x10);
        }
        *plVar36 = lVar29;
        *(long **)(lVar29 + 8) = plVar36;
        if (pplVar78 != (long **)0x0) {
          if ((int)uVar25 < 1) {
LAB_00fa4d3c:
            if (pplVar31 != (long **)pplVar78[2]) {
              uVar25 = *puVar6;
              uVar80 = (ulong)*puVar4;
              if (uVar25 == *puVar4) {
                uVar77 = uVar25 << 1;
                if (uVar25 == 0) {
                  uVar77 = 1;
                }
                uVar80 = (ulong)uVar77;
                if ((int)uVar25 < (int)uVar77) {
                  if (uVar77 == 0) {
                    lVar29 = 0;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    lVar29 = (*(code *)PTR_FUN_01048e38)
                                       (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar77 << 3,0x10);
                    uVar25 = *puVar6;
                  }
                  if (0 < (int)uVar25) {
                    lVar34 = 0;
                    do {
                      *(undefined8 *)(lVar29 + lVar34) = *(undefined8 *)(*plVar75 + lVar34);
                      lVar34 = lVar34 + 8;
                    } while ((ulong)uVar25 * 8 - lVar34 != 0);
                  }
                  if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                    gNumAlignedFree = gNumAlignedFree + 1;
                    (*(code *)PTR_FUN_01048e40)();
                    uVar25 = *puVar6;
                  }
                  *plVar75 = lVar29;
                  *puVar4 = uVar77;
                  *pcVar5 = '\x01';
                }
                else {
                  uVar80 = (ulong)uVar25;
                }
              }
              *(long **)(*plVar75 + (long)(int)uVar25 * 8) = pplVar78[3];
              while( true ) {
                uVar25 = uVar25 + 1;
                uVar77 = (uint)uVar80;
                *puVar6 = uVar25;
                pplVar43 = (long **)*pplVar31;
                if (pplVar43 == (long **)pplVar78[2]) break;
                pplVar54 = (long **)pplVar43[2];
                plVar36 = pplVar43[3];
                pplVar52 = (long **)*pplVar43;
                if (pplVar52 == pplVar43) {
                  pplVar52 = (long **)0x0;
                }
                else {
                  pplVar52[1] = pplVar43[1];
                  *pplVar43[1] = (long)pplVar52;
                }
                pplVar54[3][2] = (long)pplVar52;
                plVar53 = *pplVar54;
                if ((long **)plVar53 == pplVar54) {
                  plVar53 = (long *)0x0;
                }
                else {
                  plVar53[1] = (long)pplVar54[1];
                  *pplVar54[1] = (long)plVar53;
                }
                plVar36[2] = (long)plVar53;
                pplVar43[4] = (long *)0x0;
                pplVar43[1] = (long *)0x0;
                *pplVar43 = (long *)0x0;
                pplVar43[3] = (long *)0x0;
                pplVar43[2] = (long *)0x0;
                *pplVar43 = *(long **)(this + 0x50);
                *(long ***)(this + 0x50) = pplVar43;
                pplVar54[4] = (long *)0x0;
                pplVar54[1] = (long *)0x0;
                *pplVar54 = (long *)0x0;
                pplVar54[3] = (long *)0x0;
                pplVar54[2] = (long *)0x0;
                *pplVar54 = *(long **)(this + 0x50);
                *(long ***)(this + 0x50) = pplVar54;
                *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                uVar25 = *puVar6;
                uVar58 = (ulong)uVar25;
                uVar80 = (ulong)*puVar4;
                if (uVar25 == *puVar4) {
                  uVar77 = uVar25 << 1;
                  if (uVar25 == 0) {
                    uVar77 = 1;
                  }
                  uVar80 = uVar58;
                  if ((int)uVar25 < (int)uVar77) {
                    if (uVar77 == 0) {
                      lVar29 = 0;
                    }
                    else {
                      gNumAlignedAllocs = gNumAlignedAllocs + 1;
                      lVar29 = (*(code *)PTR_FUN_01048e38)
                                         (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar77 << 3,0x10);
                      uVar25 = *puVar6;
                      uVar58 = (ulong)uVar25;
                    }
                    if (0 < (int)uVar25) {
                      uVar25 = (uint)uVar58;
                      lVar34 = 0;
                      do {
                        *(undefined8 *)(lVar29 + lVar34) = *(undefined8 *)(*plVar75 + lVar34);
                        lVar34 = lVar34 + 8;
                      } while (uVar58 * 8 - lVar34 != 0);
                    }
                    if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                      gNumAlignedFree = gNumAlignedFree + 1;
                      (*(code *)PTR_FUN_01048e40)();
                      uVar25 = *puVar6;
                    }
                    *plVar75 = lVar29;
                    *puVar4 = uVar77;
                    *pcVar5 = '\x01';
                    uVar80 = (ulong)uVar77;
                  }
                }
                *(long **)(*plVar75 + (long)(int)uVar25 * 8) = plVar36;
              }
              if (uVar25 == uVar77) {
                uVar74 = uVar77 << 1;
                if (uVar77 == 0) {
                  uVar74 = 1;
                }
                uVar25 = uVar77;
                if ((int)uVar77 < (int)uVar74) {
                  if (uVar74 == 0) {
                    lVar29 = 0;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    lVar29 = (*(code *)PTR_FUN_01048e38)
                                       (-(ulong)(uVar74 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar74 << 3,0x10);
                    uVar80 = (ulong)*puVar6;
                  }
                  uVar25 = (uint)uVar80;
                  if (0 < (int)uVar25) {
                    lVar34 = 0;
                    do {
                      *(undefined8 *)(lVar29 + lVar34) = *(undefined8 *)(*plVar75 + lVar34);
                      lVar34 = lVar34 + 8;
                    } while (uVar80 * 8 - lVar34 != 0);
                  }
                  if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                    gNumAlignedFree = gNumAlignedFree + 1;
                    (*(code *)PTR_FUN_01048e40)();
                    uVar25 = *puVar6;
                  }
                  *plVar75 = lVar29;
                  *puVar4 = uVar74;
                  *pcVar5 = '\x01';
                }
              }
              *(undefined8 *)(*plVar75 + (long)(int)uVar25 * 8) = 0;
              *puVar6 = uVar25 + 1;
            }
          }
          else {
            plVar36 = pplVar78[2];
            *pplVar31 = plVar36;
            plVar36[1] = (long)pplVar31;
          }
        }
      }
      pplVar43 = pplVar31;
      if (pplVar81 != (long **)0x0) {
        pplVar43 = pplVar81;
      }
      pplVar31[4] = param_1;
      pplVar31[2][4] = *(long *)(lVar33 + 0x20);
      lVar29 = lVar32;
      pplVar78 = pplVar31;
      pplVar81 = pplVar43;
      uVar25 = uVar27;
    }
    if ((int)uVar25 < 1) {
      if (pplVar81 == (long **)pplVar78[2]) goto LAB_00fa50f8;
      uVar25 = *puVar6;
      uVar72 = (ulong)*puVar4;
      if (uVar25 == *puVar4) {
        uVar27 = uVar25 << 1;
        if (uVar25 == 0) {
          uVar27 = 1;
        }
        uVar72 = (ulong)uVar27;
        if ((int)uVar25 < (int)uVar27) {
          if (uVar27 == 0) {
            lVar29 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar29 = (*(code *)PTR_FUN_01048e38)
                               (-(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar27 << 3,
                                0x10);
            uVar25 = *puVar6;
          }
          if (0 < (int)uVar25) {
            lVar33 = 0;
            do {
              *(undefined8 *)(lVar29 + lVar33) = *(undefined8 *)(*plVar75 + lVar33);
              lVar33 = lVar33 + 8;
            } while ((ulong)uVar25 * 8 - lVar33 != 0);
          }
          if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar25 = *puVar6;
          }
          *plVar75 = lVar29;
          *puVar4 = uVar27;
          *pcVar5 = '\x01';
        }
        else {
          uVar72 = (ulong)uVar25;
        }
      }
      uVar27 = uVar25 + 1;
      *(long **)(*plVar75 + (long)(int)uVar25 * 8) = pplVar78[3];
      *puVar6 = uVar27;
      pplVar31 = (long **)*pplVar81;
      if (pplVar31 != (long **)pplVar78[2]) {
        do {
          pplVar43 = (long **)pplVar31[2];
          plVar36 = pplVar31[3];
          pplVar54 = (long **)*pplVar31;
          if (pplVar54 == pplVar31) {
            pplVar54 = (long **)0x0;
          }
          else {
            pplVar54[1] = pplVar31[1];
            *pplVar31[1] = (long)pplVar54;
          }
          pplVar43[3][2] = (long)pplVar54;
          plVar53 = *pplVar43;
          if ((long **)plVar53 == pplVar43) {
            plVar53 = (long *)0x0;
          }
          else {
            plVar53[1] = (long)pplVar43[1];
            *pplVar43[1] = (long)plVar53;
          }
          plVar36[2] = (long)plVar53;
          pplVar31[4] = (long *)0x0;
          pplVar31[1] = (long *)0x0;
          *pplVar31 = (long *)0x0;
          pplVar31[3] = (long *)0x0;
          pplVar31[2] = (long *)0x0;
          *pplVar31 = *(long **)(this + 0x50);
          *(long ***)(this + 0x50) = pplVar31;
          pplVar43[4] = (long *)0x0;
          pplVar43[1] = (long *)0x0;
          *pplVar43 = (long *)0x0;
          pplVar43[3] = (long *)0x0;
          pplVar43[2] = (long *)0x0;
          *pplVar43 = *(long **)(this + 0x50);
          *(long ***)(this + 0x50) = pplVar43;
          *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
          uVar25 = *puVar6;
          uVar44 = (ulong)uVar25;
          uVar72 = (ulong)*puVar4;
          if (uVar25 == *puVar4) {
            uVar27 = uVar25 << 1;
            if (uVar25 == 0) {
              uVar27 = 1;
            }
            uVar72 = uVar44;
            if ((int)uVar25 < (int)uVar27) {
              if (uVar27 == 0) {
                lVar29 = 0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar29 = (*(code *)PTR_FUN_01048e38)
                                   (-(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar27 << 3,0x10);
                uVar44 = (ulong)*puVar6;
              }
              uVar25 = (uint)uVar44;
              if (0 < (int)uVar25) {
                lVar33 = 0;
                do {
                  *(undefined8 *)(lVar29 + lVar33) = *(undefined8 *)(*plVar75 + lVar33);
                  lVar33 = lVar33 + 8;
                } while (uVar44 * 8 - lVar33 != 0);
              }
              if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
                uVar25 = *puVar6;
              }
              *plVar75 = lVar29;
              *puVar4 = uVar27;
              *pcVar5 = '\x01';
              uVar72 = (ulong)uVar27;
            }
          }
          uVar27 = uVar25 + 1;
          *(long **)(*plVar75 + (long)(int)uVar25 * 8) = plVar36;
          *puVar6 = uVar27;
          pplVar31 = (long **)*pplVar81;
        } while (pplVar31 != (long **)pplVar78[2]);
      }
      uVar25 = (uint)uVar72;
      if (uVar27 == uVar25) {
        uVar77 = uVar25 << 1;
        if (uVar25 == 0) {
          uVar77 = 1;
        }
        uVar27 = uVar25;
        if ((int)uVar25 < (int)uVar77) {
          if (uVar77 == 0) {
            lVar29 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar29 = (*(code *)PTR_FUN_01048e38)
                               (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar77 << 3,
                                0x10);
            uVar72 = (ulong)*puVar6;
          }
          uVar27 = (uint)uVar72;
          if (0 < (int)uVar27) {
            lVar33 = 0;
            do {
              *(undefined8 *)(lVar29 + lVar33) = *(undefined8 *)(*plVar75 + lVar33);
              lVar33 = lVar33 + 8;
            } while (uVar72 * 8 - lVar33 != 0);
          }
          if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar27 = *puVar6;
          }
          *plVar75 = lVar29;
          *puVar4 = uVar77;
          *pcVar5 = '\x01';
        }
      }
      uVar25 = uVar27 + 1;
      *(undefined8 *)(*plVar75 + (long)(int)uVar27 * 8) = 0;
      *puVar6 = uVar25;
    }
    else {
      pplVar81[2][3] = (long)pplVar78[3];
      plVar36 = *(long **)(lVar29 + 0x10);
      *plVar36 = (long)pplVar81;
      pplVar81[1] = plVar36;
      plVar36 = pplVar78[2];
      *pplVar81 = plVar36;
      plVar36[1] = (long)pplVar81;
LAB_00fa50f8:
      uVar25 = *puVar6;
    }
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)*plVar75;
    if (0 < (int)uVar25) {
      uVar72 = 0;
      do {
        if ((int)uVar72 < (int)uVar25) {
          do {
            plVar36 = (long *)(*plVar75 + (long)(int)uVar72 * 8);
            uVar27 = (int)uVar72 + 2;
            uVar72 = (ulong)uVar27;
            lVar29 = plVar36[1];
            if (lVar29 != 0) {
              lVar33 = *plVar36;
              bVar19 = false;
              uVar44 = (long)(int)uVar27;
              do {
                while( true ) {
                  plVar53 = (long *)(lVar29 + 0x18);
                  plVar36 = (long *)(lVar33 + 0x18);
                  if (*(long *)(lVar33 + 0x20) != 0) {
                    plVar36 = (long *)(*(long *)(lVar33 + 0x20) + 0x10);
                  }
                  *plVar36 = *plVar53;
                  if (*(long *)(lVar29 + 0x20) != 0) {
                    *(long *)(lVar33 + 0x20) = *(long *)(lVar29 + 0x20);
                  }
                  for (lVar34 = *plVar53; lVar34 != 0; lVar34 = *(long *)(lVar34 + 0x10)) {
                    *(long *)(lVar34 + 8) = lVar33;
                  }
                  lVar34 = *(long *)(lVar29 + 0x10);
                  *plVar53 = 0;
                  *(undefined8 *)(lVar29 + 0x20) = 0;
                  if (lVar34 != 0) break;
                  lVar34 = *plVar75;
                  uVar72 = uVar44 + 1;
                  lVar29 = *(long *)(lVar34 + uVar44 * 8);
                  uVar44 = uVar72;
                  if (lVar29 == 0) {
                    if (!bVar19) goto LAB_00fa54fc;
                    goto LAB_00fa5844;
                  }
                }
                if (!bVar19) {
                  uVar27 = *puVar6;
                  if (uVar27 == *puVar4) {
                    uVar77 = uVar27 << 1;
                    if (uVar27 == 0) {
                      uVar77 = 1;
                    }
                    if ((int)uVar27 < (int)uVar77) {
                      if (uVar77 == 0) {
                        lVar34 = 0;
                      }
                      else {
                        gNumAlignedAllocs = gNumAlignedAllocs + 1;
                        lVar34 = (*(code *)PTR_FUN_01048e38)
                                           (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar77 << 3,0x10);
                        uVar27 = *puVar6;
                      }
                      if (0 < (int)uVar27) {
                        lVar32 = 0;
                        do {
                          *(undefined8 *)(lVar34 + lVar32) = *(undefined8 *)(*plVar75 + lVar32);
                          lVar32 = lVar32 + 8;
                        } while ((ulong)uVar27 * 8 - lVar32 != 0);
                      }
                      if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                        gNumAlignedFree = gNumAlignedFree + 1;
                        (*(code *)PTR_FUN_01048e40)();
                        uVar27 = *puVar6;
                      }
                      *plVar75 = lVar34;
                      *puVar4 = uVar77;
                      *pcVar5 = '\x01';
                    }
                  }
                  *(long *)(*plVar75 + (long)(int)uVar27 * 8) = lVar33;
                  *puVar6 = uVar27 + 1;
                  lVar34 = *(long *)(lVar29 + 0x10);
                }
                do {
                  uVar27 = *puVar6;
                  if (uVar27 == *puVar4) {
                    uVar77 = uVar27 << 1;
                    if (uVar27 == 0) {
                      uVar77 = 1;
                    }
                    if ((int)uVar27 < (int)uVar77) {
                      if (uVar77 == 0) {
                        lVar32 = 0;
                      }
                      else {
                        gNumAlignedAllocs = gNumAlignedAllocs + 1;
                        lVar32 = (*(code *)PTR_FUN_01048e38)
                                           (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar77 << 3,0x10);
                        uVar27 = *puVar6;
                      }
                      if (0 < (int)uVar27) {
                        lVar45 = 0;
                        do {
                          *(undefined8 *)(lVar32 + lVar45) = *(undefined8 *)(*plVar75 + lVar45);
                          lVar45 = lVar45 + 8;
                        } while ((ulong)uVar27 * 8 - lVar45 != 0);
                      }
                      if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                        gNumAlignedFree = gNumAlignedFree + 1;
                        (*(code *)PTR_FUN_01048e40)();
                        uVar27 = *puVar6;
                      }
                      *plVar75 = lVar32;
                      *puVar4 = uVar77;
                      *pcVar5 = '\x01';
                    }
                  }
                  *(undefined8 *)(*plVar75 + (long)(int)uVar27 * 8) = *(undefined8 *)(lVar34 + 0x18)
                  ;
                  *puVar6 = uVar27 + 1;
                  puVar48 = *(undefined8 **)(lVar29 + 0x10);
                  puVar55 = (undefined8 *)*puVar48;
                  puVar64 = (undefined8 *)puVar48[2];
                  if (puVar55 == puVar48) {
                    puVar55 = (undefined8 *)0x0;
                  }
                  else {
                    puVar55[1] = puVar48[1];
                    *(undefined8 **)puVar48[1] = puVar55;
                  }
                  *(undefined8 **)(puVar64[3] + 0x10) = puVar55;
                  puVar55 = (undefined8 *)*puVar64;
                  if (puVar55 == puVar64) {
                    puVar55 = (undefined8 *)0x0;
                  }
                  else {
                    puVar55[1] = puVar64[1];
                    *(undefined8 **)puVar64[1] = puVar55;
                  }
                  *(undefined8 **)(puVar48[3] + 0x10) = puVar55;
                  puVar48[4] = 0;
                  puVar48[1] = 0;
                  *puVar48 = 0;
                  puVar48[3] = 0;
                  puVar48[2] = 0;
                  *puVar48 = *(undefined8 *)(this + 0x50);
                  *(undefined8 **)(this + 0x50) = puVar48;
                  puVar64[4] = 0;
                  puVar64[1] = 0;
                  *puVar64 = 0;
                  puVar64[3] = 0;
                  puVar64[2] = 0;
                  *puVar64 = *(undefined8 *)(this + 0x50);
                  *(undefined8 **)(this + 0x50) = puVar64;
                  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                  lVar34 = *(long *)(lVar29 + 0x10);
                } while (lVar34 != 0);
                lVar34 = *plVar75;
                bVar19 = true;
                lVar29 = *(long *)(lVar34 + uVar44 * 8);
                uVar44 = uVar44 + 1;
              } while (lVar29 != 0);
              uVar72 = uVar44 & 0xffffffff;
LAB_00fa5844:
              uVar27 = *puVar6;
              if (uVar27 == *puVar4) {
                uVar77 = uVar27 << 1;
                if (uVar27 == 0) {
                  uVar77 = 1;
                }
                if ((int)uVar27 < (int)uVar77) {
                  if (uVar77 == 0) {
                    lVar34 = 0;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    lVar34 = (*(code *)PTR_FUN_01048e38)
                                       (-(ulong)(uVar77 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar77 << 3,0x10);
                    uVar27 = *puVar6;
                  }
                  if (0 < (int)uVar27) {
                    lVar29 = 0;
                    do {
                      *(undefined8 *)(lVar34 + lVar29) = *(undefined8 *)(*plVar75 + lVar29);
                      lVar29 = lVar29 + 8;
                    } while ((ulong)uVar27 * 8 - lVar29 != 0);
                  }
                  if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
                    gNumAlignedFree = gNumAlignedFree + 1;
                    (*(code *)PTR_FUN_01048e40)();
                    uVar27 = *puVar6;
                  }
                  *plVar75 = lVar34;
                  *puVar4 = uVar77;
                  *pcVar5 = '\x01';
                }
              }
              *(undefined8 *)(lVar34 + (long)(int)uVar27 * 8) = 0;
              *puVar6 = uVar27 + 1;
            }
LAB_00fa54fc:
          } while ((int)uVar72 < (int)uVar25);
          uVar25 = *puVar6;
        }
      } while ((int)uVar72 < (int)uVar25);
    }
    if ((int)uVar25 < 0) {
      if ((int)*puVar4 < 0) {
        if ((*plVar75 != 0) && (*pcVar5 != '\0')) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *plVar75 = 0;
        *pcVar5 = '\x01';
        *puVar4 = 0;
      }
      lVar29 = (long)(int)uVar25;
      do {
        *(undefined8 *)(*plVar75 + lVar29 * 8) = 0;
        bVar19 = lVar29 != -1;
        lVar29 = lVar29 + 1;
      } while (bVar19);
    }
    *puVar6 = 0;
    param_1[3] = uVar2 << 0x20 | uVar1 & 0xffffffff;
    param_1[4] = uVar3 | 0xffffffff00000000;
LAB_00fa50bc:
    uVar30 = 1;
    goto LAB_00fa3984;
  }
  plVar75 = **(long ***)(lVar33 + 0x10);
  do {
    Vertex::dot((Point64 *)plVar75[3]);
    iVar26 = Rational128::compare((Rational128 *)&local_e8,uVar72);
    if (0 < iVar26) goto LAB_00fa3a28;
    plVar75 = (long *)*plVar75;
  } while (plVar75 != (long *)*(long *)(lVar33 + 0x10));
  goto LAB_00fa3870;
}


