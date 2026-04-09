// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionWithDistance
// Entry Point: 00b548b0
// Size: 320 bytes
// Signature: undefined __thiscall getPositionWithDistance(CubicSpline * this, float param_1, float param_2, bool param_3, float param_4, Vector3 * param_5)


/* CubicSpline::getPositionWithDistance(float, float, bool, float, Vector3&) const */

float __thiscall
CubicSpline::getPositionWithDistance
          (CubicSpline *this,float param_1,float param_2,bool param_3,float param_4,Vector3 *param_5
          )

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined auStack_b8 [16];
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined auStack_98 [16];
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x10))(this,&local_88,auStack_98);
  fVar3 = *(float *)(this + 0x2c);
  fVar7 = (1.0 / fVar3) * param_2;
  fVar5 = local_a0;
  local_a0 = local_80;
  do {
    if (1.0 <= fVar7) {
      uVar2 = CONCAT44(fStack_84,local_88);
      fVar6 = param_1;
LAB_00b549ac:
      *(undefined8 *)param_5 = uVar2;
      *(float *)(param_5 + 8) = local_a0;
      if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return fVar6;
    }
    fVar6 = fVar7;
    if (!param_3) {
      fVar6 = -fVar7;
    }
    fVar6 = fVar6 + param_1;
    local_80 = local_a0;
    (**(code **)(*(long *)this + 0x10))(fVar6,this,&local_a8,auStack_b8);
    local_a0 = fVar5;
    uVar4 = NEON_fmadd(fStack_84 - fStack_a4,fStack_84 - fStack_a4,
                       (local_88 - local_a8) * (local_88 - local_a8));
    fVar5 = (float)NEON_fmadd(local_80 - local_a0,local_80 - local_a0,uVar4);
    if (param_2 - SQRT(fVar5) <= param_4) {
      uVar2 = CONCAT44(fStack_a4,local_a8);
      goto LAB_00b549ac;
    }
    fVar7 = (float)NEON_fmadd(param_2 - SQRT(fVar5),1.0 / fVar3,fVar7);
    fVar5 = local_a0;
    local_a0 = local_80;
  } while( true );
}


