// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 009bcd68
// Size: 300 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsCharacterController::update() */

void Bt2PhysicsCharacterController::update(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long in_x0;
  undefined8 uVar7;
  TransformGroup *this;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  this = *(TransformGroup **)(in_x0 + 0x18);
  if (this != (TransformGroup *)0x0) {
    if (*(char *)(in_x0 + 0x5c) == '\0') {
      *(undefined *)(in_x0 + 0x5d) = 1;
      local_48 = *(undefined8 *)(*(long *)(in_x0 + 0x10) + 0x38);
      local_40 = *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x40);
      TransformGroup::setTranslation(this,(Vector3 *)&local_48);
      RawTransformGroup::updateWorldTransformation();
      *(undefined *)(in_x0 + 0x5d) = 0;
      cVar5 = *(char *)(in_x0 + 0x5e);
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      local_48 = *(undefined8 *)(this + 0xe8);
      local_40 = *(undefined4 *)(this + 0xf0);
      local_3c = 0;
      Bt2KinematicCharacterController::warp
                (*(Bt2KinematicCharacterController **)(in_x0 + 8),(btVector3 *)&local_48);
      *(undefined *)(in_x0 + 0x5c) = 0;
      cVar5 = *(char *)(in_x0 + 0x5e);
    }
    if (cVar5 != '\0') {
      local_48 = *(undefined8 *)(in_x0 + 0x60);
      local_40 = *(undefined4 *)(in_x0 + 0x68);
      *(undefined *)(in_x0 + 0x5e) = 0;
      local_3c = 0;
      Bt2KinematicCharacterController::warp
                (*(Bt2KinematicCharacterController **)(in_x0 + 8),(btVector3 *)&local_48);
    }
    lVar1 = *(long *)(in_x0 + 0x40);
    lVar3 = *(long *)(in_x0 + 0x48);
    uVar2 = *(undefined8 *)(in_x0 + 0x28);
    uVar4 = *(undefined8 *)(in_x0 + 0x30);
    uVar7 = *(undefined8 *)(in_x0 + 0x38);
    *(long *)(in_x0 + 0x28) = lVar1;
    *(long *)(in_x0 + 0x30) = lVar3;
    *(undefined8 *)(in_x0 + 0x38) = *(undefined8 *)(in_x0 + 0x50);
    *(undefined8 *)(in_x0 + 0x40) = uVar2;
    *(undefined8 *)(in_x0 + 0x48) = uVar4;
    *(undefined8 *)(in_x0 + 0x50) = uVar7;
    if (lVar3 != lVar1) {
      *(long *)(in_x0 + 0x30) = lVar1;
    }
    *(uint *)(in_x0 + 0x58) = (uint)*(byte *)(*(long *)(in_x0 + 8) + 0xb4) << 2;
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


