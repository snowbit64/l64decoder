// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f92e5c
// Size: 172 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btConvexConcaveCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btConvexConcaveCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x78);
  plVar2 = *(long **)param_1;
  *(undefined *)(puVar1 + 2) = 0;
  puVar1[0xb] = plVar2;
  puVar1[0xc] = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *puVar1 = &PTR__btConvexConcaveCollisionAlgorithm_0101c0f0;
  puVar1[1] = plVar2;
  puVar1[3] = &PTR__btConvexTriangleCallback_0101c128;
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar3,uVar4);
  puVar1[0xe] = uVar3;
  (**(code **)(*(long *)puVar1[0xb] + 0x28))((long *)puVar1[0xb],uVar3);
  return puVar1;
}


