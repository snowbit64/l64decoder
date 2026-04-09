// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: aim
// Entry Point: 00a50dc0
// Size: 428 bytes
// Signature: undefined __thiscall aim(Camera * this, Vector3 * param_1, float param_2, float param_3, float param_4)


/* Camera::aim(Vector3&, float, float, float) */

void __thiscall Camera::aim(Camera *this,Vector3 *param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  fVar9 = (float)*(undefined8 *)(this + 0xe8) +
          (float)*(undefined8 *)(this + 200) * 0.0 + (float)*(undefined8 *)(this + 0xb8) * 0.0 +
          (float)*(undefined8 *)(this + 0xd8) * 0.0;
  fVar10 = (float)((ulong)*(undefined8 *)(this + 0xe8) >> 0x20) +
           (float)((ulong)*(undefined8 *)(this + 200) >> 0x20) * 0.0 +
           (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) * 0.0 +
           (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20) * 0.0;
  uVar4 = NEON_fmadd(*(undefined4 *)(this + 0xc0),0,*(float *)(this + 0xd0) * 0.0);
  fVar2 = fVar9 - (float)*(undefined8 *)param_1;
  fVar3 = fVar10 - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0xe0),0,uVar4);
  fVar5 = *(float *)(this + 0xf0) + fVar5;
  fVar6 = fVar5 - *(float *)(param_1 + 8);
  fVar7 = (float)NEON_fmadd(fVar6,fVar6,fVar3 * fVar3 + fVar2 * fVar2);
  if (0.001 < fVar7) {
    fVar8 = (float)NEON_fmadd(param_4,fVar7,(1.0 / fVar7) * 0.00065);
    fVar7 = (1.0 / fVar7) * fVar8 * param_3;
    fVar9 = fVar9 - fVar2 * fVar7;
    fVar10 = fVar10 - fVar3 * fVar7;
    fVar5 = fVar5 - fVar6 * fVar7;
  }
  RawTransformGroup::updateWorldTransformation();
  uStack_78 = *(undefined8 *)(this + 0xe0);
  local_80 = *(undefined8 *)(this + 0xd8);
  uStack_98 = *(undefined8 *)(this + 0xc0);
  local_a0 = *(undefined8 *)(this + 0xb8);
  uStack_88 = *(undefined8 *)(this + 0xd0);
  uStack_90 = *(undefined8 *)(this + 200);
  fVar3 = (float)((ulong)local_80 >> 0x20);
  fVar2 = (float)local_80;
  fVar7 = (float)NEON_fmadd((float)uStack_78,(float)uStack_78,fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = 1.0;
  if (1e-06 < fVar7) {
    fVar6 = 1.0 / SQRT(fVar7);
  }
  local_70 = CONCAT44(fVar10 + fVar3 * fVar6 * param_2,fVar9 + fVar2 * fVar6 * param_2);
  local_68 = CONCAT44((int)((ulong)*(undefined8 *)(this + 0xf0) >> 0x20),
                      fVar5 + (float)uStack_78 * fVar6 * param_2);
  updateLocal(this,(Matrix4x4 *)&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


