// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEulerAngles
// Entry Point: 00b5c740
// Size: 248 bytes
// Signature: undefined __thiscall getEulerAngles(GsQuaternion * this, Vector3 * param_1)


/* GsQuaternion::getEulerAngles(Vector3&) const */

void __thiscall GsQuaternion::getEulerAngles(GsQuaternion *this,Vector3 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0xc);
  fVar5 = *(float *)this;
  fVar4 = *(float *)(this + 4);
  local_5c = 0;
  local_4c = 0;
  fStack_64 = fVar4 * fVar2 + fVar3 * fVar5;
  local_58 = fVar4 * fVar2 - fVar3 * fVar5;
  local_60 = fVar4 * fVar3 - fVar2 * fVar5;
  local_48 = fVar4 * fVar3 + fVar2 * fVar5;
  local_50 = fVar2 * fVar3 + fVar4 * fVar5;
  fStack_44 = fVar2 * fVar3 - fVar4 * fVar5;
  fStack_64 = fStack_64 + fStack_64;
  local_60 = local_60 + local_60;
  local_58 = local_58 + local_58;
  local_68 = NEON_fmadd(fVar2 * fVar2 + fVar3 * fVar3,0xc0000000,0x3f800000);
  fStack_44 = fStack_44 + fStack_44;
  uStack_54 = NEON_fmadd(fVar4 * fVar4 + fVar3 * fVar3,0xc0000000,0x3f800000);
  local_48 = local_48 + local_48;
  local_40 = NEON_fmadd(fVar4 * fVar4 + fVar2 * fVar2,0xc0000000,0x3f800000);
  local_30 = 0;
  uStack_2c = 0x3f800000;
  local_38 = 0;
  local_50 = local_50 + local_50;
  local_3c = 0;
  Matrix4x4::getEulerAngles((Matrix4x4 *)&local_68,param_1,(Vector3 *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


