// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitEdge
// Entry Point: 00b71348
// Size: 1928 bytes
// Signature: undefined __thiscall splitEdge(Brep * this, uint param_1, Vector3 * param_2, float param_3, ushort param_4)


/* Brep::splitEdge(unsigned int, Vector3 const&, float, unsigned short) */

int __thiscall
Brep::splitEdge(Brep *this,uint param_1,Vector3 *param_2,float param_3,ushort param_4)

{
  ushort *puVar1;
  ulong *puVar2;
  Brep *pBVar3;
  long *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Brep BVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined2 uVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  void *pvVar18;
  long lVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  uint *puVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  ulong __n;
  ulong local_d0;
  ushort local_c4 [2];
  uint local_c0;
  ushort local_bc [2];
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long local_80;
  
  lVar16 = tpidr_el0;
  uVar29 = (ulong)param_1;
  local_80 = *(long *)(lVar16 + 0x28);
  pBVar3 = this + 0x2fb4;
  puVar1 = (ushort *)(*(long *)(this + 0x2f68) + uVar29 * 8);
  uVar8 = *puVar1;
  uVar6 = *(uint *)(puVar1 + 2);
  this_00 = (long *)(this + 0x2f50);
  uVar4 = (uint)((ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >> 3) & 0xfffffffc;
  uVar27 = uVar4 | 1;
  iVar12 = (int)((ulong)(*(long *)(this + 0x2f58) - *(long *)(this + 0x2f50)) >> 2) * -0x55555555;
  uVar4 = uVar4 + 5;
  if (uVar6 == 0xffffffff) {
    uVar4 = 0xffffffff;
  }
  local_c0 = uVar27;
  local_bc[0] = param_4;
  local_c4[0] = addVertex(this,param_2);
  lVar19 = *(long *)(this + 0x2ef0);
  puVar21 = *(ushort **)(this + 0x2f58);
  puVar1 = (ushort *)(lVar19 + (ulong)local_c4[0] * 0x10 + 0xc);
  if (puVar21 < *(ushort **)(this + 0x2f60)) {
    uVar9 = *puVar1;
    *puVar21 = local_c4[0];
    *(uint *)(puVar21 + 2) = uVar27;
    puVar21[4] = param_4;
    puVar21[1] = uVar9;
    *(ushort **)(this + 0x2f58) = puVar21 + 6;
  }
  else {
    std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::
    __emplace_back_slow_path<unsigned_short&,unsigned_short&,unsigned_int&,unsigned_short&>
              ((vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *)this_00,local_c4
               ,puVar1,&local_c0,local_bc);
    lVar19 = *(long *)(this + 0x2ef0);
  }
  uVar13 = (undefined2)iVar12;
  *(undefined2 *)(lVar19 + (ulong)local_c4[0] * 0x10 + 0xc) = uVar13;
  if (this[0x2fb6] == (Brep)0x0) {
    local_d0 = 0xffff;
  }
  else {
    local_d0 = (ulong)(uint)((int)((ulong)(*(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98)) >> 3
                                  ) * -0x55555555);
    computeWedge((uint)this,param_3);
    local_b8 = 0;
    std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::
    emplace_back<BrepWedge,int>
              ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)
               (this + 0x2f98),(BrepWedge *)&local_a0,&local_b8);
  }
  uVar27 = param_1 - 2;
  lVar19 = *(long *)(this + 0x2f68);
  if ((param_1 + 1 & 3) != 0) {
    uVar27 = param_1 + 1;
  }
  uVar28 = (ulong)uVar27;
  uVar26 = *(ulong *)(lVar19 + uVar28 * 8);
  uVar25 = *(undefined8 *)(lVar19 + (ulong)(param_1 >> 2) * 0x20);
  if (uVar26 >> 0x20 != 0xffffffff) {
    *(uint *)(lVar19 + (uVar26 >> 0x20) * 8 + 4) = local_c0 + 1;
  }
  puVar22 = (undefined2 *)(lVar19 + uVar29 * 8 + 2);
  uVar11 = *puVar22;
  puVar23 = (uint *)(*this_00 + (ulong)uVar8 * 0xc + 4);
  if (*puVar23 == uVar27) {
    *puVar23 = local_c0 + 1;
  }
  uVar14 = (undefined2)local_d0;
  *puVar22 = uVar14;
  *(undefined2 *)(lVar19 + uVar29 * 8) = uVar13;
  pvVar30 = *(void **)(this + 0x2f68);
  *(uint *)((long)pvVar30 + uVar28 * 8 + 4) = local_c0 + 2;
  if (this[0x2fb6] != (Brep)0x0) {
    lVar19 = *(long *)(this + 0x2f98);
    lVar24 = lVar19 + (local_d0 & 0xffff) * 0x18;
    *(short *)(lVar24 + 0x14) = *(short *)(lVar24 + 0x14) + 2;
    lVar19 = lVar19 + (ulong)*(ushort *)((long)pvVar30 + uVar28 * 8 + 2) * 0x18;
    *(short *)(lVar19 + 0x14) = *(short *)(lVar19 + 0x14) + 1;
  }
  puVar20 = *(undefined8 **)(this + 0x2f70);
  if (puVar20 == *(undefined8 **)(this + 0x2f78)) {
    __n = (long)puVar20 - (long)pvVar30;
    uVar28 = ((long)__n >> 5) + 1;
    if (uVar28 >> 0x3b != 0) goto LAB_00b71ac8;
    if (uVar28 <= (ulong)((long)__n >> 4)) {
      uVar28 = (long)__n >> 4;
    }
    if (0x7fffffffffffffdf < __n) {
      uVar28 = 0x7ffffffffffffff;
    }
    if (uVar28 >> 0x3b != 0) goto LAB_00b71ab8;
    pvVar18 = operator_new(uVar28 * 0x20);
    puVar20 = (undefined8 *)((long)pvVar18 + ((long)__n >> 5) * 0x20);
    *puVar20 = uVar25;
    puVar20[2] = uVar26;
    *(undefined2 *)((long)puVar20 + 10) = uVar11;
    *(ushort *)(puVar20 + 1) = uVar8;
    *(undefined2 *)(puVar20 + 3) = uVar13;
    *(uint *)((long)puVar20 + 0x1c) = uVar27;
    *(uint *)((long)puVar20 + 0xc) = uVar4;
    *(undefined2 *)((long)puVar20 + 0x1a) = uVar14;
    if (0 < (long)__n) {
      memcpy(pvVar18,pvVar30,__n);
    }
    *(void **)(this + 0x2f68) = pvVar18;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
    *(void **)(this + 0x2f78) = (void *)((long)pvVar18 + uVar28 * 0x20);
    operator_delete(pvVar30);
  }
  else {
    *puVar20 = uVar25;
    *(undefined2 *)((long)puVar20 + 10) = uVar11;
    puVar20[2] = uVar26;
    *(ushort *)(puVar20 + 1) = uVar8;
    *(undefined2 *)(puVar20 + 3) = uVar13;
    *(undefined2 *)((long)puVar20 + 0x1a) = uVar14;
    *(uint *)((long)puVar20 + 0xc) = uVar4;
    *(uint *)((long)puVar20 + 0x1c) = uVar27;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
  }
  if (*pBVar3 != (Brep)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    FUN_00b7074c(this + 0x2f80,&local_a0);
    computeBBox(this,param_1 >> 2);
    computeBBox(this,local_c0 >> 2);
  }
  if (uVar6 == 0xffffffff) goto LAB_00b71998;
  if (this[0x2fb6] == (Brep)0x0) {
    uVar27 = uVar6 - 1 & 3;
    local_d0 = 0xffff;
  }
  else {
    lVar19 = *(long *)(this + 0x2f68);
    uVar27 = uVar6 - 1 & 3;
    uVar15 = uVar6 + 2;
    if (uVar27 != 0) {
      uVar15 = uVar6 - 1;
    }
    if (*(short *)(lVar19 + uVar29 * 8 + 2) == *(short *)(lVar19 + (ulong)uVar15 * 8 + 2)) {
      uVar15 = param_1 + 2;
      if ((param_1 - 1 & 3) != 0) {
        uVar15 = param_1 - 1;
      }
      if (*(short *)(lVar19 + (ulong)uVar15 * 8 + 2) == *(short *)(lVar19 + (ulong)uVar6 * 8 + 2))
      goto LAB_00b71808;
    }
    local_d0 = (ulong)(uint)((int)((ulong)(*(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98)) >> 3
                                  ) * -0x55555555);
    computeWedge((uint)this,1.0 - param_3);
    local_a0 = CONCAT44(uStack_b4,local_b8);
    uStack_98 = uStack_b0;
    local_90 = CONCAT44((int)(local_90 >> 0x20),local_a8) & 0xffff0000ffffffff;
    FUN_00b648a8(this + 0x2f98,&local_a0);
  }
LAB_00b71808:
  uVar17 = local_c0;
  uVar15 = uVar6 - 2;
  lVar19 = *(long *)(this + 0x2f68);
  if ((uVar6 + 1 & 3) != 0) {
    uVar15 = uVar6 + 1;
  }
  uVar5 = uVar6 + 2;
  if (uVar27 != 0) {
    uVar5 = uVar6 - 1;
  }
  puVar2 = (ulong *)(lVar19 + (ulong)uVar5 * 8);
  uVar25 = *(undefined8 *)(lVar19 + (ulong)(uVar6 >> 2) * 0x20);
  puVar1 = (ushort *)(lVar19 + (ulong)uVar15 * 8);
  uVar29 = *puVar2;
  uVar9 = *puVar1;
  if (uVar29 >> 0x20 != 0xffffffff) {
    *(uint *)(lVar19 + (uVar29 >> 0x20) * 8 + 4) = uVar4 + 2;
  }
  uVar10 = puVar1[1];
  lVar24 = *this_00;
  puVar23 = (uint *)(lVar24 + (ulong)uVar8 * 0xc + 4);
  if (*puVar23 == uVar6) {
    *puVar23 = uVar4;
  }
  puVar23 = (uint *)(lVar24 + (ulong)uVar9 * 0xc + 4);
  if (*puVar23 == uVar5) {
    *puVar23 = uVar4 + 2;
  }
  lVar24 = (ulong)uVar5 * 8;
  *(undefined2 *)puVar2 = uVar13;
  uVar11 = (undefined2)local_d0;
  *(undefined2 *)(lVar19 + lVar24 + 2) = uVar11;
  pvVar30 = *(void **)(this + 0x2f68);
  *(uint *)((long)pvVar30 + lVar24 + 4) = uVar4 + 1;
  if (this[0x2fb6] != (Brep)0x0) {
    lVar19 = *(long *)(this + 0x2f98);
    lVar24 = lVar19 + (local_d0 & 0xffff) * 0x18;
    *(short *)(lVar24 + 0x14) = *(short *)(lVar24 + 0x14) + 2;
    lVar19 = lVar19 + (ulong)*(ushort *)((long)pvVar30 + (ulong)uVar15 * 8 + 2) * 0x18;
    *(short *)(lVar19 + 0x14) = *(short *)(lVar19 + 0x14) + 1;
  }
  puVar20 = *(undefined8 **)(this + 0x2f70);
  if (puVar20 == *(undefined8 **)(this + 0x2f78)) {
    uVar28 = (long)puVar20 - (long)pvVar30;
    uVar26 = ((long)uVar28 >> 5) + 1;
    if (uVar26 >> 0x3b != 0) {
LAB_00b71ac8:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar26 <= (ulong)((long)uVar28 >> 4)) {
      uVar26 = (long)uVar28 >> 4;
    }
    if (0x7fffffffffffffdf < uVar28) {
      uVar26 = 0x7ffffffffffffff;
    }
    if (uVar26 >> 0x3b != 0) {
LAB_00b71ab8:
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar18 = operator_new(uVar26 * 0x20);
    puVar20 = (undefined8 *)((long)pvVar18 + ((long)uVar28 >> 5) * 0x20);
    *puVar20 = uVar25;
    *(undefined2 *)(puVar20 + 1) = uVar13;
    *(ushort *)(puVar20 + 2) = uVar9;
    *(undefined2 *)((long)puVar20 + 10) = uVar11;
    *(uint *)((long)puVar20 + 0x14) = uVar5;
    puVar20[3] = uVar29;
    *(uint *)((long)puVar20 + 0xc) = uVar17;
    *(ushort *)((long)puVar20 + 0x12) = uVar10;
    if (0 < (long)uVar28) {
      memcpy(pvVar18,pvVar30,uVar28);
    }
    *(void **)(this + 0x2f68) = pvVar18;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
    *(void **)(this + 0x2f78) = (void *)((long)pvVar18 + uVar26 * 0x20);
    operator_delete(pvVar30);
    BVar7 = *pBVar3;
  }
  else {
    *puVar20 = uVar25;
    *(undefined2 *)(puVar20 + 1) = uVar13;
    *(undefined2 *)((long)puVar20 + 10) = uVar11;
    *(uint *)((long)puVar20 + 0xc) = local_c0;
    *(ushort *)(puVar20 + 2) = uVar9;
    *(ushort *)((long)puVar20 + 0x12) = uVar10;
    *(uint *)((long)puVar20 + 0x14) = uVar5;
    puVar20[3] = uVar29;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
    BVar7 = *pBVar3;
  }
  if (BVar7 != (Brep)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    FUN_00b7074c(this + 0x2f80,&local_a0);
    computeBBox(this,uVar6 >> 2);
    computeBBox(this,uVar4 >> 2);
  }
LAB_00b71998:
  if (*(long *)(lVar16 + 0x28) == local_80) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


