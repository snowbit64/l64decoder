// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitEdge
// Entry Point: 00b6fd60
// Size: 1856 bytes
// Signature: undefined __thiscall splitEdge(Brep * this, Split * param_1)


/* Brep::splitEdge(Brep::Split&) */

void __thiscall Brep::splitEdge(Brep *this,Split *param_1)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  ushort *puVar4;
  Brep *pBVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Brep BVar9;
  ushort uVar10;
  ushort uVar11;
  undefined2 uVar12;
  short sVar13;
  undefined2 uVar14;
  uint uVar15;
  long lVar16;
  ushort uVar17;
  void *pvVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
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
  ulong local_c0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar28 = (ulong)uVar7;
  plVar3 = (long *)(this + 0x2f50);
  puVar4 = (ushort *)(*(long *)(this + 0x2f68) + uVar28 * 8);
  uVar10 = *puVar4;
  uVar21 = (uint)((ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >> 5);
  uVar27 = uVar21 * 4;
  uVar8 = *(uint *)(puVar4 + 2);
  uVar2 = uVar27 + 5;
  sVar13 = (short)((ulong)(*(long *)(this + 0x2f58) - *(long *)(this + 0x2f50)) >> 2) * -0x5555;
  uVar6 = uVar21 << 2 | 1;
  if (uVar8 == 0xffffffff) {
    uVar2 = 0xffffffff;
  }
  uVar17 = addVertex(this,(Vector3 *)param_1);
  *(ushort *)(param_1 + 0x14) = uVar17;
  uStack_88 = CONCAT62(uStack_88._2_6_,0xffff);
  local_90 = CONCAT44(uVar21 << 2,
                      CONCAT22(*(undefined2 *)
                                (*(long *)(this + 0x2ef0) + (ulong)uVar17 * 0x10 + 0xc),uVar17)) |
             0x100000000;
  FUN_00b704a0(plVar3,&local_90);
  *(short *)(*(long *)(this + 0x2ef0) + (ulong)uVar17 * 0x10 + 0xc) = sVar13;
  if (this[0x2fb6] == (Brep)0x0) {
    local_c0 = 0xffff;
  }
  else {
    local_c0 = (ulong)(uint)((int)((ulong)(*(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98)) >> 3
                                  ) * -0x55555555);
    computeWedge((uint)this,*(float *)(param_1 + 0xc));
    uStack_88 = uStack_a0;
    local_90 = local_a8;
    local_80 = CONCAT44((int)(local_80 >> 0x20),local_98) & 0xffff0000ffffffff;
    FUN_00b648a8(this + 0x2f98,&local_90);
  }
  uVar15 = uVar7 - 2;
  if ((uVar7 + 1 & 3) != 0) {
    uVar15 = uVar7 + 1;
  }
  uVar26 = (ulong)uVar15;
  lVar19 = *(long *)(this + 0x2f68);
  pBVar5 = this + 0x2fb4;
  uVar29 = *(ulong *)(lVar19 + uVar26 * 8);
  uVar25 = *(undefined8 *)(lVar19 + (ulong)(uVar7 >> 2) * 0x20);
  if (uVar29 >> 0x20 != 0xffffffff) {
    *(uint *)(lVar19 + (uVar29 >> 0x20) * 8 + 4) = uVar27 | 2;
  }
  puVar22 = (undefined2 *)(lVar19 + uVar28 * 8 + 2);
  uVar12 = *puVar22;
  puVar23 = (uint *)(*plVar3 + (ulong)uVar10 * 0xc + 4);
  if (*puVar23 == uVar15) {
    *puVar23 = uVar27 | 2;
  }
  uVar14 = (undefined2)local_c0;
  *puVar22 = uVar14;
  *(short *)(lVar19 + uVar28 * 8) = sVar13;
  pvVar30 = *(void **)(this + 0x2f68);
  *(uint *)((long)pvVar30 + uVar26 * 8 + 4) = uVar27 | 3;
  if (this[0x2fb6] != (Brep)0x0) {
    lVar19 = *(long *)(this + 0x2f98);
    lVar24 = lVar19 + (local_c0 & 0xffff) * 0x18;
    *(short *)(lVar24 + 0x14) = *(short *)(lVar24 + 0x14) + 2;
    lVar19 = lVar19 + (ulong)*(ushort *)((long)pvVar30 + uVar26 * 8 + 2) * 0x18;
    *(short *)(lVar19 + 0x14) = *(short *)(lVar19 + 0x14) + 1;
  }
  puVar20 = *(undefined8 **)(this + 0x2f70);
  if (puVar20 == *(undefined8 **)(this + 0x2f78)) {
    __n = (long)puVar20 - (long)pvVar30;
    uVar26 = ((long)__n >> 5) + 1;
    if (uVar26 >> 0x3b != 0) goto LAB_00b70488;
    if (uVar26 <= (ulong)((long)__n >> 4)) {
      uVar26 = (long)__n >> 4;
    }
    if (0x7fffffffffffffdf < __n) {
      uVar26 = 0x7ffffffffffffff;
    }
    if (uVar26 >> 0x3b != 0) goto LAB_00b70490;
    pvVar18 = operator_new(uVar26 * 0x20);
    puVar20 = (undefined8 *)((long)pvVar18 + ((long)__n >> 5) * 0x20);
    *puVar20 = uVar25;
    *(undefined2 *)((long)puVar20 + 10) = uVar12;
    puVar20[2] = uVar29;
    *(ushort *)(puVar20 + 1) = uVar10;
    *(uint *)((long)puVar20 + 0x1c) = uVar15;
    *(uint *)((long)puVar20 + 0xc) = uVar2;
    *(short *)(puVar20 + 3) = sVar13;
    *(undefined2 *)((long)puVar20 + 0x1a) = uVar14;
    if (0 < (long)__n) {
      memcpy(pvVar18,pvVar30,__n);
    }
    *(void **)(this + 0x2f68) = pvVar18;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
    *(void **)(this + 0x2f78) = (void *)((long)pvVar18 + uVar26 * 0x20);
    operator_delete(pvVar30);
  }
  else {
    *puVar20 = uVar25;
    *(undefined2 *)((long)puVar20 + 10) = uVar12;
    puVar20[2] = uVar29;
    *(ushort *)(puVar20 + 1) = uVar10;
    *(short *)(puVar20 + 3) = sVar13;
    *(undefined2 *)((long)puVar20 + 0x1a) = uVar14;
    *(uint *)((long)puVar20 + 0xc) = uVar2;
    *(uint *)((long)puVar20 + 0x1c) = uVar15;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
  }
  if (*pBVar5 != (Brep)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_00b7074c(this + 0x2f80,&local_90);
    computeBBox(this,uVar7 >> 2);
    computeBBox(this,uVar21 & 0x3fffffff);
  }
  if (uVar8 == 0xffffffff) goto LAB_00b70380;
  if (this[0x2fb6] == (Brep)0x0) {
    uVar27 = uVar8 - 1 & 3;
    local_c0 = 0xffff;
  }
  else {
    lVar19 = *(long *)(this + 0x2f68);
    uVar27 = uVar8 - 1 & 3;
    uVar21 = uVar8 + 2;
    if (uVar27 != 0) {
      uVar21 = uVar8 - 1;
    }
    if (*(short *)(lVar19 + uVar28 * 8 + 2) == *(short *)(lVar19 + (ulong)uVar21 * 8 + 2)) {
      uVar21 = uVar7 + 2;
      if ((uVar7 - 1 & 3) != 0) {
        uVar21 = uVar7 - 1;
      }
      if (*(short *)(lVar19 + (ulong)uVar21 * 8 + 2) == *(short *)(lVar19 + (ulong)uVar8 * 8 + 2))
      goto LAB_00b701ec;
    }
    local_c0 = (ulong)(uint)((int)((ulong)(*(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98)) >> 3
                                  ) * -0x55555555);
    computeWedge((uint)this,1.0 - *(float *)(param_1 + 0xc));
    local_80._0_6_ = (uint6)(uint)local_80;
    FUN_00b648a8(this + 0x2f98,&local_90);
  }
LAB_00b701ec:
  uVar7 = uVar8 - 2;
  lVar19 = *(long *)(this + 0x2f68);
  if ((uVar8 + 1 & 3) != 0) {
    uVar7 = uVar8 + 1;
  }
  uVar21 = uVar8 + 2;
  if (uVar27 != 0) {
    uVar21 = uVar8 - 1;
  }
  puVar4 = (ushort *)(lVar19 + (ulong)uVar7 * 8);
  puVar1 = (ulong *)(lVar19 + (ulong)uVar21 * 8);
  uVar17 = *puVar4;
  uVar28 = *puVar1;
  uVar25 = *(undefined8 *)(lVar19 + (ulong)(uVar8 >> 2) * 0x20);
  if (uVar28 >> 0x20 != 0xffffffff) {
    *(uint *)(lVar19 + (uVar28 >> 0x20) * 8 + 4) = uVar2 + 2;
  }
  uVar11 = puVar4[1];
  lVar24 = *plVar3;
  puVar23 = (uint *)(lVar24 + (ulong)uVar10 * 0xc + 4);
  if (*puVar23 == uVar8) {
    *puVar23 = uVar2;
  }
  puVar23 = (uint *)(lVar24 + (ulong)uVar17 * 0xc + 4);
  if (*puVar23 == uVar21) {
    *puVar23 = uVar2 + 2;
  }
  lVar24 = (ulong)uVar21 * 8;
  *(short *)puVar1 = sVar13;
  uVar12 = (undefined2)local_c0;
  *(undefined2 *)(lVar19 + lVar24 + 2) = uVar12;
  pvVar30 = *(void **)(this + 0x2f68);
  *(uint *)((long)pvVar30 + lVar24 + 4) = uVar2 + 1;
  if (this[0x2fb6] != (Brep)0x0) {
    lVar19 = *(long *)(this + 0x2f98);
    lVar24 = lVar19 + (local_c0 & 0xffff) * 0x18;
    *(short *)(lVar24 + 0x14) = *(short *)(lVar24 + 0x14) + 2;
    lVar19 = lVar19 + (ulong)*(ushort *)((long)pvVar30 + (ulong)uVar7 * 8 + 2) * 0x18;
    *(short *)(lVar19 + 0x14) = *(short *)(lVar19 + 0x14) + 1;
  }
  puVar20 = *(undefined8 **)(this + 0x2f70);
  if (puVar20 == *(undefined8 **)(this + 0x2f78)) {
    uVar29 = (long)puVar20 - (long)pvVar30;
    uVar26 = ((long)uVar29 >> 5) + 1;
    if (uVar26 >> 0x3b != 0) {
LAB_00b70488:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar26 <= (ulong)((long)uVar29 >> 4)) {
      uVar26 = (long)uVar29 >> 4;
    }
    if (0x7fffffffffffffdf < uVar29) {
      uVar26 = 0x7ffffffffffffff;
    }
    if (uVar26 >> 0x3b != 0) {
LAB_00b70490:
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar18 = operator_new(uVar26 * 0x20);
    puVar20 = (undefined8 *)((long)pvVar18 + ((long)uVar29 >> 5) * 0x20);
    *puVar20 = uVar25;
    *(short *)(puVar20 + 1) = sVar13;
    *(ushort *)(puVar20 + 2) = uVar17;
    *(undefined2 *)((long)puVar20 + 10) = uVar12;
    *(uint *)((long)puVar20 + 0x14) = uVar21;
    puVar20[3] = uVar28;
    *(uint *)((long)puVar20 + 0xc) = uVar6;
    *(ushort *)((long)puVar20 + 0x12) = uVar11;
    if (0 < (long)uVar29) {
      memcpy(pvVar18,pvVar30,uVar29);
    }
    *(void **)(this + 0x2f68) = pvVar18;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
    *(void **)(this + 0x2f78) = (void *)((long)pvVar18 + uVar26 * 0x20);
    operator_delete(pvVar30);
    BVar9 = *pBVar5;
  }
  else {
    *(ushort *)(puVar20 + 2) = uVar17;
    *puVar20 = uVar25;
    *(short *)(puVar20 + 1) = sVar13;
    *(undefined2 *)((long)puVar20 + 10) = uVar12;
    *(ushort *)((long)puVar20 + 0x12) = uVar11;
    *(uint *)((long)puVar20 + 0x14) = uVar21;
    *(uint *)((long)puVar20 + 0xc) = uVar6;
    puVar20[3] = uVar28;
    *(undefined8 **)(this + 0x2f70) = puVar20 + 4;
    BVar9 = *pBVar5;
  }
  if (BVar9 != (Brep)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_00b7074c(this + 0x2f80,&local_90);
    computeBBox(this,uVar8 >> 2);
    computeBBox(this,uVar2 >> 2);
  }
LAB_00b70380:
  if (*(long *)(lVar16 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


