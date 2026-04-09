// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipXY
// Entry Point: 00b51284
// Size: 376 bytes
// Signature: undefined __thiscall clipXY(ClippingMesh * this, ClippingMesh * param_1, bool param_2)


/* ClippingMesh::clipXY(ClippingMesh&, bool) const */

void __thiscall ClippingMesh::clipXY(ClippingMesh *this,ClippingMesh *param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      ClippingUtil::clipX((Vector4 *)
                          (*(long *)this +
                          (ulong)*(uint *)(*(long *)(this + 8) + (ulong)(uVar3 + 1) * 4) * 0x10),
                          *(uint *)(*(long *)(this + 8) + (ulong)uVar3 * 4),
                          *(Vector4 **)(this + 0x20),&uStack_64,*(Vector4 **)(this + 0x28),&local_60
                          ,-1.0);
      ClippingUtil::clipY(*(Vector4 **)(this + 0x28),local_60,*(Vector4 **)(this + 0x20),&uStack_64,
                          *(Vector4 **)(this + 0x30),&local_5c,-1.0);
      ClippingUtil::clipX(*(Vector4 **)(this + 0x30),local_5c,*(Vector4 **)(this + 0x28),&local_60,
                          *(Vector4 **)(this + 0x20),&uStack_64,1.0);
      ClippingUtil::clipY(*(Vector4 **)(this + 0x28),local_60,
                          (Vector4 *)(*(long *)param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10),
                          (uint *)(param_1 + 0x10),*(Vector4 **)(this + 0x20),&uStack_64,1.0);
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
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 2;
    } while (uVar4 < *(uint *)(this + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


