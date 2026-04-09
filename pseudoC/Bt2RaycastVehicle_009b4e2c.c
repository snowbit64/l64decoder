// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2RaycastVehicle
// Entry Point: 009b4e2c
// Size: 280 bytes
// Signature: undefined __thiscall Bt2RaycastVehicle(Bt2RaycastVehicle * this, btRigidBody * param_1, Bt2World * param_2)


/* Bt2RaycastVehicle::Bt2RaycastVehicle(btRigidBody*, Bt2World*) */

void __thiscall
Bt2RaycastVehicle::Bt2RaycastVehicle(Bt2RaycastVehicle *this,btRigidBody *param_1,Bt2World *param_2)

{
  undefined4 *puVar1;
  
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (Bt2RaycastVehicle)0x1;
  this[0x70] = (Bt2RaycastVehicle)0x1;
  this[0x90] = (Bt2RaycastVehicle)0x1;
  *(undefined8 *)(this + 0xf8) = 0x4396000042b20000;
  *(undefined4 *)(this + 0x128) = 1;
  *(undefined ***)this = &PTR_notifyRemoveCollisionObject_00fe1a30;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0xa0) = 0x4348000043960000;
  *(undefined8 *)(this + 0x98) = 0x42b20000447a0000;
  *(undefined8 *)(this + 0xb0) = 0x39b78034;
  *(undefined8 *)(this + 0xa8) = 0x3b03126f391d4952;
  *(undefined8 *)(this + 0x88) = 0;
  *(btRigidBody **)(this + 8) = param_1;
  *(undefined8 *)(this + 0xc0) = 0x41200000;
  *(undefined8 *)(this + 0xb8) = 0x4000000000000000;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 200) = 0x42b20000;
  *(undefined4 *)(this + 0x100) = 0x43480000;
  *(undefined8 *)(this + 0x11c) = 0x439600004144cccd;
                    /* try { // try from 009b4eec to 009b4f0f has its CatchHandler @ 009b4f44 */
  puVar1 = (undefined4 *)operator_new__(4);
  *(undefined4 **)(this + 0x130) = puVar1;
  *puVar1 = 0x43666148;
  puVar1 = (undefined4 *)operator_new__(4);
  *(undefined4 **)(this + 0x138) = puVar1;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *puVar1 = 0x3f32f1aa;
  return;
}


