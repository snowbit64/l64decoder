// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelShape
// Entry Point: 009a6d64
// Size: 112 bytes
// Signature: undefined __thiscall getWheelShape(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, char * param_3, Bt2RaycastVehicle * * param_4)


/* Bt2ScenegraphPhysicsContext::getWheelShape(TransformGroup*, unsigned int, char const*,
   Bt2RaycastVehicle*&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getWheelShape
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,char *param_3,
          Bt2RaycastVehicle **param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = getWheelIndex(this,param_1,param_2,param_3,param_4,&local_2c);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*param_4 + 0x48) + (long)local_2c * 0x1a0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


