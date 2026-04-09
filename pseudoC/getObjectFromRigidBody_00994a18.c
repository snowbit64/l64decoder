// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getObjectFromRigidBody
// Entry Point: 00994a18
// Size: 84 bytes
// Signature: undefined __cdecl getObjectFromRigidBody(btRigidBody * param_1)


/* Bt2PhysicsRBObject::getObjectFromRigidBody(btRigidBody const*) */

undefined8 Bt2PhysicsRBObject::getObjectFromRigidBody(btRigidBody *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_021103d8 != (undefined8 *)0x0) {
    puVar1 = &DAT_021103d8;
    puVar2 = DAT_021103d8;
    do {
      if ((btRigidBody *)puVar2[4] >= param_1) {
        puVar1 = puVar2;
      }
      puVar2 = (undefined8 *)puVar2[(btRigidBody *)puVar2[4] < param_1];
    } while (puVar2 != (undefined8 *)0x0);
    if (((undefined8 **)puVar1 != &DAT_021103d8) && ((btRigidBody *)puVar1[4] <= param_1)) {
      return puVar1[5];
    }
  }
  return 0;
}


