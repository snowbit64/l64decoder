// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CollisionConfiguration
// Entry Point: 0099a164
// Size: 296 bytes
// Signature: undefined __thiscall CollisionConfiguration(CollisionConfiguration * this, btDefaultCollisionConstructionInfo * param_1)


/* Bt2PhysicsContextManager::CollisionConfiguration::CollisionConfiguration(btDefaultCollisionConstructionInfo
   const&) */

void __thiscall
Bt2PhysicsContextManager::CollisionConfiguration::CollisionConfiguration
          (CollisionConfiguration *this,btDefaultCollisionConstructionInfo *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  btSoftBodyRigidBodyCollisionConfiguration::btSoftBodyRigidBodyCollisionConfiguration
            ((btSoftBodyRigidBodyCollisionConfiguration *)this,param_1);
  *(undefined ***)this = &PTR__CollisionConfiguration_00fe1190;
                    /* try { // try from 0099a188 to 0099a267 has its CatchHandler @ 0099a28c */
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x20,0x10);
  *(undefined *)(puVar2 + 1) = 0;
  uVar1 = *(undefined8 *)(this + 0x38);
  *(undefined8 **)(this + 0xe0) = puVar2;
  puVar2[2] = *(undefined8 *)(this + 0x30);
  puVar2[3] = uVar1;
  *puVar2 = &PTR__btCollisionAlgorithmCreateFunc_00fe11e8;
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x20,0x10);
  *(undefined *)(puVar2 + 1) = 0;
  uVar1 = *(undefined8 *)(this + 0x38);
  *(undefined8 **)(this + 0xe8) = puVar2;
  puVar2[2] = *(undefined8 *)(this + 0x30);
  puVar2[3] = uVar1;
  *puVar2 = &PTR__btCollisionAlgorithmCreateFunc_00fe1238;
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x20,0x10);
  *(undefined *)(puVar2 + 1) = 0;
  uVar1 = *(undefined8 *)(this + 0x38);
  *(undefined8 **)(this + 0xf0) = puVar2;
  puVar2[2] = *(undefined8 *)(this + 0x30);
  puVar2[3] = uVar1;
  *puVar2 = &PTR__btCollisionAlgorithmCreateFunc_00fe1278;
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x20,0x10);
  *(undefined *)(puVar2 + 1) = 0;
  uVar1 = *(undefined8 *)(this + 0x38);
  *(undefined8 **)(this + 0xf8) = puVar2;
  puVar2[2] = *(undefined8 *)(this + 0x30);
  puVar2[3] = uVar1;
  *puVar2 = &PTR__btCollisionAlgorithmCreateFunc_00fe1358;
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined *)(puVar2 + 1) = 0;
  *(undefined8 **)(this + 0x100) = puVar2;
  *puVar2 = &PTR__btCollisionAlgorithmCreateFunc_00fe1398;
  puVar2 = (undefined8 *)btAlignedAllocInternal(0x10,0x10);
  *(undefined8 **)(this + 0x108) = puVar2;
  *(undefined *)(puVar2 + 1) = 0;
  *puVar2 = &PTR__btCollisionAlgorithmCreateFunc_00fe13d8;
  return;
}


