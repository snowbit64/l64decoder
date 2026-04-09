// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addReflectionShape
// Entry Point: 00a24bc0
// Size: 1372 bytes
// Signature: undefined __thiscall addReflectionShape(ReflectionRenderController * this, GsShape * param_1)


/* ReflectionRenderController::addReflectionShape(GsShape const*) */

void __thiscall
ReflectionRenderController::addReflectionShape(ReflectionRenderController *this,GsShape *param_1)

{
  long **pplVar1;
  GsShape **ppGVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  GsShape **ppGVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  GsShape **__src;
  size_t __n;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  GsShape **local_b0;
  GsShape **local_a8;
  GsShape **local_a0;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  fVar17 = *(float *)(param_1 + 200);
  fVar15 = *(float *)(param_1 + 0xcc);
  uVar26 = NEON_fmadd(fVar17,fVar17,fVar15 * fVar15);
  fVar16 = *(float *)(param_1 + 0xd0);
  fVar23 = (float)NEON_fmadd(fVar16,fVar16,uVar26);
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0x80;
  uVar22 = 0x3f;
  if (1e-06 < fVar23) {
    fVar23 = 1.0 / SQRT(fVar23);
    uVar19 = SUB41(fVar23,0);
    uVar20 = (undefined)((uint)fVar23 >> 8);
    uVar21 = (undefined)((uint)fVar23 >> 0x10);
    uVar22 = (undefined)((uint)fVar23 >> 0x18);
  }
  fVar17 = fVar17 * (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar15 = fVar15 * (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar16 = fVar16 * (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)));
  fVar31 = *(float *)(param_1 + 0xe8);
  fVar32 = *(float *)(param_1 + 0xec);
  lVar12 = *(long *)(this + 0x20);
  fVar23 = *(float *)(param_1 + 0xf0);
  if (*(long *)(this + 0x28) - lVar12 != 0) {
    uVar9 = 0;
    uVar11 = (*(long *)(this + 0x28) - lVar12 >> 5) * -0x5555555555555555;
    do {
      pfVar14 = (float *)(lVar12 + uVar9 * 0x60);
      uVar26 = NEON_fmadd(*pfVar14,fVar17,fVar15 * pfVar14[1]);
      fVar27 = (float)NEON_fmadd(pfVar14[2],fVar16,uVar26);
      if (0.99 <= fVar27) {
        fVar29 = 1.0;
        fVar24 = (fVar15 + pfVar14[1]) * 0.5;
        fVar18 = (fVar17 + *pfVar14) * 0.5;
        fVar27 = (fVar16 + pfVar14[2]) * 0.5;
        uVar26 = NEON_fmadd(fVar18,fVar18,fVar24 * fVar24);
        fVar30 = (float)NEON_fmadd(fVar27,fVar27,uVar26);
        fVar28 = 1.0;
        if (1e-06 < fVar30) {
          fVar29 = 1.0 / SQRT(fVar30);
        }
        lVar13 = lVar12 + uVar9 * 0x60;
        fVar33 = fVar32 - *(float *)(lVar13 + 0x14);
        fVar34 = fVar23 - *(float *)(lVar13 + 0x18);
        fVar30 = fVar31 - *(float *)(lVar13 + 0x10);
        uVar26 = NEON_fmadd(fVar30,fVar30,fVar33 * fVar33);
        fVar35 = (float)NEON_fmadd(fVar34,fVar34,uVar26);
        if (1e-06 < fVar35) {
          fVar28 = 1.0 / SQRT(fVar35);
        }
        uVar26 = NEON_fmadd(fVar18 * fVar29,fVar30 * fVar28,fVar24 * fVar29 * fVar33 * fVar28);
        fVar27 = (float)NEON_fmadd(fVar27 * fVar29,fVar34 * fVar28,uVar26);
        if (ABS(fVar27) < 0.01) goto LAB_00a24d7c;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 <= uVar11 && uVar11 - uVar9 != 0);
  }
  pfVar14 = (float *)0x0;
LAB_00a24d7c:
  projectBoundingSphereToScreenRect
            (this,(Vector3 *)(param_1 + 0x1a4),*(float *)(param_1 + 0x1b0),&fStack_fc,&local_100,
             &fStack_104,&local_108);
  uVar5 = *(ushort *)(param_1 + 0x196);
  uVar9 = (ulong)uVar5;
  fStack_fc = (float)NEON_fmadd(fStack_fc,0x3f000000,0x3f000000);
  local_100 = (float)NEON_fmadd(local_100,0x3f000000,0x3f000000);
  fStack_104 = (float)NEON_fmadd(fStack_104,0x3f000000,0x3f000000);
  local_108 = (float)NEON_fmadd(local_108,0x3f000000,0x3f000000);
  if (uVar5 == 0) {
    fVar27 = 0.0;
    fVar18 = 0.0;
    fVar24 = 0.0;
    uVar25 = 0;
  }
  else {
    fVar24 = 0.0;
    uVar25 = 0;
    fVar18 = 0.0;
    fVar27 = 0.0;
    plVar10 = *(long **)(param_1 + 0x178);
    do {
      pplVar1 = (long **)(param_1 + 0x178);
      if (uVar5 != 1) {
        pplVar1 = (long **)plVar10;
      }
      lVar12 = (long)*pplVar1;
      fVar28 = *(float *)(lVar12 + 0x50);
      if (0.0 < fVar28) {
        uVar36 = *(undefined8 *)(lVar12 + 0x54);
        if (fVar27 < fVar28) {
          fVar27 = fVar28;
        }
        uVar25 = CONCAT17((byte)((ulong)uVar36 >> 0x38) | (byte)((ulong)uVar25 >> 0x38),
                          CONCAT16((byte)((ulong)uVar36 >> 0x30) | (byte)((ulong)uVar25 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar36 >> 0x28) |
                                            (byte)((ulong)uVar25 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar36 >> 0x20) |
                                                     (byte)((ulong)uVar25 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar36 >> 0x18) |
                                                              (byte)((ulong)uVar25 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar36 >> 0x10)
                                                                       | (byte)((ulong)uVar25 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar36
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar25
                                                                                      >> 8),
                                                                                (byte)uVar36 |
                                                                                (byte)uVar25)))))));
        if (fVar18 < *(float *)(lVar12 + 0x5c)) {
          fVar18 = *(float *)(lVar12 + 0x5c);
        }
        if (fVar24 < *(float *)(lVar12 + 0x60)) {
          fVar24 = *(float *)(lVar12 + 0x60);
        }
      }
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  fVar28 = 1.0;
  if (fVar27 != 0.0) {
    fVar28 = fVar27;
  }
  fVar27 = 1.0;
  if (fVar18 != 0.0) {
    fVar27 = fVar18;
  }
  fVar18 = 1.0;
  if (fVar24 != 0.0) {
    fVar18 = fVar24;
  }
  fVar28 = fVar28 * *(float *)(*(long *)(this + 8) + 0x40);
  if (pfVar14 == (float *)0x0) {
    local_b0 = (GsShape **)0x0;
    local_a8 = (GsShape **)0x0;
    uVar26 = NEON_fmadd(fVar31,fVar17,fVar15 * fVar32);
    local_a0 = (GsShape **)0x0;
    fStack_cc = (local_100 - fStack_fc) * (fStack_104 - local_108);
    uStack_ec = NEON_fmadd(fVar23,fVar16,uVar26);
    local_f8 = fVar17;
    fStack_f4 = fVar15;
    fStack_f0 = fVar16;
    local_e8 = fVar31;
    fStack_e4 = fVar32;
    fStack_e0 = fVar23;
    fStack_dc = fStack_fc;
    local_d8 = local_100;
    fStack_d4 = fStack_104;
    fStack_d0 = local_108;
    local_c8 = uVar25;
    fStack_c0 = fVar28;
    fStack_bc = fVar27;
    local_b8 = fVar18;
                    /* try { // try from 00a24f5c to 00a24f63 has its CatchHandler @ 00a2513c */
    __src = (GsShape **)operator_new(8);
    puVar3 = *(undefined8 **)(this + 0x28);
    puVar4 = *(undefined8 **)(this + 0x30);
    local_a8 = __src + 1;
    *__src = param_1;
    local_b0 = __src;
    local_a0 = local_a8;
    if (puVar3 == puVar4) {
                    /* try { // try from 00a25068 to 00a25073 has its CatchHandler @ 00a2513c */
      std::__ndk1::
      vector<ReflectionRenderController::ReflectionMapRequest,std::__ndk1::allocator<ReflectionRenderController::ReflectionMapRequest>>
      ::__push_back_slow_path<ReflectionRenderController::ReflectionMapRequest_const&>
                ((vector<ReflectionRenderController::ReflectionMapRequest,std::__ndk1::allocator<ReflectionRenderController::ReflectionMapRequest>>
                  *)(this + 0x20),(ReflectionMapRequest *)&local_f8);
      __src = local_b0;
      ppGVar7 = local_b0;
      ppGVar2 = local_a8;
    }
    else {
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[1] = CONCAT44(uStack_ec,fStack_f0);
      *puVar3 = CONCAT44(fStack_f4,local_f8);
      *(float *)(puVar3 + 8) = local_b8;
      puVar3[9] = 0;
      puVar3[5] = CONCAT44(fStack_cc,fStack_d0);
      puVar3[4] = CONCAT44(fStack_d4,local_d8);
      puVar3[7] = CONCAT44(fStack_bc,fStack_c0);
      puVar3[6] = local_c8;
      puVar3[3] = CONCAT44(fStack_dc,fStack_e0);
      puVar3[2] = CONCAT44(fStack_e4,local_e8);
      uVar9 = (long)local_a8 - (long)__src;
      if (uVar9 != 0) {
        if ((long)uVar9 < 0) {
                    /* try { // try from 00a25104 to 00a2510b has its CatchHandler @ 00a2511c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
                    /* try { // try from 00a24fc0 to 00a24fc7 has its CatchHandler @ 00a2511c */
        pvVar8 = operator_new(uVar9);
        __src = local_b0;
        puVar3[9] = pvVar8;
        puVar3[10] = pvVar8;
        puVar3[0xb] = (void *)((long)pvVar8 + ((long)uVar9 >> 3) * 8);
        __n = (long)local_a8 - (long)local_b0;
        if (0 < (long)__n) {
          memcpy(pvVar8,local_b0,__n);
          pvVar8 = (void *)((long)pvVar8 + __n);
        }
        puVar3[10] = pvVar8;
      }
      *(undefined8 **)(this + 0x28) = puVar3 + 0xc;
      ppGVar7 = __src;
      ppGVar2 = local_a8;
    }
  }
  else {
    fVar15 = pfVar14[7];
    if (fStack_fc < pfVar14[7]) {
      fVar15 = fStack_fc;
    }
    fVar16 = pfVar14[8];
    if (pfVar14[8] < local_100) {
      fVar16 = local_100;
    }
    fVar17 = (float)NEON_fmadd(local_100 - fStack_fc,fStack_104 - local_108,pfVar14[0xb]);
    pfVar14[7] = fVar15;
    pfVar14[8] = fVar16;
    pfVar14[0xb] = fVar17;
    fVar15 = pfVar14[9];
    if (pfVar14[9] < fStack_104) {
      fVar15 = fStack_104;
    }
    uVar36 = *(undefined8 *)(pfVar14 + 0xc);
    fVar16 = pfVar14[10];
    if (local_108 < pfVar14[10]) {
      fVar16 = local_108;
    }
    pfVar14[9] = fVar15;
    pfVar14[10] = fVar16;
    *(ulong *)(pfVar14 + 0xc) =
         CONCAT17((byte)((ulong)uVar36 >> 0x38) | (byte)((ulong)uVar25 >> 0x38),
                  CONCAT16((byte)((ulong)uVar36 >> 0x30) | (byte)((ulong)uVar25 >> 0x30),
                           CONCAT15((byte)((ulong)uVar36 >> 0x28) | (byte)((ulong)uVar25 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar36 >> 0x20) |
                                             (byte)((ulong)uVar25 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar36 >> 0x18) |
                                                      (byte)((ulong)uVar25 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar36 >> 0x10) |
                                                               (byte)((ulong)uVar25 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar36 >> 8) |
                                                                        (byte)((ulong)uVar25 >> 8),
                                                                        (byte)uVar36 | (byte)uVar25)
                                                              ))))));
    if (pfVar14[0xe] < fVar28) {
      pfVar14[0xe] = fVar28;
    }
    if (pfVar14[0xf] < fVar27) {
      pfVar14[0xf] = fVar27;
    }
    if (pfVar14[0x10] < fVar18) {
      pfVar14[0x10] = fVar18;
    }
    ppGVar2 = *(GsShape ***)(pfVar14 + 0x14);
    if (ppGVar2 != *(GsShape ***)(pfVar14 + 0x16)) {
      *ppGVar2 = param_1;
      *(GsShape ***)(pfVar14 + 0x14) = ppGVar2 + 1;
      ppGVar2 = local_a8;
      goto LAB_00a250c4;
    }
    __src = *(GsShape ***)(pfVar14 + 0x12);
    uVar11 = (long)ppGVar2 - (long)__src;
    uVar9 = ((long)uVar11 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar9 <= (ulong)((long)uVar11 >> 2)) {
      uVar9 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar8 = operator_new(uVar9 << 3);
    }
    ppGVar2 = (GsShape **)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *ppGVar2 = param_1;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,__src,uVar11);
    }
    *(void **)(pfVar14 + 0x12) = pvVar8;
    *(GsShape ***)(pfVar14 + 0x14) = ppGVar2 + 1;
    *(void **)(pfVar14 + 0x16) = (void *)((long)pvVar8 + uVar9 * 8);
    ppGVar7 = local_a8;
    ppGVar2 = local_a8;
  }
  local_a8 = ppGVar7;
  if (__src != (GsShape **)0x0) {
    operator_delete(__src);
    ppGVar2 = local_a8;
  }
LAB_00a250c4:
  local_a8 = ppGVar2;
  if (*(long *)(lVar6 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


