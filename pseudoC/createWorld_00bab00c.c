// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createWorld
// Entry Point: 00bab00c
// Size: 428 bytes
// Signature: undefined __thiscall createWorld(Bt2PhysicsContextManager * this, Bt2World * * param_1, btCollisionConfiguration * * param_2)


/* Bt2PhysicsContextManager::createWorld(Bt2World*&, btCollisionConfiguration*&) */

undefined8 __thiscall
Bt2PhysicsContextManager::createWorld
          (Bt2PhysicsContextManager *this,Bt2World **param_1,btCollisionConfiguration **param_2)

{
  long lVar1;
  CollisionConfiguration *this_00;
  undefined8 *this_01;
  undefined8 *this_02;
  undefined8 *puVar2;
  long *this_03;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x1000000f8;
  local_78 = 0x100000001000;
  this_00 = (CollisionConfiguration *)operator_new(0x110);
                    /* try { // try from 00bab05c to 00bab063 has its CatchHandler @ 00bab1fc */
  CollisionConfiguration::CollisionConfiguration
            (this_00,(btDefaultCollisionConstructionInfo *)&local_88);
  *param_2 = (btCollisionConfiguration *)this_00;
  this_01 = (undefined8 *)operator_new(0x2908);
                    /* try { // try from 00bab074 to 00bab07b has its CatchHandler @ 00bab1f0 */
  btCollisionDispatcher::btCollisionDispatcher
            ((btCollisionDispatcher *)this_01,(btCollisionConfiguration *)this_00);
  this_01[0xd] = nearCallback;
  *this_01 = &PTR__btCollisionDispatcher_00fe1418;
  this_02 = (undefined8 *)operator_new(0x148);
                    /* try { // try from 00bab0a4 to 00bab0eb has its CatchHandler @ 00bab200 */
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x78,0x10);
  puVar2[0xe] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  btHashedOverlappingPairCache::btHashedOverlappingPairCache((btHashedOverlappingPairCache *)puVar2)
  ;
  *puVar2 = &PTR__btHashedOverlappingPairCache_00feafb8;
  btDbvtBroadphase::btDbvtBroadphase((btDbvtBroadphase *)this_02,(btOverlappingPairCache *)puVar2);
  *this_02 = &PTR__Bt2Broadphase_00feaf10;
                    /* try { // try from 00bab100 to 00bab107 has its CatchHandler @ 00bab1e0 */
  Mutex::Mutex((Mutex *)(this_02 + 0x24),true);
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x160,0x10);
                    /* try { // try from 00bab118 to 00bab11b has its CatchHandler @ 00bab1cc */
  btSequentialImpulseConstraintSolver::btSequentialImpulseConstraintSolver
            ((btSequentialImpulseConstraintSolver *)puVar2);
  *puVar2 = &PTR__btSequentialImpulseConstraintSolver_00feb068;
  this_03 = (long *)btAlignedAllocInternal(0x2a8,0x10);
                    /* try { // try from 00bab140 to 00bab14f has its CatchHandler @ 00bab1b8 */
  Bt2World::Bt2World((Bt2World *)this_03,(btDispatcher *)this_01,(btBroadphaseInterface *)this_02,
                     (Bt2Solver *)puVar2,*param_2);
  *param_1 = (Bt2World *)this_03;
  local_68 = *(undefined8 *)(this + 0x24);
  local_5c = 0;
  local_60 = *(undefined4 *)(this + 0x2c);
  (**(code **)(*this_03 + 0x90))(this_03,&local_68);
  (*param_1)[0x70] = (Bt2World)0x0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


