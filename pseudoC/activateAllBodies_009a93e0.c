// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateAllBodies
// Entry Point: 009a93e0
// Size: 132 bytes
// Signature: undefined activateAllBodies(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2RaycastVehicle::activateAllBodies() */

void Bt2RaycastVehicle::activateAllBodies(void)

{
  long in_x0;
  
  if (*(btCollisionObject **)(in_x0 + 8) != (btCollisionObject *)0x0) {
    btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 8),false);
    if (*(btCollisionObject **)(in_x0 + 0x10) != (btCollisionObject *)0x0) {
      btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x10),false);
      if (*(btCollisionObject **)(in_x0 + 0x18) != (btCollisionObject *)0x0) {
        btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x18),false);
        if (*(btCollisionObject **)(in_x0 + 0x20) != (btCollisionObject *)0x0) {
          btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x20),false);
          if (*(btCollisionObject **)(in_x0 + 0x28) != (btCollisionObject *)0x0) {
            btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x28),false);
            if (*(btCollisionObject **)(in_x0 + 0x30) != (btCollisionObject *)0x0) {
              btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x30),false);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


