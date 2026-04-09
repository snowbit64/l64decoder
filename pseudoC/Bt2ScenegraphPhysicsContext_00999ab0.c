// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2ScenegraphPhysicsContext
// Entry Point: 00999ab0
// Size: 952 bytes
// Signature: undefined __thiscall Bt2ScenegraphPhysicsContext(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsStats * param_1)


/* Bt2ScenegraphPhysicsContext::Bt2ScenegraphPhysicsContext(Bt2PhysicsStats*) */

void __thiscall
Bt2ScenegraphPhysicsContext::Bt2ScenegraphPhysicsContext
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsStats *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Bt2PhysicsOverlapCallback *this_00;
  Bt2PhysicsContextManager *this_01;
  CollisionConfiguration *this_02;
  long *plVar3;
  long lVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this[0x18] = (Bt2ScenegraphPhysicsContext)0x1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 00999af4 to 00999b1f has its CatchHandler @ 00999eb8 */
  puVar2 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined8 **)(this + 0x28) = puVar2;
  *puVar2 = &PTR__btIDebugDraw_00fe1088;
  this_00 = (Bt2PhysicsOverlapCallback *)operator_new(0x60);
                    /* try { // try from 00999b24 to 00999b2b has its CatchHandler @ 00999ea0 */
  Bt2PhysicsOverlapCallback::Bt2PhysicsOverlapCallback(this_00);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x90) = this + 0x98;
  *(Bt2PhysicsOverlapCallback **)(this + 0x40) = this_00;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x188) = this + 400;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x230) = this + 0x238;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x1c0) = this + 0x1c8;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x218) = this + 0x220;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x260) = this + 0x268;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x328) = this + 0x330;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x390) = this + 0x398;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
                    /* try { // try from 00999c3c to 00999c47 has its CatchHandler @ 00999e98 */
  Thread::Thread((Thread *)(this + 0x490));
                    /* try { // try from 00999c4c to 00999c5b has its CatchHandler @ 00999e90 */
  Event::Event((Event *)(this + 0x4d8),false,false);
                    /* try { // try from 00999c60 to 00999c6f has its CatchHandler @ 00999e88 */
  Event::Event((Event *)(this + 0x534),false,false);
  gContactAddedCallback = Bt2PhysicsUtil::contactAddedCallback;
  gCompoundChildShapePairCallback = Bt2PhysicsUtil::compoundChildShapePairCallback;
  *(undefined8 *)(this + 0x5c8) = 0;
  *(undefined8 *)(this + 0x5c0) = 0;
  *(undefined8 *)(this + 0x5b8) = 0;
  gCompoundCompoundChildShapePairCallback = Bt2PhysicsUtil::compoundCompoundChildShapePairCallback;
  gContactBreakingThreshold = 0x3d23d70a;
  *(undefined8 *)(this + 0x5a0) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x5b0) = 0;
  *(undefined8 *)(this + 0x5a8) = 0;
  gContactCalcArea3Points = 0;
                    /* try { // try from 00999ce0 to 00999cef has its CatchHandler @ 00999eb4 */
  this_01 = (Bt2PhysicsContextManager *)Bt2PhysicsContextManager::getInstance();
  Bt2PhysicsContextManager::createWorld
            (this_01,(Bt2World **)(this + 0x30),(btCollisionConfiguration **)(this + 0x38));
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x1000000f8;
  local_78 = 0x100000001000;
                    /* try { // try from 00999d00 to 00999d07 has its CatchHandler @ 00999ec0 */
  this_02 = (CollisionConfiguration *)operator_new(0x110);
                    /* try { // try from 00999d0c to 00999d13 has its CatchHandler @ 00999e78 */
  Bt2PhysicsContextManager::CollisionConfiguration::CollisionConfiguration
            (this_02,(btDefaultCollisionConstructionInfo *)&local_88);
  *(CollisionConfiguration **)(this + 0x48) = this_02;
                    /* try { // try from 00999d18 to 00999d1f has its CatchHandler @ 00999ec0 */
  puVar2 = (undefined8 *)operator_new(0x2908);
                    /* try { // try from 00999d24 to 00999d2b has its CatchHandler @ 00999e68 */
  btCollisionDispatcher::btCollisionDispatcher
            ((btCollisionDispatcher *)puVar2,(btCollisionConfiguration *)this_02);
  *(undefined8 **)(this + 0x50) = puVar2;
  lVar4 = *(long *)(this + 0x30);
  puVar2[0xd] = Bt2PhysicsContextManager::nearCallback;
  *puVar2 = &PTR__btCollisionDispatcher_00fe1418;
  *(undefined4 *)(lVar4 + 0xa4) = 0x14;
  *(undefined4 *)(lVar4 + 0xc0) = 0xbd23d70a;
  *(uint *)(lVar4 + 0xd0) = *(uint *)(lVar4 + 0xd0) | 0x70;
                    /* try { // try from 00999d7c to 00999d8f has its CatchHandler @ 00999ec0 */
  plVar3 = (long *)(**(code **)(**(long **)(lVar4 + 0x60) + 0x48))();
  (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(this + 0x40));
  this[0x488] = (Bt2ScenegraphPhysicsContext)0x0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  this[0x58] = (Bt2ScenegraphPhysicsContext)0x1;
  this[0x5d1] = (Bt2ScenegraphPhysicsContext)0x1;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0xa8) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(Bt2PhysicsStats **)(this + 0x88) = param_1;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x70) = 0x4185555541855555;
  *(undefined8 *)(this + 0x68) = 0x4185555500000000;
  *(undefined4 *)(this + 0x5c) = 0x3f800000;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x78) = 0x41855555;
  *(undefined2 *)(this + 0x84) = 0;
  this[0x5d0] = (Bt2ScenegraphPhysicsContext)0x0;
                    /* try { // try from 00999df8 to 00999e33 has its CatchHandler @ 00999eb0 */
  lVar4 = Bt2PhysicsContextManager::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(lVar4 + 0x4c);
  *(undefined4 *)(this + 100) = *(undefined4 *)(lVar4 + 0x50);
  Thread::start((Thread *)(this + 0x490),simulationThreadFunction,this,0xffffffff,"PhysicsThread",2,
                0x80000);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


