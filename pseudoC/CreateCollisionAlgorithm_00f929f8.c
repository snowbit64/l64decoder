// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateCollisionAlgorithm
// Entry Point: 00f929f8
// Size: 164 bytes
// Signature: undefined __thiscall CreateCollisionAlgorithm(CreateFunc * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3)


/* btBoxBoxCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

undefined8 * __thiscall
btBoxBoxCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x20);
  plVar2 = *(long **)param_1;
  *(undefined *)(puVar1 + 2) = 0;
  puVar1[1] = plVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = 0;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  *puVar1 = &PTR__btBoxBoxCollisionAlgorithm_0101c300;
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar4,uVar5);
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*(long *)puVar1[1] + 0x18))
                      ((long *)puVar1[1],*(undefined8 *)(param_2 + 0x10),
                       *(undefined8 *)(param_3 + 0x10));
    puVar1[3] = uVar4;
    *(undefined *)(puVar1 + 2) = 1;
  }
  return puVar1;
}


