// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writebackVelocityAndTransform
// Entry Point: 00f2eba8
// Size: 288 bytes
// Signature: undefined __thiscall writebackVelocityAndTransform(btSolverBody * this, float param_1, float param_2)


/* btSolverBody::writebackVelocityAndTransform(float, float) */

void __thiscall
btSolverBody::writebackVelocityAndTransform(btSolverBody *this,float param_1,float param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xf0) != 0) {
    *(ulong *)(this + 0xb0) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20),
                  (float)*(undefined8 *)(this + 0xb0) + (float)*(undefined8 *)(this + 0x40));
    *(float *)(this + 0xb8) = *(float *)(this + 0xb8) + *(float *)(this + 0x48);
    *(ulong *)(this + 0xc0) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20),
                  (float)*(undefined8 *)(this + 0xc0) + (float)*(undefined8 *)(this + 0x50));
    *(float *)(this + 200) = *(float *)(this + 200) + *(float *)(this + 0x58);
    if (((*(float *)(this + 0x90) == 0.0) && (*(float *)(this + 0x94) == 0.0)) &&
       (*(float *)(this + 0x98) == 0.0)) {
      uVar2 = *(undefined8 *)(this + 0xa4);
      if (*(float *)(this + 0xa0) == 0.0) {
        uVar3 = NEON_fcmeq(uVar2,0,4);
        if (((~(byte)uVar3 & 1) == 0) && ((~(byte)((ulong)uVar3 >> 0x20) & 1) == 0))
        goto LAB_00f2eca4;
      }
    }
    else {
      uVar2 = *(undefined8 *)(this + 0xa4);
    }
    local_78 = *(float *)(this + 0xa0) * param_2;
    local_74 = CONCAT44((float)((ulong)uVar2 >> 0x20) * param_2,(float)uVar2 * param_2);
    local_6c = 0;
    btTransformUtil::integrateTransform
              ((btTransform *)this,(btVector3 *)(this + 0x90),(btVector3 *)&local_78,param_1,
               (btTransform *)&local_68);
    *(undefined8 *)(this + 8) = uStack_60;
    *(undefined8 *)this = local_68;
    *(undefined8 *)(this + 0x18) = uStack_50;
    *(undefined8 *)(this + 0x10) = local_58;
    *(undefined8 *)(this + 0x28) = uStack_40;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined8 *)(this + 0x38) = uStack_30;
    *(undefined8 *)(this + 0x30) = local_38;
  }
LAB_00f2eca4:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


