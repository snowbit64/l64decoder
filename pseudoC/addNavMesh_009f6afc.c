// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addNavMesh
// Entry Point: 009f6afc
// Size: 5520 bytes
// Signature: undefined __thiscall addNavMesh(DeferredDebugRenderer * this, Matrix4x4 * param_1, NavigationMesh * param_2, bool param_3)


/* DeferredDebugRenderer::addNavMesh(Matrix4x4 const&, NavigationMesh*, bool) */

void __thiscall
DeferredDebugRenderer::addNavMesh
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,NavigationMesh *param_2,bool param_3)

{
  float *pfVar1;
  void **this_00;
  undefined8 *puVar2;
  void **ppvVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  void *pvVar18;
  ulong uVar19;
  undefined4 *puVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined *local_e0;
  undefined *local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  ushort *local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar7 = NavigationMesh::getNumOfNodes();
  local_b0 = NavigationMesh::getVertices();
  local_d8 = &UNK_0051b158;
  if (!param_3) {
    local_d8 = &UNK_0051b0f8;
  }
  local_e0 = &DAT_0051b128;
  if (!param_3) {
    local_e0 = &UNK_0051b0c8;
  }
  if (uVar7 != 0) {
    uVar15 = 0;
    local_d0 = (long *)(this + 0x18);
    this_00 = (void **)(this + 0x48);
    puVar2 = (undefined8 *)(this + 0x50);
    ppvVar3 = (void **)(this + 0x58);
    do {
      NavigationMesh::getNodeAt(param_2,uVar15);
      uVar8 = NavigationMeshNode::getNumOfEdges();
      local_a8 = (ushort *)NavigationMeshNode::getVertexIndices();
      local_c0 = NavigationMeshNode::getConnectionIndices();
      local_b8 = *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 2;
      uVar11 = (ulong)((int)local_b8 + uVar8 * 0xe);
      if (local_b8 < uVar11) {
        std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                  ((vector<float,std::__ndk1::allocator<float>> *)local_d0,uVar11 - local_b8);
      }
      else if (uVar11 < local_b8) {
        *(ulong *)(this + 0x20) = *(long *)(this + 0x18) + uVar11 * 4;
      }
      if (uVar8 != 0) {
        lVar14 = 0;
        lVar16 = 0;
        local_c8 = (ulong)(uVar8 - 1) * 0xe;
        uVar11 = 0;
        do {
          uVar4 = uVar11 + 1;
          iVar13 = (uint)*(ushort *)((long)local_a8 + lVar16) * 3;
          uVar23 = *(undefined4 *)(local_b0 + (ulong)*(ushort *)((long)local_a8 + lVar16) * 0xc);
          fVar21 = *(float *)(local_b0 + (ulong)(iVar13 + 1) * 4);
          uVar27 = *(undefined4 *)(local_b0 + (ulong)(iVar13 + 2) * 4);
          uVar25 = NEON_fmadd(uVar23,*(undefined4 *)param_1,fVar21 * *(float *)(param_1 + 0x10));
          uVar26 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 4),
                              fVar21 * *(float *)(param_1 + 0x14));
          uVar23 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 8),
                              fVar21 * *(float *)(param_1 + 0x18));
          local_80 = (float)NEON_fmadd(uVar27,*(undefined4 *)(param_1 + 0x20),uVar25);
          local_7c = (float)NEON_fmadd(uVar27,*(undefined4 *)(param_1 + 0x24),uVar26);
          local_78 = (float)NEON_fmadd(uVar27,*(undefined4 *)(param_1 + 0x28),uVar23);
          ppuVar6 = &local_e0;
          if (*(short *)(local_c0 + lVar16) != -1) {
            ppuVar6 = &local_d8;
          }
          puVar10 = (undefined4 *)*ppuVar6;
          local_80 = *(float *)(param_1 + 0x30) + local_80;
          local_7c = *(float *)(param_1 + 0x34) + local_7c;
          local_78 = *(float *)(param_1 + 0x38) + local_78;
          uVar19 = 0;
          if (local_c8 != lVar14) {
            uVar19 = uVar4 & 0xffffffff;
          }
          iVar13 = (uint)local_a8[uVar19] * 3;
          uVar23 = *(undefined4 *)(local_b0 + (ulong)local_a8[uVar19] * 0xc);
          fVar21 = *(float *)(local_b0 + (ulong)(iVar13 + 1) * 4);
          uVar27 = *(undefined4 *)(local_b0 + (ulong)(iVar13 + 2) * 4);
          iVar13 = (int)(local_b8 + lVar14);
          uVar25 = NEON_fmadd(uVar23,*(undefined4 *)param_1,*(float *)(param_1 + 0x10) * fVar21);
          uVar26 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 4),
                              *(float *)(param_1 + 0x14) * fVar21);
          uVar23 = NEON_fmadd(uVar23,*(undefined4 *)(param_1 + 8),
                              *(float *)(param_1 + 0x18) * fVar21);
          lVar12 = *local_d0;
          local_90 = (float)NEON_fmadd(uVar27,*(undefined4 *)(param_1 + 0x20),uVar25);
          local_8c = (float)NEON_fmadd(uVar27,*(undefined4 *)(param_1 + 0x24),uVar26);
          local_88 = (float)NEON_fmadd(uVar27,*(undefined4 *)(param_1 + 0x28),uVar23);
          pfVar1 = (float *)(lVar12 + (local_b8 + lVar14 & 0xffffffff) * 4);
          local_90 = *(float *)(param_1 + 0x30) + local_90;
          local_8c = *(float *)(param_1 + 0x34) + local_8c;
          local_88 = *(float *)(param_1 + 0x38) + local_88;
          uVar25 = *puVar10;
          *pfVar1 = local_80;
          uVar26 = puVar10[2];
          uVar27 = puVar10[3];
          pfVar1[1] = local_7c;
          pfVar1[2] = local_78;
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 3) * 4) = uVar25;
          uVar23 = puVar10[1];
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 4) * 4) = uVar23;
          pfVar1 = (float *)(lVar12 + (ulong)(iVar13 + 7) * 4);
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 5) * 4) = uVar26;
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 6) * 4) = uVar27;
          *pfVar1 = local_90;
          pfVar1[1] = local_8c;
          pfVar1[2] = local_88;
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 10) * 4) = uVar25;
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 0xb) * 4) = uVar23;
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 0xc) * 4) = uVar26;
          *(undefined4 *)(lVar12 + (ulong)(iVar13 + 0xd) * 4) = uVar27;
          if ((local_c8 != lVar14) && (uVar11 != 0)) {
            iVar13 = (uint)*local_a8 * 3;
            fVar24 = *(float *)(local_b0 + (ulong)*local_a8 * 0xc);
            fVar21 = *(float *)(local_b0 + (ulong)(iVar13 + 1) * 4);
            fVar22 = *(float *)(local_b0 + (ulong)(iVar13 + 2) * 4);
            uVar23 = NEON_fmadd(fVar24,*(undefined4 *)(param_1 + 8),
                                fVar21 * *(float *)(param_1 + 0x18));
            local_98 = (float)NEON_fmadd(fVar22,*(undefined4 *)(param_1 + 0x28),uVar23);
            local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar21 +
                                (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar24 +
                                (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar22,
                                (float)*(undefined8 *)(param_1 + 0x30) +
                                (float)*(undefined8 *)(param_1 + 0x10) * fVar21 +
                                (float)*(undefined8 *)param_1 * fVar24 +
                                (float)*(undefined8 *)(param_1 + 0x20) * fVar22);
            local_98 = *(float *)(param_1 + 0x38) + local_98;
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
                      ((vector<float,std::__ndk1::allocator<float>> *)this_00,(__wrap_iter)*puVar2,
                       (float *)&local_a0,&fStack_94);
            puVar17 = (undefined4 *)*puVar2;
            puVar10 = (undefined4 *)*ppvVar3;
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar17 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3f4ccccd;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3f4ccccd;
              *puVar2 = puVar17;
            }
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0x3f800000;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0x3f800000;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3e99999a;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = (void *)((long)pvVar9 + uVar11 * 4);
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3e99999a;
              *puVar2 = puVar17;
            }
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
                      ((vector<float,std::__ndk1::allocator<float>> *)this_00,(__wrap_iter)puVar17,
                       &local_80,&fStack_74);
            puVar17 = (undefined4 *)*puVar2;
            puVar10 = (undefined4 *)*ppvVar3;
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar17 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3f4ccccd;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3f4ccccd;
              *puVar2 = puVar17;
            }
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0x3f800000;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0x3f800000;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3e99999a;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = (void *)((long)pvVar9 + uVar11 * 4);
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3e99999a;
              *puVar2 = puVar17;
            }
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
                      ((vector<float,std::__ndk1::allocator<float>> *)this_00,(__wrap_iter)puVar17,
                       &local_90,&fStack_84);
            puVar17 = (undefined4 *)*puVar2;
            puVar10 = (undefined4 *)*ppvVar3;
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar17 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3f4ccccd;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3f4ccccd;
              *puVar2 = puVar17;
            }
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0x3f800000;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0x3f800000;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3e99999a;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = (void *)((long)pvVar9 + uVar11 * 4);
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3e99999a;
              *puVar2 = puVar17;
            }
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
                      ((vector<float,std::__ndk1::allocator<float>> *)this_00,(__wrap_iter)puVar17,
                       &local_80,&fStack_74);
            puVar17 = (undefined4 *)*puVar2;
            puVar10 = (undefined4 *)*ppvVar3;
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar17 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3f4ccccd;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3f4ccccd;
              *puVar2 = puVar17;
            }
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0x3f800000;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0x3f800000;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3e99999a;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = (void *)((long)pvVar9 + uVar11 * 4);
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3e99999a;
              *puVar2 = puVar17;
            }
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
                      ((vector<float,std::__ndk1::allocator<float>> *)this_00,(__wrap_iter)puVar17,
                       (float *)&local_a0,&fStack_94);
            puVar17 = (undefined4 *)*puVar2;
            puVar10 = (undefined4 *)*ppvVar3;
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar17 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3f4ccccd;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3f4ccccd;
              *puVar2 = puVar17;
            }
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0x3f800000;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0x3f800000;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3e99999a;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = (void *)((long)pvVar9 + uVar11 * 4);
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3e99999a;
              *puVar2 = puVar17;
            }
            std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
                      ((vector<float,std::__ndk1::allocator<float>> *)this_00,(__wrap_iter)puVar17,
                       &local_90,&fStack_84);
            puVar17 = (undefined4 *)*puVar2;
            puVar10 = (undefined4 *)*ppvVar3;
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar17 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar17 = puVar10 + 1;
              *puVar10 = 0x3f4ccccd;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar17;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar17 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar17 = puVar20 + 1;
              *puVar20 = 0x3f4ccccd;
              *puVar2 = puVar17;
            }
            if (puVar17 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) goto LAB_009f8074;
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) goto LAB_009f807c;
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              puVar20 = puVar10 + 1;
              *puVar10 = 0x3f800000;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + uVar11 * 4);
              *this_00 = pvVar9;
              *puVar2 = puVar20;
              *ppvVar3 = puVar10;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                puVar20 = (undefined4 *)*puVar2;
                puVar10 = (undefined4 *)*ppvVar3;
              }
            }
            else {
              puVar20 = puVar17 + 1;
              *puVar17 = 0x3f800000;
              *puVar2 = puVar20;
            }
            if (puVar20 == puVar10) {
              pvVar18 = *this_00;
              uVar19 = (long)puVar10 - (long)pvVar18;
              uVar11 = ((long)uVar19 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) {
LAB_009f8074:
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar11 <= (ulong)((long)uVar19 >> 1)) {
                uVar11 = (long)uVar19 >> 1;
              }
              if (0x7ffffffffffffffb < uVar19) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) {
LAB_009f807c:
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                pvVar9 = operator_new(uVar11 << 2);
              }
              puVar10 = (undefined4 *)((long)pvVar9 + ((long)uVar19 >> 2) * 4);
              *puVar10 = 0x3e99999a;
              if (0 < (long)uVar19) {
                memcpy(pvVar9,pvVar18,uVar19);
              }
              *this_00 = pvVar9;
              *puVar2 = puVar10 + 1;
              *ppvVar3 = (void *)((long)pvVar9 + uVar11 * 4);
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
              }
            }
            else {
              *puVar20 = 0x3e99999a;
              *puVar2 = puVar20 + 1;
            }
          }
          lVar16 = lVar16 + 2;
          lVar14 = lVar14 + 0xe;
          uVar11 = uVar4;
        } while (uVar4 != uVar8);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar7);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


