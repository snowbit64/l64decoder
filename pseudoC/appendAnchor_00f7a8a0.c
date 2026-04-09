// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendAnchor
// Entry Point: 00f7a8a0
// Size: 180 bytes
// Signature: undefined __thiscall appendAnchor(btSoftBody * this, int param_1, btRigidBody * param_2, bool param_3, float param_4)


/* btSoftBody::appendAnchor(int, btRigidBody*, bool, float) */

void __thiscall
btSoftBody::appendAnchor
          (btSoftBody *this,int param_1,btRigidBody *param_2,bool param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  lVar2 = *(long *)(this + 0x380) + (long)param_1 * 0x78;
  fVar3 = *(float *)(lVar2 + 0x10) - *(float *)(param_2 + 0x38);
  fVar5 = *(float *)(lVar2 + 0x14) - *(float *)(param_2 + 0x3c);
  fVar6 = *(float *)(lVar2 + 0x18) - *(float *)(param_2 + 0x40);
  uVar4 = NEON_fmadd(fVar5,*(undefined4 *)(param_2 + 0x20),fVar3 * *(float *)(param_2 + 0x10));
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar3 +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar5 +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) * fVar6,
                      (float)*(undefined8 *)(param_2 + 8) * fVar3 +
                      (float)*(undefined8 *)(param_2 + 0x18) * fVar5 +
                      (float)*(undefined8 *)(param_2 + 0x28) * fVar6);
  local_30 = NEON_fmadd(fVar6,*(undefined4 *)(param_2 + 0x30),uVar4);
  appendAnchor(this,param_1,param_2,(btVector3 *)&local_38,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


