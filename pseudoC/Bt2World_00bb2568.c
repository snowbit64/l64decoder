// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2World
// Entry Point: 00bb2568
// Size: 288 bytes
// Signature: undefined __thiscall Bt2World(Bt2World * this, btDispatcher * param_1, btBroadphaseInterface * param_2, Bt2Solver * param_3, btCollisionConfiguration * param_4)


/* Bt2World::Bt2World(btDispatcher*, btBroadphaseInterface*, Bt2Solver*, btCollisionConfiguration*)
    */

void __thiscall
Bt2World::Bt2World(Bt2World *this,btDispatcher *param_1,btBroadphaseInterface *param_2,
                  Bt2Solver *param_3,btCollisionConfiguration *param_4)

{
  btDefaultSoftBodySolver *this_00;
  
  btDiscreteDynamicsWorld::btDiscreteDynamicsWorld
            ((btDiscreteDynamicsWorld *)this,param_1,param_2,(btConstraintSolver *)param_3,param_4);
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1e0] = (Bt2World)0x1;
  *(undefined8 *)(this + 0x230) = 0x447a000000000000;
  *(undefined8 *)(this + 0x228) = 0x3f99999a;
  this[0x200] = (Bt2World)0x1;
  *(undefined ***)this = &PTR__Bt2World_00feb330;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1cc) = 0;
  *(undefined8 *)(this + 0x1ec) = 0;
  this[0x220] = (Bt2World)0x1;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x20c) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x25c) = 0xc1200000;
  *(undefined4 *)(this + 0x264) = 0;
  this[0x280] = (Bt2World)0x1;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x26c) = 0;
                    /* try { // try from 00bb261c to 00bb262f has its CatchHandler @ 00bb268c */
  this_00 = (btDefaultSoftBodySolver *)btAlignedAllocInternal(0x38,0x10);
  btDefaultSoftBodySolver::btDefaultSoftBodySolver(this_00);
  *(btDefaultSoftBodySolver **)(this + 0x2a0) = this_00;
  *(btDispatcher **)(this + 0x250) = param_1;
  *(btBroadphaseInterface **)(this + 0x248) = param_2;
                    /* try { // try from 00bb2640 to 00bb264b has its CatchHandler @ 00bb2688 */
  btSparseSdf<3>::Initialize((btSparseSdf<3> *)(this + 0x268),0x94f,0x40000);
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(Bt2World **)(param_3 + 0x148) = this + 0x1c8;
  *(Bt2World **)(param_3 + 0x150) = this;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0xc11cf5c300000000;
  *(undefined8 *)(this + 0x230) = 0x3ecccccd00000000;
  *(undefined8 *)(this + 0x228) = 0x3f99999a;
  return;
}


