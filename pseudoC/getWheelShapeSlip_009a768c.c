// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShapeSlip
// Entry Point: 009a768c
// Size: 144 bytes
// Signature: undefined __thiscall getWheelShapeSlip(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, float * param_3, float * param_4)


/* Bt2ScenegraphPhysicsContext::getWheelShapeSlip(TransformGroup*, unsigned int, float&, float&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShapeSlip
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,float *param_3,
          float *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  Bt2RaycastVehicle *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = getWheelIndex(this,param_1,param_2,"getSlip",&local_48,&local_3c);
  if (((uVar2 & 1) != 0) && (*(long *)(local_48 + 0x48) != 0)) {
    lVar3 = *(long *)(local_48 + 0x48) + (long)local_3c * 0x1a0;
    *param_3 = *(float *)(lVar3 + 0x7c);
    *param_4 = *(float *)(lVar3 + 0x80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


