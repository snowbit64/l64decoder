// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShapeAxleSpeed
// Entry Point: 009a72f0
// Size: 124 bytes
// Signature: undefined __thiscall getWheelShapeAxleSpeed(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2)


/* Bt2ScenegraphPhysicsContext::getWheelShapeAxleSpeed(TransformGroup*, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShapeAxleSpeed
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  Bt2RaycastVehicle *local_38;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = getWheelIndex(this,param_1,param_2,"getAxleSpeed",&local_38,&local_2c);
  if (((uVar2 & 1) == 0) || (*(long *)(local_38 + 0x48) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(long *)(local_38 + 0x48) + (long)local_2c * 0x1a0 + 100);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


