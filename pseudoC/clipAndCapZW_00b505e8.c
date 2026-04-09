// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipAndCapZW
// Entry Point: 00b505e8
// Size: 916 bytes
// Signature: undefined __thiscall clipAndCapZW(ClippingMesh * this, ClippingMesh * param_1, bool param_2, ClippingMesh * param_3, ClippingMesh * param_4, ClippingMesh * param_5)


/* ClippingMesh::clipAndCapZW(ClippingMesh&, bool, ClippingMesh&, ClippingMesh&, ClippingMesh&)
   const */

void __thiscall
ClippingMesh::clipAndCapZW
          (ClippingMesh *this,ClippingMesh *param_1,bool param_2,ClippingMesh *param_3,
          ClippingMesh *param_4,ClippingMesh *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar4 = (undefined8 *)(param_3 + 0x10);
  *puVar4 = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x10) = 0;
  *(undefined4 *)(param_5 + 0x18) = 0;
  if (*(int *)(this + 0x18) != 0) {
    uVar5 = 0;
    uVar2 = 0;
    uVar6 = 1;
    while( true ) {
      ClippingUtil::clipZWneg
                ((Vector4 *)
                 (*(long *)this +
                 (ulong)*(uint *)(*(long *)(this + 8) + (ulong)(uVar5 + 1) * 4) * 0x10),
                 *(uint *)(*(long *)(this + 8) + (ulong)uVar5 * 4),
                 (Vector4 *)(*(long *)param_5 + (ulong)uVar2 * 0x10),(uint *)(param_5 + 0x10),
                 (Vector4 *)(*(long *)param_3 + (ulong)*(uint *)(param_3 + 0x14) * 0x10),
                 (uint *)puVar4);
      if (2 < *(uint *)(param_5 + 0x10)) {
        lVar3 = *(long *)(param_5 + 8);
        *(uint *)(lVar3 + (ulong)(uint)(*(int *)(param_5 + 0x18) << 1) * 4) =
             *(uint *)(param_5 + 0x10);
        *(undefined4 *)(lVar3 + (ulong)(*(int *)(param_5 + 0x18) << 1 | 1) * 4) =
             *(undefined4 *)(param_5 + 0x14);
        iVar7 = *(int *)(param_5 + 0x10);
        *(undefined4 *)(param_5 + 0x10) = 0;
        *(ulong *)(param_5 + 0x14) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_5 + 0x14) + iVar7);
      }
      if (2 < *(uint *)puVar4) {
        lVar3 = *(long *)(param_3 + 8);
        *(uint *)(lVar3 + (ulong)(uint)(*(int *)(param_3 + 0x18) << 1) * 4) = *(uint *)puVar4;
        *(undefined4 *)(lVar3 + (ulong)(*(int *)(param_3 + 0x18) << 1 | 1) * 4) =
             *(undefined4 *)(param_3 + 0x14);
        iVar7 = *(int *)(param_3 + 0x10);
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(ulong *)(param_3 + 0x14) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_3 + 0x14) + iVar7);
      }
      if (*(uint *)(this + 0x18) <= uVar6) break;
      uVar2 = *(uint *)(param_5 + 0x14);
      uVar5 = uVar5 + 2;
      uVar6 = uVar6 + 1;
    }
    if (*(int *)(param_5 + 0x18) != 0) {
      getCapZW(param_3,param_4,-1.0);
      if (*(int *)(param_4 + 0x18) != 0) {
        uVar5 = 0;
        uVar6 = 0;
        do {
          ClippingUtil::clipZWpos
                    ((Vector4 *)
                     (*(long *)param_4 +
                     (ulong)*(uint *)(*(long *)(param_4 + 8) + (ulong)(uVar5 + 1) * 4) * 0x10),
                     *(uint *)(*(long *)(param_4 + 8) + (ulong)uVar5 * 4),
                     (Vector4 *)(*(long *)param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10),
                     (uint *)(param_1 + 0x10),*(Vector4 **)(this + 0x20),&uStack_6c);
          if (2 < *(uint *)(param_1 + 0x10)) {
            lVar3 = *(long *)(param_1 + 8);
            *(uint *)(lVar3 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1) * 4) =
                 *(uint *)(param_1 + 0x10);
            *(undefined4 *)(lVar3 + (ulong)(*(int *)(param_1 + 0x18) << 1 | 1) * 4) =
                 *(undefined4 *)(param_1 + 0x14);
            iVar7 = *(int *)(param_1 + 0x10);
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(ulong *)(param_1 + 0x14) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x14) + iVar7);
          }
          uVar6 = uVar6 + 1;
          uVar5 = uVar5 + 2;
        } while (uVar6 < *(uint *)(param_4 + 0x18));
      }
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_4 + 0x18) = 0;
      *(undefined8 *)(param_4 + 0x10) = 0;
      if (*(int *)(param_5 + 0x18) != 0) {
        uVar5 = 0;
        uVar6 = 0;
        iVar7 = *(int *)(param_1 + 0x18);
        do {
          ClippingUtil::clipZWpos
                    ((Vector4 *)
                     (*(long *)param_5 +
                     (ulong)*(uint *)(*(long *)(param_5 + 8) + (ulong)(uVar5 + 1) * 4) * 0x10),
                     *(uint *)(*(long *)(param_5 + 8) + (ulong)uVar5 * 4),
                     (Vector4 *)(*(long *)param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10),
                     (uint *)(param_1 + 0x10),
                     (Vector4 *)(*(long *)param_3 + (ulong)*(uint *)(param_3 + 0x14) * 0x10),
                     (uint *)puVar4);
          if (2 < *(uint *)(param_1 + 0x10)) {
            lVar3 = *(long *)(param_1 + 8);
            *(uint *)(lVar3 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1) * 4) =
                 *(uint *)(param_1 + 0x10);
            *(undefined4 *)(lVar3 + (ulong)(*(int *)(param_1 + 0x18) << 1 | 1) * 4) =
                 *(undefined4 *)(param_1 + 0x14);
            iVar8 = *(int *)(param_1 + 0x10);
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(ulong *)(param_1 + 0x14) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x14) + iVar8);
          }
          if (2 < *(uint *)puVar4) {
            lVar3 = *(long *)(param_3 + 8);
            *(uint *)(lVar3 + (ulong)(uint)(*(int *)(param_3 + 0x18) << 1) * 4) = *(uint *)puVar4;
            *(undefined4 *)(lVar3 + (ulong)(*(int *)(param_3 + 0x18) << 1 | 1) * 4) =
                 *(undefined4 *)(param_3 + 0x14);
            iVar8 = *(int *)(param_3 + 0x10);
            *(undefined4 *)(param_3 + 0x10) = 0;
            *(ulong *)(param_3 + 0x14) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_3 + 0x14) + iVar8);
          }
          uVar6 = uVar6 + 1;
          uVar5 = uVar5 + 2;
        } while (uVar6 < *(uint *)(param_5 + 0x18));
        if (iVar7 != *(int *)(param_1 + 0x18)) {
          getCapZW(param_3,param_1,1.0);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


