// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2KinematicCharacterController
// Entry Point: 009bd318
// Size: 64 bytes
// Signature: undefined __thiscall ~Bt2KinematicCharacterController(Bt2KinematicCharacterController * this)


/* Bt2KinematicCharacterController::~Bt2KinematicCharacterController() */

void __thiscall
Bt2KinematicCharacterController::~Bt2KinematicCharacterController
          (Bt2KinematicCharacterController *this)

{
  if ((*(void **)(this + 0x90) != (void *)0x0) &&
     (this[0x98] != (Bt2KinematicCharacterController)0x0)) {
                    /* try { // try from 009bd338 to 009bd33b has its CatchHandler @ 009bd358 */
    btAlignedFreeInternal(*(void **)(this + 0x90));
  }
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x98] = (Bt2KinematicCharacterController)0x1;
  return;
}


