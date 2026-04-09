// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9ff4
// Entry Point: 007a9ff4
// Size: 164 bytes
// Signature: undefined FUN_007a9ff4(void)


void FUN_007a9ff4(long *param_1,undefined4 *param_2)

{
  long lVar1;
  BoundingSphere *this;
  Geometry *this_00;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (Geometry *)param_1[0x2e];
  this = (BoundingSphere *)operator_new(0x20);
  local_58 = *param_2;
  uStack_54 = param_2[4];
  local_50 = param_2[8];
                    /* try { // try from 007aa048 to 007aa04f has its CatchHandler @ 007aa098 */
  BoundingSphere::BoundingSphere(this,(Vector3 *)&local_58,(float)param_2[0xc]);
  Geometry::setBoundingVolume(this_00,(BoundingVolume *)this);
  (**(code **)(*param_1 + 0x50))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


