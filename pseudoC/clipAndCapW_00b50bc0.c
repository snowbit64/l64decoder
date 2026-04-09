// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipAndCapW
// Entry Point: 00b50bc0
// Size: 368 bytes
// Signature: undefined __thiscall clipAndCapW(ClippingMesh * this, ClippingMesh * param_1, bool param_2, ClippingMesh * param_3, float param_4)


/* ClippingMesh::clipAndCapW(ClippingMesh&, bool, ClippingMesh&, float) const */

void __thiscall
ClippingMesh::clipAndCapW
          (ClippingMesh *this,ClippingMesh *param_1,bool param_2,ClippingMesh *param_3,float param_4
          )

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar3 = (uint *)(param_3 + 0x10);
  *puVar3 = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  if (*(int *)(this + 0x18) != 0) {
    uVar4 = 0;
    uVar1 = 0;
    uVar5 = 1;
    while( true ) {
      ClippingUtil::clipW((Vector4 *)
                          (*(long *)this +
                          (ulong)*(uint *)(*(long *)(this + 8) + (ulong)(uVar4 + 1) * 4) * 0x10),
                          *(uint *)(*(long *)(this + 8) + (ulong)uVar4 * 4),
                          (Vector4 *)(*(long *)param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10),
                          (uint *)(param_1 + 0x10),
                          (Vector4 *)(*(long *)param_3 + (ulong)uVar1 * 0x10),puVar3,param_4);
      if (2 < *(uint *)(param_1 + 0x10)) {
        lVar2 = *(long *)(param_1 + 8);
        *(uint *)(lVar2 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1) * 4) =
             *(uint *)(param_1 + 0x10);
        *(undefined4 *)(lVar2 + (ulong)(*(int *)(param_1 + 0x18) << 1 | 1) * 4) =
             *(undefined4 *)(param_1 + 0x14);
        iVar6 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(ulong *)(param_1 + 0x14) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x14) + iVar6);
      }
      if (2 < *puVar3) {
        lVar2 = *(long *)(param_3 + 8);
        *(uint *)(lVar2 + (ulong)(uint)(*(int *)(param_3 + 0x18) << 1) * 4) = *puVar3;
        *(undefined4 *)(lVar2 + (ulong)(*(int *)(param_3 + 0x18) << 1 | 1) * 4) =
             *(undefined4 *)(param_3 + 0x14);
        iVar6 = *(int *)(param_3 + 0x10);
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(ulong *)(param_3 + 0x14) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_3 + 0x14) + iVar6);
      }
      if (*(uint *)(this + 0x18) <= uVar5) break;
      uVar1 = *(uint *)(param_3 + 0x14);
      uVar4 = uVar4 + 2;
      uVar5 = uVar5 + 1;
    }
  }
  getCapW(param_3,param_1,param_4);
  return;
}


