// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeWheelShapeTireForces
// Entry Point: 009a6dd4
// Size: 252 bytes
// Signature: undefined __thiscall computeWheelShapeTireForces(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, float param_3, float param_4, float param_5, float * param_6, float * param_7)


/* Bt2ScenegraphPhysicsContext::computeWheelShapeTireForces(TransformGroup*, unsigned int, float,
   float, float, float&, float&) */

void __thiscall
Bt2ScenegraphPhysicsContext::computeWheelShapeTireForces
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,float param_3,
          float param_4,float param_5,float *param_6,float *param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fStack_6c;
  Bt2RaycastVehicle *local_68;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = getWheelIndex(this,param_1,param_2,"computeTireForces",&local_68,(int *)&local_5c);
  if ((uVar2 & 1) == 0) {
    *param_6 = 0.0;
    *param_7 = 0.0;
  }
  else {
    lVar3 = *(long *)(local_68 + 0x48);
    *param_6 = 0.0;
    *param_7 = 0.0;
    if ((1e-05 < param_5) && (lVar3 != 0)) {
      fVar4 = tanf(param_4);
      Bt2RaycastVehicle::computeTireForces
                (local_68,(Bt2WheelInfo *)(lVar3 + (long)(int)local_5c * 0x1a0),param_3,fVar4,
                 param_5,&fStack_6c,param_6,param_7,&local_5c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


