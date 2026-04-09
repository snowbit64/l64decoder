// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f91ed8
// Size: 192 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btSoftBodyConcaveCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btSoftBodyConcaveCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0xf8);
  uVar2 = *(undefined8 *)param_1;
  *(undefined *)(puVar1 + 2) = 0;
  puVar1[0xb] = uVar2;
  puVar1[0xc] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  puVar1[0x14] = 0;
  *puVar1 = &PTR__btSoftBodyConcaveCollisionAlgorithm_0101c4f8;
  puVar1[1] = uVar2;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  puVar1[0x18] = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  *(undefined *)(puVar1 + 0x11) = 1;
  *(undefined *)(puVar1 + 0x15) = 1;
  *(undefined *)(puVar1 + 0x19) = 1;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined *)(puVar1 + 0x1d) = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[0x1c] = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  puVar1[3] = &PTR__btSoftBodyTriangleCallback_0101c530;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  btHashMap<btHashKey<btTriIndex>,btTriIndex>::clear();
  return puVar1;
}


