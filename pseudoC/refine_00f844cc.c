// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refine
// Entry Point: 00f844cc
// Size: 5040 bytes
// Signature: undefined __thiscall refine(btSoftBody * this, ImplicitFn * param_1, float param_2, bool param_3)


/* btSoftBody::refine(btSoftBody::ImplicitFn*, float, bool) */

void __thiscall btSoftBody::refine(btSoftBody *this,ImplicitFn *param_1,float param_2,bool param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  void *__s;
  void *__s_00;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  size_t sVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  int iVar41;
  ulong uVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  ulong local_140;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  uVar5 = *(uint *)(this + 0x374);
  uVar12 = (ulong)uVar5;
  iVar11 = uVar5 + uVar5 * uVar5;
  lVar35 = *(long *)(this + 0x380);
  if (iVar11 < 2) {
    lVar10 = 0;
  }
  else {
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar30 = (ulong)(uint)(iVar11 >> 1);
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    lVar10 = (*(code *)PTR_FUN_01048e38)(uVar30 << 2,0x10);
    if ((uint)(iVar11 >> 1) < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar30 & 0xfffffff8;
      puVar16 = (undefined8 *)(lVar10 + 0x10);
      uVar31 = uVar13;
      do {
        puVar16[-1] = 0xfffffffefffffffe;
        puVar16[-2] = 0xfffffffefffffffe;
        puVar16[1] = 0xfffffffefffffffe;
        *puVar16 = 0xfffffffefffffffe;
        uVar31 = uVar31 - 8;
        puVar16 = puVar16 + 4;
      } while (uVar31 != 0);
      if (uVar13 == uVar30) goto LAB_00f845c4;
    }
    lVar17 = uVar30 - uVar13;
    puVar14 = (undefined4 *)(lVar10 + uVar13 * 4);
    do {
      lVar17 = lVar17 + -1;
      *puVar14 = 0xfffffffe;
      puVar14 = puVar14 + 1;
    } while (lVar17 != 0);
  }
LAB_00f845c4:
  iVar11 = *(int *)(this + 0x394);
  if (0 < iVar11) {
    iVar32 = 0;
    do {
      if ((*(byte *)(*(long *)(this + 0x3a0) + (long)iVar32 * 0x48 + 0x24) & 1) != 0) {
        lVar17 = (long)iVar32;
        lVar37 = *(long *)(this + 0x3a0) + lVar17 * 0x48;
        fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                  (param_1,*(long *)(lVar37 + 0x10) + 0x10);
        fVar44 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                  (param_1,*(long *)(lVar37 + 0x18) + 0x10);
        if (fVar44 * fVar43 <= 0.0) {
          iVar32 = iVar32 + -1;
          puVar16 = (undefined8 *)(*(long *)(this + 0x3a0) + lVar17 * 0x48);
          lVar17 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
          uStack_e8 = puVar16[3];
          local_f0 = puVar16[2];
          uStack_d8 = puVar16[5];
          local_e0 = puVar16[4];
          uStack_c8 = puVar16[7];
          local_d0 = puVar16[6];
          local_c0 = puVar16[8];
          uStack_f8 = puVar16[1];
          local_100 = *puVar16;
          uVar38 = *(undefined8 *)(lVar17 + -0x48);
          puVar16[1] = *(undefined8 *)(lVar17 + -0x40);
          *puVar16 = uVar38;
          uVar39 = *(undefined8 *)(lVar17 + -0x10);
          uVar38 = *(undefined8 *)(lVar17 + -0x18);
          uVar48 = *(undefined8 *)(lVar17 + -0x30);
          uVar25 = *(undefined8 *)(lVar17 + -0x38);
          uVar50 = *(undefined8 *)(lVar17 + -0x20);
          uVar49 = *(undefined8 *)(lVar17 + -0x28);
          puVar16[8] = *(undefined8 *)(lVar17 + -8);
          puVar16[3] = uVar48;
          puVar16[2] = uVar25;
          puVar16[5] = uVar50;
          puVar16[4] = uVar49;
          puVar16[7] = uVar39;
          puVar16[6] = uVar38;
          *(ulong *)(lVar17 + -0x40) = uStack_f8;
          *(undefined8 *)(lVar17 + -0x48) = local_100;
          *(undefined8 *)(lVar17 + -8) = local_c0;
          *(undefined8 *)(lVar17 + -0x10) = uStack_c8;
          *(undefined8 *)(lVar17 + -0x18) = local_d0;
          *(undefined8 *)(lVar17 + -0x20) = uStack_d8;
          *(undefined8 *)(lVar17 + -0x28) = local_e0;
          *(undefined8 *)(lVar17 + -0x30) = uStack_e8;
          *(undefined8 *)(lVar17 + -0x38) = local_f0;
          iVar11 = *(int *)(this + 0x394) + -1;
          *(int *)(this + 0x394) = iVar11;
        }
        else {
          iVar11 = *(int *)(this + 0x394);
        }
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 < iVar11);
    if (0 < iVar11) {
      lVar17 = 0;
      plVar21 = (long *)(*(long *)(this + 0x3a0) + 0x18);
      do {
        plVar1 = plVar21 + -1;
        lVar37 = *plVar21;
        lVar17 = lVar17 + 1;
        plVar21 = plVar21 + 9;
        iVar41 = (int)((ulong)(*plVar1 - lVar35) >> 3) * -0x11111111;
        iVar23 = (int)((ulong)(lVar37 - lVar35) >> 3);
        iVar32 = iVar23 * -0x11111111;
        iVar11 = iVar41;
        if (iVar41 <= iVar32) {
          iVar11 = iVar32;
        }
        if (iVar41 == iVar32 || iVar41 + iVar23 * 0x11111111 < 0 != SBORROW4(iVar41,iVar32)) {
          iVar32 = iVar41;
        }
        iVar11 = iVar11 + iVar11 * iVar11;
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        *(undefined4 *)(lVar10 + (long)(iVar32 + (iVar11 >> 1)) * 4) = 0xffffffff;
      } while (lVar17 < *(int *)(this + 0x394));
    }
  }
  if (0 < *(int *)(this + 0x3b4)) {
    lVar17 = 0;
    plVar21 = (long *)(*(long *)(this + 0x3c0) + 0x20);
    do {
      lVar17 = lVar17 + 1;
      iVar23 = (int)((ulong)(plVar21[-2] - lVar35) >> 3);
      iVar32 = iVar23 * -0x11111111;
      iVar26 = (int)((ulong)(plVar21[-1] - lVar35) >> 3);
      iVar41 = iVar26 * -0x11111111;
      iVar11 = iVar32;
      if (iVar32 <= iVar41) {
        iVar11 = iVar41;
      }
      iVar28 = iVar41;
      if (iVar32 == iVar41 || iVar32 + iVar26 * 0x11111111 < 0 != SBORROW4(iVar32,iVar41)) {
        iVar28 = iVar32;
      }
      iVar11 = iVar11 + iVar11 * iVar11;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 1;
      }
      *(undefined4 *)(lVar10 + (long)(iVar28 + (iVar11 >> 1)) * 4) = 0xffffffff;
      iVar28 = (int)((ulong)(*plVar21 - lVar35) >> 3);
      iVar26 = iVar28 * -0x11111111;
      iVar11 = iVar41;
      if (iVar41 <= iVar26) {
        iVar11 = iVar26;
      }
      iVar3 = iVar26;
      if (iVar41 == iVar26 || iVar41 + iVar28 * 0x11111111 < 0 != SBORROW4(iVar41,iVar26)) {
        iVar3 = iVar41;
      }
      iVar11 = iVar11 + iVar11 * iVar11;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 1;
      }
      iVar41 = iVar26;
      if (iVar26 <= iVar32) {
        iVar41 = iVar32;
      }
      if (iVar26 == iVar32 || iVar26 + iVar23 * 0x11111111 < 0 != SBORROW4(iVar26,iVar32)) {
        iVar32 = iVar26;
      }
      iVar41 = iVar41 + iVar41 * iVar41;
      *(undefined4 *)(lVar10 + (long)(iVar3 + (iVar11 >> 1)) * 4) = 0xffffffff;
      if (iVar41 < 0) {
        iVar41 = iVar41 + 1;
      }
      *(undefined4 *)(lVar10 + (long)(iVar32 + (iVar41 >> 1)) * 4) = 0xffffffff;
      plVar21 = plVar21 + 9;
    } while (lVar17 < *(int *)(this + 0x3b4));
  }
  if (0 < (int)uVar5) {
    local_140 = 1;
    uVar30 = 0;
    do {
      uVar31 = uVar30 + 1;
      uVar13 = local_140;
      if (uVar31 < uVar12) {
        do {
          iVar11 = (int)uVar30;
          if (uVar30 <= uVar13) {
            iVar11 = (int)uVar13;
          }
          iVar32 = (int)uVar30;
          if (uVar13 <= uVar30) {
            iVar32 = (int)uVar13;
          }
          uVar42 = (ulong)(iVar32 + ((uint)(iVar11 + iVar11 * iVar11) >> 1));
          if (*(int *)(lVar10 + uVar42 * 4) == -1) {
            lVar35 = *(long *)(this + 0x380);
            puVar16 = (undefined8 *)(lVar35 + uVar30 * 0x78 + 0x10);
            puVar2 = (undefined8 *)(lVar35 + uVar13 * 0x78 + 0x10);
            fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))(param_1,puVar16);
            fVar44 = (float)(**(code **)(*(long *)param_1 + 0x10))(param_1,puVar2);
            if (fVar43 <= fVar44) {
              fVar52 = 0.0;
              fVar53 = 1.0;
              fVar56 = fVar43;
              fVar43 = fVar44;
            }
            else {
              fVar53 = 0.0;
              fVar52 = 1.0;
              fVar56 = fVar44;
            }
            if ((fVar56 <= -param_2) && (param_2 <= fVar43)) {
              iVar11 = 0x100;
              pfVar15 = (float *)(lVar35 + uVar30 * 0x78 + 0x18);
              pfVar18 = (float *)(lVar35 + uVar13 * 0x78 + 0x18);
              while( true ) {
                fVar51 = *pfVar15;
                fVar46 = (float)*puVar16;
                fVar57 = (float)((ulong)*puVar16 >> 0x20);
                fVar44 = ((fVar53 - fVar52) * fVar56) / (fVar56 - fVar43) + fVar52;
                local_100 = CONCAT44(fVar57 + ((float)((ulong)*puVar2 >> 0x20) - fVar57) * fVar44,
                                     fVar46 + ((float)*puVar2 - fVar46) * fVar44);
                uVar45 = NEON_fmadd(*pfVar18 - fVar51,fVar44,fVar51);
                uStack_f8 = (ulong)uVar45;
                fVar46 = (float)(**(code **)(*(long *)param_1 + 0x10))(param_1,&local_100);
                if (fVar44 <= 0.0 || 1.0 <= fVar44) break;
                if (ABS(fVar46) < param_2) {
                  if (0.0 < fVar44) {
                    fVar52 = *pfVar15;
                    lVar17 = lVar35 + uVar30 * 0x78;
                    lVar35 = lVar35 + uVar13 * 0x78;
                    fVar43 = (float)*puVar16;
                    fVar53 = (float)((ulong)*puVar16 >> 0x20);
                    local_100 = CONCAT44(fVar53 + fVar44 * ((float)((ulong)*puVar2 >> 0x20) - fVar53
                                                           ),
                                         fVar43 + fVar44 * ((float)*puVar2 - fVar43));
                    uVar45 = NEON_fmadd(*pfVar18 - fVar52,fVar44,fVar52);
                    uStack_f8 = (ulong)uVar45;
                    pfVar15 = (float *)(lVar17 + 0x60);
                    fVar43 = *pfVar15;
                    pfVar18 = (float *)(lVar35 + 0x60);
                    fVar56 = *pfVar18;
                    fVar53 = *(float *)(lVar17 + 0x38);
                    fVar52 = *(float *)(lVar35 + 0x38);
                    if (fVar43 <= 0.0) {
                      fVar46 = 0.0;
                      if (0.0 < fVar56) {
                        fVar46 = 0.5 / fVar56;
                        *pfVar18 = fVar56 + fVar56;
                      }
                    }
                    else if (fVar56 <= 0.0) {
                      fVar46 = 0.5 / fVar43;
                      *pfVar15 = fVar43 + fVar43;
                    }
                    else {
                      fVar43 = 1.0 / fVar43;
                      fVar56 = 1.0 / fVar56;
                      fVar46 = (float)NEON_fmadd(fVar56 - fVar43,fVar44,fVar43);
                      fVar57 = (fVar56 + fVar43) / (fVar46 + fVar56 + fVar43);
                      fVar46 = fVar57 * fVar46;
                      *pfVar15 = 1.0 / (fVar57 * fVar43);
                      *pfVar18 = 1.0 / (fVar57 * fVar56);
                    }
                    uVar38 = *(undefined8 *)(lVar35 + 0x30);
                    fVar43 = (float)*(undefined8 *)(lVar17 + 0x30);
                    fVar56 = (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20);
                    uVar47 = NEON_fmadd(fVar52 - fVar53,fVar44,fVar53);
                    appendNode(this,(btVector3 *)&local_100,fVar46);
                    iVar11 = *(int *)(this + 0x374);
                    *(int *)(lVar10 + uVar42 * 4) = (int)((long)iVar11 + -1);
                    lVar35 = *(long *)(this + 0x380) + ((long)iVar11 + -1) * 0x78;
                    *(ulong *)(lVar35 + 0x30) =
                         CONCAT44(fVar56 + fVar44 * ((float)((ulong)uVar38 >> 0x20) - fVar56),
                                  fVar43 + fVar44 * ((float)uVar38 - fVar43));
                    *(undefined4 *)(lVar35 + 0x38) = uVar47;
                    *(undefined4 *)(lVar35 + 0x3c) = 0;
                  }
                  break;
                }
                fVar57 = fVar46;
                if (0.0 <= fVar46) {
                  fVar57 = fVar56;
                  fVar53 = fVar44;
                  fVar44 = fVar52;
                  fVar43 = fVar46;
                }
                fVar52 = fVar44;
                fVar56 = fVar57;
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) break;
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar12);
      }
      local_140 = local_140 + 1;
      uVar30 = uVar31;
    } while (uVar31 != uVar12);
  }
  uVar45 = *(uint *)(this + 0x394);
  uVar12 = (ulong)uVar45;
  lVar35 = *(long *)(this + 0x380);
  if (0 < (int)uVar45) {
    lVar17 = 0;
    uVar30 = 0;
    do {
      uVar34 = (int)(*(long *)(*(long *)(this + 0x3a0) + lVar17 + 0x10) - lVar35 >> 3) * -0x11111111
      ;
      iVar11 = (int)(*(long *)(*(long *)(this + 0x3a0) + lVar17 + 0x18) - lVar35 >> 3);
      uVar29 = iVar11 * -0x11111111;
      bVar8 = false;
      bVar9 = (int)uVar34 < (int)uVar5;
      if (bVar9) {
        bVar8 = (int)(uVar5 + iVar11 * 0x11111111) < 0;
      }
      if ((bVar9 && uVar5 != uVar29) && bVar8 == (bVar9 && SBORROW4(uVar5,uVar29))) {
        uVar20 = uVar29;
        uVar33 = uVar34;
        if ((int)uVar34 <= (int)uVar29) {
          uVar20 = uVar34;
          uVar33 = uVar29;
        }
        iVar11 = uVar33 + uVar33 * uVar33;
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        uVar20 = *(uint *)(lVar10 + (long)(int)(uVar20 + (iVar11 >> 1)) * 4);
        if (0 < (int)uVar20) {
          appendLink(this,(int)uVar30,(Material *)0x0);
          lVar24 = (ulong)uVar20 * 0x78;
          lVar19 = *(long *)(this + 0x3a0);
          uVar45 = *(uint *)(this + 0x394);
          lVar37 = lVar19 + lVar17;
          *(long *)(lVar37 + 0x10) = *(long *)(this + 0x380) + (long)(int)uVar34 * 0x78;
          *(long *)(lVar37 + 0x18) = *(long *)(this + 0x380) + lVar24;
          lVar19 = lVar19 + (long)(int)(uVar45 - 1) * 0x48;
          *(long *)(lVar19 + 0x10) = *(long *)(this + 0x380) + lVar24;
          *(long *)(lVar19 + 0x18) = *(long *)(this + 0x380) + (long)(int)uVar29 * 0x78;
        }
      }
      uVar30 = uVar30 + 1;
      lVar17 = lVar17 + 0x48;
    } while (uVar12 != uVar30);
  }
  uVar29 = *(uint *)(this + 0x3b4);
  if (0 < (int)uVar29) {
    uVar34 = 0;
    do {
      lVar17 = *(long *)(this + 0x3c0);
      lVar37 = lVar17 + (long)(int)uVar34 * 0x48;
      iVar32 = (int)(*(long *)(lVar37 + 0x20) - lVar35 >> 3);
      uVar20 = iVar32 * -0x11111111;
      iVar41 = (int)(*(long *)(lVar37 + 0x10) - lVar35 >> 3);
      uVar33 = iVar41 * -0x11111111;
      iVar11 = (int)(*(long *)(lVar37 + 0x18) - lVar35 >> 3);
      uVar22 = iVar11 * -0x11111111;
      bVar9 = false;
      if ((int)uVar5 > (int)uVar20) {
        bVar9 = (int)(uVar5 + iVar41 * 0x11111111) < 0;
      }
      uStack_108 = CONCAT44(uStack_108._4_4_,uVar20);
      local_110 = CONCAT44(uVar22,uVar33);
      if (((int)uVar5 <= (int)uVar20 || uVar5 == uVar33) ||
          bVar9 != ((int)uVar20 < (int)uVar5 && SBORROW4(uVar5,uVar33))) {
LAB_00f84d9c:
        bVar9 = false;
        if ((int)uVar33 < (int)uVar5) {
          bVar9 = (int)(uVar5 + iVar11 * 0x11111111) < 0;
        }
        if (((int)uVar33 < (int)uVar5 && uVar5 != uVar22) &&
            bVar9 == ((int)uVar33 < (int)uVar5 && SBORROW4(uVar5,uVar22))) {
          uVar4 = uVar22;
          uVar7 = uVar33;
          if ((int)uVar33 <= (int)uVar22) {
            uVar4 = uVar33;
            uVar7 = uVar22;
          }
          iVar11 = uVar7 + uVar7 * uVar7;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          iVar41 = *(int *)(lVar10 + (long)(int)(uVar4 + (iVar11 >> 1)) * 4);
          if (iVar41 < 1) goto LAB_00f84e0c;
          lVar37 = 2;
          uVar45 = uVar33;
          uVar33 = uVar22;
joined_r0x00f84ddc:
          uVar20 = uVar45;
          if ((int)uVar34 < 0) goto LAB_00f84e50;
LAB_00f84de0:
          puVar16 = (undefined8 *)(lVar17 + (ulong)uVar34 * 0x48);
          uVar38 = *puVar16;
          uVar39 = puVar16[1];
          uStack_f8 = puVar16[3];
          local_100 = puVar16[2];
          uStack_e8 = puVar16[5];
          local_f0 = puVar16[4];
          uStack_d8 = puVar16[7];
          local_e0 = puVar16[6];
          local_d0 = puVar16[8];
          goto LAB_00f84e68;
        }
LAB_00f84e0c:
        bVar9 = false;
        if ((int)uVar22 < (int)uVar5) {
          bVar9 = (int)(uVar5 + iVar32 * 0x11111111) < 0;
        }
        if (((int)uVar22 < (int)uVar5 && uVar5 != uVar20) &&
            bVar9 == ((int)uVar22 < (int)uVar5 && SBORROW4(uVar5,uVar20))) {
          uVar33 = uVar20;
          uVar4 = uVar22;
          if ((int)uVar22 <= (int)uVar20) {
            uVar33 = uVar22;
            uVar4 = uVar20;
          }
          iVar11 = uVar4 + uVar4 * uVar4;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          iVar41 = *(int *)(lVar10 + (long)(int)(uVar33 + (iVar11 >> 1)) * 4);
          if (0 < iVar41) {
            lVar37 = 0;
            uVar45 = uVar22;
            uVar33 = uVar20;
            goto joined_r0x00f84ddc;
          }
        }
      }
      else {
        uVar4 = uVar33;
        uVar7 = uVar20;
        if ((int)uVar20 <= (int)uVar33) {
          uVar4 = uVar20;
          uVar7 = uVar33;
        }
        iVar41 = uVar7 + uVar7 * uVar7;
        if (iVar41 < 0) {
          iVar41 = iVar41 + 1;
        }
        iVar41 = *(int *)(lVar10 + (long)(int)(uVar4 + (iVar41 >> 1)) * 4);
        if (iVar41 < 1) goto LAB_00f84d9c;
        lVar37 = 1;
        if (-1 < (int)uVar34) goto LAB_00f84de0;
LAB_00f84e50:
        local_d0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uVar38 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uVar39 = **(undefined8 **)(this + 0x480);
LAB_00f84e68:
        if (uVar29 == *(uint *)(this + 0x3b8)) {
          iVar11 = uVar29 << 1;
          if (uVar29 == 0) {
            iVar11 = 1;
          }
          if ((int)uVar29 < iVar11) {
            if (iVar11 == 0) {
              lVar17 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar17 = (*(code *)PTR_FUN_01048e38)((long)iVar11 * 0x48,0x10);
              uVar29 = *(uint *)(this + 0x3b4);
            }
            if (0 < (int)uVar29) {
              lVar19 = 0;
              do {
                puVar16 = (undefined8 *)(lVar17 + lVar19);
                puVar2 = (undefined8 *)(*(long *)(this + 0x3c0) + lVar19);
                lVar19 = lVar19 + 0x48;
                uVar25 = *puVar2;
                puVar16[1] = puVar2[1];
                *puVar16 = uVar25;
                uVar50 = puVar2[4];
                uVar49 = puVar2[7];
                uVar48 = puVar2[6];
                uVar25 = puVar2[8];
                uVar55 = puVar2[3];
                uVar54 = puVar2[2];
                puVar16[5] = puVar2[5];
                puVar16[4] = uVar50;
                puVar16[7] = uVar49;
                puVar16[6] = uVar48;
                puVar16[8] = uVar25;
                puVar16[3] = uVar55;
                puVar16[2] = uVar54;
              } while ((ulong)uVar29 * 0x48 - lVar19 != 0);
            }
            if ((*(long *)(this + 0x3c0) != 0) && (this[0x3c8] != (btSoftBody)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            uVar29 = *(uint *)(this + 0x3b4);
            this[0x3c8] = (btSoftBody)0x1;
            *(long *)(this + 0x3c0) = lVar17;
            *(int *)(this + 0x3b8) = iVar11;
          }
        }
        puVar16 = (undefined8 *)(lVar17 + (long)(int)uVar29 * 0x48);
        lVar19 = (long)*(int *)((long)&local_110 + lVar37 * 4);
        *puVar16 = uVar38;
        puVar16[1] = uVar39;
        lVar40 = lVar19 * 0x78;
        puVar16[3] = uStack_f8;
        puVar16[2] = local_100;
        puVar16[5] = uStack_e8;
        puVar16[4] = local_f0;
        puVar16[7] = uStack_d8;
        puVar16[6] = local_e0;
        puVar16[8] = local_d0;
        lVar37 = *(long *)(this + 0x3c0) + (long)(int)uVar34 * 0x48;
        lVar17 = *(long *)(this + 0x3c0) + (long)*(int *)(this + 0x3b4) * 0x48;
        *(int *)(this + 0x3b4) = *(int *)(this + 0x3b4) + 1;
        *(long *)(lVar37 + 0x10) = *(long *)(this + 0x380) + lVar40;
        lVar24 = *(long *)(lVar37 + 8);
        *(long *)(lVar37 + 0x18) = *(long *)(this + 0x380) + (long)(int)uVar20 * 0x78;
        *(long *)(lVar37 + 0x20) = *(long *)(this + 0x380) + (long)iVar41 * 0x78;
        *(long *)(lVar17 + 0x10) = *(long *)(this + 0x380) + (long)iVar41 * 0x78;
        *(long *)(lVar17 + 0x18) = *(long *)(this + 0x380) + (long)(int)uVar33 * 0x78;
        *(long *)(lVar17 + 0x20) = *(long *)(this + 0x380) + lVar40;
        lVar17 = *(long *)(this + 0x380);
        if (lVar24 == 0) {
          lVar24 = **(long **)(this + 0x480);
        }
        uVar45 = *(uint *)(this + 0x394);
        if (uVar45 == *(uint *)(this + 0x398)) {
          iVar11 = uVar45 << 1;
          if (uVar45 == 0) {
            iVar11 = 1;
          }
          if ((int)uVar45 < iVar11) {
            if (iVar11 == 0) {
              lVar37 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar37 = (*(code *)PTR_FUN_01048e38)((long)iVar11 * 0x48,0x10);
              uVar45 = *(uint *)(this + 0x394);
            }
            if (0 < (int)uVar45) {
              lVar27 = 0;
              do {
                puVar16 = (undefined8 *)(lVar37 + lVar27);
                puVar2 = (undefined8 *)(*(long *)(this + 0x3a0) + lVar27);
                lVar27 = lVar27 + 0x48;
                uVar38 = *puVar2;
                puVar16[1] = puVar2[1];
                *puVar16 = uVar38;
                uVar48 = puVar2[4];
                uVar25 = puVar2[7];
                uVar39 = puVar2[6];
                uVar38 = puVar2[8];
                uVar50 = puVar2[3];
                uVar49 = puVar2[2];
                puVar16[5] = puVar2[5];
                puVar16[4] = uVar48;
                puVar16[7] = uVar25;
                puVar16[6] = uVar39;
                puVar16[8] = uVar38;
                puVar16[3] = uVar50;
                puVar16[2] = uVar49;
              } while ((ulong)uVar45 * 0x48 - lVar27 != 0);
            }
            if ((*(long *)(this + 0x3a0) != 0) && (this[0x3a8] != (btSoftBody)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            *(int *)(this + 0x398) = iVar11;
            uVar45 = *(uint *)(this + 0x394);
            this[0x3a8] = (btSoftBody)0x1;
            *(long *)(this + 0x3a0) = lVar37;
          }
        }
        lVar27 = lVar17 + lVar19 * 0x78;
        uVar34 = uVar34 - 1;
        puVar16 = (undefined8 *)(*(long *)(this + 0x3a0) + (long)(int)uVar45 * 0x48);
        *puVar16 = 0;
        puVar16[1] = lVar24;
        puVar16[3] = 0;
        puVar16[2] = 0;
        puVar16[5] = 0;
        puVar16[4] = 0;
        puVar16[7] = 0;
        puVar16[6] = 0;
        puVar16[8] = 0;
        uVar45 = *(int *)(this + 0x394) + 1;
        lVar37 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
        lVar19 = lVar17 + (long)iVar41 * 0x78;
        *(uint *)(this + 0x394) = uVar45;
        *(long *)(lVar37 + 0x10) = lVar17 + (long)iVar41 * 0x78;
        *(long *)(lVar37 + 0x18) = lVar17 + lVar40;
        fVar43 = *(float *)(lVar19 + 0x10) - *(float *)(lVar27 + 0x10);
        fVar44 = *(float *)(lVar19 + 0x14) - *(float *)(lVar27 + 0x14);
        fVar53 = *(float *)(lVar19 + 0x18) - *(float *)(lVar27 + 0x18);
        uVar47 = NEON_fmadd(fVar44,fVar44,fVar43 * fVar43);
        fVar43 = (float)NEON_fmadd(fVar53,fVar53,uVar47);
        *(float *)(lVar37 + 0x20) = SQRT(fVar43);
        uVar29 = *(uint *)(this + 0x3b4);
        this[0x4b4] = (btSoftBody)0x1;
      }
      uVar34 = uVar34 + 1;
    } while ((int)uVar34 < (int)uVar29);
  }
  if (!param_3) goto LAB_00f85804;
  uVar29 = *(uint *)(this + 0x374);
  if ((int)uVar29 < 1) {
    __s = (void *)0x0;
  }
  else {
    sVar36 = (ulong)uVar29 << 2;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s = (void *)(*(code *)PTR_FUN_01048e38)(sVar36,0x10);
    memset(__s,0,sVar36);
    lVar35 = 0;
    uVar12 = 0;
    do {
      lVar17 = *(long *)(this + 0x380);
      uStack_f8 = *(ulong *)(lVar17 + lVar35 + 0x18);
      local_100 = *(undefined8 *)(lVar17 + lVar35 + 0x10);
      if ((long)uVar12 < (long)(int)uVar5) {
        fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))(param_1,&local_100);
        if (ABS(fVar43) < param_2) {
          lVar17 = *(long *)(this + 0x380);
          goto LAB_00f85254;
        }
      }
      else {
LAB_00f85254:
        lVar17 = lVar17 + lVar35;
        fVar44 = *(float *)(lVar17 + 0x60);
        uStack_108 = *(undefined8 *)(lVar17 + 0x38);
        local_110 = *(undefined8 *)(lVar17 + 0x30);
        fVar43 = 1.0 / fVar44;
        if (fVar44 <= 0.0) {
          fVar43 = 0.0;
        }
        if (0.0 < fVar43) {
          fVar43 = fVar43 * 0.5;
          *(float *)(lVar17 + 0x60) = fVar44 + fVar44;
        }
        appendNode(this,(btVector3 *)&local_100,fVar43);
        iVar11 = *(int *)(this + 0x374);
        *(int *)((long)__s + uVar12 * 4) = (int)((long)iVar11 + -1);
        lVar17 = *(long *)(this + 0x380) + ((long)iVar11 + -1) * 0x78;
        *(undefined8 *)(lVar17 + 0x38) = uStack_108;
        *(undefined8 *)(lVar17 + 0x30) = local_110;
      }
      uVar12 = uVar12 + 1;
      lVar35 = lVar35 + 0x78;
    } while (uVar29 != uVar12);
    uVar45 = *(uint *)(this + 0x394);
  }
  lVar35 = *(long *)(this + 0x380);
  if (0 < (int)uVar45) {
    lVar17 = 0;
    uVar12 = 0;
    do {
      uVar30 = (*(long *)(*(long *)(this + 0x3a0) + lVar17 + 0x10) - lVar35 >> 3) *
               -0x1111111111111111;
      uVar31 = (*(long *)(*(long *)(this + 0x3a0) + lVar17 + 0x18) - lVar35 >> 3) *
               -0x1111111111111111;
      iVar11 = (int)uVar12;
      if ((*(int *)((long)__s +
                   (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2)) == 0)
         || (*(int *)((long)__s +
                     (-(uVar31 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar31 & 0xffffffff) << 2)) == 0
            )) {
        fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                  (param_1,*(long *)(this + 0x380) + (long)(int)uVar30 * 0x78 + 0x10
                                  );
        if ((fVar43 < param_2) &&
           (fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                      (param_1,*(long *)(this + 0x380) + (long)(int)uVar31 * 0x78 +
                                               0x10), fVar43 < param_2)) goto joined_r0x00f85398;
      }
      else {
        appendLink(this,iVar11,(Material *)0x0);
        iVar11 = *(int *)(this + 0x394) + -1;
joined_r0x00f85398:
        if (iVar11 != 0) {
          lVar37 = *(long *)(this + 0x3a0);
          plVar21 = (long *)(lVar37 + (long)iVar11 * 0x48 + 0x10);
          uVar5 = (int)((ulong)(*plVar21 - lVar35) >> 3) * -0x11111111;
          iVar32 = *(int *)((long)__s +
                           (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
          if (iVar32 != 0) {
            *plVar21 = *(long *)(this + 0x380) + (long)iVar32 * 0x78;
          }
          plVar21 = (long *)(lVar37 + (long)iVar11 * 0x48 + 0x18);
          uVar5 = (int)((ulong)(*plVar21 - lVar35) >> 3) * -0x11111111;
          iVar11 = *(int *)((long)__s +
                           (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
          if (iVar11 != 0) {
            *plVar21 = *(long *)(this + 0x380) + (long)iVar11 * 0x78;
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + 0x48;
    } while (uVar45 != uVar12);
  }
  uVar5 = *(uint *)(this + 0x3b4);
  if (0 < (int)uVar5) {
    lVar17 = 0;
    do {
      lVar19 = *(long *)(this + 0x3c0);
      lVar37 = lVar19 + lVar17;
      fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                (param_1,*(long *)(lVar37 + 0x10) + 0x10);
      if ((fVar43 < param_2) &&
         (fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                    (param_1,*(long *)(lVar37 + 0x18) + 0x10), fVar43 < param_2)) {
        lVar19 = lVar19 + lVar17;
        fVar43 = (float)(**(code **)(*(long *)param_1 + 0x10))
                                  (param_1,*(long *)(lVar19 + 0x20) + 0x10);
        if (fVar43 < param_2) {
          uVar45 = (int)((ulong)(*(long *)(lVar37 + 0x10) - lVar35) >> 3) * -0x11111111;
          iVar11 = *(int *)((long)__s +
                           (-(ulong)(uVar45 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar45 << 2));
          if (iVar11 != 0) {
            *(long *)(lVar37 + 0x10) = *(long *)(this + 0x380) + (long)iVar11 * 0x78;
          }
          uVar45 = (int)((ulong)(*(long *)(lVar37 + 0x18) - lVar35) >> 3) * -0x11111111;
          iVar11 = *(int *)((long)__s +
                           (-(ulong)(uVar45 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar45 << 2));
          if (iVar11 != 0) {
            *(long *)(lVar37 + 0x18) = *(long *)(this + 0x380) + (long)iVar11 * 0x78;
          }
          uVar45 = (int)((ulong)(*(long *)(lVar19 + 0x20) - lVar35) >> 3) * -0x11111111;
          iVar11 = *(int *)((long)__s +
                           (-(ulong)(uVar45 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar45 << 2));
          if (iVar11 != 0) {
            *(long *)(lVar19 + 0x20) = *(long *)(this + 0x380) + (long)iVar11 * 0x78;
          }
        }
      }
      lVar17 = lVar17 + 0x48;
    } while ((ulong)uVar5 * 0x48 - lVar17 != 0);
  }
  if ((int)*(uint *)(this + 0x374) < 1) {
    __s_00 = (void *)0x0;
  }
  else {
    sVar36 = (ulong)*(uint *)(this + 0x374) << 2;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s_00 = (void *)(*(code *)PTR_FUN_01048e38)(sVar36,0x10);
    memset(__s_00,0,sVar36);
  }
  uVar12 = (ulong)*(uint *)(this + 0x394);
  lVar17 = *(long *)(this + 0x3a0);
  if (0 < (int)*(uint *)(this + 0x394)) {
    plVar21 = (long *)(lVar17 + 0x18);
    do {
      uVar12 = uVar12 - 1;
      uVar5 = (int)((ulong)(plVar21[-1] - lVar35) >> 3) * -0x11111111;
      uVar30 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      *(int *)((long)__s_00 + uVar30) = *(int *)((long)__s_00 + uVar30) + 1;
      uVar5 = (int)((ulong)(*plVar21 - lVar35) >> 3) * -0x11111111;
      uVar30 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      *(int *)((long)__s_00 + uVar30) = *(int *)((long)__s_00 + uVar30) + 1;
      plVar21 = plVar21 + 9;
    } while (uVar12 != 0);
  }
  uVar12 = (ulong)*(uint *)(this + 0x3b4);
  if (0 < (int)*(uint *)(this + 0x3b4)) {
    plVar21 = (long *)(*(long *)(this + 0x3c0) + 0x20);
    do {
      uVar12 = uVar12 - 1;
      uVar5 = (int)((ulong)(plVar21[-2] - lVar35) >> 3) * -0x11111111;
      uVar30 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      *(int *)((long)__s_00 + uVar30) = *(int *)((long)__s_00 + uVar30) + 1;
      uVar5 = (int)((ulong)(plVar21[-1] - lVar35) >> 3) * -0x11111111;
      uVar30 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      *(int *)((long)__s_00 + uVar30) = *(int *)((long)__s_00 + uVar30) + 1;
      uVar5 = (int)((ulong)(*plVar21 - lVar35) >> 3) * -0x11111111;
      uVar30 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      *(int *)((long)__s_00 + uVar30) = *(int *)((long)__s_00 + uVar30) + 1;
      plVar21 = plVar21 + 9;
    } while (uVar12 != 0);
  }
  iVar11 = *(int *)(this + 0x394);
  if (iVar11 < 1) {
    if (__s_00 != (void *)0x0) goto LAB_00f857b4;
  }
  else {
    iVar32 = 0;
    while( true ) {
      lVar37 = lVar17 + (long)iVar32 * 0x48;
      uVar30 = (*(long *)(lVar37 + 0x10) - lVar35 >> 3) * -0x1111111111111111;
      uVar12 = (*(long *)(lVar37 + 0x18) - lVar35 >> 3) * -0x1111111111111111;
      iVar41 = *(int *)((long)__s_00 +
                       (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2)) +
               -1;
      if (iVar41 == 0 ||
          *(int *)((long)__s_00 +
                  (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar12 & 0xffffffff) << 2)) == 1) {
        lVar37 = (long)(int)uVar12 * 4;
        lVar19 = (long)iVar32;
        iVar32 = iVar32 + -1;
        *(int *)((long)__s_00 + (long)(int)uVar30 * 4) = iVar41;
        puVar16 = (undefined8 *)(lVar17 + lVar19 * 0x48);
        *(int *)((long)__s_00 + lVar37) = *(int *)((long)__s_00 + lVar37) + -1;
        uStack_e8 = puVar16[3];
        local_f0 = puVar16[2];
        uStack_d8 = puVar16[5];
        local_e0 = puVar16[4];
        lVar17 = lVar17 + (long)*(int *)(this + 0x394) * 0x48;
        uStack_c8 = puVar16[7];
        local_d0 = puVar16[6];
        local_c0 = puVar16[8];
        uStack_f8 = puVar16[1];
        local_100 = *puVar16;
        uVar38 = *(undefined8 *)(lVar17 + -0x48);
        puVar16[1] = *(undefined8 *)(lVar17 + -0x40);
        *puVar16 = uVar38;
        uVar39 = *(undefined8 *)(lVar17 + -0x10);
        uVar38 = *(undefined8 *)(lVar17 + -0x18);
        uVar48 = *(undefined8 *)(lVar17 + -0x30);
        uVar25 = *(undefined8 *)(lVar17 + -0x38);
        uVar50 = *(undefined8 *)(lVar17 + -0x20);
        uVar49 = *(undefined8 *)(lVar17 + -0x28);
        puVar16[8] = *(undefined8 *)(lVar17 + -8);
        puVar16[3] = uVar48;
        puVar16[2] = uVar25;
        puVar16[5] = uVar50;
        puVar16[4] = uVar49;
        puVar16[7] = uVar39;
        puVar16[6] = uVar38;
        *(ulong *)(lVar17 + -0x40) = uStack_f8;
        *(undefined8 *)(lVar17 + -0x48) = local_100;
        *(undefined8 *)(lVar17 + -8) = local_c0;
        *(undefined8 *)(lVar17 + -0x10) = uStack_c8;
        *(undefined8 *)(lVar17 + -0x18) = local_d0;
        *(undefined8 *)(lVar17 + -0x20) = uStack_d8;
        *(undefined8 *)(lVar17 + -0x28) = local_e0;
        *(undefined8 *)(lVar17 + -0x30) = uStack_e8;
        *(undefined8 *)(lVar17 + -0x38) = local_f0;
        iVar11 = *(int *)(this + 0x394) + -1;
        *(int *)(this + 0x394) = iVar11;
      }
      iVar32 = iVar32 + 1;
      if (iVar11 <= iVar32) break;
      lVar17 = *(long *)(this + 0x3a0);
    }
LAB_00f857b4:
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(__s_00);
  }
  if (__s != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(__s);
  }
LAB_00f85804:
  this[0x4b4] = (btSoftBody)0x1;
  if (lVar10 != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(lVar10);
  }
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


