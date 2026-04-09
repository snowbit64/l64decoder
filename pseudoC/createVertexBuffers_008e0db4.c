// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createVertexBuffers
// Entry Point: 008e0db4
// Size: 656 bytes
// Signature: undefined __thiscall createVertexBuffers(IndexedTriangleSetGeometry * this, IRenderDevice * param_1, IndexedTriangleSet * param_2)


/* IndexedTriangleSetGeometry::createVertexBuffers(IRenderDevice*, IndexedTriangleSet*) */

void __thiscall
IndexedTriangleSetGeometry::createVertexBuffers
          (IndexedTriangleSetGeometry *this,IRenderDevice *param_1,IndexedTriangleSet *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uchar *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  IndexedTriangleSetGeometry *pIVar11;
  uint uVar12;
  IndexedTriangleSetGeometry *pIVar13;
  ulong uVar14;
  ulong uVar15;
  uchar *local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  bool local_f4 [4];
  undefined4 local_f0 [28];
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  uVar5 = TriangleSet::getNumVertices();
  pfVar7 = (float *)TriangleSet::getPositions();
  IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
            (uVar5,pfVar7,0.004,local_f4,(float *)(this + 0x158),&local_f8);
  *(float *)(this + 0x164) = 1.0 / local_f8;
  iVar6 = IndexedTriangleSetGeometryUtil::getVertexSize(*(uint *)(this + 0x38),local_f4[0]);
  uVar1 = uVar5 + 3 & 0xfffffffc;
  puVar8 = (uchar *)operator_new__((ulong)(iVar6 * uVar1));
  if (*(int *)(this + 0x148) != 0) {
    puVar10 = (undefined8 *)((ulong)local_f0 | 4);
    uVar14 = 0;
    pIVar13 = this + 0x68;
    pIVar11 = this + 0xa8;
    do {
      uVar12 = 1;
      local_f0[0] = 1;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      iVar6 = *(int *)(this + uVar14 * 0x10 + 0x6c);
      iVar2 = *(int *)(this + uVar14 * 0x10 + 0x70);
      iVar3 = *(int *)(this + uVar14 * 0x10 + 0x74);
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      *(undefined8 *)((long)puVar10 + 100) = 0;
      *(undefined8 *)((long)puVar10 + 0x5c) = 0;
      if (iVar6 != 0) {
        uVar12 = 2;
      }
      if (iVar2 != 0) {
        uVar12 = 3;
      }
      if (iVar3 != 0) {
        uVar12 = 4;
      }
      IndexedTriangleSetGeometryUtil::buildVertexDeclarationDesc
                ((uint *)(this + uVar14 * 0x10 + 0x68),uVar12,local_f4[0],
                 (VertexDeclarationDesc *)local_f0);
      uVar9 = (**(code **)(*(long *)param_1 + 0x128))(param_1,local_f0);
      uVar15 = 0;
      *(undefined8 *)(this + uVar14 * 8 + 0x128) = uVar9;
      do {
        IndexedTriangleSetGeometryUtil::fillVertexBuffer
                  (param_2,puVar8,*(uint *)(pIVar13 + uVar15 * 4),local_f4[0],
                   (float *)(this + 0x158),local_f8,uVar1 - uVar5);
        local_110 = (uchar *)0x0;
        local_108 = 0x100000000;
        local_100 = 0;
        iVar6 = (**(code **)(**(long **)(this + uVar14 * 8 + 0x128) + 0x10))
                          (*(long **)(this + uVar14 * 8 + 0x128),uVar15 & 0xffffffff);
        local_100 = *(undefined8 *)(this + 0x18);
        local_108 = CONCAT44(1,iVar6 * uVar1);
        local_110 = puVar8;
        uVar9 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
        uVar9 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar9,&local_110);
        *(undefined8 *)(pIVar11 + uVar15 * 8) = uVar9;
        uVar15 = uVar15 + 1;
      } while (uVar12 != uVar15);
      pIVar13 = pIVar13 + 0x10;
      pIVar11 = pIVar11 + 0x20;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(this + 0x148));
  }
  operator_delete__(puVar8);
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


