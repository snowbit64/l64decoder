// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShapeContactPoint
// Entry Point: 009a73fc
// Size: 172 bytes
// Signature: undefined __thiscall getWheelShapeContactPoint(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, Vector3 * param_3, float * param_4, bool * param_5)


/* Bt2ScenegraphPhysicsContext::getWheelShapeContactPoint(TransformGroup*, unsigned int, Vector3&,
   float&, bool&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShapeContactPoint
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,Vector3 *param_3,
          float *param_4,bool *param_5)

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
  uVar2 = getWheelIndex(this,param_1,param_2,"getContactPoint",&local_48,&local_3c);
  if ((uVar2 & 1) == 0) {
    *param_5 = false;
  }
  else {
    lVar3 = *(long *)(local_48 + 0x48);
    *param_5 = false;
    if (lVar3 != 0) {
      lVar3 = lVar3 + (long)local_3c * 0x1a0;
      *param_5 = *(bool *)(lVar3 + 0x68);
      uVar4 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined8 *)param_3 = *(undefined8 *)(lVar3 + 0x30);
      *(undefined4 *)(param_3 + 8) = uVar4;
      *param_4 = 0.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


