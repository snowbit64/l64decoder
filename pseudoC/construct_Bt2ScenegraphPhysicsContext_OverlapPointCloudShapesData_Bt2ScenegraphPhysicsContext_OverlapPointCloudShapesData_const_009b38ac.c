// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData_const&>
// Entry Point: 009b38ac
// Size: 148 bytes
// Signature: void __thiscall construct<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData_const&>(allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData> * this, OverlapPointCloudShapesData * param_1, OverlapPointCloudShapesData * param_2)


/* void 
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>::construct<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,
   Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData
   const&>(Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData*,
   Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData const&) */

void __thiscall
std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>::
construct<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData_const&>
          (allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData> *this,
          OverlapPointCloudShapesData *param_1,OverlapPointCloudShapesData *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray
            ((btAlignedObjectArray<btCollisionObject*> *)(param_1 + 8),
             (btAlignedObjectArray *)(param_2 + 8));
                    /* try { // try from 009b38e0 to 009b38eb has its CatchHandler @ 009b3974 */
  btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray
            ((btAlignedObjectArray<btCollisionObject*> *)(param_1 + 0x28),
             (btAlignedObjectArray *)(param_2 + 0x28));
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
                    /* try { // try from 009b391c to 009b391f has its CatchHandler @ 009b3940 */
  vector<Vector3,std::__ndk1::allocator<Vector3>>::vector
            ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)(param_1 + 0x90),
             (vector *)(param_2 + 0x90));
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xab) = *(undefined4 *)(param_2 + 0xab);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  return;
}


