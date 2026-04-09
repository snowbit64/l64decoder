// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00887df8
// Size: 188 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTDogPickUpBall::update() */

undefined8 BTDogPickUpBall::update(void)

{
  long lVar1;
  long in_x0;
  Bt2ScenegraphPhysicsContext *this;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(*(long *)(in_x0 + 0x28) + 0x110) == 0) ||
     (*(long *)(*(long *)(in_x0 + 0x28) + 0xf8) == 0)) {
    uVar3 = 2;
  }
  else {
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    uVar3 = 1;
    Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
              (this,*(TransformGroup **)(*(long *)(in_x0 + 0x28) + 0xf8),true);
    plVar2 = *(long **)(*(long *)(in_x0 + 0x28) + 0x110);
    (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(*(long *)(in_x0 + 0x28) + 0xf8),0xffffffff)
    ;
    local_48 = 0;
    local_40 = 0;
    TransformGroup::setTranslation
              (*(TransformGroup **)(*(long *)(in_x0 + 0x28) + 0xf8),(Vector3 *)&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


