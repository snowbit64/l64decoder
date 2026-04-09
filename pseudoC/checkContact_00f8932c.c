// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkContact
// Entry Point: 00f8932c
// Size: 352 bytes
// Signature: undefined __thiscall checkContact(btSoftBody * this, btCollisionObjectWrapper * param_1, btVector3 * param_2, float param_3, sCti * param_4)


/* btSoftBody::checkContact(btCollisionObjectWrapper const*, btVector3 const&, float,
   btSoftBody::sCti&) const */

void __thiscall
btSoftBody::checkContact
          (btSoftBody *this,btCollisionObjectWrapper *param_1,btVector3 *param_2,float param_3,
          sCti *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  fVar3 = *(float *)param_2 - *(float *)(puVar2 + 6);
  fVar6 = *(float *)(param_2 + 4) - *(float *)((long)puVar2 + 0x34);
  fVar8 = *(float *)(param_2 + 8) - *(float *)(puVar2 + 7);
  local_5c = 0;
  uVar4 = NEON_fmadd(*(undefined4 *)(puVar2 + 3),fVar6,*(float *)(puVar2 + 1) * fVar3);
  local_68 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar3 +
                      (float)((ulong)puVar2[2] >> 0x20) * fVar6 +
                      (float)((ulong)puVar2[4] >> 0x20) * fVar8,
                      (float)*puVar2 * fVar3 + (float)puVar2[2] * fVar6 + (float)puVar2[4] * fVar8);
  local_60 = NEON_fmadd(*(undefined4 *)(puVar2 + 5),fVar8,uVar4);
  fVar3 = (float)btSparseSdf<3>::Evaluate
                           ((btSparseSdf<3> *)(*(long *)(this + 0x348) + 0x40),
                            (btVector3 *)&local_68,*(btCollisionShape **)(param_1 + 8),
                            (btVector3 *)&local_58,param_3);
  if (fVar3 < 0.0) {
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = NEON_fmadd(uStack_54,*(undefined4 *)((long)puVar2 + 4),local_58 * *(float *)puVar2);
    uVar10 = *(undefined4 *)(puVar2 + 1);
    uVar9 = NEON_fmadd(*(undefined4 *)((long)puVar2 + 0x14),uStack_54,
                       *(float *)(puVar2 + 2) * local_58);
    uVar11 = *(undefined4 *)(puVar2 + 5);
    uVar4 = NEON_fmadd(*(undefined4 *)((long)puVar2 + 0x24),uStack_54,
                       *(float *)(puVar2 + 4) * local_58);
    uVar5 = *(undefined4 *)(puVar2 + 3);
    *(undefined4 *)(param_4 + 0x14) = 0;
    fVar6 = (float)NEON_fmadd(local_50,uVar10,uVar7);
    uVar5 = NEON_fmadd(uVar5,local_50,uVar9);
    uVar4 = NEON_fmadd(uVar11,local_50,uVar4);
    *(float *)(param_4 + 8) = fVar6;
    *(undefined4 *)(param_4 + 0xc) = uVar5;
    *(undefined4 *)(param_4 + 0x10) = uVar4;
    fVar8 = (float)NEON_fnmsub(fVar6,fVar3,*(undefined4 *)param_2);
    uVar9 = NEON_fnmsub(uVar5,fVar3,*(undefined4 *)(param_2 + 4));
    uVar7 = NEON_fnmsub(uVar4,fVar3,*(undefined4 *)(param_2 + 8));
    uVar5 = NEON_fmadd(uVar9,uVar5,fVar8 * fVar6);
    uVar4 = NEON_fmadd(uVar7,uVar4,uVar5);
    *(undefined4 *)(param_4 + 0x18) = uVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 < 0.0);
}


