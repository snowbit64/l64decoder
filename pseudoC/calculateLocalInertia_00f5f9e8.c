// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLocalInertia
// Entry Point: 00f5f9e8
// Size: 224 bytes
// Signature: undefined __thiscall calculateLocalInertia(btCompoundShape * this, float param_1, btVector3 * param_2)


/* btCompoundShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btCompoundShape::calculateLocalInertia(btCompoundShape *this,float param_1,btVector3 *param_2)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  fVar5 = (float)((ulong)local_98 >> 0x20) - (float)((ulong)local_88 >> 0x20);
  fVar2 = (local_90 - local_80) * (local_90 - local_80);
  fVar6 = param_1 * 0.08333334;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  uVar3 = NEON_rev64(CONCAT44((fVar2 + fVar5) * fVar6,(fVar2 + fVar4) * fVar6),4);
  *(float *)(param_2 + 8) = (fVar4 + fVar5) * fVar6;
  *(undefined8 *)param_2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


