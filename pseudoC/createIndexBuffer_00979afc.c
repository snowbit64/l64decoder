// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createIndexBuffer
// Entry Point: 00979afc
// Size: 472 bytes
// Signature: undefined __thiscall createIndexBuffer(MeshSplitAttachmentGeometry * this, IRenderDevice * param_1)


/* MeshSplitAttachmentGeometry::createIndexBuffer(IRenderDevice*) */

void __thiscall
MeshSplitAttachmentGeometry::createIndexBuffer
          (MeshSplitAttachmentGeometry *this,IRenderDevice *param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  IndexedTriangleSet *this_00;
  long lVar8;
  int iVar9;
  void *__dest;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  void *local_88;
  int local_80;
  undefined8 local_7c;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(this + 0x90);
  iVar9 = (int)((ulong)(*(long *)(this + 0x98) - lVar7) >> 2);
  if (iVar9 == 0) {
    pvVar4 = operator_new__(0);
    uVar12 = 0;
    uVar11 = 0;
    uVar14 = 0xffffffff;
  }
  else {
    lVar10 = ((ulong)(*(long *)(this + 0x98) - lVar7) >> 2 & 0xffffffff) * 4;
    lVar8 = 0;
    uVar13 = 0;
    this_00 = *(IndexedTriangleSet **)(*(long *)(this + 0x68) + 0x28);
    uVar11 = 0;
    uVar12 = 0xffffffff;
    while( true ) {
      puVar3 = (uint *)IndexedTriangleSet::getSubset(this_00,(uint)*(ushort *)(lVar7 + lVar8 + 2));
      uVar1 = *puVar3;
      uVar14 = uVar1;
      if (uVar12 <= uVar1) {
        uVar14 = uVar12;
      }
      uVar12 = puVar3[1] + uVar1;
      if (puVar3[1] + uVar1 <= uVar11) {
        uVar12 = uVar11;
      }
      uVar11 = puVar3[3] + (int)uVar13;
      uVar13 = (ulong)uVar11;
      if (lVar10 + -4 == lVar8) break;
      lVar7 = *(long *)(this + 0x90);
      lVar8 = lVar8 + 4;
      uVar11 = uVar12;
      uVar12 = uVar14;
    }
    pvVar4 = operator_new__(uVar13 << 1);
    if (iVar9 != 0) {
      lVar7 = 0;
      __dest = pvVar4;
      do {
        lVar8 = IndexedTriangleSet::getSubset
                          (this_00,(uint)*(ushort *)(*(long *)(this + 0x90) + lVar7 + 2));
        lVar5 = IndexedTriangleSet::getIndices16();
        memcpy(__dest,(void *)(lVar5 + (ulong)*(uint *)(lVar8 + 8) * 2),
               (ulong)*(uint *)(lVar8 + 0xc) << 1);
        lVar7 = lVar7 + 4;
        __dest = (void *)((long)__dest + (ulong)*(uint *)(lVar8 + 0xc) * 2);
      } while (lVar10 - lVar7 != 0);
    }
  }
  local_80 = uVar11 << 1;
  local_7c = 1;
  local_70 = "MeshSplitAttachmentGeometry";
  local_88 = pvVar4;
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x110))(param_1,uVar6,&local_88);
  *(undefined8 *)(this + 0x70) = uVar6;
  *(short *)(this + 0x78) = (short)uVar11;
  *(short *)(this + 0x7a) = (short)uVar14;
  *(short *)(this + 0x7c) = (short)uVar12 - (short)uVar14;
  operator_delete__(pvVar4);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


