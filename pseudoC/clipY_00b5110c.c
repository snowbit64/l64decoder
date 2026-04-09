// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipY
// Entry Point: 00b5110c
// Size: 376 bytes
// Signature: undefined __thiscall clipY(ClippingMesh * this, ClippingMesh * param_1, bool param_2, ClippingMesh * param_3, bool param_4, float param_5)


/* ClippingMesh::clipY(ClippingMesh&, bool, ClippingMesh&, bool, float) const */

void __thiscall
ClippingMesh::clipY(ClippingMesh *this,ClippingMesh *param_1,bool param_2,ClippingMesh *param_3,
                   bool param_4,float param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  
  if (param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (param_4) {
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    iVar5 = *(int *)(this + 0x18);
  }
  else {
    iVar5 = *(int *)(this + 0x18);
  }
  if (iVar5 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      ClippingUtil::clipY((Vector4 *)
                          (*(long *)this +
                          (ulong)*(uint *)(*(long *)(this + 8) + (ulong)(uVar3 + 1) * 4) * 0x10),
                          *(uint *)(*(long *)(this + 8) + (ulong)uVar3 * 4),
                          (Vector4 *)(*(long *)param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10),
                          (uint *)(param_1 + 0x10),
                          (Vector4 *)(*(long *)param_3 + (ulong)*(uint *)(param_3 + 0x14) * 0x10),
                          (uint *)(param_3 + 0x10),param_5);
      if (2 < *(uint *)(param_1 + 0x10)) {
        lVar2 = *(long *)(param_1 + 8);
        *(uint *)(lVar2 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1) * 4) =
             *(uint *)(param_1 + 0x10);
        *(undefined4 *)(lVar2 + (ulong)(*(int *)(param_1 + 0x18) << 1 | 1) * 4) =
             *(undefined4 *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(ulong *)(param_1 + 0x14) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x14) + iVar5);
      }
      uVar1 = *(uint *)(param_3 + 0x10);
      if (2 < uVar1) {
        lVar2 = *(long *)(param_3 + 8);
        *(uint *)(lVar2 + (ulong)(uint)(*(int *)(param_3 + 0x18) << 1) * 4) = uVar1;
        *(undefined4 *)(lVar2 + (ulong)(*(int *)(param_3 + 0x18) << 1 | 1) * 4) =
             *(undefined4 *)(param_3 + 0x14);
        iVar5 = *(int *)(param_3 + 0x10);
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(ulong *)(param_3 + 0x14) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_3 + 0x14) + iVar5);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 2;
    } while (uVar4 < *(uint *)(this + 0x18));
  }
  return;
}


