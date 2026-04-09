// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btDiscreteDynamicsWorld
// Entry Point: 00f32070
// Size: 772 bytes
// Signature: undefined __thiscall btDiscreteDynamicsWorld(btDiscreteDynamicsWorld * this, btDispatcher * param_1, btBroadphaseInterface * param_2, btConstraintSolver * param_3, btCollisionConfiguration * param_4)


/* btDiscreteDynamicsWorld::btDiscreteDynamicsWorld(btDispatcher*, btBroadphaseInterface*,
   btConstraintSolver*, btCollisionConfiguration*) */

void __thiscall
btDiscreteDynamicsWorld::btDiscreteDynamicsWorld
          (btDiscreteDynamicsWorld *this,btDispatcher *param_1,btBroadphaseInterface *param_2,
          btConstraintSolver *param_3,btCollisionConfiguration *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x54) = 0x3d23d70a;
  this[0x20] = (btDiscreteDynamicsWorld)0x1;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined8 *)(this + 0x34) = 0x100000000;
  *(undefined8 *)(this + 0xa0) = 0xa00000000;
  *(undefined2 *)(this + 0x50) = 0x100;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(btDispatcher **)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x98) = 0x3c8888893e99999a;
  *(undefined8 *)(this + 0x90) = 0x3f8000003f19999a;
  this[0x40] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0xb4) = 0x3f4ccccd;
  *(undefined8 *)(this + 0xac) = 0x3e4ccccd3f800000;
  this[0x52] = (btDiscreteDynamicsWorld)0x1;
  this[0x58] = (btDiscreteDynamicsWorld)0x0;
  *(undefined8 *)(this + 200) = 0x3f59999a00000000;
  *(undefined8 *)(this + 0xc0) = 0x3dcccccdbd23d70a;
  *(undefined4 *)(this + 0x5c) = 0;
  *(btBroadphaseInterface **)(this + 0x60) = param_2;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0xa8) = 0x41a00000;
  *(undefined8 *)(this + 0xd0) = 0x200000104;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0xbc) = 1;
  *(undefined8 *)(this + 0xdc) = 0x7149f2ca42c80000;
  *(undefined4 *)(this + 0xd8) = 0x80;
  this[0x100] = (btDiscreteDynamicsWorld)0x1;
  *(undefined ***)this = &PTR__btDiscreteDynamicsWorld_010189c0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(btConstraintSolver **)(this + 0x110) = param_3;
  this[0x138] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  this[0x158] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x160) = 0xc120000000000000;
  *(undefined2 *)(this + 0x17a) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  this[0x198] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  this[0x1a4] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x1ac) = 0;
  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x1b8) = 0;
  if (param_3 == (btConstraintSolver *)0x0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar2 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x148,0x10);
    *(undefined *)(puVar2 + 4) = 1;
    puVar2[3] = 0;
    *(undefined8 *)((long)puVar2 + 0x10c) = 0;
    *(undefined8 *)((long)puVar2 + 0xc) = 0;
    *(undefined *)(puVar2 + 8) = 1;
    *puVar2 = &PTR__btSequentialImpulseConstraintSolver_01018920;
    puVar2[7] = 0;
    *(undefined8 *)((long)puVar2 + 0x2c) = 0;
    *(undefined *)(puVar2 + 0xc) = 1;
    puVar2[0x26] = FUN_00f2b324;
    puVar2[0x27] = FUN_00f2b504;
    puVar2[0xb] = 0;
    *(undefined8 *)((long)puVar2 + 0x4c) = 0;
    *(undefined *)(puVar2 + 0x10) = 1;
    puVar2[0xf] = 0;
    *(undefined8 *)((long)puVar2 + 0x6c) = 0;
    *(undefined *)(puVar2 + 0x14) = 1;
    puVar2[0x13] = 0;
    *(undefined8 *)((long)puVar2 + 0x8c) = 0;
    *(undefined *)(puVar2 + 0x18) = 1;
    puVar2[0x17] = 0;
    *(undefined8 *)((long)puVar2 + 0xac) = 0;
    *(undefined *)(puVar2 + 0x1c) = 1;
    puVar2[0x1b] = 0;
    *(undefined8 *)((long)puVar2 + 0xcc) = 0;
    *(undefined *)(puVar2 + 0x20) = 1;
    puVar2[0x1f] = 0;
    *(undefined8 *)((long)puVar2 + 0xec) = 0;
    *(undefined *)(puVar2 + 0x24) = 1;
    puVar2[0x23] = 0;
    puVar2[0x28] = 0;
    *(undefined8 **)(this + 0x110) = puVar2;
  }
  puVar1 = PTR_FUN_01048e38;
  this[0x179] = (btDiscreteDynamicsWorld)(param_3 == (btConstraintSolver *)0x0);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar2 = (undefined8 *)(*(code *)puVar1)(0x70,0x10);
  *(undefined *)(puVar2 + 4) = 1;
  puVar2[3] = 0;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined *)(puVar2 + 8) = 1;
  puVar2[7] = 0;
  *(undefined8 *)((long)puVar2 + 0xc) = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  *puVar2 = &PTR__btSimulationIslandManager_01019d88;
  puVar1 = PTR_FUN_01048e38;
  *(undefined *)(puVar2 + 0xc) = 1;
  puVar2[0xb] = 0;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined *)(puVar2 + 0xd) = 1;
  *(undefined8 **)(this + 0x118) = puVar2;
  this[0x178] = (btDiscreteDynamicsWorld)0x1;
  puVar2 = (undefined8 *)(*(code *)puVar1)(0x98,0x10);
  uVar3 = *(undefined8 *)(this + 0x110);
  puVar2[5] = 0;
  puVar2[6] = param_1;
  *(undefined *)(puVar2 + 10) = 1;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  *(undefined *)(puVar2 + 0xe) = 1;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined *)(puVar2 + 0x12) = 1;
  *(undefined8 **)(this + 0x108) = puVar2;
  puVar2[2] = uVar3;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = &PTR__InplaceSolverIslandCallback_01018b70;
  puVar2[1] = 0;
  puVar2[9] = 0;
  puVar2[0xd] = 0;
  puVar2[0x11] = 0;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0;
  return;
}


