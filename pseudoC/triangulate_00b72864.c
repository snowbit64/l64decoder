// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: triangulate
// Entry Point: 00b72864
// Size: 6212 bytes
// Signature: undefined __thiscall triangulate(Brep * this, vector * param_1, uint param_2, uint param_3, Vector3 * param_4, short param_5, float param_6)


/* Brep::triangulate(std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >
   const&, unsigned int, unsigned int, Vector3 const&, short, float) */

uint __thiscall
Brep::triangulate(Brep *this,vector *param_1,uint param_2,uint param_3,Vector3 *param_4,
                 short param_5,float param_6)

{
  undefined8 *puVar1;
  Brep *pBVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  undefined6 uVar12;
  undefined6 *puVar13;
  short *__src;
  float *pfVar14;
  uint uVar15;
  undefined8 *__s;
  ushort *__s_00;
  undefined8 uVar16;
  float *pfVar17;
  short *psVar18;
  float *pfVar19;
  float *pfVar20;
  Brep BVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  byte bVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  ushort *puVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  ushort *puVar33;
  int iVar34;
  uint uVar35;
  short *psVar36;
  undefined8 *puVar37;
  ulong uVar38;
  undefined8 *puVar39;
  short *psVar40;
  ulong uVar41;
  ulong uVar42;
  undefined4 *puVar43;
  size_t __n;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float unaff_s15;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  long *local_180;
  undefined8 local_140;
  long *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined6 *local_110;
  undefined6 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  short *local_f0;
  short *local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  long local_b0;
  
  lVar11 = tpidr_el0;
  uVar38 = (ulong)param_2;
  local_b0 = *(long *)(lVar11 + 0x28);
  uVar41 = (ulong)param_3;
  if (param_3 == 0) {
    __s_00 = (ushort *)0x0;
    __s = (undefined8 *)0x0;
  }
  else {
    __s = (undefined8 *)operator_new(uVar41 * 0xc);
    memset(__s,0,((uVar41 * 0xc - 0xc) / 0xc) * 0xc + 0xc);
                    /* try { // try from 00b72908 to 00b7290f has its CatchHandler @ 00b740dc */
    __s_00 = (ushort *)operator_new(uVar41 * 2);
    memset(__s_00,0,uVar41 * 2);
    lVar22 = *(long *)param_1;
    lVar26 = *(long *)(this + 0x2f68);
    lVar28 = *(long *)(this + 0x2f50);
    lVar30 = *(long *)(this + 0x2ef0);
    uVar42 = uVar41;
    puVar29 = __s_00;
    puVar37 = __s;
    do {
      lVar31 = uVar38 * 4;
      uVar38 = (ulong)((int)uVar38 + 1);
      uVar42 = uVar42 - 1;
      uVar6 = *(ushort *)
               (lVar28 + (ulong)*(ushort *)(lVar26 + (ulong)*(uint *)(lVar22 + lVar31) * 8) * 0xc);
      puVar1 = (undefined8 *)(lVar30 + (ulong)uVar6 * 0x10);
      uVar47 = *(undefined4 *)(puVar1 + 1);
      uVar16 = *puVar1;
      *puVar29 = uVar6;
      *(undefined4 *)(puVar37 + 1) = uVar47;
      *puVar37 = uVar16;
      puVar29 = puVar29 + 1;
      puVar37 = (undefined8 *)((long)puVar37 + 0xc);
    } while (uVar42 != 0);
  }
  local_130 = (long *)(this + 0x2f68);
  local_180 = (long *)(this + 0x2ef0);
  local_110 = (undefined6 *)0x0;
  local_108 = (undefined6 *)0x0;
  local_100 = 0;
                    /* try { // try from 00b729d8 to 00b729f3 has its CatchHandler @ 00b740ec */
  uVar38 = TriangulateUtil::triangulate((Vector3 *)__s,param_3,param_4,100.0,(vector *)&local_110);
  if ((uVar38 & 1) == 0) {
    uVar15 = 0;
    goto LAB_00b73e24;
  }
  fVar51 = 0.0;
  pBVar2 = this + 0x2fb6;
  fVar53 = 0.0;
  fVar48 = 0.0;
  fVar60 = 0.0;
  fVar71 = 1.0;
  BVar21 = *pBVar2;
  local_128 = (undefined8 *)0x0;
  local_120 = (undefined8 *)0x0;
  local_118 = 0;
  fVar59 = 1.0;
  if ((-1 < param_5) && (fVar59 = 1.0, BVar21 != (Brep)0x0)) {
    if (param_3 != 0) {
                    /* try { // try from 00b72a48 to 00b72a53 has its CatchHandler @ 00b740b8 */
      std::__ndk1::vector<Vector2,std::__ndk1::allocator<Vector2>>::__append
                ((vector<Vector2,std::__ndk1::allocator<Vector2>> *)&local_128,uVar41);
    }
    local_e0 = (float *)0x0;
    local_d8 = (undefined8 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_f8 = (short *)0x0;
    local_f0 = (short *)0x0;
    local_e8 = (short *)0x0;
    if (param_3 == 0) {
      fVar59 = 0.0;
      fVar60 = 0.0;
      fVar71 = 0.0;
      puVar37 = (undefined8 *)0x0;
      local_140 = 0;
    }
    else {
      fVar71 = 0.0;
      fVar60 = 0.0;
      fVar59 = 0.0;
      psVar40 = (short *)0x0;
      psVar36 = (short *)0x0;
      puVar37 = (undefined8 *)0x0;
      uVar38 = 0;
      bVar9 = false;
      local_140 = 0;
      do {
        pfVar14 = local_e0;
        uVar35 = *(uint *)(*(long *)param_1 + (ulong)((int)uVar38 + param_2) * 4);
        lVar22 = *local_130;
        uVar15 = uVar35;
        do {
          if (*(short *)(lVar22 + (ulong)(uVar15 >> 2) * 0x20 + 2) == param_5) {
            puVar1 = (undefined8 *)
                     (*(long *)(this + 0x2f98) +
                      (ulong)*(ushort *)(lVar22 + (ulong)uVar15 * 8 + 2) * 0x18 + 0xc);
            if (puVar37 == local_d0) {
              uVar23 = (long)puVar37 - (long)local_e0;
              uVar42 = ((long)uVar23 >> 3) + 1;
              if (uVar42 >> 0x3d != 0) {
                    /* try { // try from 00b74084 to 00b7408b has its CatchHandler @ 00b74100 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar42 <= (ulong)((long)uVar23 >> 2)) {
                uVar42 = (long)uVar23 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar23) {
                uVar42 = 0x1fffffffffffffff;
              }
              if (uVar42 == 0) {
                pfVar17 = (float *)0x0;
              }
              else {
                if (uVar42 >> 0x3d != 0) {
                    /* try { // try from 00b74098 to 00b740a3 has its CatchHandler @ 00b74100 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00b72c38 to 00b72c3b has its CatchHandler @ 00b740d8 */
                pfVar17 = (float *)operator_new(uVar42 << 3);
              }
              puVar37 = (undefined8 *)((long)(pfVar17 + ((long)uVar23 >> 3) * 2) + 8);
              *(undefined8 *)(pfVar17 + ((long)uVar23 >> 3) * 2) = *puVar1;
              if (0 < (long)uVar23) {
                memcpy(pfVar17,pfVar14,uVar23);
              }
              local_d0 = (undefined8 *)(pfVar17 + uVar42 * 2);
              psVar18 = psVar36;
              local_e0 = pfVar17;
              local_d8 = puVar37;
              if (pfVar14 != (float *)0x0) {
                operator_delete(pfVar14);
              }
            }
            else {
              local_d8 = puVar37 + 1;
              *puVar37 = *puVar1;
              psVar18 = local_f0;
              puVar37 = local_d8;
              psVar40 = local_e8;
            }
            __src = local_f8;
            local_140 = CONCAT44((float)((ulong)local_140 >> 0x20) + (float)((ulong)*puVar1 >> 0x20)
                                 ,(float)local_140 + (float)*puVar1);
            if (psVar18 < psVar40) {
              psVar36 = psVar18 + 1;
              *psVar18 = (short)uVar38;
              local_f0 = psVar36;
            }
            else {
              __n = (long)psVar18 - (long)local_f8;
              if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
                    /* try { // try from 00b7407c to 00b74083 has its CatchHandler @ 00b74104 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar23 = (long)psVar40 - (long)local_f8;
              uVar42 = ((long)__n >> 1) + 1;
              if (uVar42 <= uVar23) {
                uVar42 = uVar23;
              }
              if (0x7ffffffffffffffd < uVar23) {
                uVar42 = 0x7fffffffffffffff;
              }
              if (uVar42 == 0) {
                psVar18 = (short *)0x0;
              }
              else {
                if ((long)uVar42 < 0) {
                    /* try { // try from 00b7408c to 00b74097 has its CatchHandler @ 00b74104 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(local_140,
                               "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00b72d08 to 00b72d0b has its CatchHandler @ 00b740e8 */
                psVar18 = (short *)operator_new(uVar42 << 1);
              }
              psVar36 = psVar18 + ((long)__n >> 1) + 1;
              psVar18[(long)__n >> 1] = (short)uVar38;
              if (0 < (long)__n) {
                memcpy(psVar18,__src,__n);
              }
              psVar40 = psVar18 + uVar42;
              local_f8 = psVar18;
              local_f0 = psVar36;
              local_e8 = psVar40;
              if (__src != (short *)0x0) {
                operator_delete(__src);
              }
            }
            goto LAB_00b72ab8;
          }
          uVar10 = uVar15 - 2;
          if ((uVar15 + 1 & 3) != 0) {
            uVar10 = uVar15 + 1;
          }
          uVar15 = *(uint *)(lVar22 + (ulong)uVar10 * 8 + 4);
        } while (uVar15 != 0xffffffff && uVar15 != uVar35);
                    /* try { // try from 00b72b24 to 00b72b2f has its CatchHandler @ 00b74108 */
        computeFaceNormal(this,uVar35 >> 2,(Vector3 *)&local_c8);
        uVar47 = NEON_fmadd(local_c8,local_c8,fStack_c4 * fStack_c4);
        fVar50 = (float)NEON_fmadd(local_c0,local_c0,uVar47);
        fVar48 = 1.0;
        if (1e-06 < fVar50) {
          fVar48 = 1.0 / SQRT(fVar50);
        }
        fVar50 = local_c8 * fVar48;
        fVar45 = fStack_c4 * fVar48;
        fVar48 = local_c0 * fVar48;
        if (bVar9) {
          fVar49 = (float)NEON_fmadd(fVar53,fVar48,fVar45 * -fVar51);
          fVar51 = (float)NEON_fmadd(fVar51,fVar50,fVar48 * -unaff_s15);
          fVar53 = (float)NEON_fmadd(unaff_s15,fVar45,fVar50 * -fVar53);
          fVar71 = fVar71 + fVar49;
          fVar60 = fVar60 + fVar51;
          fVar59 = fVar59 + fVar53;
        }
        bVar9 = true;
        fVar51 = fVar48;
        fVar53 = fVar45;
        unaff_s15 = fVar50;
LAB_00b72ab8:
        uVar38 = uVar38 + 1;
      } while (uVar38 != uVar41);
    }
    pfVar14 = local_e0;
    psVar40 = local_f8;
    puVar1 = local_128;
    uVar47 = NEON_fmadd(fVar71,fVar71,fVar60 * fVar60);
    fVar53 = (float)NEON_fmadd(fVar59,fVar59,uVar47);
    fVar53 = SQRT(fVar53);
    if (0.0001 <= fVar53) {
      fVar51 = 1.0 / fVar53;
      fVar71 = fVar71 * fVar51;
      fVar60 = fVar60 * fVar51;
      fVar59 = fVar59 * fVar51;
    }
    fVar50 = *(float *)(param_4 + 8);
    fVar51 = *(float *)param_4;
    fVar48 = *(float *)(param_4 + 4);
    if (0.0001 <= fVar53) {
      fVar50 = fVar59;
      fVar51 = fVar71;
      fVar48 = fVar60;
    }
    fVar59 = fVar48 * fVar48;
    fVar53 = fVar50 * fVar50;
    fVar71 = 1.0;
    bVar25 = 2;
    if (fVar51 * fVar51 <= fVar53 || fVar53 >= fVar59) {
      bVar25 = 0;
    }
    bVar25 = fVar59 < fVar51 * fVar51 & (fVar53 < fVar59 ^ 0xffU) | bVar25;
    fVar59 = fVar71;
    if (bVar25 != 0) {
      fVar59 = 0.0;
    }
    fVar53 = fVar71;
    if (bVar25 != 1) {
      fVar53 = 0.0;
    }
    fVar60 = fVar71;
    if (bVar25 != 2) {
      fVar60 = 0.0;
    }
    fVar45 = (float)NEON_fmadd(fVar48,fVar60,fVar53 * -fVar50);
    fVar60 = (float)NEON_fmadd(fVar50,fVar59,fVar60 * -fVar51);
    fVar59 = (float)NEON_fmadd(fVar51,fVar53,fVar59 * -fVar48);
    uVar47 = NEON_fmadd(fVar45,fVar45,fVar60 * fVar60);
    fVar53 = (float)NEON_fmadd(fVar59,fVar59,uVar47);
    if (1e-06 < fVar53) {
      fVar71 = 1.0 / SQRT(fVar53);
    }
    if (param_3 == 0) {
      fVar53 = 0.0;
      fVar51 = 0.0;
    }
    else {
      fVar49 = (float)NEON_fmadd(fVar59 * fVar71,fVar51,fVar50 * -(fVar45 * fVar71));
      fVar50 = (float)NEON_fmadd(fVar60 * fVar71,fVar50,fVar48 * -(fVar59 * fVar71));
      fVar48 = (float)NEON_fmadd(fVar45 * fVar71,fVar48,fVar51 * -(fVar60 * fVar71));
      lVar22 = *local_180;
      fVar53 = 0.0;
      fVar51 = 0.0;
      uVar38 = uVar41;
      puVar29 = __s_00;
      puVar39 = local_128;
      do {
        uVar38 = uVar38 - 1;
        pfVar17 = (float *)(lVar22 + (ulong)*puVar29 * 0x10);
        fVar54 = fVar49 * pfVar17[1] + fVar50 * *pfVar17 + fVar48 * pfVar17[2];
        fVar57 = fVar60 * fVar71 * pfVar17[1] + fVar45 * fVar71 * *pfVar17 +
                 fVar59 * fVar71 * pfVar17[2];
        fVar53 = fVar53 + fVar54;
        fVar51 = fVar51 + fVar57;
        *puVar39 = CONCAT44(fVar57,fVar54);
        puVar29 = puVar29 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar38 != 0);
    }
    uVar38 = (long)puVar37 - (long)local_e0;
    uVar42 = (long)uVar38 >> 3;
    uVar15 = (uint)uVar42;
    fVar50 = (float)((ulong)local_140 >> 0x20);
    if (uVar15 == 0) {
      bVar9 = false;
      fVar71 = 1.0 / (float)(uVar42 & 0xffffffff);
      fVar54 = fVar71 * 0.0;
      fVar49 = fVar71 * (float)local_140;
      fVar50 = fVar71 * fVar50;
      fVar45 = fVar54;
      if (param_3 == 0) {
LAB_00b738c8:
        fVar59 = 1.0;
        fVar48 = 0.0;
        fVar60 = 0.0;
        fVar71 = 1.0;
      }
      else {
LAB_00b733ac:
        fVar59 = 1.0;
        fVar53 = fVar53 * (1.0 / (float)(ulong)param_3);
        fVar51 = fVar51 * (1.0 / (float)(ulong)param_3);
        if (param_3 == 1) {
          fVar57 = 0.0;
          fVar58 = 0.0;
          fVar63 = 0.0;
          uVar42 = 0;
LAB_00b73424:
          lVar22 = uVar41 - uVar42;
          puVar37 = local_128 + uVar42;
          do {
            fVar60 = fVar58;
            fVar71 = fVar57;
            lVar22 = lVar22 + -1;
            fVar48 = (float)*puVar37 - fVar53;
            fVar52 = (float)((ulong)*puVar37 >> 0x20) - fVar51;
            fVar63 = fVar63 + fVar48 * fVar48;
            puVar37 = puVar37 + 1;
            fVar57 = fVar71 + fVar48 * fVar52;
            fVar58 = fVar60 + fVar52 * fVar52;
          } while (lVar22 != 0);
          fVar57 = fVar71 + fVar52 * fVar48;
          fVar58 = fVar60 + fVar52 * fVar52;
        }
        else {
          uVar42 = uVar41 & 0xfffffffe;
          fVar57 = 0.0;
          fVar58 = 0.0;
          fVar63 = 0.0;
          puVar37 = local_128 + 1;
          uVar38 = uVar42;
          do {
            puVar1 = puVar37 + -1;
            uVar16 = *puVar37;
            puVar37 = puVar37 + 2;
            uVar38 = uVar38 - 2;
            fVar71 = (float)*puVar1 - fVar53;
            fVar60 = (float)((ulong)*puVar1 >> 0x20) - fVar51;
            fVar48 = (float)uVar16 - fVar53;
            fVar52 = (float)((ulong)uVar16 >> 0x20) - fVar51;
            fVar63 = fVar63 + fVar71 * fVar71 + fVar48 * fVar48;
            fVar57 = fVar57 + fVar71 * fVar60 + fVar48 * fVar52;
            fVar58 = fVar58 + fVar60 * fVar60 + fVar52 * fVar52;
          } while (uVar38 != 0);
          if (uVar42 != uVar41) goto LAB_00b73424;
        }
        if (1e-05 <= ABS(fVar57)) {
          fVar71 = (float)NEON_fmadd(fVar63 - fVar58,fVar63 - fVar58,fVar57 * fVar57 * 4.0);
          fVar59 = (fVar58 + fVar63 + SQRT(fVar71)) * 0.5;
          fVar71 = ((fVar58 + fVar63) - SQRT(fVar71)) * 0.5;
          fVar48 = (fVar59 - fVar58) / fVar57;
          fVar57 = (fVar71 - fVar58) / fVar57;
          if (fVar71 <= fVar59) {
            fVar71 = (float)NEON_fmadd(fVar48,fVar48,0x3f800000);
            fVar59 = (float)NEON_fmadd(fVar57,fVar57,0x3f800000);
            fVar60 = 1.0 / SQRT(fVar71);
            fVar59 = 1.0 / SQRT(fVar59);
            fVar71 = fVar48 * fVar60;
            fVar48 = fVar57 * fVar59;
          }
          else {
            fVar71 = (float)NEON_fmadd(fVar57,fVar57,0x3f800000);
            fVar59 = (float)NEON_fmadd(fVar48,fVar48,0x3f800000);
            fVar60 = 1.0 / SQRT(fVar71);
            fVar59 = 1.0 / SQRT(fVar59);
            fVar71 = fVar57 * fVar60;
            fVar48 = fVar48 * fVar59;
          }
        }
        else {
          fVar48 = 0.0;
          fVar60 = 0.0;
          fVar71 = 1.0;
          if (fVar63 < fVar58) {
            fVar59 = 0.0;
            fVar71 = 0.0;
            fVar48 = 1.0;
            fVar60 = 1.0;
          }
        }
      }
      fVar51 = (float)NEON_fmadd(*(undefined4 *)local_128,fVar71,
                                 fVar60 * *(float *)((long)local_128 + 4));
      fVar57 = (float)NEON_fmadd(*(undefined4 *)local_128,fVar48,
                                 fVar59 * *(float *)((long)local_128 + 4));
      fVar58 = fVar51;
      fVar53 = fVar57;
      if (1 < param_3) {
        pfVar17 = (float *)((long)local_128 + 0xc);
        lVar22 = uVar41 - 1;
        do {
          pfVar19 = pfVar17 + -1;
          fVar63 = *pfVar17;
          pfVar17 = pfVar17 + 2;
          fVar52 = (float)NEON_fmadd(*pfVar19,fVar48,fVar59 * fVar63);
          fVar63 = (float)NEON_fmadd(*pfVar19,fVar71,fVar60 * fVar63);
          if (fVar53 < fVar52) {
            fVar53 = fVar52;
          }
          if (fVar52 < fVar57) {
            fVar57 = fVar52;
          }
          if (fVar51 < fVar63) {
            fVar51 = fVar63;
          }
          if (fVar63 < fVar58) {
            fVar58 = fVar63;
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      fVar71 = fVar71 * param_6;
      fVar48 = fVar48 * param_6;
      fVar60 = fVar60 * param_6;
      fVar59 = fVar59 * param_6;
      if (bVar9) {
LAB_00b73968:
        fVar51 = (float)NEON_fmadd(fVar45,fVar71,fVar54 * fVar60);
        fVar53 = (float)NEON_fmadd(fVar45,fVar48,fVar54 * fVar59);
        fVar51 = fVar49 - fVar51;
        fVar53 = fVar50 - fVar53;
      }
      else {
        fVar51 = (float)NEON_fmadd((fVar58 + fVar51) * -0.5,param_6,0x3f000000);
        fVar53 = (float)NEON_fmadd((fVar53 + fVar57) * -0.5,param_6,0x3f000000);
      }
joined_r0x00b73c90:
      if (local_f8 != (short *)0x0) goto LAB_00b73c94;
    }
    else {
      uVar23 = uVar38 >> 3 & 0xffffffff;
      if (uVar23 < 2) {
        fVar45 = 0.0;
        fVar54 = 0.0;
        lVar26 = 0;
LAB_00b72fe0:
        lVar22 = uVar23 - lVar26;
        psVar36 = local_f8 + lVar26;
        do {
          lVar22 = lVar22 + -1;
          fVar45 = fVar45 + (float)local_128[*psVar36];
          fVar54 = fVar54 + (float)((ulong)local_128[*psVar36] >> 0x20);
          psVar36 = psVar36 + 1;
        } while (lVar22 != 0);
      }
      else {
        uVar24 = uVar38 >> 3 & 1;
        fVar45 = 0.0;
        fVar54 = 0.0;
        lVar26 = uVar23 - uVar24;
        psVar36 = local_f8 + 1;
        lVar22 = lVar26;
        do {
          psVar18 = psVar36 + -1;
          lVar22 = lVar22 + -2;
          sVar8 = *psVar36;
          psVar36 = psVar36 + 2;
          fVar45 = fVar45 + (float)local_128[*psVar18] + (float)local_128[sVar8];
          fVar54 = fVar54 + (float)((ulong)local_128[*psVar18] >> 0x20) +
                   (float)((ulong)local_128[sVar8] >> 0x20);
        } while (lVar22 != 0);
        if (uVar24 != 0) goto LAB_00b72fe0;
      }
      fVar71 = 1.0 / (float)(uVar42 & 0xffffffff);
      fVar49 = (float)local_140 * fVar71;
      fVar50 = fVar50 * fVar71;
      fVar45 = fVar45 * fVar71;
      fVar54 = fVar54 * fVar71;
      if (uVar15 == 1) {
        bVar9 = true;
        goto joined_r0x00b73378;
      }
      if (uVar15 == 2) {
        fVar58 = local_e0[3] - local_e0[1];
        bVar9 = true;
        fVar57 = local_e0[2] - *local_e0;
        fVar71 = (float)NEON_fmadd(fVar57,fVar57,fVar58 * fVar58);
        if (0.001 <= fVar71) {
          fVar60 = *(float *)((long)(local_128 + local_f8[1]) + 4) -
                   *(float *)((long)(local_128 + *local_f8) + 4);
          fVar48 = *(float *)(local_128 + local_f8[1]) - *(float *)(local_128 + *local_f8);
          fVar59 = (float)NEON_fmadd(fVar48,fVar48,fVar60 * fVar60);
          if (0.001 <= fVar59) {
            fVar63 = SQRT(fVar71) * 0.5;
            fVar71 = 1.0 / SQRT(fVar71);
            fVar53 = 1.0 / SQRT(fVar59);
            fVar57 = fVar57 * fVar71;
            fVar58 = fVar58 * fVar71;
            fVar71 = SQRT(fVar59) * 0.5;
            fVar48 = fVar48 * fVar53;
            fVar60 = fVar60 * fVar53;
            goto LAB_00b730d0;
          }
        }
joined_r0x00b73378:
        if (param_3 == 0) goto LAB_00b738c8;
        goto LAB_00b733ac;
      }
      if (uVar15 < 3) {
        bVar9 = false;
        goto joined_r0x00b73378;
      }
      if (uVar23 < 2) {
        fVar59 = 0.0;
        fVar57 = 0.0;
        fVar71 = 0.0;
        lVar26 = 0;
LAB_00b73594:
        lVar22 = uVar23 - lVar26;
        puVar37 = (undefined8 *)(local_e0 + lVar26 * 2);
        do {
          fVar63 = fVar57;
          fVar58 = fVar59;
          lVar22 = lVar22 + -1;
          fVar60 = (float)*puVar37 - fVar49;
          fVar48 = (float)((ulong)*puVar37 >> 0x20) - fVar50;
          fVar71 = fVar71 + fVar48 * fVar48;
          puVar37 = puVar37 + 1;
          fVar59 = fVar58 + fVar60 * fVar60;
          fVar57 = fVar63 + fVar48 * fVar60;
        } while (lVar22 != 0);
        fVar59 = fVar58 + fVar60 * fVar60;
        fVar57 = fVar63 + fVar48 * fVar60;
      }
      else {
        uVar42 = uVar38 >> 3 & 1;
        fVar59 = 0.0;
        fVar57 = 0.0;
        lVar26 = uVar23 - uVar42;
        fVar71 = 0.0;
        puVar37 = (undefined8 *)(local_e0 + 2);
        lVar22 = lVar26;
        do {
          puVar39 = puVar37 + -1;
          uVar16 = *puVar37;
          puVar37 = puVar37 + 2;
          lVar22 = lVar22 + -2;
          fVar60 = (float)*puVar39 - fVar49;
          fVar48 = (float)((ulong)*puVar39 >> 0x20) - fVar50;
          fVar58 = (float)uVar16 - fVar49;
          fVar63 = (float)((ulong)uVar16 >> 0x20) - fVar50;
          fVar59 = fVar59 + fVar60 * fVar60 + fVar58 * fVar58;
          fVar57 = fVar57 + fVar48 * fVar60 + fVar63 * fVar58;
          fVar71 = fVar71 + fVar48 * fVar48 + fVar63 * fVar63;
        } while (lVar22 != 0);
        if (uVar42 != 0) goto LAB_00b73594;
      }
      if (1e-05 <= ABS(fVar57)) {
        fVar60 = (float)NEON_fmadd(fVar59 - fVar71,fVar59 - fVar71,fVar57 * fVar57 * 4.0);
        fVar48 = (fVar71 + fVar59 + SQRT(fVar60)) * 0.5;
        fVar59 = ((fVar71 + fVar59) - SQRT(fVar60)) * 0.5;
        if (fVar59 <= fVar48) {
          fVar57 = (fVar48 - fVar71) / fVar57;
          fVar60 = (float)NEON_fmadd(fVar57,fVar57,0x3f800000);
          fVar63 = fVar48;
          fVar71 = fVar59;
        }
        else {
          fVar57 = (fVar59 - fVar71) / fVar57;
          fVar60 = (float)NEON_fmadd(fVar57,fVar57,0x3f800000);
          fVar63 = fVar59;
          fVar71 = fVar48;
        }
        fVar58 = 1.0 / SQRT(fVar60);
        fVar57 = fVar57 * fVar58;
      }
      else if (fVar71 <= fVar59) {
        fVar58 = 0.0;
        fVar57 = 1.0;
        fVar63 = fVar59;
      }
      else {
        fVar57 = 0.0;
        fVar58 = 1.0;
        fVar63 = fVar71;
        fVar71 = fVar59;
      }
      uVar35 = uVar15;
      if (uVar15 < 2) {
        uVar35 = 1;
      }
      uVar42 = (ulong)uVar35;
      if (uVar35 < 2) {
        uVar16 = 0;
        fVar48 = 0.0;
        uVar24 = 0;
LAB_00b73714:
        lVar22 = uVar42 - uVar24;
        psVar36 = local_f8 + uVar24;
        do {
          lVar22 = lVar22 + -1;
          fVar52 = (float)local_128[*psVar36] - fVar45;
          fVar56 = (float)((ulong)local_128[*psVar36] >> 0x20) - fVar54;
          fVar59 = (float)uVar16;
          fVar60 = (float)((ulong)uVar16 >> 0x20);
          uVar16 = CONCAT44(fVar60 + fVar56 * fVar56,fVar59 + fVar52 * fVar52);
          fVar48 = fVar48 + fVar56 * fVar52;
          psVar36 = psVar36 + 1;
        } while (lVar22 != 0);
        uVar16 = CONCAT44(fVar60 + fVar56 * fVar56,fVar59 + fVar52 * fVar52);
      }
      else {
        uVar24 = uVar42 & 0xfffffffe;
        uVar16 = 0;
        fVar48 = 0.0;
        psVar36 = local_f8 + 1;
        uVar23 = uVar24;
        do {
          psVar18 = psVar36 + -1;
          uVar23 = uVar23 - 2;
          sVar8 = *psVar36;
          psVar36 = psVar36 + 2;
          fVar59 = (float)local_128[*psVar18] - fVar45;
          fVar60 = (float)((ulong)local_128[*psVar18] >> 0x20) - fVar54;
          fVar52 = (float)local_128[sVar8] - fVar45;
          fVar56 = (float)((ulong)local_128[sVar8] >> 0x20) - fVar54;
          fVar48 = fVar48 + fVar59 * fVar60 + fVar52 * fVar56;
          uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) + fVar60 * fVar60 + fVar56 * fVar56,
                            (float)uVar16 + fVar59 * fVar59 + fVar52 * fVar52);
        } while (uVar23 != 0);
        if (uVar24 != uVar42) goto LAB_00b73714;
      }
      fVar60 = (float)((ulong)uVar16 >> 0x20);
      fVar59 = (float)uVar16;
      if (1e-05 <= ABS(fVar48)) {
        fVar56 = (float)NEON_fmadd(fVar59 - fVar60,fVar59 - fVar60,fVar48 * fVar48 * 4.0);
        fVar52 = (fVar60 + fVar59 + SQRT(fVar56)) * 0.5;
        fVar59 = ((fVar60 + fVar59) - SQRT(fVar56)) * 0.5;
        uVar16 = CONCAT44(fVar59,fVar52);
        if (fVar59 <= fVar52) {
          uVar16 = NEON_rev64(uVar16,4);
          fVar59 = fVar52;
        }
        fVar48 = (fVar59 - fVar60) / fVar48;
        fVar59 = (float)NEON_fmadd(fVar48,fVar48,0x3f800000);
        fVar60 = 1.0 / SQRT(fVar59);
        fVar48 = fVar48 * fVar60;
      }
      else if (fVar60 <= fVar59) {
        uVar16 = NEON_rev64(uVar16,4);
        fVar60 = 0.0;
        fVar48 = 1.0;
      }
      else {
        fVar48 = 0.0;
        fVar60 = 1.0;
      }
      bVar9 = true;
      if ((fVar63 < 0.001) || (fVar59 = (float)((ulong)uVar16 >> 0x20), fVar59 < 0.001))
      goto joined_r0x00b73378;
      if ((fVar71 / fVar63 < 0.01) && ((float)uVar16 / fVar59 < 0.01)) {
        fVar63 = 0.0;
        fVar71 = 0.0;
        pfVar17 = local_e0 + 1;
        psVar36 = local_f8;
        do {
          pfVar19 = pfVar17 + -1;
          fVar59 = *pfVar17;
          pfVar17 = pfVar17 + 2;
          fVar59 = (float)NEON_fmadd(*pfVar19 - fVar49,fVar57,fVar58 * (fVar59 - fVar50));
          fVar53 = (float)NEON_fmadd(*(float *)(local_128 + *psVar36) - fVar45,fVar48,
                                     fVar60 * (*(float *)((long)(local_128 + *psVar36) + 4) - fVar54
                                              ));
          if (fVar63 < ABS(fVar59)) {
            fVar63 = ABS(fVar59);
          }
          if (fVar71 < ABS(fVar53)) {
            fVar71 = ABS(fVar53);
          }
          uVar42 = uVar42 - 1;
          psVar36 = psVar36 + 1;
        } while (uVar42 != 0);
LAB_00b730d0:
        fVar48 = fVar48 * fVar71;
        fVar59 = fVar60 * fVar71;
        fVar61 = 0.0;
        uVar47 = NEON_fmadd(fVar59,0,fVar48 * -0.0);
        uVar55 = NEON_fmadd(fVar48,fVar48,fVar59 * -(fVar71 * -fVar60));
        fVar53 = (float)NEON_fmadd(uVar47,0,uVar55);
        fVar56 = 1e-36;
        fVar52 = ABS(fVar53);
        if (1e-36 < fVar52) {
          fVar56 = -(1.0 / fVar53);
          fVar52 = fVar48 * (1.0 / fVar53);
          fVar61 = fVar59 * fVar56;
          fVar56 = fVar71 * -fVar60 * fVar56;
        }
        fVar62 = fVar57 * fVar63;
        fVar64 = fVar63 * -fVar58;
        fVar63 = fVar58 * fVar63;
        uVar15 = param_3 & 0xffff;
        uVar38 = (ulong)uVar15;
        fVar60 = (float)NEON_fmadd(fVar56,fVar62,fVar64 * fVar52);
        fVar59 = (float)NEON_fmadd(fVar56,fVar63,fVar62 * fVar52);
        fVar71 = (float)NEON_fmadd(fVar52,fVar62,fVar64 * fVar61);
        fVar48 = (float)NEON_fmadd(fVar52,fVar63,fVar62 * fVar61);
        fVar51 = (float)NEON_fmadd(fVar45,fVar71,fVar54 * fVar60);
        fVar53 = (float)NEON_fmadd(fVar45,fVar48,fVar54 * fVar59);
        fVar51 = fVar49 - fVar51;
        fVar53 = fVar50 - fVar53;
        if (uVar15 == 0) goto LAB_00b73c94;
        bVar9 = false;
        pfVar17 = (float *)((long)local_128 + 4);
        uVar42 = uVar38;
        do {
          pfVar19 = pfVar17 + -1;
          fVar66 = *pfVar17;
          pfVar17 = pfVar17 + 2;
          fVar67 = (float)NEON_fmadd(*pfVar19,fVar71,fVar60 * fVar66);
          fVar66 = (float)NEON_fmadd(*pfVar19,fVar48,fVar59 * fVar66);
          uVar42 = uVar42 - 1;
          bVar9 = (bool)((((fVar51 + fVar67 < 0.02000001 || 0.98 < fVar51 + fVar67) ||
                          fVar53 + fVar66 < 0.02000001) || 0.98 < fVar53 + fVar66) | bVar9);
        } while (uVar42 != 0);
        if (bVar9) {
          fVar66 = 0.5 - fVar50;
          fVar67 = 0.5 - fVar49;
          fVar68 = (float)NEON_fmadd(fVar67,fVar58,fVar66 * -fVar57);
          if (ABS(fVar68) < 0.001) goto joined_r0x00b73c90;
          fVar65 = -fVar58;
          if (0.0 <= fVar68) {
            fVar65 = fVar58;
            fVar57 = -fVar57;
          }
          if (uVar15 == 0) goto joined_r0x00b73c90;
          fVar58 = -999.0;
          fVar68 = 999.0;
          pfVar17 = (float *)((long)local_128 + 4);
          do {
            pfVar19 = pfVar17 + -1;
            fVar69 = *pfVar17;
            pfVar17 = pfVar17 + 2;
            fVar70 = (float)NEON_fmadd(*pfVar19,fVar48,fVar59 * fVar69);
            fVar69 = (float)NEON_fmadd(*pfVar19,fVar71,fVar60 * fVar69);
            fVar70 = (float)NEON_fmadd((fVar51 + fVar69) - *local_e0,fVar65,
                                       fVar57 * ((fVar53 + fVar70) - local_e0[1]));
            fVar69 = fVar70;
            if (fVar70 <= fVar58) {
              fVar69 = fVar58;
            }
            fVar58 = fVar69;
            if (fVar68 <= fVar70) {
              fVar70 = fVar68;
            }
            fVar68 = fVar70;
            uVar38 = uVar38 - 1;
          } while (uVar38 != 0);
          fVar57 = (float)NEON_fmadd(fVar67,fVar67,fVar66 * fVar66);
          fVar66 = 1.0;
          if (fVar68 < -0.001) {
            fVar66 = (float)NEON_fminnm((SQRT(fVar57) + -0.45) / fVar68,0x3f800000);
          }
          fVar67 = fVar66;
          if ((0.001 < fVar58) && (fVar67 = (SQRT(fVar57) + 0.45) / fVar58, fVar66 <= fVar67)) {
            fVar67 = fVar66;
          }
          if (fVar67 == 1.0) goto joined_r0x00b73c90;
          fVar71 = (float)NEON_fmadd(fVar56,0,fVar52 * fVar67);
          fVar53 = (float)NEON_fmadd(fVar52,0,fVar61 * fVar67);
          fVar56 = fVar56 + fVar52 * 0.0;
          fVar52 = fVar52 + fVar61 * 0.0;
          fVar60 = (float)NEON_fmadd(fVar56,fVar62,fVar64 * fVar71);
          fVar59 = (float)NEON_fmadd(fVar56,fVar63,fVar62 * fVar71);
          fVar71 = (float)NEON_fmadd(fVar52,fVar62,fVar64 * fVar53);
          fVar48 = (float)NEON_fmadd(fVar52,fVar63,fVar62 * fVar53);
          goto LAB_00b73968;
        }
        goto joined_r0x00b73c90;
      }
                    /* try { // try from 00b73f2c to 00b73f2f has its CatchHandler @ 00b740ac */
      pfVar19 = (float *)operator_new__(((ulong)(uVar15 * 3) & 0x3fffffff) << 4);
      uVar35 = uVar15 << 1;
                    /* try { // try from 00b73f40 to 00b73f43 has its CatchHandler @ 00b740a8 */
      pfVar20 = (float *)operator_new__((ulong)uVar35 << 2);
      uVar23 = 0;
      iVar32 = (int)(uVar38 >> 3);
      pfVar17 = pfVar14 + 1;
      do {
        sVar8 = *(short *)((long)psVar40 + uVar23);
        uVar10 = (int)uVar23 + 1;
        uVar38 = (uint)(iVar32 << 1) + uVar23;
        pfVar20[uVar23 & 0xffffffff] = pfVar17[-1];
        puVar37 = puVar1 + sVar8;
        uVar24 = (uint)(iVar32 << 2) + uVar23;
        pfVar20[uVar10] = *pfVar17;
        pfVar19[uVar23 & 0xffffffff] = *(float *)puVar37;
        uVar3 = uVar15 * 6 + uVar23;
        fVar71 = *(float *)((long)puVar37 + 4);
        pfVar19[uVar10] = 0.0;
        pfVar19[(int)uVar38 + 1] = 0.0;
        uVar4 = (uint)(iVar32 << 3) + uVar23;
        pfVar19[uVar38 & 0xffffffff] = fVar71;
        uVar38 = uVar15 * 10 + uVar23;
        pfVar19[uVar24 & 0xffffffff] = 1.0;
        pfVar19[uVar3 & 0xffffffff] = 0.0;
        pfVar19[uVar4 & 0xffffffff] = 0.0;
        pfVar19[uVar38 & 0xffffffff] = 0.0;
        uVar23 = uVar23 + 2;
        pfVar19[(int)uVar24 + 1] = 0.0;
        pfVar19[(int)uVar3 + 1] = *(float *)puVar37;
        pfVar19[(int)uVar4 + 1] = *(float *)((long)puVar37 + 4);
        pfVar19[(int)uVar38 + 1] = 1.0;
        pfVar17 = pfVar17 + 2;
      } while (uVar42 * 2 - uVar23 != 0);
                    /* try { // try from 00b74014 to 00b7404b has its CatchHandler @ 00b740b0 */
      MathUtil::decomposeQR(uVar35,6,pfVar19,pfVar19,&local_c8);
      MathUtil::solveQR(uVar35,6,pfVar19,&local_c8,pfVar20,pfVar20);
      fVar71 = *pfVar20;
      fVar60 = pfVar20[1];
      fVar51 = pfVar20[2];
      fVar48 = pfVar20[3];
      fVar59 = pfVar20[4];
      fVar53 = pfVar20[5];
      operator_delete__(pfVar19);
      operator_delete__(pfVar20);
LAB_00b73c94:
      operator_delete(psVar40);
    }
    if (pfVar14 != (float *)0x0) {
      operator_delete(pfVar14);
    }
    BVar21 = *pBVar2;
  }
  lVar22 = *(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98) >> 3;
  uVar38 = lVar22 * -0x5555555555555555;
  if (BVar21 != (Brep)0x0) {
    uVar15 = (uint)uVar38 & 0xffff;
    uVar44 = *(undefined4 *)param_4;
    uVar55 = *(undefined4 *)(param_4 + 4);
    uVar47 = *(undefined4 *)(param_4 + 8);
    uVar35 = param_3 & 0xffff;
    if (param_5 < 0) {
      uVar47 = 0;
      uVar55 = 0;
      uVar44 = 0x3f800000;
    }
    uVar42 = (ulong)(uVar15 + uVar35);
    if (uVar42 <= uVar38) {
      if (uVar42 <= uVar38 && uVar38 - uVar42 != 0) {
        *(ulong *)(this + 0x2fa0) = *(long *)(this + 0x2f98) + uVar42 * 0x18;
      }
    }
    else {
                    /* try { // try from 00b73a10 to 00b73a2f has its CatchHandler @ 00b740b4 */
      std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::__append
                ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)
                 (this + 0x2f98),uVar42 + lVar22 * 0x5555555555555555);
    }
    if (uVar35 != 0) {
      lVar22 = 0;
      lVar26 = (ulong)uVar15 * 0x18;
      do {
        if (param_5 < 0) {
          fVar50 = 0.0;
          fVar45 = 0.0;
        }
        else {
          uVar46 = *(undefined4 *)((long)local_128 + lVar22);
          fVar50 = (float)((undefined4 *)((long)local_128 + lVar22))[1];
          fVar45 = (float)NEON_fmadd(uVar46,fVar71,fVar60 * fVar50);
          fVar50 = (float)NEON_fmadd(uVar46,fVar48,fVar59 * fVar50);
          fVar45 = fVar51 + fVar45;
          fVar50 = fVar53 + fVar50;
        }
        lVar22 = lVar22 + 8;
        puVar43 = (undefined4 *)(*(long *)(this + 0x2f98) + lVar26);
        lVar26 = lVar26 + 0x18;
        *puVar43 = uVar44;
        puVar43[1] = uVar55;
        puVar43[2] = uVar47;
        *(ulong *)(puVar43 + 3) = CONCAT44(fVar50,fVar45);
        *(undefined2 *)(puVar43 + 5) = 0;
      } while ((ulong)uVar35 * 8 - lVar22 != 0);
    }
  }
  lVar22 = *(long *)(this + 0x2f50);
  lVar26 = *(long *)(this + 0x2f58) - lVar22 >> 2;
  uVar23 = lVar26 * -0x5555555555555555;
  uVar15 = (uint)uVar23 & 0xffff;
  uVar42 = (ulong)(uVar15 + param_3);
  if (uVar42 <= uVar23) {
    if (uVar42 <= uVar23 && uVar23 - uVar42 != 0) {
      *(ulong *)(this + 0x2f58) = lVar22 + uVar42 * 0xc;
    }
  }
  else {
                    /* try { // try from 00b73b04 to 00b73b0b has its CatchHandler @ 00b740c0 */
    std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::__append
              ((vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *)(this + 0x2f50),
               uVar42 + lVar26 * 0x5555555555555555);
    lVar22 = *(long *)(this + 0x2f50);
  }
  puVar13 = local_110;
  if (param_3 != 0) {
    lVar26 = *local_180;
    uVar42 = uVar41;
    puVar29 = __s_00;
    do {
      puVar33 = (ushort *)(lVar22 + (ulong)uVar15 * 0xc);
      uVar42 = uVar42 - 1;
      lVar28 = lVar26 + (ulong)*puVar29 * 0x10;
      uVar6 = *(ushort *)(lVar28 + 0xc);
      *puVar33 = *puVar29;
      *(undefined4 *)(puVar33 + 2) = 0xffffffff;
      puVar33[4] = 0xffff;
      puVar33[1] = uVar6;
      *(short *)(lVar28 + 0xc) = (short)uVar15;
      uVar15 = uVar15 + 1;
      puVar29 = puVar29 + 1;
    } while (uVar42 != 0);
  }
  uVar42 = (ulong)((long)local_108 - (long)local_110) >> 1 & 0xffffffff;
  uVar35 = (uint)((ulong)((long)local_108 - (long)local_110) >> 1);
  uVar15 = (uint)(uVar42 / 3);
  if (uVar35 < 3) {
    puVar43 = (undefined4 *)0x0;
  }
  else {
    uVar23 = (uVar42 / 3) * 0x14;
                    /* try { // try from 00b73bc4 to 00b73bcb has its CatchHandler @ 00b740bc */
    puVar43 = (undefined4 *)operator_new(uVar23);
    memset(puVar43,0,((uVar23 - 0x14) / 0x14) * 0x14 + 0x14);
    psVar40 = local_f8;
    uVar12 = *puVar13;
    local_e0 = (float *)CONCAT26(local_e0._6_2_,uVar12);
    pfVar14 = local_e0;
    uVar6 = __s_00[*(ushort *)((long)puVar13 + 4)];
    if ((uint)(uVar42 / 3) < 2) {
      uVar15 = 1;
    }
    local_f8._0_4_ = CONCAT22(__s_00[*(ushort *)((long)puVar13 + 2)],__s_00[*(ushort *)puVar13]);
    BVar21 = *pBVar2;
    *(short *)(puVar43 + 3) = param_5;
    local_f8._6_2_ = SUB82(psVar40,6);
    local_f8._0_6_ = CONCAT24(uVar6,(undefined4)local_f8);
    puVar43[4] = 0;
    *(ushort *)(puVar43 + 1) = uVar6;
    *puVar43 = (undefined4)local_f8;
    if (BVar21 == (Brep)0x0) {
      *(undefined2 *)((long)puVar43 + 10) = 0xffff;
      *(undefined4 *)((long)puVar43 + 6) = 0xffffffff;
    }
    else {
      local_e0._0_4_ = (undefined4)uVar12;
      local_e0._4_2_ = (undefined2)((uint6)uVar12 >> 0x20);
      *(undefined4 *)((long)puVar43 + 6) = (undefined4)local_e0;
      *(undefined2 *)((long)puVar43 + 10) = local_e0._4_2_;
    }
    local_e0 = pfVar14;
    if (5 < uVar35) {
      puVar27 = puVar43 + 9;
      lVar22 = (ulong)uVar15 - 1;
      puVar29 = (ushort *)((long)local_110 + 10);
      do {
        psVar40 = local_f8;
        uVar5 = __s_00[puVar29[-2]];
        uVar47 = *(undefined4 *)(puVar29 + -2);
        uVar7 = __s_00[puVar29[-1]];
        uVar6 = *puVar29;
        *(short *)(puVar27 + -1) = param_5;
        *puVar27 = 0;
        local_f8._0_4_ = CONCAT22(uVar7,uVar5);
        local_f8._6_2_ = SUB82(psVar40,6);
        local_f8._0_6_ = CONCAT24(__s_00[uVar6],(undefined4)local_f8);
        *(ushort *)(puVar27 + -3) = __s_00[uVar6];
        puVar27[-4] = (undefined4)local_f8;
        if (BVar21 == (Brep)0x0) {
          *(undefined2 *)((long)puVar27 + -6) = 0xffff;
          *(undefined4 *)((long)puVar27 + -10) = 0xffffffff;
        }
        else {
          *(undefined4 *)((long)puVar27 + -10) = uVar47;
          *(ushort *)((long)puVar27 + -6) = uVar6;
        }
        puVar27 = puVar27 + 5;
        lVar22 = lVar22 + -1;
        puVar29 = puVar29 + 3;
      } while (lVar22 != 0);
    }
  }
                    /* try { // try from 00b73cc4 to 00b73cdb has its CatchHandler @ 00b740c8 */
  uVar15 = addTriangles(this,(uint)(uVar42 / 3),(BrepTriangle *)puVar43,(ushort)uVar38,
                        (ushort)param_3);
  if ((param_3 != 0) && (uVar38 = uVar41, uVar35 = param_2, ((uVar15 ^ 1) & 1) == 0)) {
    do {
      swapEdge(this,*(uint *)(*(long *)param_1 + (ulong)uVar35 * 4));
      uVar38 = uVar38 - 1;
      uVar35 = uVar35 + 1;
    } while (uVar38 != 0);
    if (param_3 != 0) {
      uVar38 = 0;
      lVar22 = *(long *)param_1;
      lVar26 = *local_130;
      lVar28 = *(long *)(this + 0x2f50);
      lVar30 = *local_180;
      do {
        uVar6 = *(ushort *)
                 (lVar30 + (ulong)*(ushort *)
                                   (lVar28 + (ulong)*(ushort *)
                                                     (lVar26 + (ulong)*(uint *)(lVar22 + (ulong)((
                                                  int)uVar38 + param_2) * 4) * 8) * 0xc) * 0x10 +
                 0xc);
        lVar31 = lVar28 + (ulong)uVar6 * 0xc;
        iVar32 = *(int *)(lVar31 + 4);
        uVar5 = *(ushort *)(lVar31 + 2);
        uVar35 = iVar32 + 2;
        if ((iVar32 - 1U & 3) != 0) {
          uVar35 = iVar32 - 1U;
        }
        iVar34 = *(int *)(lVar26 + (ulong)uVar35 * 8 + 4);
        do {
          uVar35 = iVar34 + 2;
          if ((iVar34 - 1U & 3) != 0) {
            uVar35 = iVar34 - 1U;
          }
          puVar29 = (ushort *)(lVar26 + (ulong)uVar35 * 8);
          iVar34 = *(int *)(puVar29 + 2);
          *puVar29 = uVar6;
        } while (iVar34 != iVar32);
        iVar32 = *(int *)(lVar28 + (ulong)uVar5 * 0xc + 4);
        uVar35 = iVar32 + 2;
        if ((iVar32 - 1U & 3) != 0) {
          uVar35 = iVar32 - 1U;
        }
        iVar34 = *(int *)(lVar26 + (ulong)uVar35 * 8 + 4);
        do {
          uVar35 = iVar34 + 2;
          if ((iVar34 - 1U & 3) != 0) {
            uVar35 = iVar34 - 1U;
          }
          puVar29 = (ushort *)(lVar26 + (ulong)uVar35 * 8);
          iVar34 = *(int *)(puVar29 + 2);
          *puVar29 = uVar5;
        } while (iVar34 != iVar32);
        uVar38 = uVar38 + 1;
      } while (uVar38 != uVar41);
    }
  }
  if (puVar43 != (undefined4 *)0x0) {
    operator_delete(puVar43);
  }
  if (local_128 != (undefined8 *)0x0) {
    local_120 = local_128;
    operator_delete(local_128);
  }
LAB_00b73e24:
  if (local_110 != (undefined6 *)0x0) {
    local_108 = local_110;
    operator_delete(local_110);
  }
  if (__s_00 != (ushort *)0x0) {
    operator_delete(__s_00);
  }
  if (__s != (undefined8 *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar11 + 0x28) == local_b0) {
    return uVar15 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


