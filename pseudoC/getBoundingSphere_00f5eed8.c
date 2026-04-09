// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoundingSphere
// Entry Point: 00f5eed8
// Size: 228 bytes
// Signature: undefined __thiscall getBoundingSphere(btCollisionShape * this, btVector3 * param_1, float * param_2)


/* btCollisionShape::getBoundingSphere(btVector3&, float&) const */

void __thiscall
btCollisionShape::getBoundingSphere(btCollisionShape *this,btVector3 *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  local_64 = 0x3f800000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3f800000;
  local_44 = 0;
  local_4c = 0;
  local_3c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_78,&local_88,&local_98);
  fVar4 = (float)local_98 - (float)local_88;
  fVar2 = (float)((ulong)local_98 >> 0x20);
  fVar3 = (float)((ulong)local_88 >> 0x20);
  fVar5 = fVar2 - fVar3;
  fVar4 = (float)NEON_fmadd(local_90 - local_80,local_90 - local_80,fVar4 * fVar4 + fVar5 * fVar5);
  *param_2 = SQRT(fVar4) * 0.5;
  *(ulong *)param_1 = CONCAT44((fVar3 + fVar2) * 0.5,((float)local_88 + (float)local_98) * 0.5);
  *(float *)(param_1 + 8) = (local_80 + local_90) * 0.5;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


