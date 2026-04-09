// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAnchor
// Entry Point: 009bb6f4
// Size: 1208 bytes
// Signature: undefined __thiscall setAnchor(Bt2Rope * this, uint param_1, btRigidBody * param_2, bool param_3, btVector3 * param_4, bool param_5)


/* Bt2Rope::setAnchor(unsigned int, btRigidBody*, bool, btVector3 const&, bool) */

void __thiscall
Bt2Rope::setAnchor(Bt2Rope *this,uint param_1,btRigidBody *param_2,bool param_3,btVector3 *param_4,
                  bool param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  btSoftBody *this_00;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  btRigidBody **ppbVar9;
  ulong uVar10;
  btRigidBody *pbVar11;
  long *plVar12;
  long lVar13;
  btRigidBody **ppbVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  long lStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_2 != (btRigidBody *)0x0) || (fVar15 = 0.0, !param_3)) {
    fVar15 = 1.0 / (*(float *)(this + 0x24) * *(float *)(this + 0x28));
  }
  this_00 = *(btSoftBody **)this;
  lVar7 = *(long *)(this_00 + 0x380);
  lVar6 = (long)(int)param_1;
  *(float *)(lVar7 + (long)(int)param_1 * 0x78 + 0x60) = fVar15;
  if (param_2 == (btRigidBody *)0x0) {
    if ((*(byte *)(lVar7 + lVar6 * 0x78 + 0x70) & 1) != 0) {
      uVar4 = *(uint *)(this_00 + 0x3f4);
      if (0 < (int)uVar4) {
        plVar5 = *(long **)(this_00 + 0x400);
        lVar13 = *plVar5;
        plVar12 = plVar5;
        if (lVar13 == lVar7 + lVar6 * 0x78) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar7 = lVar7 + 1;
            if ((int)uVar4 <= lVar7) goto LAB_009bbb80;
            plVar12 = plVar12 + 0xd;
            lVar13 = *plVar12;
          } while (lVar13 != *(long *)(this_00 + 0x380) + lVar6 * 0x78);
        }
        if (0 < (int)uVar4) {
          uVar8 = (ulong)uVar4;
          plVar5 = plVar5 + 3;
          lVar6 = lVar7;
          do {
            if ((lVar6 != 0) && (*plVar5 == 0)) goto LAB_009bba18;
            lVar6 = lVar6 + -1;
            plVar5 = plVar5 + 0xd;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar4 = *(uint *)(this_00 + 0x154);
        if (0 < (int)uVar4) {
          uVar8 = 0;
          lVar6 = *(long *)(this_00 + 0x160);
          do {
            if (*(long *)(lVar6 + uVar8 * 8) == 0) {
              if ((int)uVar8 < (int)uVar4) {
                uVar4 = uVar4 - 1;
                uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
                uVar3 = *(undefined8 *)(lVar6 + uVar8 * 8);
                *(undefined8 *)(lVar6 + uVar8 * 8) = *(undefined8 *)(lVar6 + uVar10);
                *(undefined8 *)(*(long *)(this_00 + 0x160) + uVar10) = uVar3;
                *(uint *)(this_00 + 0x154) = uVar4;
                lVar13 = *plVar12;
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar4 != uVar8);
        }
LAB_009bba18:
        *(byte *)(lVar13 + 0x70) = *(byte *)(lVar13 + 0x70) & 0xfe;
        lVar6 = *(long *)this;
        plVar12 = (long *)(*(long *)(lVar6 + 0x400) + lVar7 * 0x68);
        uStack_a8 = plVar12[1];
        local_b0 = *plVar12;
        lStack_98 = plVar12[3];
        local_a0 = plVar12[2];
        local_90 = *(undefined4 *)(plVar12 + 4);
        uStack_84 = *(undefined8 *)((long)plVar12 + 0x2c);
        local_8c = *(undefined8 *)((long)plVar12 + 0x24);
        uStack_74 = *(undefined8 *)((long)plVar12 + 0x3c);
        local_7c = *(undefined8 *)((long)plVar12 + 0x34);
        lVar7 = (long)*(int *)(lVar6 + 0x3f4) * 0x68 + -0x68;
        plVar5 = (long *)(*(long *)(lVar6 + 0x400) + lVar7);
        uStack_64 = *(undefined8 *)((long)plVar12 + 0x4c);
        local_6c = *(undefined8 *)((long)plVar12 + 0x44);
        local_4c = *(undefined4 *)((long)plVar12 + 100);
        uStack_54 = *(undefined8 *)((long)plVar12 + 0x5c);
        local_5c = *(undefined8 *)((long)plVar12 + 0x54);
        lVar13 = *plVar5;
        lVar20 = plVar5[3];
        lVar19 = plVar5[2];
        uVar16 = *(undefined4 *)(plVar5 + 4);
        plVar12[1] = plVar5[1];
        *plVar12 = lVar13;
        plVar12[3] = lVar20;
        plVar12[2] = lVar19;
        *(undefined4 *)(plVar12 + 4) = uVar16;
        uVar3 = *(undefined8 *)((long)plVar5 + 0x24);
        *(undefined8 *)((long)plVar12 + 0x2c) = *(undefined8 *)((long)plVar5 + 0x2c);
        *(undefined8 *)((long)plVar12 + 0x24) = uVar3;
        uVar3 = *(undefined8 *)((long)plVar5 + 0x34);
        *(undefined8 *)((long)plVar12 + 0x3c) = *(undefined8 *)((long)plVar5 + 0x3c);
        *(undefined8 *)((long)plVar12 + 0x34) = uVar3;
        uVar3 = *(undefined8 *)((long)plVar5 + 0x44);
        *(undefined8 *)((long)plVar12 + 0x4c) = *(undefined8 *)((long)plVar5 + 0x4c);
        *(undefined8 *)((long)plVar12 + 0x44) = uVar3;
        uVar3 = *(undefined8 *)((long)plVar5 + 0x54);
        uVar16 = *(undefined4 *)((long)plVar5 + 100);
        *(undefined8 *)((long)plVar12 + 0x5c) = *(undefined8 *)((long)plVar5 + 0x5c);
        *(undefined8 *)((long)plVar12 + 0x54) = uVar3;
        *(undefined4 *)((long)plVar12 + 100) = uVar16;
        plVar5 = (long *)(*(long *)(lVar6 + 0x400) + lVar7);
        *(undefined4 *)(plVar5 + 4) = local_90;
        plVar5[3] = lStack_98;
        plVar5[2] = local_a0;
        plVar5[1] = uStack_a8;
        *plVar5 = local_b0;
        *(undefined8 *)((long)plVar5 + 0x2c) = uStack_84;
        *(undefined8 *)((long)plVar5 + 0x24) = local_8c;
        *(undefined8 *)((long)plVar5 + 0x3c) = uStack_74;
        *(undefined8 *)((long)plVar5 + 0x34) = local_7c;
        *(undefined8 *)((long)plVar5 + 0x4c) = uStack_64;
        *(undefined8 *)((long)plVar5 + 0x44) = local_6c;
        *(undefined4 *)((long)plVar5 + 100) = local_4c;
        *(undefined8 *)((long)plVar5 + 0x5c) = uStack_54;
        *(undefined8 *)((long)plVar5 + 0x54) = local_5c;
        *(int *)(*(long *)this + 0x3f4) = *(int *)(*(long *)this + 0x3f4) + -1;
      }
    }
  }
  else {
    fVar15 = *(float *)(param_2 + 0x38);
    fVar23 = *(float *)param_4;
    fVar26 = *(float *)(param_4 + 4);
    fVar18 = -*(float *)(param_2 + 0x3c);
    fVar21 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar32 = *(float *)(param_4 + 8);
    lVar7 = lVar7 + lVar6 * 0x78;
    fVar27 = (float)*(undefined8 *)(param_2 + 8);
    fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar29 = *(float *)(param_2 + 0x40);
    uVar24 = NEON_fmadd(fVar23,*(undefined4 *)(param_2 + 0x10),*(float *)(param_2 + 0x20) * fVar26);
    uVar16 = NEON_fmsub(*(undefined4 *)(param_2 + 0x10),fVar15,*(float *)(param_2 + 0x20) * fVar18);
    fVar30 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    fVar25 = (float)NEON_fmadd(fVar32,*(undefined4 *)(param_2 + 0x30),uVar24);
    fVar17 = (float)NEON_fmsub(*(undefined4 *)(param_2 + 0x30),fVar29,uVar16);
    local_b0 = CONCAT44(((fVar22 * fVar18 - fVar28 * fVar15) - fVar31 * fVar29) +
                        fVar22 * fVar26 + fVar28 * fVar23 + fVar31 * fVar32,
                        ((fVar21 * fVar18 - fVar27 * fVar15) - fVar30 * fVar29) +
                        fVar21 * fVar26 + fVar27 * fVar23 + fVar30 * fVar32);
    uStack_a8 = (ulong)(uint)(fVar17 + fVar25);
    if ((*(byte *)(lVar7 + 0x70) & 1) == 0) {
      btSoftBody::appendAnchor(this_00,param_1,param_2,(btVector3 *)&local_b0,param_5,1.0);
    }
    else {
      uVar8 = (ulong)*(uint *)(this_00 + 0x3f4);
      if (0 < (int)*(uint *)(this_00 + 0x3f4)) {
        plVar5 = *(long **)(this_00 + 0x400);
        do {
          if (*plVar5 == lVar7) {
            plVar5[3] = (long)param_2;
            plVar5[2] = uStack_a8;
            plVar5[1] = local_b0;
            break;
          }
          plVar5 = plVar5 + 0xd;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      lVar6 = *(long *)this;
      uVar4 = *(uint *)(lVar6 + 0x154);
      uVar8 = (ulong)uVar4;
      ppbVar14 = *(btRigidBody ***)(lVar6 + 0x160);
      if (param_5) {
        uVar10 = uVar8;
        ppbVar9 = ppbVar14;
        if (0 < (int)uVar4) {
          do {
            if (*ppbVar9 == param_2) {
              if ((int)uVar10 != 0) goto LAB_009bbb80;
              break;
            }
            uVar10 = uVar10 - 1;
            ppbVar9 = ppbVar9 + 1;
          } while (uVar10 != 0);
        }
        if (uVar4 == *(uint *)(lVar6 + 0x158)) {
          uVar1 = uVar4 << 1;
          if (uVar4 == 0) {
            uVar1 = 1;
          }
          if ((int)uVar4 < (int)uVar1) {
            if (uVar1 == 0) {
              ppbVar14 = (btRigidBody **)0x0;
            }
            else {
              ppbVar14 = (btRigidBody **)
                         btAlignedAllocInternal
                                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
                                    ,0x10);
              uVar8 = (ulong)*(uint *)(lVar6 + 0x154);
            }
            uVar4 = (uint)uVar8;
            if (0 < (int)uVar4) {
              lVar7 = 0;
              do {
                *(undefined8 *)((long)ppbVar14 + lVar7) =
                     *(undefined8 *)(*(long *)(lVar6 + 0x160) + lVar7);
                lVar7 = lVar7 + 8;
              } while (uVar8 * 8 - lVar7 != 0);
            }
            if ((*(void **)(lVar6 + 0x160) != (void *)0x0) && (*(char *)(lVar6 + 0x168) != '\0')) {
              btAlignedFreeInternal(*(void **)(lVar6 + 0x160));
              uVar4 = *(uint *)(lVar6 + 0x154);
            }
            *(btRigidBody ***)(lVar6 + 0x160) = ppbVar14;
            *(uint *)(lVar6 + 0x158) = uVar1;
            *(undefined *)(lVar6 + 0x168) = 1;
          }
        }
        ppbVar14[(int)uVar4] = param_2;
        *(uint *)(lVar6 + 0x154) = uVar4 + 1;
      }
      else {
        uVar1 = uVar4 - 1;
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            if (ppbVar14[uVar10] == param_2) {
              if ((int)uVar10 < (int)uVar4) {
                uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
                pbVar11 = ppbVar14[uVar10];
                ppbVar14[uVar10] = *(btRigidBody **)((long)ppbVar14 + uVar8);
                *(btRigidBody **)(*(long *)(lVar6 + 0x160) + uVar8) = pbVar11;
                *(uint *)(lVar6 + 0x154) = uVar1;
              }
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
      }
    }
  }
LAB_009bbb80:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


