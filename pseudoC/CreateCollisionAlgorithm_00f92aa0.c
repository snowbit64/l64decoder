// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f92aa0
// Size: 156 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btSphereTriangleCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btSphereTriangleCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  long *plVar1;
  long lVar2;
  CreateFunc CVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x28);
  *(undefined *)(puVar4 + 2) = 0;
  plVar1 = *(long **)param_1;
  lVar2 = *(long *)(param_1 + 8);
  CVar3 = this[8];
  puVar4[3] = lVar2;
  *puVar4 = &PTR__btSphereTriangleCollisionAlgorithm_0101c270;
  puVar4[1] = plVar1;
  *(CreateFunc *)(puVar4 + 4) = CVar3;
  if (lVar2 == 0) {
    uVar5 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    puVar4[3] = uVar5;
    *(undefined *)(puVar4 + 2) = 1;
  }
  return puVar4;
}


