// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShapeContactObject
// Entry Point: 009a736c
// Size: 144 bytes
// Signature: undefined __thiscall getWheelShapeContactObject(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, int * param_3)


/* Bt2ScenegraphPhysicsContext::getWheelShapeContactObject(TransformGroup*, unsigned int, int&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShapeContactObject
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,int *param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  Bt2RaycastVehicle *local_38;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,param_2,"getContactObject",&local_38,&local_2c);
  if (((uVar3 & 1) == 0) || (*(long *)(local_38 + 0x48) == 0)) {
    uVar2 = 0;
    *param_3 = -1;
  }
  else {
    lVar4 = *(long *)(local_38 + 0x48) + (long)local_2c * 0x1a0;
    *param_3 = *(int *)(lVar4 + 0x74);
    uVar2 = *(undefined4 *)(lVar4 + 0x70);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


