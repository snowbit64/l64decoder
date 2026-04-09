// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStaticPosition
// Entry Point: 0089a738
// Size: 124 bytes
// Signature: undefined __thiscall addStaticPosition(PedestrianSpawnGrid * this, PedestrianStaticPosition * param_1)


/* PedestrianSpawnGrid::addStaticPosition(PedestrianStaticPosition*) */

void __thiscall
PedestrianSpawnGrid::addStaticPosition(PedestrianSpawnGrid *this,PedestrianStaticPosition *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  PedestrianStaticPosition *pPStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)param_1;
  local_44 = 0;
  uStack_40 = 0;
  local_60 = 0;
  pPStack_58 = param_1;
  RawTransformGroup::updateWorldTransformation();
  local_50 = *(undefined8 *)(lVar2 + 0xe8);
  local_48 = *(undefined4 *)(lVar2 + 0xf0);
  FUN_0089a600(this,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


