// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointFrame
// Entry Point: 009a8624
// Size: 996 bytes
// Signature: undefined __thiscall enqueueSetLightJointFrame(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointFrame(unsigned int, unsigned int, Vector3
   const&, Vector3 const&, Vector3 const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointFrame
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,Vector3 *param_3,
          Vector3 *param_4,Vector3 *param_5)

{
  long *plVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  ulong uVar4;
  byte *pbVar5;
  Bt2ScenegraphPhysicsContext *pBVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pBVar6 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar6 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar3 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar6 + 0x20) >= param_1) {
        pBVar3 = pBVar6;
      }
      pBVar6 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar6 + (ulong)(*(uint *)(pBVar6 + 0x20) < param_1) * 8);
    } while (pBVar6 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar3 != this + 0x1c8) && (*(uint *)(pBVar3 + 0x20) <= param_1)) {
      plVar1 = (long *)(*(long *)(pBVar3 + 0x30) + 0x28);
      if (param_2 != 0) {
        plVar1 = (long *)(*(long *)(pBVar3 + 0x30) + 0x30);
      }
      pbVar5 = *(byte **)(*plVar1 + 0x108);
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 1) != 0)) {
        lVar10 = *(long *)(pbVar5 + 8);
        RawTransformGroup::updateWorldTransformation();
        uVar12 = *(undefined4 *)param_4;
        fVar22 = *(float *)(param_4 + 4);
        fVar13 = *(float *)(param_3 + 4) - *(float *)(lVar10 + 0xec);
        fVar11 = *(float *)param_3 - *(float *)(lVar10 + 0xe8);
        uVar15 = *(undefined4 *)(lVar10 + 0xb8);
        fVar18 = *(float *)(lVar10 + 0xbc);
        uVar19 = *(undefined4 *)(lVar10 + 200);
        fVar14 = *(float *)(lVar10 + 0xcc);
        fVar16 = *(float *)(param_3 + 8) - *(float *)(lVar10 + 0xf0);
        uVar27 = *(undefined4 *)(lVar10 + 0xc0);
        uVar23 = *(undefined4 *)(lVar10 + 0xd8);
        fVar17 = *(float *)(lVar10 + 0xdc);
        uVar28 = *(undefined4 *)(lVar10 + 0xd0);
        uStack_84 = 3;
        uVar24 = NEON_fmadd(uVar12,uVar15,fVar18 * fVar22);
        uVar29 = *(undefined4 *)(param_4 + 8);
        uVar26 = NEON_fmadd(uVar12,uVar19,fVar14 * fVar22);
        uVar20 = NEON_fmadd(fVar11,uVar15,fVar13 * fVar18);
        uVar25 = NEON_fmadd(fVar11,uVar19,fVar13 * fVar14);
        uVar31 = *(undefined4 *)(lVar10 + 0xe0);
        uVar21 = NEON_fmadd(uVar12,uVar23,fVar17 * fVar22);
        uVar12 = NEON_fmadd(fVar11,uVar23,fVar13 * fVar17);
        uVar30 = *(undefined4 *)param_5;
        fVar11 = *(float *)(param_5 + 4);
        local_64 = NEON_fmadd(uVar29,uVar27,uVar24);
        uStack_60 = NEON_fmadd(uVar29,uVar28,uVar26);
        local_7c = NEON_fmadd(fVar16,uVar27,uVar20);
        local_5c = NEON_fmadd(uVar29,uVar31,uVar21);
        local_74 = NEON_fmadd(fVar16,uVar31,uVar12);
        uStack_78 = NEON_fmadd(fVar16,uVar28,uVar25);
        uVar15 = NEON_fmadd(uVar30,uVar15,fVar18 * fVar11);
        uVar12 = NEON_fmadd(uVar30,uVar19,fVar14 * fVar11);
        uVar19 = NEON_fmadd(uVar30,uVar23,fVar17 * fVar11);
        uVar20 = *(undefined4 *)(param_5 + 8);
        uStack_70 = NEON_fmadd(uVar20,uVar27,uVar15);
        local_6c = NEON_fmadd(uVar20,uVar28,uVar12);
        uStack_68 = NEON_fmadd(uVar20,uVar31,uVar19);
        local_88 = param_1;
        local_80 = param_2;
        if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
          setJointFrame(this,param_1,(SetJointFrame *)&local_80);
        }
        else {
          SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u>::push_back
                    ((SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> *)
                     (this + 0x208),(JointCommand *)&local_88);
        }
      }
      goto LAB_009a89c0;
    }
  }
  lVar10 = *(long *)(this + 0x1d8);
  uVar4 = (*(long *)(this + 0x1e0) - lVar10 >> 5) * 0xba2e8ba3;
  if ((int)uVar4 != 0) {
    lVar9 = 0;
    do {
      if (*(uint *)(lVar10 + lVar9) == param_1) {
        lVar8 = 8;
        if (param_2 != 0) {
          lVar8 = 0x10;
        }
        lVar8 = *(long *)(lVar10 + lVar9 + lVar8);
        if (lVar8 == 0) {
          uVar7 = *(undefined8 *)param_3;
          lVar9 = lVar10 + (ulong)param_2 * 0xc + lVar9;
          *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(param_3 + 8);
          *(undefined8 *)(lVar9 + 0x18) = uVar7;
          uVar7 = *(undefined8 *)param_4;
          *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(param_4 + 8);
          *(undefined8 *)(lVar9 + 0x48) = uVar7;
          uVar7 = *(undefined8 *)param_5;
          *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(param_5 + 8);
          *(undefined8 *)(lVar9 + 0x30) = uVar7;
        }
        else {
          RawTransformGroup::updateWorldTransformation();
          fVar11 = *(float *)(param_3 + 4) - *(float *)(lVar8 + 0xec);
          fVar13 = *(float *)param_3 - *(float *)(lVar8 + 0xe8);
          lVar9 = lVar10 + (ulong)param_2 * 0xc + lVar9;
          fVar14 = *(float *)(param_3 + 8) - *(float *)(lVar8 + 0xf0);
          uVar12 = NEON_fmadd(fVar13,*(undefined4 *)(lVar8 + 0xb8),fVar11 * *(float *)(lVar8 + 0xbc)
                             );
          uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 0xc0),uVar12);
          *(undefined4 *)(lVar9 + 0x18) = uVar12;
          uVar12 = NEON_fmadd(fVar13,*(undefined4 *)(lVar8 + 200),fVar11 * *(float *)(lVar8 + 0xcc))
          ;
          uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 0xd0),uVar12);
          *(undefined4 *)(lVar9 + 0x1c) = uVar12;
          uVar12 = NEON_fmadd(fVar13,*(undefined4 *)(lVar8 + 0xd8),fVar11 * *(float *)(lVar8 + 0xdc)
                             );
          uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 0xe0),uVar12);
          *(undefined4 *)(lVar9 + 0x20) = uVar12;
          uVar12 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(lVar8 + 0xb8),
                              *(float *)(param_4 + 4) * *(float *)(lVar8 + 0xbc));
          uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(lVar8 + 0xc0),uVar12);
          *(undefined4 *)(lVar9 + 0x48) = uVar12;
          uVar12 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(lVar8 + 200),
                              *(float *)(param_4 + 4) * *(float *)(lVar8 + 0xcc));
          uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(lVar8 + 0xd0),uVar12);
          *(undefined4 *)(lVar9 + 0x4c) = uVar12;
          uVar12 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(lVar8 + 0xd8),
                              *(float *)(param_4 + 4) * *(float *)(lVar8 + 0xdc));
          uVar12 = NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(lVar8 + 0xe0),uVar12);
          *(undefined4 *)(lVar9 + 0x50) = uVar12;
          uVar12 = NEON_fmadd(*(undefined4 *)param_5,*(undefined4 *)(lVar8 + 0xb8),
                              *(float *)(param_5 + 4) * *(float *)(lVar8 + 0xbc));
          uVar12 = NEON_fmadd(*(undefined4 *)(param_5 + 8),*(undefined4 *)(lVar8 + 0xc0),uVar12);
          *(undefined4 *)(lVar9 + 0x30) = uVar12;
          uVar12 = NEON_fmadd(*(undefined4 *)param_5,*(undefined4 *)(lVar8 + 200),
                              *(float *)(param_5 + 4) * *(float *)(lVar8 + 0xcc));
          uVar12 = NEON_fmadd(*(undefined4 *)(param_5 + 8),*(undefined4 *)(lVar8 + 0xd0),uVar12);
          *(undefined4 *)(lVar9 + 0x34) = uVar12;
          uVar12 = NEON_fmadd(*(undefined4 *)param_5,*(undefined4 *)(lVar8 + 0xd8),
                              *(float *)(param_5 + 4) * *(float *)(lVar8 + 0xdc));
          uVar12 = NEON_fmadd(*(undefined4 *)(param_5 + 8),*(undefined4 *)(lVar8 + 0xe0),uVar12);
          *(undefined4 *)(lVar9 + 0x38) = uVar12;
        }
        break;
      }
      lVar9 = lVar9 + 0x160;
    } while ((uVar4 & 0xffffffff) * 0x160 - lVar9 != 0);
  }
LAB_009a89c0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


