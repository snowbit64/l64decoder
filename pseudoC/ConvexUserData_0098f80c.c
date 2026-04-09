// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvexUserData
// Entry Point: 0098f80c
// Size: 64 bytes
// Signature: undefined __thiscall ConvexUserData(ConvexUserData * this, VolumeInfo * param_1, btVector3 * param_2, __map_iterator param_3)


/* Bt2PhysicsColShapeCache::ConvexUserData::ConvexUserData(Bt2PhysicsColShapeCache::VolumeInfo
   const&, btVector3*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,
   btCollisionShape*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<Bt2PhysicsColShapeCache::ScaledColShapeId,
   btCollisionShape*>, void*>*, long> >) */

void __thiscall
Bt2PhysicsColShapeCache::ConvexUserData::ConvexUserData
          (ConvexUserData *this,VolumeInfo *param_1,btVector3 *param_2,__map_iterator param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(ulong *)(this + 0x18) = (ulong)param_3;
  *(btVector3 **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR__ConvexUserData_00fe0b70;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar5;
  return;
}


