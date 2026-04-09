// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2PhysicsCharacterController
// Entry Point: 009bc98c
// Size: 464 bytes
// Signature: undefined __thiscall Bt2PhysicsCharacterController(Bt2PhysicsCharacterController * this, Bt2ScenegraphPhysicsContext * param_1, TransformGroup * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint param_8, float param_9)


/* Bt2PhysicsCharacterController::Bt2PhysicsCharacterController(Bt2ScenegraphPhysicsContext*,
   TransformGroup*, float, float, float, float, float, unsigned int, float) */

void __thiscall
Bt2PhysicsCharacterController::Bt2PhysicsCharacterController
          (Bt2PhysicsCharacterController *this,Bt2ScenegraphPhysicsContext *param_1,
          TransformGroup *param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,uint param_8,float param_9)

{
  btPairCachingGhostObject *this_00;
  btCapsuleShape *this_01;
  undefined4 *puVar1;
  Bt2KinematicCharacterController *this_02;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__Bt2PhysicsCharacterController_00fe1d20;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 009bc9fc to 009bca03 has its CatchHandler @ 009bcb9c */
  RawTransformGroup::updateWorldTransformation();
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  uVar6 = *(undefined4 *)(param_2 + 0xf0);
                    /* try { // try from 009bca0c to 009bca17 has its CatchHandler @ 009bcb98 */
  this_00 = (btPairCachingGhostObject *)btAlignedAllocInternal(0x178,0x10);
                    /* try { // try from 009bca1c to 009bca1f has its CatchHandler @ 009bcb84 */
  btPairCachingGhostObject::btPairCachingGhostObject(this_00);
  *(btPairCachingGhostObject **)(this + 0x10) = this_00;
  *(undefined8 *)(this_00 + 0x14) = 0;
  *(undefined8 *)(this_00 + 0xc) = 0;
  *(undefined4 *)(this_00 + 8) = 0x3f800000;
  *(undefined4 *)(this_00 + 0x1c) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x40) = uVar6;
  *(undefined4 *)(this_00 + 0x44) = 0;
  *(int *)(this_00 + 0x148) = *(int *)(this_00 + 0x148) + 1;
  *(undefined8 *)(this_00 + 0x30) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x38) = uVar5;
                    /* try { // try from 009bca5c to 009bca67 has its CatchHandler @ 009bcba0 */
  this_01 = (btCapsuleShape *)btAlignedAllocInternal(0x48,0x10);
                    /* try { // try from 009bca6c to 009bca77 has its CatchHandler @ 009bcb70 */
  btCapsuleShape::btCapsuleShape(this_01,param_3,param_4);
                    /* try { // try from 009bca84 to 009bcac3 has its CatchHandler @ 009bcba0 */
  (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10),this_01);
  lVar3 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar3 + 0xe0) = 0x10;
  puVar1 = (undefined4 *)operator_new(0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  *(TransformGroup **)(puVar1 + 2) = param_2;
  *(undefined4 **)(lVar3 + 0x108) = puVar1;
  *puVar1 = 1;
  puVar1[4] = uVar6;
  this_02 = (Bt2KinematicCharacterController *)btAlignedAllocInternal(0xd0,0x10);
                    /* try { // try from 009bcacc to 009bcadb has its CatchHandler @ 009bcb5c */
  Bt2KinematicCharacterController::Bt2KinematicCharacterController
            (this_02,*(btPairCachingGhostObject **)(this + 0x10),(btConvexShape *)this_01,param_5,1)
  ;
  *(Bt2KinematicCharacterController **)(this + 8) = this_02;
                    /* try { // try from 009bcae0 to 009bcb2b has its CatchHandler @ 009bcba0 */
  fVar4 = (float)MathUtil::degreeToRadian(param_6);
  Bt2KinematicCharacterController::setMaxSlope(this_02,fVar4);
  plVar2 = *(long **)(param_1 + 0x30);
  lVar3 = *plVar2;
  uVar5 = *(undefined8 *)(this + 0x10);
  *(float *)(*(long *)(this + 8) + 0xcc) = param_9 / 1000.0;
  (**(code **)(lVar3 + 0x48))(plVar2,uVar5,param_8,param_8 >> 0x10);
  *(TransformGroup **)(this + 0x18) = param_2;
  *(Bt2ScenegraphPhysicsContext **)(this + 0x20) = param_1;
  ScenegraphNode::addWorldTransformationDirtyListener
            ((ScenegraphNode *)param_2,(WorldTransformationDirtyListener *)this);
  *(undefined4 *)(this + 0x5b) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


