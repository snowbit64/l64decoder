// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00887eb8
// Size: 196 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTDogDropBall::update() */

void BTDogDropBall::update(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(*(long *)(in_x0 + 0x28) + 0x118) == 0) ||
     (lVar4 = *(long *)(*(long *)(in_x0 + 0x28) + 0xf8), lVar4 == 0)) {
    uVar3 = 2;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    local_48 = *(undefined8 *)(lVar4 + 0xe8);
    local_40 = *(undefined4 *)(lVar4 + 0xf0);
    plVar2 = *(long **)(*(long *)(in_x0 + 0x28) + 0x118);
    (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(*(long *)(in_x0 + 0x28) + 0xf8),0xffffffff)
    ;
    TransformGroup::setTranslation
              (*(TransformGroup **)(*(long *)(in_x0 + 0x28) + 0xf8),(Vector3 *)&local_48);
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup
              (this,*(TransformGroup **)(*(long *)(in_x0 + 0x28) + 0xf8));
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


