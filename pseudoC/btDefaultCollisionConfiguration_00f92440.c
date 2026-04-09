// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btDefaultCollisionConfiguration
// Entry Point: 00f92440
// Size: 1256 bytes
// Signature: undefined __thiscall btDefaultCollisionConfiguration(btDefaultCollisionConfiguration * this, btDefaultCollisionConstructionInfo * param_1)


/* btDefaultCollisionConfiguration::btDefaultCollisionConfiguration(btDefaultCollisionConstructionInfo
   const&) */

void __thiscall
btDefaultCollisionConfiguration::btDefaultCollisionConfiguration
          (btDefaultCollisionConfiguration *this,btDefaultCollisionConstructionInfo *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined ***)this = &PTR__btDefaultCollisionConfiguration_0101bde0;
  lVar8 = (*(code *)puVar5)(0x168,0x10);
  *(undefined4 *)(lVar8 + 0x134) = 0x38d1b717;
  *(byte *)(lVar8 + 0x14c) = *(byte *)(lVar8 + 0x14c) & 0xf0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(long *)(this + 0x30) = lVar8;
  iVar13 = *(int *)(param_1 + 0x1c);
  puVar9 = (undefined8 *)(*(code *)puVar5)(8,0x10);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x38) = puVar9;
  puVar7 = PTR_FUN_01048e38;
  puVar5 = &btMinkowskiPenetrationDepthSolver::vtable;
  if (iVar13 != 0) {
    puVar5 = &btGjkEpaPenetrationDepthSolver::vtable;
  }
  *puVar9 = puVar5 + 0x10;
  puVar9 = (undefined8 *)(*(code *)puVar7)(0x28,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  *(undefined8 **)(this + 0x40) = puVar9;
  puVar9[4] = 0x300000000;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *puVar9 = &PTR__CreateFunc_01019a48;
  uVar1 = *(undefined8 *)(this + 0x30);
  puVar9[2] = *(undefined8 *)(this + 0x38);
  puVar9[3] = uVar1;
  puVar9 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x48) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101be70;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x50) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101beb0;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x58) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101bef0;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x60) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101bf30;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x68) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101bf70;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x70) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101bfb0;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x78) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101bff0;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x98) = puVar9;
  puVar5 = PTR_FUN_01048e38;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101c030;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101c030;
  puVar5 = PTR_FUN_01048e38;
  *(undefined8 **)(this + 0xa0) = puVar9;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined *)(puVar9 + 1) = 1;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x10,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 **)(this + 0x90) = puVar9;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101c070;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x18,0x10);
  *(undefined *)(puVar9 + 1) = 0;
  *(undefined8 **)(this + 0xb0) = puVar9;
  puVar5 = PTR_FUN_01048e38;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 *)((long)puVar9 + 0xc) = 1;
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101c0b0;
  puVar9 = (undefined8 *)(*(code *)puVar5)(0x18,0x10);
  *(undefined8 *)((long)puVar9 + 0xc) = 1;
  uVar2 = *(uint *)(param_1 + 0x18);
  *puVar9 = &PTR__btCollisionAlgorithmCreateFunc_0101c0b0;
  *(undefined8 **)(this + 0xa8) = puVar9;
  *(undefined *)(puVar9 + 1) = 1;
  puVar5 = PTR_FUN_01048e38;
  if ((int)uVar2 < 0x41) {
    uVar2 = 0x40;
  }
  lVar8 = *(long *)param_1;
  if (uVar2 < 0x79) {
    uVar2 = 0x78;
  }
  if (lVar8 == 0) {
    this[0x18] = (btDefaultCollisionConfiguration)0x1;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    piVar10 = (int *)(*(code *)puVar5)(0x20,0x10);
    iVar13 = *(int *)(param_1 + 0x10);
    *piVar10 = 0x330;
    piVar10[1] = iVar13;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar9 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(iVar13 * 0x330,0x10);
    *(undefined8 **)(piVar10 + 4) = puVar9;
    *(undefined8 **)(piVar10 + 6) = puVar9;
    iVar13 = piVar10[1] + -1;
    piVar10[2] = piVar10[1];
    if (iVar13 != 0) {
      iVar4 = *piVar10;
      puVar12 = puVar9;
      do {
        puVar9 = (undefined8 *)((long)puVar12 + (long)iVar4);
        iVar13 = iVar13 + -1;
        *puVar12 = puVar9;
        puVar12 = puVar9;
      } while (iVar13 != 0);
    }
    *puVar9 = 0;
    *(int **)(this + 0x10) = piVar10;
    lVar8 = *(long *)(param_1 + 8);
    pcVar6 = (code *)PTR_FUN_01048e38;
  }
  else {
    this[0x18] = (btDefaultCollisionConfiguration)0x0;
    *(long *)(this + 0x10) = lVar8;
    lVar8 = *(long *)(param_1 + 8);
    pcVar6 = (code *)PTR_FUN_01048e38;
  }
  PTR_FUN_01048e38 = pcVar6;
  if (lVar8 == 0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    this[0x28] = (btDefaultCollisionConfiguration)0x1;
    puVar11 = (uint *)(*pcVar6)(0x20,0x10);
    uVar3 = *(uint *)(param_1 + 0x14);
    *puVar11 = uVar2;
    puVar5 = PTR_FUN_01048e38;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar11[1] = uVar3;
    puVar9 = (undefined8 *)(*(code *)puVar5)(uVar3 * uVar2,0x10);
    *(undefined8 **)(puVar11 + 4) = puVar9;
    *(undefined8 **)(puVar11 + 6) = puVar9;
    iVar13 = puVar11[1] - 1;
    puVar11[2] = puVar11[1];
    if (iVar13 != 0) {
      uVar2 = *puVar11;
      puVar12 = puVar9;
      do {
        puVar9 = (undefined8 *)((long)puVar12 + (long)(int)uVar2);
        iVar13 = iVar13 + -1;
        *puVar12 = puVar9;
        puVar12 = puVar9;
      } while (iVar13 != 0);
    }
    *puVar9 = 0;
    *(uint **)(this + 0x20) = puVar11;
  }
  else {
    this[0x28] = (btDefaultCollisionConfiguration)0x0;
    *(long *)(this + 0x20) = lVar8;
  }
  return;
}


