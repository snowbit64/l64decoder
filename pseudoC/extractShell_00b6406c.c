// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extractShell
// Entry Point: 00b6406c
// Size: 1968 bytes
// Signature: undefined __thiscall extractShell(Brep * this, ushort param_1)


/* Brep::extractShell(unsigned short) const */

undefined8 * __thiscall Brep::extractShell(Brep *this,ushort param_1)

{
  undefined8 *this_00;
  ulong uVar1;
  ushort *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  Brep BVar7;
  undefined2 uVar8;
  long lVar9;
  ushort uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  size_t __n;
  uint uVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  uint *puVar26;
  int iVar27;
  ulong uVar28;
  short sVar29;
  long lVar30;
  void *pvVar31;
  ulong uVar32;
  ushort local_fc [2];
  void *local_f8;
  void *local_f0;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  ulong local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  puVar11 = (undefined8 *)operator_new(0x2fb8);
  uVar8 = *(undefined2 *)(this + 0x2fb4);
  this_00 = puVar11 + 2;
  BVar7 = this[0x2fb6];
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = &PTR__Brep_00fea478;
  memset(this_00,0,0x2fa4);
  lVar18 = *(long *)(this + 0x2f70);
  lVar30 = *(long *)(this + 0x2f68);
  *(undefined2 *)((long)puVar11 + 0x2fb4) = uVar8;
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  *(Brep *)((long)puVar11 + 0x2fb6) = BVar7;
  uVar20 = lVar18 - lVar30;
  local_c8 = (void *)0x0;
  if (uVar20 != 0) {
    if ((long)uVar20 < 0) {
                    /* try { // try from 00b64800 to 00b64807 has its CatchHandler @ 00b64844 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00b64114 to 00b64117 has its CatchHandler @ 00b64844 */
    local_c8 = operator_new(uVar20 >> 1);
    __n = ((long)uVar20 >> 3) * 4;
    pvVar31 = (void *)((long)local_c8 + __n);
    local_b8 = pvVar31;
    memset(local_c8,0,__n);
    local_c0 = pvVar31;
  }
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_e0 = (void *)0x0;
  lVar18 = *(long *)(this + 0x2f58) - *(long *)(this + 0x2f50);
  if (lVar18 != 0) {
    if (lVar18 < 0) {
                    /* try { // try from 00b64808 to 00b6480f has its CatchHandler @ 00b64830 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar28 = (lVar18 / 0xc) * 2;
                    /* try { // try from 00b64174 to 00b6417b has its CatchHandler @ 00b64830 */
    local_e0 = operator_new(uVar28);
    pvVar31 = (void *)((long)local_e0 + (lVar18 / 0xc) * 2);
    local_d0 = pvVar31;
    memset(local_e0,0xff,uVar28);
    local_d8 = pvVar31;
  }
  local_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  local_f8 = (void *)0x0;
  lVar18 = *(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98);
  if (lVar18 != 0) {
    if (lVar18 < 0) {
                    /* try { // try from 00b64810 to 00b64817 has its CatchHandler @ 00b6481c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar28 = (lVar18 / 0x18) * 2;
                    /* try { // try from 00b641c8 to 00b641cf has its CatchHandler @ 00b6481c */
    local_f8 = operator_new(uVar28);
    pvVar31 = (void *)((long)local_f8 + (lVar18 / 0x18) * 2);
    local_e8 = pvVar31;
    memset(local_f8,0xff,uVar28);
    local_f0 = pvVar31;
  }
  if ((int)(uVar20 >> 5) != 0) {
    uVar28 = 0;
LAB_00b64248:
    puVar17 = (ulong *)(lVar30 + uVar28 * 0x20);
    if ((*(ushort *)puVar17 & 0x3fff) == param_1) {
      uStack_88 = puVar17[1];
      lVar18 = 0;
      lVar25 = (uVar28 & 0x3fffffff) * 0x20;
      iVar27 = 1;
      uVar32 = (uVar28 & 0x3fffffff) << 2 | 1;
      uStack_78 = puVar17[3];
      uStack_80 = puVar17[2];
      local_90 = *puVar17 & 0xffffffffffffc000;
      do {
        lVar4 = lVar30 + lVar25 + lVar18;
        iVar3 = iVar27 + ((uint)((ulong)(puVar11[0x5ee] - puVar11[0x5ed]) >> 3) & 0xfffffffc);
        *(int *)((long)local_c8 + uVar32 * 4) = iVar3;
        sVar29 = *(short *)((long)local_e0 + (ulong)*(ushort *)(lVar4 + 8) * 2);
        if (sVar29 == -1) {
          sVar29 = (short)((ulong)(puVar11[0x5eb] - puVar11[0x5ea]) >> 2) * -0x5555;
          *(short *)((long)local_e0 + (ulong)*(ushort *)(lVar4 + 8) * 2) = sVar29;
          puVar16 = (undefined8 *)
                    (*(long *)(this + 0x2ef0) +
                    (ulong)*(ushort *)
                            (*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar4 + 8) * 0xc) * 0x10)
          ;
          if (this[0x2fb5] == (Brep)0x0) {
LAB_00b64360:
            local_fc[0] = 0xffff;
            puVar14 = (undefined8 *)puVar11[0x5df];
            pvVar31 = (void *)puVar11[0x5de];
            uVar23 = (long)puVar14 - (long)pvVar31;
            local_b0 = CONCAT62(local_b0._2_6_,(short)(uVar23 >> 4));
            if (puVar14 < (undefined8 *)puVar11[0x5e0]) {
              uVar6 = *(undefined4 *)(puVar16 + 1);
              uVar21 = *puVar16;
              *(short *)((long)puVar14 + 0xc) = sVar29;
              *(undefined4 *)(puVar14 + 1) = uVar6;
              *puVar14 = uVar21;
              puVar11[0x5df] = puVar14 + 2;
            }
            else {
              uVar1 = ((long)uVar23 >> 4) + 1;
              if (uVar1 >> 0x3c != 0) {
                    /* try { // try from 00b647d8 to 00b647eb has its CatchHandler @ 00b64864 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar19 = (long)(undefined8 *)puVar11[0x5e0] - (long)pvVar31;
              uVar22 = (long)uVar19 >> 3;
              if (uVar1 <= uVar22) {
                uVar1 = uVar22;
              }
              if (0x7fffffffffffffef < uVar19) {
                uVar1 = 0xfffffffffffffff;
              }
              if (uVar1 == 0) {
                pvVar12 = (void *)0x0;
              }
              else {
                if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00b643e4 to 00b643e7 has its CatchHandler @ 00b64870 */
                pvVar12 = operator_new(uVar1 << 4);
              }
              puVar14 = (undefined8 *)((long)pvVar12 + ((long)uVar23 >> 4) * 0x10);
              uVar21 = *puVar16;
              *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar16 + 1);
              *puVar14 = uVar21;
              *(short *)((long)puVar14 + 0xc) = sVar29;
              if (0 < (long)uVar23) {
                memcpy(pvVar12,pvVar31,uVar23);
              }
              puVar11[0x5de] = pvVar12;
              puVar11[0x5df] = puVar14 + 2;
              puVar11[0x5e0] = (void *)((long)pvVar12 + uVar1 * 0x10);
              if (pvVar31 != (void *)0x0) {
                operator_delete(pvVar31);
              }
            }
            if (this[0x2fb5] != (Brep)0x0) {
                    /* try { // try from 00b64458 to 00b644d3 has its CatchHandler @ 00b64870 */
              BrepSpatialHash::insert((BrepSpatialHash *)this_00,(Brep *)puVar11,(ushort)local_b0);
            }
          }
          else {
                    /* try { // try from 00b64324 to 00b64333 has its CatchHandler @ 00b64868 */
            uVar10 = BrepSpatialHash::retrieveExact
                               ((BrepSpatialHash *)this_00,(Brep *)puVar11,(Vector3 *)puVar16);
            local_b0 = CONCAT62(local_b0._2_6_,uVar10);
            if (uVar10 == 0xffff) goto LAB_00b64360;
            local_fc[0] = *(ushort *)(puVar11[0x5de] + (ulong)uVar10 * 0x10 + 0xc);
          }
          puVar15 = (undefined2 *)puVar11[0x5eb];
          puVar2 = (ushort *)(*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar4 + 8) * 0xc + 8);
          if (puVar15 < (undefined2 *)puVar11[0x5ec]) {
            uVar10 = *puVar2;
            *(undefined4 *)(puVar15 + 2) = 0xffffffff;
            *puVar15 = (ushort)local_b0;
            puVar15[1] = local_fc[0];
            puVar15[4] = uVar10;
            puVar11[0x5eb] = puVar15 + 6;
          }
          else {
            std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::
            __emplace_back_slow_path<unsigned_short&,unsigned_short&,unsigned_int_const&,unsigned_short_const&>
                      ((vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *)
                       (puVar11 + 0x5ea),(ushort *)&local_b0,local_fc,&NOREF,puVar2);
          }
        }
        if (this[0x2fb6] == (Brep)0x0) {
          uVar13 = 0xffff;
        }
        else {
          lVar30 = lVar30 + lVar25 + lVar18;
          uVar23 = (ulong)*(ushort *)(lVar30 + 10);
          uVar10 = *(ushort *)((long)local_f8 + uVar23 * 2);
          uVar13 = (uint)uVar10;
          if (uVar10 == 0xffff) {
            uVar13 = (int)((ulong)(puVar11[0x5f4] - puVar11[0x5f3]) >> 3) * 0xaaab;
            *(short *)((long)local_f8 + uVar23 * 2) = (short)uVar13;
            puVar16 = (undefined8 *)
                      (*(long *)(this + 0x2f98) + (ulong)*(ushort *)(lVar30 + 10) * 0x18);
            uStack_a8 = puVar16[1];
            local_b0 = *puVar16;
            local_a0 = *(undefined4 *)(puVar16 + 2);
            local_9c = 0;
                    /* try { // try from 00b64554 to 00b6455f has its CatchHandler @ 00b6486c */
            FUN_00b648a8(puVar11 + 0x5f3,&local_b0);
            uVar13 = uVar13 & 0xffff;
          }
          lVar30 = puVar11[0x5f3] + (ulong)uVar13 * 0x18;
          *(short *)(lVar30 + 0x14) = *(short *)(lVar30 + 0x14) + 1;
        }
        uVar23 = (ulong)*(uint *)((long)&uStack_88 + lVar18 + 4);
        *(short *)((long)&uStack_88 + lVar18 + 2) = (short)uVar13;
        *(short *)((long)&uStack_88 + lVar18) = sVar29;
        if (uVar23 < uVar32) {
          uVar13 = *(uint *)((long)local_c8 + uVar23 * 4);
          lVar30 = puVar11[0x5ed];
          *(uint *)((long)&uStack_88 + lVar18 + 4) = uVar13;
          *(int *)(lVar30 + (ulong)uVar13 * 8 + 4) = iVar3;
        }
        if (lVar18 == 0x10) goto LAB_00b645e0;
        lVar30 = *(long *)(this + 0x2f68);
        uVar32 = uVar32 + 1;
        lVar18 = lVar18 + 8;
        iVar27 = iVar27 + 1;
      } while( true );
    }
    goto LAB_00b646d8;
  }
LAB_00b64774:
  *(undefined4 *)(puVar11 + 0x5f6) = 1;
  if (local_f8 != (void *)0x0) {
    operator_delete(local_f8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete(local_e0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete(local_c8);
  }
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar11;
LAB_00b645e0:
  puVar17 = (ulong *)puVar11[0x5ee];
  if (puVar17 == (ulong *)puVar11[0x5ef]) {
    pvVar31 = (void *)puVar11[0x5ed];
    uVar23 = (long)puVar17 - (long)pvVar31;
    uVar32 = ((long)uVar23 >> 5) + 1;
    if (uVar32 >> 0x3b != 0) {
                    /* try { // try from 00b647ec to 00b647ff has its CatchHandler @ 00b6485c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar32 <= (ulong)((long)uVar23 >> 4)) {
      uVar32 = (long)uVar23 >> 4;
    }
    if (0x7fffffffffffffdf < uVar23) {
      uVar32 = 0x7ffffffffffffff;
    }
    if (uVar32 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar32 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00b6465c to 00b6465f has its CatchHandler @ 00b64860 */
      pvVar12 = operator_new(uVar32 << 5);
    }
    puVar17 = (ulong *)((long)pvVar12 + ((long)uVar23 >> 5) * 0x20);
    puVar17[1] = uStack_88;
    *puVar17 = local_90;
    puVar17[3] = uStack_78;
    puVar17[2] = uStack_80;
    if (0 < (long)uVar23) {
      memcpy(pvVar12,pvVar31,uVar23);
    }
    puVar11[0x5ed] = pvVar12;
    puVar11[0x5ee] = puVar17 + 4;
    puVar11[0x5ef] = (void *)((long)pvVar12 + uVar32 * 0x20);
    if (pvVar31 != (void *)0x0) {
      operator_delete(pvVar31);
    }
  }
  else {
    puVar17[1] = uStack_88;
    *puVar17 = local_90;
    puVar17[3] = uStack_78;
    puVar17[2] = uStack_80;
    puVar11[0x5ee] = puVar17 + 4;
  }
  if (*(char *)(this + 0x2fb4) != '\0') {
                    /* try { // try from 00b646c8 to 00b646cf has its CatchHandler @ 00b64860 */
    FUN_00b649ec(puVar11 + 0x5f0,*(long *)(this + 0x2f80) + uVar28 * 0x18);
  }
LAB_00b646d8:
  uVar28 = uVar28 + 1;
  if (uVar28 == (uVar20 >> 5 & 0xffffffff)) goto LAB_00b646ec;
  lVar30 = *(long *)(this + 0x2f68);
  goto LAB_00b64248;
LAB_00b646ec:
  lVar18 = puVar11[0x5ed];
  uVar28 = (ulong)(puVar11[0x5ee] - lVar18) >> 3;
  uVar20 = (ulong)((uint)uVar28 & 0xfffffffc);
  if ((uVar28 & 0xfffffffc) != 0) {
    uVar13 = 2;
    piVar24 = (int *)(*(long *)(this + 0x2f68) + 4);
    do {
      if ((uVar13 - 2 & 3) != 0) {
        uVar5 = uVar13;
        if ((uVar13 - 3 & 3) != 0) {
          uVar5 = uVar13 - 3;
        }
        puVar26 = (uint *)(puVar11[0x5ea] + (ulong)*(ushort *)(lVar18 + (ulong)uVar5 * 8) * 0xc + 4)
        ;
        if ((*puVar26 == 0xffffffff) || (*piVar24 == -1)) {
          *puVar26 = uVar13 - 2;
        }
      }
      uVar13 = uVar13 + 1;
      piVar24 = piVar24 + 2;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  goto LAB_00b64774;
}


