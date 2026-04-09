// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f9292c
// Size: 200 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btCollisionObjectWrapper *pbVar1;
  CreateFunc CVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x30);
  *(undefined *)(puVar3 + 2) = 0;
  CVar2 = this[8];
  plVar4 = *(long **)param_1;
  puVar3[3] = 0;
  uVar7 = *(undefined8 *)(this + 0xc);
  *(CreateFunc *)(puVar3 + 4) = CVar2;
  pbVar1 = param_3;
  if (CVar2 != (CreateFunc)0x0) {
    pbVar1 = param_2;
    param_2 = param_3;
  }
  *puVar3 = &PTR__btConvexPlaneCollisionAlgorithm_0101c3b8;
  puVar3[1] = plVar4;
  lVar6 = *plVar4;
  *(undefined8 *)((long)puVar3 + 0x24) = uVar7;
  uVar5 = (**(code **)(lVar6 + 0x30))
                    (plVar4,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(pbVar1 + 0x10));
  if ((uVar5 & 1) != 0) {
    uVar7 = (**(code **)(*(long *)puVar3[1] + 0x18))
                      ((long *)puVar3[1],*(undefined8 *)(param_2 + 0x10),
                       *(undefined8 *)(pbVar1 + 0x10));
    puVar3[3] = uVar7;
    *(undefined *)(puVar3 + 2) = 1;
  }
  return puVar3;
}


