// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShapePosition
// Entry Point: 009a75e8
// Size: 164 bytes
// Signature: undefined __thiscall getWheelShapePosition(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, Vector3 * param_3, float * param_4, float * param_5)


/* Bt2ScenegraphPhysicsContext::getWheelShapePosition(TransformGroup*, unsigned int, Vector3&,
   float&, float&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShapePosition
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,Vector3 *param_3,
          float *param_4,float *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  Bt2RaycastVehicle *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = getWheelIndex(this,param_1,param_2,"getPosition",&local_48,&local_3c);
  if (((uVar2 & 1) != 0) && (*(long *)(local_48 + 0x48) != 0)) {
    lVar3 = *(long *)(local_48 + 0x48) + (long)local_3c * 0x1a0;
    uVar4 = *(undefined4 *)(lVar3 + 0x58);
    *(undefined8 *)param_3 = *(undefined8 *)(lVar3 + 0x50);
    *(undefined4 *)(param_3 + 8) = uVar4;
    *param_4 = *(float *)(lVar3 + 0x60);
    *param_5 = *(float *)(lVar3 + 0x6c);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


