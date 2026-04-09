// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShapeContactNormal
// Entry Point: 009a74a8
// Size: 164 bytes
// Signature: undefined __thiscall getWheelShapeContactNormal(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, Vector3 * param_3, bool * param_4)


/* Bt2ScenegraphPhysicsContext::getWheelShapeContactNormal(TransformGroup*, unsigned int, Vector3&,
   bool&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShapeContactNormal
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,Vector3 *param_3,
          bool *param_4)

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
  uVar2 = getWheelIndex(this,param_1,param_2,"getContactNormal",&local_48,&local_3c);
  if ((uVar2 & 1) == 0) {
    *param_4 = false;
  }
  else {
    lVar3 = *(long *)(local_48 + 0x48);
    *param_4 = false;
    if (lVar3 != 0) {
      lVar3 = lVar3 + (long)local_3c * 0x1a0;
      *param_4 = *(bool *)(lVar3 + 0x68);
      uVar4 = *(undefined4 *)(lVar3 + 0x48);
      *(undefined8 *)param_3 = *(undefined8 *)(lVar3 + 0x40);
      *(undefined4 *)(param_3 + 8) = uVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


