// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lookAt
// Entry Point: 00a50cdc
// Size: 228 bytes
// Signature: undefined __thiscall lookAt(Camera * this, Vector3 * param_1, float param_2)


/* Camera::lookAt(Vector3 const&, float) */

void __thiscall Camera::lookAt(Camera *this,Vector3 *param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  uStack_58 = *(undefined8 *)(this + 0xe0);
  local_60 = *(undefined8 *)(this + 0xd8);
  uStack_78 = *(undefined8 *)(this + 0xc0);
  local_80 = *(undefined8 *)(this + 0xb8);
  uStack_68 = *(undefined8 *)(this + 0xd0);
  uStack_70 = *(undefined8 *)(this + 200);
  fVar3 = (float)((ulong)local_60 >> 0x20);
  fVar2 = (float)local_60;
  fVar5 = (float)NEON_fmadd((float)uStack_58,(float)uStack_58,fVar3 * fVar3 + fVar2 * fVar2);
  fVar4 = 1.0;
  if (1e-06 < fVar5) {
    fVar4 = 1.0 / SQRT(fVar5);
  }
  local_50 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar3 * fVar4 * param_2,
                      (float)*(undefined8 *)param_1 + fVar2 * fVar4 * param_2);
  local_48 = CONCAT44((int)((ulong)*(undefined8 *)(this + 0xf0) >> 0x20),
                      (float)uStack_58 * fVar4 * param_2 + *(float *)(param_1 + 8));
  updateLocal(this,(Matrix4x4 *)&local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


