// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginApply
// Entry Point: 0089fe0c
// Size: 6716 bytes
// Signature: undefined __thiscall beginApply(TerrainDeformation * this, bool param_1, _func_void_ErrorCode_float_char_ptr_void_ptr * param_2, void * param_3)


/* TerrainDeformation::beginApply(bool, void (*)(TerrainDeformation::ErrorCode, float, char const*,
   void*), void*) */

void __thiscall
TerrainDeformation::beginApply
          (TerrainDeformation *this,bool param_1,
          _func_void_ErrorCode_float_char_ptr_void_ptr *param_2,void *param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  void *pvVar17;
  UpdateManager *this_00;
  ErrorCode EVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  char *pcVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  float *pfVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined4 *puVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  undefined4 uVar57;
  int iVar58;
  ParallelogramHelper aPStack_110 [16];
  ChunkedBitSquare *local_100;
  long *local_f8;
  int local_ec;
  int local_e4;
  uint local_c8;
  uint local_c4;
  uint local_b8;
  uint local_b4;
  long local_b0;
  
  lVar12 = tpidr_el0;
  local_b0 = *(long *)(lVar12 + 0x28);
  if (this[0x118] != (TerrainDeformation)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0))
    {
                    /* try { // try from 008a180c to 008a1817 has its CatchHandler @ 008a1848 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Terrain sculpt object is still working");
    goto LAB_008a17bc;
  }
  iVar15 = *(int *)(this + 0x2c);
  *(_func_void_ErrorCode_float_char_ptr_void_ptr **)(this + 0xd8) = param_2;
  *(void **)(this + 0xe0) = param_3;
  pfVar34 = *(float **)(this + 0x60);
  this[0xd4] = (TerrainDeformation)(!param_1 && iVar15 != 4);
  this[0xd5] = (TerrainDeformation)(!param_1 && iVar15 - 4U < 0xfffffffd);
  if (pfVar34 == *(float **)(this + 0x68)) {
    piVar5 = *(int **)(this + 0x78);
    if ((piVar5 == *(int **)(this + 0x80)) || (*(int *)(this + 0x50) == 0)) goto LAB_008a0050;
    if (*piVar5 == 1) {
      fVar50 = (float)piVar5[3] * 0.5;
LAB_008a0068:
      fVar43 = (float)piVar5[1] - fVar50;
      fVar45 = (float)piVar5[2] + fVar50;
      fVar46 = (float)piVar5[1] + fVar50;
      fVar50 = (float)piVar5[2] - fVar50;
    }
    else {
      if (*piVar5 == 0) {
        fVar50 = (float)piVar5[3];
        goto LAB_008a0068;
      }
      fVar43 = (float)piVar5[1];
      fVar45 = (float)piVar5[2];
      fVar46 = fVar43;
      fVar50 = fVar45;
    }
    iVar58 = (int)(float)(int)fVar46;
    iVar40 = (int)(float)(int)fVar43;
    iVar35 = (int)(float)(int)fVar50;
    iVar37 = (int)fVar45;
LAB_008a00ac:
    piVar5 = *(int **)(this + 0x78);
    while (iVar39 = iVar37, piVar5 != *(int **)(this + 0x80)) {
      if (*piVar5 == 1) {
        fVar50 = (float)piVar5[3] * 0.5;
LAB_008a00c8:
        fVar46 = (float)piVar5[1] - fVar50;
        fVar43 = (float)piVar5[2] + fVar50;
        fVar45 = (float)piVar5[1] + fVar50;
        fVar50 = (float)piVar5[2] - fVar50;
      }
      else {
        if (*piVar5 == 0) {
          fVar50 = (float)piVar5[3];
          goto LAB_008a00c8;
        }
        fVar46 = (float)piVar5[1];
        fVar43 = (float)piVar5[2];
        fVar45 = fVar46;
        fVar50 = fVar43;
      }
      iVar42 = (int)fVar46;
      if (iVar40 <= (int)fVar46) {
        iVar42 = iVar40;
      }
      iVar40 = (int)fVar45;
      if ((int)fVar45 <= iVar58) {
        iVar40 = iVar58;
      }
      iVar37 = (int)fVar50;
      if (iVar35 <= (int)fVar50) {
        iVar37 = iVar35;
      }
      piVar5 = piVar5 + 8;
      iVar58 = iVar40;
      iVar35 = iVar37;
      iVar37 = (int)fVar43;
      iVar40 = iVar42;
      if ((int)fVar43 <= iVar39) {
        iVar37 = iVar39;
      }
    }
    if (iVar15 == 0) {
      iVar15 = (int)*(float *)(this + 0x98);
      iVar40 = iVar40 - iVar15;
      iVar58 = iVar58 + iVar15;
      iVar35 = iVar35 - iVar15;
      iVar39 = iVar39 + iVar15;
    }
    lVar32 = *(long *)(this + 0x38);
    uVar16 = BaseTerrain::getLodTextureSize();
    lVar33 = *(long *)(this + 0x38);
    fVar50 = (float)(uVar16 & 0xffffffff) / (float)(ulong)(*(int *)(lVar32 + 0x90) - 1);
    fVar46 = (float)NEON_fmadd((float)iVar40,fVar50,0xbf000000);
    fVar50 = (float)NEON_fmadd((float)iVar35,fVar50,0xbf000000);
    uVar16 = BaseTerrain::getLodTextureSize();
    uVar21 = (uint)fVar46;
    uVar22 = (uint)fVar50;
    iVar37 = *(int *)(this + 0x50);
    iVar15 = 0;
    if (iVar37 != 0) {
      iVar15 = (int)uVar21 / iVar37;
    }
    fVar50 = (float)(uVar16 & 0xffffffff) / (float)(ulong)(*(int *)(lVar33 + 0x90) - 1);
    if (iVar40 <= iVar15) {
      iVar15 = iVar40;
    }
    iVar40 = 0;
    if (iVar37 != 0) {
      iVar40 = (int)uVar22 / iVar37;
    }
    fVar46 = (float)NEON_fmadd((float)iVar58,fVar50,0xbf000000);
    fVar50 = (float)NEON_fmadd((float)iVar39,fVar50,0xbf000000);
    iVar42 = (int)fVar46;
    iVar41 = (int)fVar50;
    iVar36 = 0;
    if (iVar37 != 0) {
      iVar36 = iVar42 / iVar37;
    }
    iVar9 = 0;
    if (iVar37 != 0) {
      iVar9 = iVar41 / iVar37;
    }
    if (iVar58 < iVar36 + 1) {
      iVar58 = iVar36 + 1;
    }
    if (iVar35 <= iVar40) {
      iVar40 = iVar35;
    }
    iVar35 = *(int *)(this + 0x40) + -1;
    if (iVar39 < iVar9 + 1) {
      iVar39 = iVar9 + 1;
    }
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    if (iVar40 < 2) {
      iVar40 = 1;
    }
    iVar37 = iVar35;
    if (iVar58 + 1 < iVar35) {
      iVar37 = iVar58 + 1;
    }
    if (iVar39 + 1 < iVar35) {
      iVar35 = iVar39 + 1;
    }
    iVar58 = (iVar37 - iVar15) + 2;
    uVar31 = (iVar35 - iVar40) + 2;
    *(int *)(this + 0xf8) = iVar58;
    *(uint *)(this + 0xfc) = uVar31;
    *(int *)(this + 0xe8) = iVar15 + -1;
    *(int *)(this + 0xec) = iVar40 + -1;
    pvVar17 = operator_new__((ulong)(iVar58 * uVar31) * 0x38);
    *(void **)(this + 0x100) = pvVar17;
    *(undefined4 *)(this + 0x128) = 0;
    if (((byte)this[0x130] & 1) == 0) {
      *(undefined2 *)(this + 0x130) = 0;
    }
    else {
      **(undefined **)(this + 0x140) = 0;
      uVar31 = *(uint *)(this + 0xfc);
      *(undefined8 *)(this + 0x138) = 0;
    }
    if (uVar31 != 0) {
      uVar20 = 0;
      uVar19 = *(uint *)(this + 0xf8);
      do {
        if (uVar19 != 0) {
          uVar29 = uVar20;
          if (uVar31 <= uVar20) {
            uVar29 = uVar31 - 1;
          }
          uVar31 = 0;
          if (-1 < (int)uVar20) {
            uVar31 = uVar29;
          }
          fVar50 = *(float *)(this + 0xe8);
          pfVar34 = (float *)(*(long *)(this + 0x100) + (ulong)(uVar31 * uVar19) * 0x38);
          pfVar34[2] = fVar50;
          iVar15 = *(int *)(this + 0xec);
          pfVar34[3] = (float)(iVar15 + uVar20);
          fVar50 = (float)BaseTerrain::getScaledHeightAtPoint
                                    (*(BaseTerrain **)(this + 0x38),(uint)fVar50,iVar15 + uVar20);
          pfVar34[7] = 0.0;
          *(undefined *)(pfVar34 + 4) = 1;
          *pfVar34 = fVar50;
          pfVar34[1] = fVar50;
          pfVar34[5] = 0.0;
          *(undefined *)(pfVar34 + 6) = 0;
          uVar55 = (undefined4)*(undefined8 *)(this + 0x9c);
          *(ulong *)(pfVar34 + 10) = CONCAT44(uVar55,uVar55);
          *(ulong *)(pfVar34 + 8) = CONCAT44(uVar55,uVar55);
          fVar46 = *(float *)(this + 0xa0);
          pfVar34[0xd] = fVar46;
          pfVar34[0xc] = fVar46;
          uVar19 = *(uint *)(this + 0xf8);
          fVar46 = *(float *)(this + 0x148);
          if (fVar50 < *(float *)(this + 0x148)) {
            fVar46 = fVar50;
          }
          if (uVar20 != 0) {
            fVar50 = fVar46;
          }
          *(float *)(this + 0x148) = fVar50;
          if (1 < uVar19) {
            uVar31 = 1;
            do {
              lVar32 = *(long *)(this + 0x100);
              uVar29 = uVar20;
              if (*(uint *)(this + 0xfc) <= uVar20) {
                uVar29 = *(uint *)(this + 0xfc) - 1;
              }
              uVar26 = 0;
              if (-1 < (int)uVar20) {
                uVar26 = uVar29;
              }
              uVar16 = (ulong)((uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU)) + uVar26 * uVar19);
              iVar15 = *(int *)(this + 0xe8);
              pfVar34 = (float *)(lVar32 + uVar16 * 0x38);
              pfVar34[2] = (float)(uVar31 + iVar15);
              iVar58 = *(int *)(this + 0xec);
              pfVar34[3] = (float)(iVar58 + uVar20);
              fVar50 = (float)BaseTerrain::getScaledHeightAtPoint
                                        (*(BaseTerrain **)(this + 0x38),uVar31 + iVar15,
                                         iVar58 + uVar20);
              pfVar34[7] = 0.0;
              *pfVar34 = fVar50;
              pfVar34[1] = fVar50;
              bVar14 = true;
              if ((uVar31 != *(int *)(this + 0xf8) - 1U) && (uVar20 != 0)) {
                bVar14 = uVar20 == *(int *)(this + 0xfc) - 1U;
              }
              lVar32 = lVar32 + uVar16 * 0x38;
              uVar31 = uVar31 + 1;
              *(bool *)(lVar32 + 0x10) = bVar14;
              *(undefined4 *)(lVar32 + 0x14) = 0;
              *(undefined *)(lVar32 + 0x18) = 0;
              uVar55 = (undefined4)*(undefined8 *)(this + 0x9c);
              *(ulong *)(lVar32 + 0x28) = CONCAT44(uVar55,uVar55);
              *(ulong *)(lVar32 + 0x20) = CONCAT44(uVar55,uVar55);
              uVar55 = *(undefined4 *)(this + 0xa0);
              *(undefined4 *)(lVar32 + 0x34) = uVar55;
              *(undefined4 *)(lVar32 + 0x30) = uVar55;
              uVar19 = *(uint *)(this + 0xf8);
              fVar46 = *(float *)(this + 0x148);
              if (fVar50 < *(float *)(this + 0x148)) {
                fVar46 = fVar50;
              }
              *(float *)(this + 0x148) = fVar46;
            } while (uVar31 < uVar19);
          }
          uVar31 = *(uint *)(this + 0xfc);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar31);
    }
    iVar15 = *(int *)(this + 0x4c) + -1;
    uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
    if (iVar15 <= iVar42) {
      iVar42 = iVar15;
    }
    uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
    if (iVar15 <= iVar41) {
      iVar41 = iVar15;
    }
    uVar20 = (iVar42 - uVar21) + 1;
    uVar19 = (iVar41 - uVar22) + 1;
    *(uint *)(this + 0xf0) = uVar21;
    *(uint *)(this + 0xf4) = uVar22;
    *(uint *)(this + 0x108) = uVar20;
    *(uint *)(this + 0x10c) = uVar19;
    pvVar17 = operator_new__((ulong)(uVar20 * uVar19) << 3);
    *(void **)(this + 0x110) = pvVar17;
    if (uVar19 != 0) {
      uVar21 = 0;
      while( true ) {
        if (uVar20 != 0) {
          uVar22 = 0;
          do {
            uVar26 = *(uint *)(this + 0x108);
            uVar29 = uVar22;
            if (uVar26 <= uVar22) {
              uVar29 = uVar26 - 1;
            }
            uVar27 = 0;
            if (-1 < (int)uVar22) {
              uVar27 = uVar29;
            }
            uVar22 = uVar22 + 1;
            uVar29 = uVar21;
            if (*(uint *)(this + 0x10c) <= uVar21) {
              uVar29 = *(uint *)(this + 0x10c) - 1;
            }
            uVar28 = 0;
            if (-1 < (int)uVar21) {
              uVar28 = uVar29;
            }
            *(undefined8 *)((long)pvVar17 + (ulong)(uVar27 + uVar28 * uVar26) * 8) = 0;
          } while (uVar20 != uVar22);
        }
        uVar21 = uVar21 + 1;
        if (uVar21 == uVar19) break;
        pvVar17 = *(void **)(this + 0x110);
      }
    }
    uVar21 = *(uint *)(this + 0x2c);
    if ((uVar21 < 2) && (uVar31 != 0)) {
      uVar22 = *(uint *)(this + 0xf8);
      uVar20 = 0;
      do {
        uVar19 = uVar20 + 1;
        if (uVar22 != 0) {
          lVar32 = *(long *)(this + 0x100);
          uVar26 = uVar20 - 1;
          fVar50 = *(float *)(this + 0x44);
          uVar29 = 0;
          do {
            while( true ) {
              uVar28 = *(uint *)(this + 0xfc);
              uVar11 = uVar28 - 1;
              uVar27 = uVar20;
              if (uVar28 <= uVar20) {
                uVar27 = uVar11;
              }
              uVar2 = 0;
              if (-1 < (int)uVar20) {
                uVar2 = uVar27;
              }
              iVar15 = uVar2 * uVar22;
              uVar27 = uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU);
              if (*(char *)(lVar32 + (ulong)(iVar15 + uVar27) * 0x38 + 0x10) == '\0') break;
              uVar29 = uVar29 + 1;
              if (uVar29 == uVar22) goto LAB_008a052c;
            }
            uVar10 = uVar29 - 1;
            uVar2 = uVar29 + 1;
            pfVar34 = (float *)(lVar32 + (ulong)(iVar15 + uVar27) * 0x38);
            uVar4 = uVar10;
            if (uVar22 <= uVar10) {
              uVar4 = uVar22 - 1;
            }
            uVar3 = 0;
            if (-1 < (int)uVar10) {
              uVar3 = uVar4;
            }
            uVar4 = uVar22 - 1;
            if (uVar2 < uVar22) {
              uVar4 = uVar29 + 1;
            }
            fVar46 = *pfVar34;
            uVar29 = 0;
            if (-1 < (int)uVar2) {
              uVar29 = uVar4;
            }
            uVar4 = uVar26;
            if (uVar28 <= uVar26) {
              uVar4 = uVar11;
            }
            fVar45 = fVar46 - *(float *)(lVar32 + (ulong)(iVar15 + uVar3) * 0x38);
            uVar10 = 0;
            if (-1 < (int)uVar26) {
              uVar10 = uVar4;
            }
            uVar4 = uVar19;
            if (uVar28 <= uVar19) {
              uVar4 = uVar11;
            }
            fVar48 = *(float *)(lVar32 + (ulong)(iVar15 + uVar29) * 0x38) - fVar46;
            fVar43 = (float)NEON_fmadd(fVar50,fVar50,fVar45 * fVar45);
            uVar29 = 0;
            if (-1 < (int)uVar19) {
              uVar29 = uVar4;
            }
            fVar51 = (float)NEON_fmadd(fVar50,fVar50,fVar48 * fVar48);
            fVar54 = (float)NEON_fmadd(fVar50,fVar50,fVar45 * fVar48);
            fVar56 = fVar46 - *(float *)(lVar32 + (ulong)(uVar27 + uVar10 * uVar22) * 0x38);
            fVar46 = *(float *)(lVar32 + (ulong)(uVar27 + uVar29 * uVar22) * 0x38) - fVar46;
            fVar53 = fVar45 / fVar50;
            if (fVar45 / fVar50 <= pfVar34[8]) {
              fVar53 = pfVar34[8];
            }
            fVar45 = fVar48 / fVar50;
            if (fVar48 / fVar50 <= pfVar34[9]) {
              fVar45 = pfVar34[9];
            }
            pfVar34[8] = fVar53;
            pfVar34[9] = fVar45;
            fVar45 = fVar56 / fVar50;
            if (fVar56 / fVar50 <= pfVar34[10]) {
              fVar45 = pfVar34[10];
            }
            fVar48 = fVar46 / fVar50;
            if (fVar46 / fVar50 <= pfVar34[0xb]) {
              fVar48 = pfVar34[0xb];
            }
            pfVar34[10] = fVar45;
            pfVar34[0xb] = fVar48;
            fVar45 = acosf((1.0 / SQRT(fVar43)) * fVar54 * (1.0 / SQRT(fVar51)));
            fVar43 = (float)NEON_fmadd(fVar50,fVar50,fVar56 * fVar56);
            fVar48 = (float)NEON_fmadd(fVar50,fVar50,fVar46 * fVar46);
            fVar46 = (float)NEON_fmadd(fVar50,fVar50,fVar56 * fVar46);
            if (fVar45 <= pfVar34[0xc]) {
              fVar45 = pfVar34[0xc];
            }
            pfVar34[0xc] = fVar45;
            fVar46 = acosf((1.0 / SQRT(fVar43)) * fVar46 * (1.0 / SQRT(fVar48)));
            if (fVar46 <= pfVar34[0xd]) {
              fVar46 = pfVar34[0xd];
            }
            pfVar34[0xd] = fVar46;
            uVar29 = uVar2;
          } while (uVar2 != uVar22);
        }
LAB_008a052c:
        uVar20 = uVar19;
      } while (uVar19 != uVar31);
    }
    if (uVar21 - 1 < 3) {
      piVar6 = *(int **)(this + 0x80);
      for (piVar5 = *(int **)(this + 0x78); piVar5 != piVar6; piVar5 = piVar5 + 8) {
        fVar50 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xe8));
        fVar46 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xec));
        fVar50 = (float)piVar5[1] - fVar50;
        fVar46 = (float)piVar5[2] - fVar46;
        if (*piVar5 == 1) {
          uVar31 = *(uint *)(this + 0xf8);
          uVar20 = *(uint *)(this + 0xfc);
          fVar45 = (float)piVar5[3] * 0.5;
          uVar22 = (uint)(fVar50 - fVar45);
          uVar19 = (uint)(fVar50 + fVar45);
          uVar29 = (uint)(fVar46 + fVar45);
          uVar21 = uVar19;
          if ((int)uVar31 <= (int)uVar19) {
            uVar21 = uVar31;
          }
          uVar26 = (uint)(fVar46 - fVar45);
          if ((int)uVar19 < 1 || (int)uVar31 <= (int)uVar22) {
            uVar21 = 0;
          }
          if (((int)uVar19 < 1 || (int)uVar31 <= (int)uVar22) || (int)uVar22 < 1) {
            uVar22 = 0;
          }
          uVar31 = uVar29;
          if ((int)uVar20 <= (int)uVar29) {
            uVar31 = uVar20;
          }
          if ((int)uVar29 < 1 || (int)uVar20 <= (int)uVar26) {
            uVar31 = 0;
          }
          if (((int)uVar29 < 1 || (int)uVar20 <= (int)uVar26) || (int)uVar26 < 1) {
            uVar26 = 0;
          }
          if ((int)uVar26 < (int)uVar31) {
            do {
              if ((int)uVar22 < (int)uVar21) {
                uVar20 = uVar22;
                do {
                  fVar48 = (float)piVar5[6];
                  fVar43 = ABS((float)uVar26 - fVar46);
                  if (ABS((float)uVar26 - fVar46) <= ABS((float)uVar20 - fVar50)) {
                    fVar43 = ABS((float)uVar20 - fVar50);
                  }
                  if (((TerrainUtil::flatTopGaussianFilter(double,double)::minResult & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(&TerrainUtil::
                                                    flatTopGaussianFilter(double,double)::minResult)
                     , iVar15 != 0)) {
                    TerrainUtil::flatTopGaussianFilter(double,double)::minResult =
                         0.004431848411938007;
                    __cxa_guard_release(&TerrainUtil::flatTopGaussianFilter(double,double)::
                                         minResult);
                  }
                  dVar49 = (double)fVar48 * 3.0;
                  dVar47 = (double)(fVar43 / fVar45) * 3.0;
                  dVar52 = ABS(dVar47);
                  if (dVar52 <= dVar49) {
                    dVar44 = 0.3989422804014326 -
                             TerrainUtil::flatTopGaussianFilter(double,double)::minResult;
                  }
                  else {
                    dVar44 = 0.0;
                    if (dVar52 < 3.0) {
                      dVar47 = ((dVar47 - dVar49) / (3.0 - dVar49)) * 3.0;
                      dVar47 = exp(dVar47 * dVar47 * -0.5);
                      dVar44 = dVar47 / 2.506628274631001 -
                               TerrainUtil::flatTopGaussianFilter(double,double)::minResult;
                    }
                  }
                  uVar29 = *(uint *)(this + 0xf8);
                  uVar19 = uVar20;
                  if (uVar29 <= uVar20) {
                    uVar19 = uVar29 - 1;
                  }
                  uVar27 = 0;
                  if (-1 < (int)uVar20) {
                    uVar27 = uVar19;
                  }
                  uVar19 = uVar26;
                  if (*(uint *)(this + 0xfc) <= uVar26) {
                    uVar19 = *(uint *)(this + 0xfc) - 1;
                  }
                  uVar28 = 0;
                  if (-1 < (int)uVar26) {
                    uVar28 = uVar19;
                  }
                  uVar20 = uVar20 + 1;
                  *(float *)(*(long *)(this + 0x100) + (ulong)(uVar27 + uVar28 * uVar29) * 0x38 +
                            0x14) = (float)piVar5[7] * (float)dVar44;
                } while (uVar21 != uVar20);
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar31);
          }
        }
        else if (*piVar5 == 0) {
          fVar45 = (float)piVar5[3];
          uVar31 = *(uint *)(this + 0xf8);
          uVar20 = *(uint *)(this + 0xfc);
          uVar22 = (uint)(fVar50 - fVar45);
          uVar19 = (uint)(fVar50 + fVar45);
          uVar29 = (uint)(fVar46 + fVar45);
          uVar21 = uVar19;
          if ((int)uVar31 <= (int)uVar19) {
            uVar21 = uVar31;
          }
          uVar26 = (uint)(fVar46 - fVar45);
          if ((int)uVar19 < 1 || (int)uVar31 <= (int)uVar22) {
            uVar21 = 0;
          }
          if (((int)uVar19 < 1 || (int)uVar31 <= (int)uVar22) || (int)uVar22 < 1) {
            uVar22 = 0;
          }
          uVar31 = uVar29;
          if ((int)uVar20 <= (int)uVar29) {
            uVar31 = uVar20;
          }
          if ((int)uVar29 < 1 || (int)uVar20 <= (int)uVar26) {
            uVar31 = 0;
          }
          if (((int)uVar29 < 1 || (int)uVar20 <= (int)uVar26) || (int)uVar26 < 1) {
            uVar26 = 0;
          }
          if ((int)uVar26 < (int)uVar31) {
            do {
              if ((int)uVar22 < (int)uVar21) {
                uVar20 = uVar22;
                do {
                  fVar43 = (float)NEON_fmadd((float)uVar20 - fVar50,(float)uVar20 - fVar50,
                                             ((float)uVar26 - fVar46) * ((float)uVar26 - fVar46));
                  if (fVar43 <= fVar45 * fVar45) {
                    fVar48 = (float)piVar5[6];
                    if (((TerrainUtil::flatTopGaussianFilter(double,double)::minResult & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(&TerrainUtil::
                                                      flatTopGaussianFilter(double,double)::
                                                      minResult), iVar15 != 0)) {
                      TerrainUtil::flatTopGaussianFilter(double,double)::minResult =
                           0.004431848411938007;
                      __cxa_guard_release(&TerrainUtil::flatTopGaussianFilter(double,double)::
                                           minResult);
                    }
                    dVar49 = (double)fVar48 * 3.0;
                    dVar47 = (double)(SQRT(fVar43) / fVar45) * 3.0;
                    dVar52 = ABS(dVar47);
                    if (dVar52 <= dVar49) {
                      dVar44 = 0.3989422804014326 -
                               TerrainUtil::flatTopGaussianFilter(double,double)::minResult;
                    }
                    else {
                      dVar44 = 0.0;
                      if (dVar52 < 3.0) {
                        dVar47 = ((dVar47 - dVar49) / (3.0 - dVar49)) * 3.0;
                        dVar47 = exp(dVar47 * dVar47 * -0.5);
                        dVar44 = dVar47 / 2.506628274631001 -
                                 TerrainUtil::flatTopGaussianFilter(double,double)::minResult;
                      }
                    }
                    uVar29 = *(uint *)(this + 0xf8);
                    uVar19 = uVar20;
                    if (uVar29 <= uVar20) {
                      uVar19 = uVar29 - 1;
                    }
                    uVar27 = 0;
                    if (-1 < (int)uVar20) {
                      uVar27 = uVar19;
                    }
                    uVar19 = uVar26;
                    if (*(uint *)(this + 0xfc) <= uVar26) {
                      uVar19 = *(uint *)(this + 0xfc) - 1;
                    }
                    uVar28 = 0;
                    if (-1 < (int)uVar26) {
                      uVar28 = uVar19;
                    }
                    *(float *)(*(long *)(this + 0x100) + (ulong)(uVar27 + uVar28 * uVar29) * 0x38 +
                              0x14) = (float)piVar5[7] * (float)dVar44;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar21 != uVar20);
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar31);
          }
        }
      }
    }
    else if (uVar21 == 0) {
      pfVar7 = *(float **)(this + 0x68);
      for (pfVar34 = *(float **)(this + 0x60); pfVar34 != pfVar7; pfVar34 = pfVar34 + 0x12) {
        fVar50 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xe8));
        fVar46 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xec));
        ParallelogramHelper::ParallelogramHelper
                  (aPStack_110,*pfVar34 - fVar50,pfVar34[2] - fVar46,pfVar34[3],pfVar34[5],
                   pfVar34[6],pfVar34[8],*(uint *)(this + 0xf8),*(uint *)(this + 0xfc),3);
        if (local_c8 < local_c4) {
          pfVar1 = pfVar34 + 9;
          uVar21 = local_c8;
          do {
            ParallelogramHelper::startXIteration(aPStack_110,uVar21);
            uVar22 = uVar21 + 1;
            if (local_b8 < local_b4) {
              fVar50 = (float)(ulong)uVar21 + 0.5;
              uVar31 = local_b8;
              do {
                uVar19 = *(uint *)(this + 0xf8);
                uVar20 = uVar31;
                if (uVar19 <= uVar31) {
                  uVar20 = uVar19 - 1;
                }
                uVar29 = 0;
                if (-1 < (int)uVar31) {
                  uVar29 = uVar20;
                }
                uVar20 = uVar21;
                if (*(uint *)(this + 0xfc) <= uVar21) {
                  uVar20 = *(uint *)(this + 0xfc) - 1;
                }
                uVar26 = 0;
                if (-1 < (int)uVar21) {
                  uVar26 = uVar20;
                }
                puVar38 = (undefined4 *)
                          (*(long *)(this + 0x100) + (ulong)(uVar29 + uVar26 * uVar19) * 0x38);
                fVar46 = (float)NEON_ucvtf(puVar38[2]);
                fVar45 = (float)NEON_ucvtf(puVar38[3]);
                uVar55 = Plane::getYatXZ((Plane *)pfVar1,fVar46,fVar45);
                *(undefined *)(puVar38 + 4) = 1;
                *(undefined *)(puVar38 + 6) = 1;
                *puVar38 = uVar55;
                uVar20 = uVar31 + 1;
                uVar29 = *(uint *)(this + 0xf8);
                uVar19 = uVar21;
                if (*(uint *)(this + 0xfc) <= uVar21) {
                  uVar19 = *(uint *)(this + 0xfc) - 1;
                }
                iVar15 = uVar29 - 1;
                uVar26 = 0;
                if (-1 < (int)uVar21) {
                  uVar26 = uVar19;
                }
                if (uVar20 < uVar29) {
                  iVar15 = uVar31 + 1;
                }
                iVar58 = 0;
                if (-1 < (int)uVar20) {
                  iVar58 = iVar15;
                }
                puVar38 = (undefined4 *)
                          (*(long *)(this + 0x100) + (ulong)(iVar58 + uVar26 * uVar29) * 0x38);
                fVar46 = (float)NEON_ucvtf(puVar38[2]);
                fVar45 = (float)NEON_ucvtf(puVar38[3]);
                uVar55 = Plane::getYatXZ((Plane *)pfVar1,fVar46,fVar45);
                *(undefined *)(puVar38 + 4) = 1;
                *(undefined *)(puVar38 + 6) = 1;
                *puVar38 = uVar55;
                uVar29 = *(uint *)(this + 0xf8);
                uVar19 = uVar31;
                if (uVar29 <= uVar31) {
                  uVar19 = uVar29 - 1;
                }
                uVar26 = 0;
                if (-1 < (int)uVar31) {
                  uVar26 = uVar19;
                }
                uVar19 = uVar22;
                if (*(uint *)(this + 0xfc) <= uVar22) {
                  uVar19 = *(uint *)(this + 0xfc) - 1;
                }
                uVar27 = 0;
                if (-1 < (int)uVar22) {
                  uVar27 = uVar19;
                }
                puVar38 = (undefined4 *)
                          (*(long *)(this + 0x100) + (ulong)(uVar26 + uVar27 * uVar29) * 0x38);
                fVar46 = (float)NEON_ucvtf(puVar38[2]);
                fVar45 = (float)NEON_ucvtf(puVar38[3]);
                uVar55 = Plane::getYatXZ((Plane *)pfVar1,fVar46,fVar45);
                *(undefined *)(puVar38 + 4) = 1;
                *(undefined *)(puVar38 + 6) = 1;
                *puVar38 = uVar55;
                uVar19 = *(uint *)(this + 0xf8);
                iVar15 = uVar19 - 1;
                if (uVar20 < uVar19) {
                  iVar15 = uVar31 + 1;
                }
                iVar58 = 0;
                if (-1 < (int)uVar20) {
                  iVar58 = iVar15;
                }
                uVar29 = uVar22;
                if (*(uint *)(this + 0xfc) <= uVar22) {
                  uVar29 = *(uint *)(this + 0xfc) - 1;
                }
                uVar26 = 0;
                if (-1 < (int)uVar22) {
                  uVar26 = uVar29;
                }
                puVar38 = (undefined4 *)
                          (*(long *)(this + 0x100) + (ulong)(iVar58 + uVar26 * uVar19) * 0x38);
                fVar46 = (float)NEON_ucvtf(puVar38[2]);
                fVar45 = (float)NEON_ucvtf(puVar38[3]);
                uVar55 = Plane::getYatXZ((Plane *)pfVar1,fVar46,fVar45);
                *puVar38 = uVar55;
                *(undefined *)(puVar38 + 4) = 1;
                *(undefined *)(puVar38 + 6) = 1;
                uVar19 = *(uint *)(this + 0xf8);
                fVar46 = (float)(ulong)uVar31 + 0.5;
                fVar45 = *(float *)(this + 0x98);
                uVar31 = (int)(fVar46 - fVar45) & ((int)(fVar46 - fVar45) >> 0x1f ^ 0xffffffffU);
                if ((int)uVar31 < (int)uVar19) {
                  uVar26 = *(uint *)(this + 0xfc);
                  uVar29 = (int)(fVar50 - fVar45) & ((int)(fVar50 - fVar45) >> 0x1f ^ 0xffffffffU);
                  if ((((int)uVar29 < (int)uVar26) &&
                      (uVar27 = (uint)(fVar46 + fVar45), -1 < (int)uVar27)) &&
                     (uVar28 = (uint)(fVar50 + fVar45), -1 < (int)uVar28)) {
                    if ((int)uVar19 <= (int)uVar27) {
                      uVar27 = uVar19;
                    }
                    if ((int)uVar26 <= (int)uVar28) {
                      uVar28 = uVar26;
                    }
                    if (uVar29 < uVar28) {
                      do {
                        if (uVar31 < uVar27) {
                          lVar32 = *(long *)(this + 0x100);
                          uVar19 = uVar31;
                          do {
                            fVar43 = (float)NEON_fmadd((float)(ulong)uVar19 - fVar46,
                                                       (float)(ulong)uVar19 - fVar46,
                                                       ((float)(ulong)uVar29 - fVar50) *
                                                       ((float)(ulong)uVar29 - fVar50));
                            if (fVar43 < fVar45 * fVar45) {
                              uVar11 = *(uint *)(this + 0xf8);
                              uVar26 = uVar19;
                              if (uVar11 <= uVar19) {
                                uVar26 = uVar11 - 1;
                              }
                              uVar2 = 0;
                              if (-1 < (int)uVar19) {
                                uVar2 = uVar26;
                              }
                              uVar26 = uVar29;
                              if (*(uint *)(this + 0xfc) <= uVar29) {
                                uVar26 = *(uint *)(this + 0xfc) - 1;
                              }
                              uVar4 = 0;
                              if (-1 < (int)uVar29) {
                                uVar4 = uVar26;
                              }
                              *(undefined4 *)
                               (lVar32 + (ulong)(uVar2 + uVar4 * uVar11) * 0x38 + 0x14) = 0x3f800000
                              ;
                            }
                            uVar19 = uVar19 + 1;
                          } while (uVar27 != uVar19);
                        }
                        uVar29 = uVar29 + 1;
                      } while (uVar29 != uVar28);
                    }
                  }
                }
                uVar31 = uVar20;
              } while (uVar20 < local_b4);
            }
            uVar21 = uVar22;
          } while (uVar22 < local_c4);
        }
      }
    }
    if (this[0xd5] != (TerrainDeformation)0x0) {
      puVar8 = *(undefined4 **)(this + 0x68);
      for (puVar38 = *(undefined4 **)(this + 0x60); puVar38 != puVar8; puVar38 = puVar38 + 0x12) {
        lVar32 = *(long *)(this + 0x38);
        uVar55 = *puVar38;
        uVar57 = puVar38[2];
        uVar16 = BaseTerrain::getLodTextureSize();
        fVar48 = (float)*(int *)(this + 0x50);
        fVar50 = (float)(uVar16 & 0xffffffff) / (float)(ulong)(*(int *)(lVar32 + 0x90) - 1);
        fVar46 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xf0));
        fVar45 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xf4));
        fVar43 = (float)NEON_fmadd(uVar55,fVar50,0xbf000000);
        fVar50 = (float)NEON_fmadd(uVar57,fVar50,0xbf000000);
        ParallelogramHelper::ParallelogramHelper
                  (aPStack_110,fVar43 - fVar46,fVar50 - fVar45,(float)puVar38[3] * fVar48,
                   (float)puVar38[5] * fVar48,(float)puVar38[6] * fVar48,(float)puVar38[8] * fVar48,
                   *(uint *)(this + 0x108),*(uint *)(this + 0x10c),0);
        for (uVar21 = local_c8; uVar21 < local_c4; uVar21 = uVar21 + 1) {
          ParallelogramHelper::startXIteration(aPStack_110,uVar21);
          if (local_b8 < local_b4) {
            lVar32 = *(long *)(this + 0x110);
            uVar24 = *(undefined8 *)(puVar38 + 0xe);
            uVar22 = local_b8;
            do {
              uVar20 = *(uint *)(this + 0x108);
              uVar31 = uVar22;
              if (uVar20 <= uVar22) {
                uVar31 = uVar20 - 1;
              }
              uVar19 = 0;
              if (-1 < (int)uVar22) {
                uVar19 = uVar31;
              }
              uVar22 = uVar22 + 1;
              uVar31 = uVar21;
              if (*(uint *)(this + 0x10c) <= uVar21) {
                uVar31 = *(uint *)(this + 0x10c) - 1;
              }
              uVar29 = 0;
              if (-1 < (int)uVar21) {
                uVar29 = uVar31;
              }
              *(undefined8 *)(lVar32 + (ulong)(uVar19 + uVar29 * uVar20) * 8) = uVar24;
            } while (local_b4 != uVar22);
          }
        }
      }
      piVar6 = *(int **)(this + 0x80);
      for (piVar5 = *(int **)(this + 0x78); piVar5 != piVar6; piVar5 = piVar5 + 8) {
        lVar32 = *(long *)(this + 0x38);
        iVar15 = piVar5[1];
        iVar58 = piVar5[2];
        uVar16 = BaseTerrain::getLodTextureSize();
        fVar50 = (float)(uVar16 & 0xffffffff) / (float)(ulong)(*(int *)(lVar32 + 0x90) - 1);
        fVar46 = (float)NEON_fmadd(iVar15,fVar50,0xbf000000);
        fVar50 = (float)NEON_fmadd(iVar58,fVar50,0xbf000000);
        if (*piVar5 == 1) {
          lVar32 = *(long *)(this + 0x38);
          fVar45 = (float)piVar5[3];
          uVar16 = BaseTerrain::getLodTextureSize();
          uVar31 = *(uint *)(this + 0x108);
          fVar43 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xf0));
          fVar48 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xf4));
          fVar45 = fVar45 * 0.5 *
                   ((float)(uVar16 & 0xffffffff) / (float)(ulong)(*(int *)(lVar32 + 0x90) - 1));
          uVar20 = (uint)((fVar46 - fVar43) + fVar45);
          uVar22 = (uint)((fVar46 - fVar43) - fVar45);
          uVar19 = (uint)((fVar50 - fVar48) + fVar45);
          uVar21 = uVar20;
          if ((int)uVar31 <= (int)uVar20) {
            uVar21 = uVar31;
          }
          uVar26 = *(uint *)(this + 0x10c);
          uVar29 = (uint)((fVar50 - fVar48) - fVar45);
          if ((int)uVar20 < 1 || (int)uVar31 <= (int)uVar22) {
            uVar21 = 0;
          }
          if (((int)uVar20 < 1 || (int)uVar31 <= (int)uVar22) || (int)uVar22 < 1) {
            uVar22 = 0;
          }
          uVar31 = uVar19;
          if ((int)uVar26 <= (int)uVar19) {
            uVar31 = uVar26;
          }
          if ((int)uVar19 < 1 || (int)uVar26 <= (int)uVar29) {
            uVar31 = 0;
          }
          if (((int)uVar19 < 1 || (int)uVar26 <= (int)uVar29) || (int)uVar29 < 1) {
            uVar29 = 0;
          }
          if ((int)uVar29 < (int)uVar31) {
            do {
              if ((int)uVar22 < (int)uVar21) {
                lVar32 = *(long *)(this + 0x110);
                uVar24 = *(undefined8 *)(piVar5 + 4);
                uVar20 = uVar22;
                do {
                  uVar26 = *(uint *)(this + 0x108);
                  uVar19 = uVar20;
                  if (uVar26 <= uVar20) {
                    uVar19 = uVar26 - 1;
                  }
                  uVar27 = 0;
                  if (-1 < (int)uVar20) {
                    uVar27 = uVar19;
                  }
                  uVar20 = uVar20 + 1;
                  uVar19 = uVar29;
                  if (*(uint *)(this + 0x10c) <= uVar29) {
                    uVar19 = *(uint *)(this + 0x10c) - 1;
                  }
                  uVar28 = 0;
                  if (-1 < (int)uVar29) {
                    uVar28 = uVar19;
                  }
                  *(undefined8 *)(lVar32 + (ulong)(uVar27 + uVar28 * uVar26) * 8) = uVar24;
                } while (uVar21 != uVar20);
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar31);
          }
        }
        else if (*piVar5 == 0) {
          lVar32 = *(long *)(this + 0x38);
          fVar43 = (float)piVar5[3];
          uVar16 = BaseTerrain::getLodTextureSize();
          uVar31 = *(uint *)(this + 0x108);
          fVar45 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xf0));
          fVar48 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xf4));
          fVar46 = fVar46 - fVar45;
          fVar43 = fVar43 * ((float)(uVar16 & 0xffffffff) /
                            (float)(ulong)(*(int *)(lVar32 + 0x90) - 1));
          fVar50 = fVar50 - fVar48;
          uVar20 = (uint)(fVar46 + fVar43);
          uVar22 = (uint)(fVar46 - fVar43);
          uVar19 = (uint)(fVar50 + fVar43);
          uVar21 = uVar20;
          if ((int)uVar31 <= (int)uVar20) {
            uVar21 = uVar31;
          }
          uVar26 = *(uint *)(this + 0x10c);
          uVar29 = (uint)(fVar50 - fVar43);
          if ((int)uVar20 < 1 || (int)uVar31 <= (int)uVar22) {
            uVar21 = 0;
          }
          if (((int)uVar20 < 1 || (int)uVar31 <= (int)uVar22) || (int)uVar22 < 1) {
            uVar22 = 0;
          }
          uVar31 = uVar19;
          if ((int)uVar26 <= (int)uVar19) {
            uVar31 = uVar26;
          }
          if ((int)uVar19 < 1 || (int)uVar26 <= (int)uVar29) {
            uVar31 = 0;
          }
          if (((int)uVar19 < 1 || (int)uVar26 <= (int)uVar29) || (int)uVar29 < 1) {
            uVar29 = 0;
          }
          if ((int)uVar29 < (int)uVar31) {
            do {
              if ((int)uVar22 < (int)uVar21) {
                lVar32 = *(long *)(this + 0x110);
                uVar20 = uVar22;
                do {
                  fVar45 = (float)NEON_fmadd((float)uVar20 - fVar46,(float)uVar20 - fVar46,
                                             ((float)uVar29 - fVar50) * ((float)uVar29 - fVar50));
                  if (fVar45 <= fVar43 * fVar43) {
                    uVar26 = *(uint *)(this + 0x108);
                    uVar19 = uVar20;
                    if (uVar26 <= uVar20) {
                      uVar19 = uVar26 - 1;
                    }
                    uVar27 = 0;
                    if (-1 < (int)uVar20) {
                      uVar27 = uVar19;
                    }
                    uVar19 = uVar29;
                    if (*(uint *)(this + 0x10c) <= uVar29) {
                      uVar19 = *(uint *)(this + 0x10c) - 1;
                    }
                    uVar28 = 0;
                    if (-1 < (int)uVar29) {
                      uVar28 = uVar19;
                    }
                    *(undefined8 *)(lVar32 + (ulong)(uVar27 + uVar28 * uVar26) * 8) =
                         *(undefined8 *)(piVar5 + 4);
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar21 != uVar20);
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar31);
          }
        }
      }
    }
    uVar21 = *(uint *)(this + 0x2c);
    if (uVar21 < 4) {
      if (uVar21 == 3) {
        iVar15 = applySmoothingHeight();
LAB_008a1350:
        *(int *)(this + 0x128) = iVar15;
      }
      else {
        if (uVar21 == 2) {
          iVar15 = applySetHeight();
          goto LAB_008a1350;
        }
        if (uVar21 == 1) {
          iVar15 = *(int *)(this + 0x128);
          if (iVar15 == 0) {
            uVar21 = *(uint *)(this + 0xfc);
            if (uVar21 != 0) {
              uVar22 = 0;
              uVar31 = *(uint *)(this + 0xf8);
              do {
                if (uVar31 != 0) {
                  uVar20 = 0;
                  lVar32 = *(long *)(this + 0x100);
                  fVar50 = *(float *)(this + 0xb8);
                  do {
                    uVar19 = uVar22;
                    if (*(uint *)(this + 0xfc) <= uVar22) {
                      uVar19 = *(uint *)(this + 0xfc) - 1;
                    }
                    uVar29 = 0;
                    if (-1 < (int)uVar22) {
                      uVar29 = uVar19;
                    }
                    uVar16 = (ulong)((uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) +
                                    uVar29 * uVar31);
                    fVar46 = *(float *)(lVar32 + uVar16 * 0x38 + 0x14);
                    if (0.0 < fVar46) {
                      lVar33 = uVar16 * 0x38;
                      fVar45 = *(float *)(lVar32 + lVar33);
                      uVar55 = NEON_fmadd(fVar50 * fVar45,fVar46,fVar45);
                      *(undefined4 *)(lVar32 + lVar33) = uVar55;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar31 != uVar20);
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 != uVar21);
            }
            iVar15 = 0;
          }
          goto LAB_008a1350;
        }
      }
      DensityMapModifier::DensityMapModifier((DensityMapModifier *)aPStack_110);
      if (*(DensityMap **)(this + 0xa8) != (DensityMap *)0x0) {
                    /* try { // try from 008a1364 to 008a136b has its CatchHandler @ 008a1860 */
        DensityMapModifier::init((DensityMapModifier *)aPStack_110,*(DensityMap **)(this + 0xa8));
      }
      uVar21 = *(uint *)(this + 0xfc);
      if (uVar21 == 0) {
LAB_008a16e4:
        *(undefined4 *)(this + 0x128) = 1;
      }
      else {
        uVar22 = *(uint *)(this + 0xf8);
        bVar14 = true;
        uVar31 = 0;
        do {
          uVar20 = uVar31 + 1;
          if (uVar22 != 0) {
            uVar19 = 0;
            uVar29 = uVar31 - 1;
            do {
              uVar26 = 0;
              if (-1 < (int)uVar19) {
                uVar26 = uVar19;
              }
              uVar27 = uVar31;
              if (uVar21 <= uVar31) {
                uVar27 = uVar21 - 1;
              }
              uVar21 = 0;
              if (-1 < (int)uVar31) {
                uVar21 = uVar27;
              }
              lVar32 = *(long *)(this + 0x100);
              uVar16 = (ulong)(uVar26 + uVar21 * uVar22);
              pfVar34 = (float *)(lVar32 + uVar16 * 0x38);
              if (*(long *)(this + 0xa8) == 0) {
LAB_008a14ec:
                bVar13 = false;
LAB_008a14f0:
                if (*(int *)(this + 0x2c) == 1) goto LAB_008a1508;
                if (bVar13) goto LAB_008a13b8;
LAB_008a16c8:
                bVar14 = false;
              }
              else {
                if (local_100 == (ChunkedBitSquare *)0x0) {
                  uVar21 = *(uint *)(this + 0xb4) +
                           (uVar19 + *(int *)(this + 0xe8) +
                           local_ec * (uVar31 + *(int *)(this + 0xec))) * local_e4;
                  lVar25 = *local_f8;
                  lVar33 = *(long *)(lVar25 + (ulong)(uVar21 >> 0x13) * 8);
                  uVar23 = (ulong)(uVar21 >> 3) & 0xffff;
                  if ((uint)uVar23 < 0xfffd) {
                    uVar22 = *(uint *)(lVar33 + uVar23);
                  }
                  else {
                    uVar22 = (uVar21 >> 3) + 1;
                    uVar26 = (uVar21 >> 3) + 2;
                    uVar22 = (uint)CONCAT12(*(undefined *)
                                             (*(long *)(lVar25 + (ulong)(uVar26 >> 0x10) * 8) +
                                             ((ulong)uVar26 & 0xffff)),
                                            CONCAT11(*(undefined *)
                                                      (*(long *)(lVar25 + (ulong)(uVar22 >> 0x10) *
                                                                          8) +
                                                      ((ulong)uVar22 & 0xffff)),
                                                     *(undefined *)(lVar33 + uVar23)));
                  }
                  if ((uVar22 >> (ulong)(uVar21 & 7) & 1) != 0) goto LAB_008a14c0;
                  goto LAB_008a14ec;
                }
                    /* try { // try from 008a142c to 008a1433 has its CatchHandler @ 008a1864 */
                iVar15 = ChunkedBitSquare::readBits
                                   (local_100,uVar19 + *(int *)(this + 0xe8),
                                    *(int *)(this + 0xec) + uVar31,*(uint *)(this + 0xb4),1);
                if (iVar15 == 0) goto LAB_008a14ec;
LAB_008a14c0:
                if (*(int *)(this + 0x2c) != 1) {
                  if (*(int *)(this + 0x2c) == 0) {
                    if (ABS(*pfVar34 - *(float *)(lVar32 + uVar16 * 0x38 + 4)) <
                        *(float *)(this + 0xb0)) goto LAB_008a14ec;
                    bVar13 = true;
                    goto LAB_008a14f0;
                  }
                  goto LAB_008a13b8;
                }
                bVar13 = true;
LAB_008a1508:
                uVar22 = *(uint *)(this + 0xf8);
                uVar26 = *(uint *)(this + 0xfc);
                uVar27 = uVar26 - 1;
                uVar21 = uVar31;
                if (uVar26 <= uVar31) {
                  uVar21 = uVar27;
                }
                uVar11 = uVar22 - 1;
                uVar28 = 0;
                if (-1 < (int)uVar31) {
                  uVar28 = uVar21;
                }
                uVar21 = uVar19;
                if (uVar22 <= uVar19) {
                  uVar21 = uVar11;
                }
                uVar2 = 0;
                if (-1 < (int)uVar19) {
                  uVar2 = uVar21;
                }
                if (!bVar13) {
                  uVar21 = uVar20;
                  if (uVar26 <= uVar20) {
                    uVar21 = uVar27;
                  }
                  uVar4 = 0;
                  if (-1 < (int)uVar20) {
                    uVar4 = uVar21;
                  }
                  uVar21 = uVar19 + 1;
                  uVar10 = uVar29;
                  if (uVar26 <= uVar29) {
                    uVar10 = uVar27;
                  }
                  uVar27 = uVar19 - 1;
                  uVar26 = 0;
                  if (-1 < (int)uVar29) {
                    uVar26 = uVar10;
                  }
                  uVar10 = uVar21;
                  if (uVar22 <= uVar21) {
                    uVar10 = uVar11;
                  }
                  uVar3 = 0;
                  if (-1 < (int)uVar21) {
                    uVar3 = uVar10;
                  }
                  uVar21 = uVar27;
                  if (uVar22 <= uVar27) {
                    uVar21 = uVar11;
                  }
                  uVar11 = 0;
                  if (-1 < (int)uVar27) {
                    uVar11 = uVar21;
                  }
                  lVar33 = *(long *)(this + 0x100);
                  fVar43 = *pfVar34;
                  fVar53 = *(float *)(this + 0x44);
                  fVar45 = fVar43 - *(float *)(lVar33 + (ulong)(uVar28 * uVar22 + uVar11) * 0x38);
                  fVar46 = *(float *)(lVar33 + (ulong)(uVar28 * uVar22 + uVar3) * 0x38) - fVar43;
                  fVar54 = fVar43 - *(float *)(lVar33 + (ulong)(uVar2 + uVar26 * uVar22) * 0x38);
                  fVar43 = *(float *)(lVar33 + (ulong)(uVar2 + uVar4 * uVar22) * 0x38) - fVar43;
                  fVar48 = *(float *)(this + 0x9c);
                  fVar50 = fVar54 / fVar53;
                  if (*(float *)(this + 0xb8) <= 0.0) {
                    if (((-fVar48 < fVar50) && (-fVar48 < fVar45 / fVar53)) &&
                       (fVar50 = fVar43 / fVar53, fVar46 / fVar53 < fVar48))
                    goto joined_r0x008a1638;
                  }
                  else if (((fVar45 / fVar53 < fVar48) && (-fVar48 < fVar43 / fVar53)) &&
                          (-fVar48 < fVar46 / fVar53)) {
joined_r0x008a1638:
                    if (fVar50 < fVar48) {
                      fVar48 = (float)NEON_fmadd(fVar53,fVar53,fVar45 * fVar45);
                      fVar51 = (float)NEON_fmadd(fVar53,fVar53,fVar46 * fVar46);
                      fVar50 = (float)NEON_fmadd(fVar53,fVar53,fVar45 * fVar46);
                      fVar50 = acosf((1.0 / SQRT(fVar51)) * fVar50 * (1.0 / SQRT(fVar48)));
                      fVar46 = (float)NEON_fmadd(fVar53,fVar53,fVar54 * fVar54);
                      fVar45 = (float)NEON_fmadd(fVar53,fVar53,fVar43 * fVar43);
                      fVar43 = (float)NEON_fmadd(fVar53,fVar53,fVar54 * fVar43);
                      fVar46 = acosf((1.0 / SQRT(fVar45)) * fVar43 * (1.0 / SQRT(fVar46)));
                      lVar33 = lVar32 + uVar16 * 0x38;
                      if ((fVar50 < *(float *)(lVar33 + 0x30)) &&
                         (fVar46 < *(float *)(lVar33 + 0x34))) goto LAB_008a16c8;
                    }
                  }
                }
LAB_008a13b8:
                lVar32 = lVar32 + uVar16 * 0x38;
                *(undefined *)(lVar32 + 0x10) = 1;
                *(undefined *)(lVar32 + 0x18) = 0;
                *(undefined4 *)(lVar32 + 0x14) = 0;
                *pfVar34 = *(float *)(lVar32 + 4);
              }
              uVar22 = *(uint *)(this + 0xf8);
              uVar21 = *(uint *)(this + 0xfc);
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar22);
          }
          uVar31 = uVar20;
        } while (uVar20 < uVar21);
        if (bVar14) goto LAB_008a16e4;
      }
                    /* try { // try from 008a16ec to 008a16f3 has its CatchHandler @ 008a1860 */
      checkForDynamicObjects();
      DensityMapModifier::~DensityMapModifier((DensityMapModifier *)aPStack_110);
    }
    uVar21 = *(uint *)(this + 0xfc);
    if (uVar21 != 0) {
      uVar22 = 0;
      uVar31 = *(uint *)(this + 0xf8);
      do {
        if (uVar31 != 0) {
          uVar20 = 0;
          lVar32 = *(long *)(this + 0x100);
          do {
            uVar19 = uVar22;
            if (*(uint *)(this + 0xfc) <= uVar22) {
              uVar19 = *(uint *)(this + 0xfc) - 1;
            }
            uVar29 = 0;
            if (-1 < (int)uVar22) {
              uVar29 = uVar19;
            }
            lVar33 = lVar32 + (ulong)((uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) +
                                     uVar29 * uVar31) * 0x38;
            pfVar34 = (float *)(lVar33 + 0x14);
            pcVar30 = (char *)(lVar33 + 0x10);
            if (*pfVar34 == 0.0) {
              *pcVar30 = '\x01';
            }
            else if (*pcVar30 != '\0') {
              *pfVar34 = 0.0;
            }
            uVar20 = uVar20 + 1;
          } while (uVar31 != uVar20);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar21);
    }
    *(undefined4 *)(this + 0x11c) = 0;
    this[0x118] = (TerrainDeformation)0x1;
    *(undefined8 *)(this + 0x120) = 0x4479c00000000000;
    this_00 = (UpdateManager *)UpdateManager::getInstance();
    UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x20),false);
    EVar18 = *(ErrorCode *)(this + 0x128);
  }
  else {
    if (*(int *)(this + 0x50) != 0) {
      fVar48 = pfVar34[2];
      fVar43 = *pfVar34;
      fVar45 = fVar43 + pfVar34[3];
      fVar53 = fVar43 + pfVar34[6];
      fVar50 = fVar45 + pfVar34[6];
      fVar46 = fVar50;
      if (fVar53 <= fVar50) {
        fVar46 = fVar53;
      }
      fVar54 = fVar45;
      if (fVar43 <= fVar45) {
        fVar54 = fVar43;
      }
      if (fVar54 <= fVar46) {
        fVar46 = fVar54;
      }
      if (fVar45 <= fVar43) {
        fVar45 = fVar43;
      }
      fVar43 = fVar48 + pfVar34[5];
      if (fVar50 <= fVar53) {
        fVar50 = fVar53;
      }
      fVar54 = fVar48 + pfVar34[8];
      fVar53 = fVar43 + pfVar34[8];
      if (fVar50 <= fVar45) {
        fVar50 = fVar45;
      }
      fVar45 = fVar53;
      if (fVar54 <= fVar53) {
        fVar45 = fVar54;
      }
      fVar51 = fVar43;
      if (fVar48 <= fVar43) {
        fVar51 = fVar48;
      }
      if (fVar51 <= fVar45) {
        fVar45 = fVar51;
      }
      if (fVar43 <= fVar48) {
        fVar43 = fVar48;
      }
      if (fVar53 <= fVar54) {
        fVar53 = fVar54;
      }
      if (fVar53 <= fVar43) {
        fVar53 = fVar43;
      }
      iVar39 = (int)fVar46;
      iVar42 = (int)fVar50;
      iVar41 = (int)fVar45;
      iVar36 = (int)fVar53;
      do {
        fVar48 = pfVar34[2];
        fVar43 = *pfVar34;
        pfVar7 = pfVar34 + 5;
        fVar45 = fVar43 + pfVar34[3];
        fVar53 = fVar43 + pfVar34[6];
        fVar50 = fVar45 + pfVar34[6];
        fVar46 = fVar50;
        if (fVar53 <= fVar50) {
          fVar46 = fVar53;
        }
        fVar54 = fVar45;
        if (fVar43 <= fVar45) {
          fVar54 = fVar43;
        }
        if (fVar54 <= fVar46) {
          fVar46 = fVar54;
        }
        iVar40 = (int)fVar46;
        if (iVar39 <= (int)fVar46) {
          iVar40 = iVar39;
        }
        if (fVar45 <= fVar43) {
          fVar45 = fVar43;
        }
        if (fVar50 <= fVar53) {
          fVar50 = fVar53;
        }
        pfVar1 = pfVar34 + 8;
        pfVar34 = pfVar34 + 0x12;
        if (fVar50 <= fVar45) {
          fVar50 = fVar45;
        }
        fVar46 = fVar48 + *pfVar7;
        fVar43 = fVar48 + *pfVar1;
        fVar45 = fVar46 + *pfVar1;
        iVar58 = (int)fVar50;
        if ((int)fVar50 <= iVar42) {
          iVar58 = iVar42;
        }
        fVar50 = fVar45;
        if (fVar43 <= fVar45) {
          fVar50 = fVar43;
        }
        fVar53 = fVar46;
        if (fVar48 <= fVar46) {
          fVar53 = fVar48;
        }
        if (fVar53 <= fVar50) {
          fVar50 = fVar53;
        }
        iVar35 = (int)fVar50;
        if (iVar41 <= (int)fVar50) {
          iVar35 = iVar41;
        }
        if (fVar46 <= fVar48) {
          fVar46 = fVar48;
        }
        if (fVar45 <= fVar43) {
          fVar45 = fVar43;
        }
        if (fVar45 <= fVar46) {
          fVar45 = fVar46;
        }
        iVar37 = (int)fVar45;
        if ((int)fVar45 <= iVar36) {
          iVar37 = iVar36;
        }
        iVar39 = iVar40;
        iVar42 = iVar58;
        iVar41 = iVar35;
        iVar36 = iVar37;
      } while (pfVar34 != *(float **)(this + 0x68));
      goto LAB_008a00ac;
    }
LAB_008a0050:
    EVar18 = 0;
  }
  onFinished(this,EVar18);
LAB_008a17bc:
  if (*(long *)(lVar12 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


