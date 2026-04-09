// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2RaycastVehicle
// Entry Point: 009b513c
// Size: 40 bytes
// Signature: undefined __thiscall ~Bt2RaycastVehicle(Bt2RaycastVehicle * this)


/* Bt2RaycastVehicle::~Bt2RaycastVehicle() */

void __thiscall Bt2RaycastVehicle::~Bt2RaycastVehicle(Bt2RaycastVehicle *this)

{
  ~Bt2RaycastVehicle(this);
                    /* try { // try from 009b5150 to 009b5157 has its CatchHandler @ 009b5164 */
  btAlignedFreeInternal(this);
  return;
}


