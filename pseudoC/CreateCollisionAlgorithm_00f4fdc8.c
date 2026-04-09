// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f4fdc8
// Size: 104 bytes
// Signature: undefined __cdecl CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

void btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm
               (btCollisionAlgorithmConstructionInfo *param_1,btCollisionObjectWrapper *param_2,
               btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_2 + 0x70))(*(long **)param_2,0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined *)(puVar1 + 4) = 0;
  uVar3 = *(undefined8 *)param_2;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined *)(puVar1 + 6) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  *puVar1 = &PTR__btConvexConvexAlgorithm_01019a70;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)puVar1 + 0x34) = uVar4;
  return;
}


