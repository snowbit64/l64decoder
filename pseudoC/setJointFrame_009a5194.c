// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointFrame
// Entry Point: 009a5194
// Size: 304 bytes
// Signature: undefined __thiscall setJointFrame(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointFrame * param_2)


/* Bt2ScenegraphPhysicsContext::setJointFrame(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointFrame const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointFrame
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointFrame *param_2)

{
  float *pfVar1;
  int iVar2;
  DynamicMotionState *this_00;
  Bt2ScenegraphPhysicsContext *pBVar3;
  long lVar4;
  Bt2ScenegraphPhysicsContext *pBVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pBVar5 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar3 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar5 + 0x20) >= param_1) {
        pBVar3 = pBVar5;
      }
      pBVar5 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar5 + (ulong)(*(uint *)(pBVar5 + 0x20) < param_1) * 8);
    } while (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar3 != this + 0x1c8) && (*(uint *)(pBVar3 + 0x20) <= param_1)) {
      fVar11 = *(float *)(param_2 + 0x20);
      fVar7 = *(float *)(param_2 + 0x24);
      fVar10 = *(float *)(param_2 + 0x14);
      fVar13 = *(float *)(param_2 + 0x18);
      lVar6 = *(long *)(pBVar3 + 0x30);
      iVar2 = *(int *)param_2;
      fVar12 = *(float *)(param_2 + 0x1c);
      fVar14 = *(float *)(param_2 + 0x10);
      pfVar1 = (float *)(lVar6 + 0x48);
      if (iVar2 != 0) {
        pfVar1 = (float *)(lVar6 + 0x88);
      }
      *pfVar1 = fVar12;
      lVar4 = 0x28;
      if (iVar2 != 0) {
        lVar4 = 0x30;
      }
      fVar15 = *(float *)(param_2 + 0x10);
      pfVar1[3] = 0.0;
      fVar9 = (float)NEON_fmadd(fVar11,fVar13,fVar10 * -fVar7);
      lVar4 = *(long *)(lVar6 + lVar4);
      pfVar1[1] = fVar15;
      pfVar1[2] = fVar9;
      pfVar1[4] = *(float *)(param_2 + 0x20);
      fVar7 = (float)NEON_fmadd(fVar7,fVar14,fVar13 * -fVar12);
      fVar13 = *(float *)(param_2 + 0x14);
      pfVar1[7] = 0.0;
      pfVar1[5] = fVar13;
      pfVar1[6] = fVar7;
      pfVar1[8] = *(float *)(param_2 + 0x24);
      fVar7 = (float)NEON_fmadd(fVar12,fVar10,fVar14 * -fVar11);
      fVar10 = *(float *)(param_2 + 0x18);
      pfVar1[0xb] = 0.0;
      pfVar1[9] = fVar10;
      pfVar1[10] = fVar7;
      uVar8 = *(undefined8 *)(param_2 + 4);
      fVar7 = *(float *)(param_2 + 0xc);
      pfVar1[0xf] = 0.0;
      *(undefined8 *)(pfVar1 + 0xc) = uVar8;
      pfVar1[0xe] = fVar7;
      if (((*(byte *)(lVar4 + 0xe0) & 1) == 0) &&
         (this_00 = *(DynamicMotionState **)(lVar4 + 0x228), this_00 != (DynamicMotionState *)0x0))
      {
        DynamicMotionState::applyLocalTransformToBody(this_00,(btTransform *)pfVar1);
      }
      btCollisionObject::activate(*(btCollisionObject **)(lVar6 + 0x28),false);
      btCollisionObject::activate(*(btCollisionObject **)(lVar6 + 0x30),false);
      return;
    }
  }
  return;
}


