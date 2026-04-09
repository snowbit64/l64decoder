// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copySoftBodyToVertexBuffer
// Entry Point: 00f748e8
// Size: 328 bytes
// Signature: undefined __thiscall copySoftBodyToVertexBuffer(btDefaultSoftBodySolver * this, btSoftBody * param_1, btVertexBufferDescriptor * param_2)


/* btDefaultSoftBodySolver::copySoftBodyToVertexBuffer(btSoftBody const*, btVertexBufferDescriptor*)
    */

void __thiscall
btDefaultSoftBodySolver::copySoftBodyToVertexBuffer
          (btDefaultSoftBodySolver *this,btSoftBody *param_1,btVertexBufferDescriptor *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  iVar2 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x374);
    uVar8 = (ulong)uVar1;
    lVar4 = (**(code **)(*(long *)param_2 + 0x48))(param_2);
    uVar5 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
    if ((uVar5 & 1) != 0) {
      iVar2 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
      iVar3 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
      if (0 < (int)uVar1) {
        puVar6 = (undefined4 *)(lVar4 + (long)iVar2 * 4 + 8);
        puVar7 = (undefined4 *)(*(long *)(param_1 + 0x380) + 0x18);
        uVar5 = uVar8;
        do {
          uVar5 = uVar5 - 1;
          uVar9 = *puVar7;
          *(undefined8 *)(puVar6 + -2) = *(undefined8 *)(puVar7 + -2);
          *puVar6 = uVar9;
          puVar6 = puVar6 + iVar3;
          puVar7 = puVar7 + 0x1e;
        } while (uVar5 != 0);
      }
    }
    uVar5 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
    if ((uVar5 & 1) != 0) {
      iVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
      iVar3 = (**(code **)(*(long *)param_2 + 0x40))(param_2);
      if (0 < (int)uVar1) {
        puVar6 = (undefined4 *)(lVar4 + (long)iVar2 * 4 + 8);
        puVar7 = (undefined4 *)(*(long *)(param_1 + 0x380) + 0x58);
        do {
          uVar8 = uVar8 - 1;
          uVar9 = *puVar7;
          *(undefined8 *)(puVar6 + -2) = *(undefined8 *)(puVar7 + -2);
          *puVar6 = uVar9;
          puVar6 = puVar6 + iVar3;
          puVar7 = puVar7 + 0x1e;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}


