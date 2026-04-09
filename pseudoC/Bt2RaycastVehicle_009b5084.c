// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2RaycastVehicle
// Entry Point: 009b5084
// Size: 172 bytes
// Signature: undefined __thiscall ~Bt2RaycastVehicle(Bt2RaycastVehicle * this)


/* Bt2RaycastVehicle::~Bt2RaycastVehicle() */

void __thiscall Bt2RaycastVehicle::~Bt2RaycastVehicle(Bt2RaycastVehicle *this)

{
  *(undefined ***)this = &PTR_notifyRemoveCollisionObject_00fe1a30;
  if (*(void **)(this + 0x130) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x130));
  }
  if (*(void **)(this + 0x138) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x138));
  }
  if ((*(void **)(this + 0x88) != (void *)0x0) && (this[0x90] != (Bt2RaycastVehicle)0x0)) {
                    /* try { // try from 009b50cc to 009b50cf has its CatchHandler @ 009b5138 */
    btAlignedFreeInternal(*(void **)(this + 0x88));
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x90] = (Bt2RaycastVehicle)0x1;
  if ((*(void **)(this + 0x68) != (void *)0x0) && (this[0x70] != (Bt2RaycastVehicle)0x0)) {
                    /* try { // try from 009b50f0 to 009b50f3 has its CatchHandler @ 009b5134 */
    btAlignedFreeInternal(*(void **)(this + 0x68));
  }
  this[0x70] = (Bt2RaycastVehicle)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  if ((*(void **)(this + 0x48) != (void *)0x0) && (this[0x50] != (Bt2RaycastVehicle)0x0)) {
                    /* try { // try from 009b5110 to 009b5113 has its CatchHandler @ 009b5130 */
    btAlignedFreeInternal(*(void **)(this + 0x48));
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x50] = (Bt2RaycastVehicle)0x1;
  return;
}


