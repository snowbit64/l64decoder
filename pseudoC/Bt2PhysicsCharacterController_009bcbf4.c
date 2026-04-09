// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsCharacterController
// Entry Point: 009bcbf4
// Size: 236 bytes
// Signature: undefined __thiscall ~Bt2PhysicsCharacterController(Bt2PhysicsCharacterController * this)


/* Bt2PhysicsCharacterController::~Bt2PhysicsCharacterController() */

void __thiscall
Bt2PhysicsCharacterController::~Bt2PhysicsCharacterController(Bt2PhysicsCharacterController *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  Bt2KinematicCharacterController *this_00;
  
  *(undefined ***)this = &PTR__Bt2PhysicsCharacterController_00fe1d20;
  if (*(ScenegraphNode **)(this + 0x18) != (ScenegraphNode *)0x0) {
                    /* try { // try from 009bcc1c to 009bcc4f has its CatchHandler @ 009bcce4 */
    ScenegraphNode::removeWorldTransformationDirtyListener
              (*(ScenegraphNode **)(this + 0x18),(WorldTransformationDirtyListener *)this);
    *(undefined8 *)(this + 0x18) = 0;
  }
  lVar4 = **(long **)(*(long *)(this + 0x20) + 0x30);
  **(uint **)(*(long *)(this + 0x10) + 0x108) = **(uint **)(*(long *)(this + 0x10) + 0x108) | 0x100;
  (**(code **)(lVar4 + 0x50))();
  plVar1 = *(long **)(this + 0x10);
  if ((void *)plVar1[0x21] != (void *)0x0) {
    operator_delete((void *)plVar1[0x21]);
    plVar1 = *(long **)(this + 0x10);
  }
  plVar3 = (long *)plVar1[0x19];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 == (long *)0x0) goto LAB_009bcc94;
  }
  (**(code **)(*plVar1 + 8))();
LAB_009bcc94:
  this_00 = *(Bt2KinematicCharacterController **)(this + 8);
  if (this_00 != (Bt2KinematicCharacterController *)0x0) {
    Bt2KinematicCharacterController::~Bt2KinematicCharacterController(this_00);
                    /* try { // try from 009bcca4 to 009bccab has its CatchHandler @ 009bcce0 */
    btAlignedFreeInternal(this_00);
  }
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


