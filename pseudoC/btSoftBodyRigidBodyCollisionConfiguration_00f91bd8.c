// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSoftBodyRigidBodyCollisionConfiguration
// Entry Point: 00f91bd8
// Size: 568 bytes
// Signature: undefined __thiscall btSoftBodyRigidBodyCollisionConfiguration(btSoftBodyRigidBodyCollisionConfiguration * this, btDefaultCollisionConstructionInfo * param_1)


/* btSoftBodyRigidBodyCollisionConfiguration::btSoftBodyRigidBodyCollisionConfiguration(btDefaultCollisionConstructionInfo
   const&) */

void __thiscall
btSoftBodyRigidBodyCollisionConfiguration::btSoftBodyRigidBodyCollisionConfiguration
          (btSoftBodyRigidBodyCollisionConfiguration *this,
          btDefaultCollisionConstructionInfo *param_1)

{
  btSoftBodyRigidBodyCollisionConfiguration bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  int **ppiVar8;
  
  btDefaultCollisionConfiguration::btDefaultCollisionConfiguration
            ((btDefaultCollisionConfiguration *)this,param_1);
  puVar3 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined ***)this = &PTR__btSoftBodyRigidBodyCollisionConfiguration_0101bc88;
  puVar4 = (undefined8 *)(*(code *)puVar3)(0x10,0x10);
  *(undefined *)(puVar4 + 1) = 0;
  puVar3 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0xb8) = puVar4;
  *puVar4 = &PTR__btCollisionAlgorithmCreateFunc_0101bce0;
  puVar4 = (undefined8 *)(*(code *)puVar3)(0x10,0x10);
  *(undefined *)(puVar4 + 1) = 0;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0xc0) = puVar4;
  puVar3 = PTR_FUN_01048e38;
  *puVar4 = &PTR__btCollisionAlgorithmCreateFunc_0101bd20;
  puVar4 = (undefined8 *)(*(code *)puVar3)(0x10,0x10);
  *puVar4 = &PTR__btCollisionAlgorithmCreateFunc_0101bd20;
  puVar3 = PTR_FUN_01048e38;
  *(undefined8 **)(this + 200) = puVar4;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined *)(puVar4 + 1) = 1;
  puVar4 = (undefined8 *)(*(code *)puVar3)(0x10,0x10);
  *(undefined *)(puVar4 + 1) = 0;
  puVar3 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0xd0) = puVar4;
  *puVar4 = &PTR__btCollisionAlgorithmCreateFunc_0101bd60;
  puVar4 = (undefined8 *)(*(code *)puVar3)(0x10,0x10);
  bVar1 = this[0x28];
  *(undefined8 **)(this + 0xd8) = puVar4;
  *(undefined *)(puVar4 + 1) = 1;
  *puVar4 = &PTR__btCollisionAlgorithmCreateFunc_0101bda0;
  if (bVar1 == (btSoftBodyRigidBodyCollisionConfiguration)0x0) {
    return;
  }
  ppiVar8 = (int **)(this + 0x20);
  piVar5 = *ppiVar8;
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (0xf7 < *piVar5) {
    return;
  }
  if (*(long *)(piVar5 + 6) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(*(long *)(piVar5 + 6));
    if (*ppiVar8 == (int *)0x0) goto LAB_00f91d74;
  }
  gNumAlignedFree = gNumAlignedFree + 1;
  (*(code *)PTR_FUN_01048e40)();
LAB_00f91d74:
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  piVar5 = (int *)(*(code *)PTR_FUN_01048e38)(0x20,0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  *piVar5 = 0xf8;
  piVar5[1] = iVar7;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar4 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(iVar7 * 0xf8,0x10);
  *(undefined8 **)(piVar5 + 4) = puVar4;
  *(undefined8 **)(piVar5 + 6) = puVar4;
  iVar7 = piVar5[1] + -1;
  piVar5[2] = piVar5[1];
  if (iVar7 != 0) {
    iVar2 = *piVar5;
    puVar6 = puVar4;
    do {
      puVar4 = (undefined8 *)((long)puVar6 + (long)iVar2);
      iVar7 = iVar7 + -1;
      *puVar6 = puVar4;
      puVar6 = puVar4;
    } while (iVar7 != 0);
  }
  *puVar4 = 0;
  *ppiVar8 = piVar5;
  return;
}


