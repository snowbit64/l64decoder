// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointPosition
// Entry Point: 009a8a08
// Size: 636 bytes
// Signature: undefined __thiscall enqueueSetLightJointPosition(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, Vector3 * param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointPosition(unsigned int, unsigned int, Vector3
   const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetLightJointPosition
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,Vector3 *param_3)

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
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  uint local_78;
  undefined4 local_74;
  uint uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
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
        fVar11 = *(float *)(param_3 + 4) - *(float *)(lVar10 + 0xec);
        fVar14 = *(float *)param_3 - *(float *)(lVar10 + 0xe8);
        fVar15 = *(float *)(param_3 + 8) - *(float *)(lVar10 + 0xf0);
        local_74 = 4;
        uVar13 = NEON_fmadd(fVar14,*(undefined4 *)(lVar10 + 0xb8),fVar11 * *(float *)(lVar10 + 0xbc)
                           );
        uVar16 = NEON_fmadd(fVar14,*(undefined4 *)(lVar10 + 200),fVar11 * *(float *)(lVar10 + 0xcc))
        ;
        uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar10 + 0xd8),fVar11 * *(float *)(lVar10 + 0xdc)
                           );
        local_6c = NEON_fmadd(fVar15,*(undefined4 *)(lVar10 + 0xc0),uVar13);
        uStack_68 = NEON_fmadd(fVar15,*(undefined4 *)(lVar10 + 0xd0),uVar16);
        local_64 = NEON_fmadd(fVar15,*(undefined4 *)(lVar10 + 0xe0),uVar12);
        local_78 = param_1;
        uStack_70 = param_2;
        if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
          setJointPosition(this,param_1,(SetJointPosition *)&uStack_70);
        }
        else {
          SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u>::push_back
                    ((SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> *)
                     (this + 0x208),(JointCommand *)&local_78);
        }
      }
      goto LAB_009a8c40;
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
        }
        else {
          RawTransformGroup::updateWorldTransformation();
          fVar11 = *(float *)(param_3 + 4) - *(float *)(lVar8 + 0xec);
          fVar14 = *(float *)param_3 - *(float *)(lVar8 + 0xe8);
          lVar9 = lVar10 + (ulong)param_2 * 0xc + lVar9;
          fVar15 = *(float *)(param_3 + 8) - *(float *)(lVar8 + 0xf0);
          uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 0xb8),fVar11 * *(float *)(lVar8 + 0xbc)
                             );
          uVar12 = NEON_fmadd(fVar15,*(undefined4 *)(lVar8 + 0xc0),uVar12);
          *(undefined4 *)(lVar9 + 0x18) = uVar12;
          uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 200),fVar11 * *(float *)(lVar8 + 0xcc))
          ;
          uVar12 = NEON_fmadd(fVar15,*(undefined4 *)(lVar8 + 0xd0),uVar12);
          *(undefined4 *)(lVar9 + 0x1c) = uVar12;
          uVar12 = NEON_fmadd(fVar14,*(undefined4 *)(lVar8 + 0xd8),fVar11 * *(float *)(lVar8 + 0xdc)
                             );
          uVar12 = NEON_fmadd(fVar15,*(undefined4 *)(lVar8 + 0xe0),uVar12);
          *(undefined4 *)(lVar9 + 0x20) = uVar12;
        }
        break;
      }
      lVar9 = lVar9 + 0x160;
    } while ((uVar4 & 0xffffffff) * 0x160 - lVar9 != 0);
  }
LAB_009a8c40:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


