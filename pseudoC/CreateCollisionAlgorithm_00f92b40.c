// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f92b40
// Size: 140 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btSphereSphereCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btSphereSphereCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x20);
  plVar2 = *(long **)param_1;
  *(undefined *)(puVar1 + 2) = 0;
  puVar1[1] = plVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *puVar1 = &PTR__btSphereSphereCollisionAlgorithm_0101c220;
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar3,uVar4);
  puVar1[3] = uVar3;
  *(undefined *)(puVar1 + 2) = 1;
  return puVar1;
}


