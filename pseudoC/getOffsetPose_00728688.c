// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOffsetPose
// Entry Point: 00728688
// Size: 216 bytes
// Signature: undefined __thiscall getOffsetPose(StoppingPath * this, PlanarPose * param_1, float * param_2, float param_3)


/* StoppingPath::getOffsetPose(PlanarPose&, float&, float) const */

void __thiscall
StoppingPath::getOffsetPose(StoppingPath *this,PlanarPose *param_1,float *param_2,float param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getPose(this,(Vector2 *)&local_40,(Vector2 *)&local_48,param_2,param_3);
  if (this[0x20] != (StoppingPath)0x0) {
    local_48 = -local_48;
    fStack_44 = -fStack_44;
  }
  fVar5 = (float)NEON_fmadd(local_48,local_48,fStack_44 * fStack_44);
  fVar4 = 1.0;
  *(undefined8 *)param_1 = local_40;
  if (1e-06 < fVar5) {
    fVar4 = 1.0 / SQRT(fVar5);
  }
  *(float *)(param_1 + 8) = local_48 * fVar4;
  *(float *)(param_1 + 0xc) = fStack_44 * fVar4;
  uVar3 = NEON_fmadd(local_48 * fVar4,*(undefined4 *)(this + 0x18),(int)local_40);
  uVar2 = NEON_fmadd(fStack_44 * fVar4,*(undefined4 *)(this + 0x18),(int)((ulong)local_40 >> 0x20));
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar2;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


