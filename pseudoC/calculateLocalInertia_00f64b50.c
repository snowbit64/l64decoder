// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLocalInertia
// Entry Point: 00f64b50
// Size: 292 bytes
// Signature: undefined __thiscall calculateLocalInertia(btPolyhedralConvexShape * this, float param_1, btVector3 * param_2)


/* btPolyhedralConvexShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btPolyhedralConvexShape::calculateLocalInertia
          (btPolyhedralConvexShape *this,float param_1,btVector3 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
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
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))();
  local_6c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_64 = 0x3f800000;
  local_50 = 0x3f800000;
  local_44 = 0;
  local_4c = 0;
  local_3c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_78,&local_88,&local_98);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar3 = (float)NEON_fmadd(local_90 - local_80,0x3f000000,fVar2);
  fVar6 = fVar2 + ((float)local_98 - (float)local_88) * 0.5;
  fVar2 = fVar2 + ((float)((ulong)local_98 >> 0x20) - (float)((ulong)local_88 >> 0x20)) * 0.5;
  fVar3 = (fVar3 + fVar3) * (fVar3 + fVar3);
  fVar5 = param_1 * 0.08333333;
  fVar6 = fVar6 + fVar6;
  fVar2 = fVar2 + fVar2;
  fVar6 = fVar6 * fVar6;
  fVar2 = fVar2 * fVar2;
  uVar4 = NEON_rev64(CONCAT44((fVar3 + fVar2) * fVar5,(fVar3 + fVar6) * fVar5),4);
  *(float *)(param_2 + 8) = (fVar6 + fVar2) * fVar5;
  *(undefined8 *)param_2 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


