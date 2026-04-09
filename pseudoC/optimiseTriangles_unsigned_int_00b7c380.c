// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _optimiseTriangles<unsigned_int>
// Entry Point: 00b7c380
// Size: 3608 bytes
// Signature: void __cdecl _optimiseTriangles<unsigned_int>(uint param_1, uint param_2, uint param_3, uint * param_4, uint * param_5)


/* void GeometryUtil::_optimiseTriangles<unsigned int>(unsigned int, unsigned int, unsigned int,
   unsigned int const*, unsigned int*) */

void GeometryUtil::_optimiseTriangles<unsigned_int>
               (uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  long **pplVar7;
  bool bVar8;
  uint uVar9;
  uint *__s;
  int *__s_00;
  uint *__s_01;
  undefined4 *puVar10;
  void *pvVar11;
  ulong *puVar12;
  void *pvVar13;
  int iVar14;
  ulong uVar15;
  float *pfVar16;
  float *pfVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 *puVar22;
  ulong *__s_02;
  undefined4 *puVar23;
  uint uVar24;
  ulong uVar25;
  long **pplVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  void **ppvVar30;
  void *pvVar31;
  ulong uVar32;
  float **ppfVar33;
  uint *puVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float local_1f0;
  uint local_1ec;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  void *local_1d0;
  long lStack_1c8;
  long **local_1c0;
  long local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_90;
  
  lVar6 = tpidr_el0;
  uVar25 = (ulong)param_3;
  uVar29 = uVar25 << 2;
  uVar28 = (ulong)param_1;
  local_90 = *(long *)(lVar6 + 0x28);
  __s = (uint *)operator_new__(uVar29);
  memset(__s,0xff,uVar29);
  uVar32 = uVar28 << 2;
  uStack_b8 = 0xffffffffffffffff;
  local_c0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffffffffffff;
  local_e0 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffffffffff;
  uStack_d0 = 0xffffffffffffffff;
  uStack_f8 = 0xffffffffffffffff;
  local_100 = 0xffffffffffffffff;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  uStack_118 = 0xffffffffffffffff;
  local_120 = 0xffffffffffffffff;
  uStack_108 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  local_140 = 0xffffffffffffffff;
  uStack_128 = 0xffffffffffffffff;
  uStack_130 = 0xffffffffffffffff;
  uStack_158 = 0xffffffffffffffff;
  local_160 = 0xffffffffffffffff;
  uStack_148 = 0xffffffffffffffff;
  uStack_150 = 0xffffffffffffffff;
  uStack_178 = 0xffffffffffffffff;
  local_180 = 0xffffffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  uStack_198 = 0xffffffffffffffff;
  local_1a0 = 0xffffffffffffffff;
  uStack_188 = 0xffffffffffffffff;
  uStack_190 = 0xffffffffffffffff;
  __s_00 = (int *)operator_new__(uVar32);
  if (param_1 != 0) {
    memset(__s_00,0xff,uVar32);
  }
  __s_01 = (uint *)operator_new__(uVar29);
  memset(__s_01,0,uVar29);
  uVar15 = (ulong)(param_1 * 3);
  puVar18 = param_4;
  if (param_1 * 3 != 0) {
    do {
      uVar15 = uVar15 - 1;
      __s_01[*puVar18 - param_2] = __s_01[*puVar18 - param_2] + 1;
      puVar18 = puVar18 + 1;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined4 *)operator_new__(uVar29);
  puVar18 = __s;
  uVar29 = uVar25;
  puVar23 = puVar10;
  puVar34 = __s_01;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar34;
      if (uVar2 == 0) {
        uVar36 = 0xbf800000;
      }
      else {
        uVar27 = *puVar18;
        if (uVar27 == 0xffffffff) {
          fVar37 = 0.0;
        }
        else {
          fVar37 = 0.75;
          if (2 < uVar27) {
            fVar37 = (float)NEON_fmadd((float)(ulong)(uVar27 - 3),0xbc864b8a,0x3f800000);
            fVar37 = powf(fVar37,1.5);
          }
        }
        fVar35 = powf((float)(ulong)uVar2,-0.5);
        uVar36 = NEON_fmadd(fVar35,0x40000000,fVar37);
      }
      uVar29 = uVar29 - 1;
      *puVar23 = uVar36;
      puVar18 = puVar18 + 1;
      puVar23 = puVar23 + 1;
      puVar34 = puVar34 + 1;
    } while (uVar29 != 0);
  }
  local_1e8 = (float *)0x0;
  local_1e0 = (float *)0x0;
  local_1d8 = (float *)0x0;
                    /* try { // try from 00b7c53c to 00b7c543 has its CatchHandler @ 00b7d1a4 */
  pvVar11 = operator_new__(uVar32);
                    /* try { // try from 00b7c554 to 00b7c557 has its CatchHandler @ 00b7d19c */
  puVar12 = (ulong *)operator_new__(uVar25 * 0x18 + 8);
  __s_02 = puVar12 + 1;
  *puVar12 = uVar25;
  if (param_3 != 0) {
    memset(__s_02,0,((uVar25 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
  }
  if (param_1 != 0) {
    uVar25 = 0;
    pfVar16 = (float *)0x0;
    pfVar17 = (float *)0x0;
    do {
      fVar37 = (float)uVar25;
      uVar15 = (long)pfVar16 - (long)pfVar17;
      uVar29 = uVar15 >> 4;
      puVar18 = param_4 + (uint)((int)fVar37 * 3);
      iVar14 = (int)uVar29;
      uVar32 = (ulong)(*puVar18 - param_2);
      if (iVar14 != -1) {
        puVar23 = (undefined4 *)((long)pvVar11 + uVar25 * 4);
        fVar35 = (float)puVar10[uVar32] + (float)puVar10[puVar18[1] - param_2] +
                 (float)puVar10[puVar18[2] - param_2];
        if (pfVar16 < local_1d8) {
          *pfVar16 = fVar35;
          local_1e0 = pfVar16 + 4;
          pfVar16[1] = fVar37;
          *(undefined4 **)(pfVar16 + 2) = puVar23;
          pfVar16 = local_1e8;
          if (iVar14 != 0) goto LAB_00b7c70c;
LAB_00b7c6cc:
          uVar32 = 0;
        }
        else {
          uVar32 = ((long)uVar15 >> 4) + 1;
          if (uVar32 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar20 = (long)local_1d8 - (long)pfVar17 >> 3;
          if (uVar32 <= uVar20) {
            uVar32 = uVar20;
          }
          if (0x7fffffffffffffef < (ulong)((long)local_1d8 - (long)pfVar17)) {
            uVar32 = 0xfffffffffffffff;
          }
          if (uVar32 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7c674 to 00b7c677 has its CatchHandler @ 00b7d1b0 */
          pfVar16 = (float *)operator_new(uVar32 << 4);
          pfVar1 = pfVar16 + ((long)uVar15 >> 4) * 4;
          *pfVar1 = fVar35;
          pfVar1[1] = fVar37;
          *(undefined4 **)(pfVar1 + 2) = puVar23;
          if (0 < (long)uVar15) {
            memcpy(pfVar16,pfVar17,uVar15);
          }
          local_1e0 = pfVar1 + 4;
          local_1d8 = pfVar16 + uVar32 * 4;
          local_1e8 = pfVar16;
          if (pfVar17 != (float *)0x0) {
            operator_delete(pfVar17);
          }
          if (iVar14 == 0) goto LAB_00b7c6cc;
LAB_00b7c70c:
          do {
            uVar2 = (int)uVar29 - 1;
            uVar32 = (ulong)(uVar2 >> 1);
            fVar38 = pfVar16[uVar32 * 4];
            if ((fVar38 <= fVar35) &&
               ((fVar38 != fVar35 || (uVar25 <= (uint)pfVar16[uVar32 * 4 + 1])))) {
              uVar32 = uVar29 & 0xffffffff;
              break;
            }
            uVar39 = *(undefined8 *)(pfVar16 + uVar32 * 4 + 2);
            *(undefined8 *)(pfVar16 + (uVar29 & 0xffffffff) * 4) =
                 *(undefined8 *)(pfVar16 + uVar32 * 4);
            *(undefined8 *)((long)(pfVar16 + (uVar29 & 0xffffffff) * 4) + 8) = uVar39;
            **(int **)(local_1e8 + (uVar29 & 0xffffffff) * 4 + 2) = (int)uVar29;
            pfVar16 = local_1e8;
            uVar29 = uVar32;
          } while (1 < uVar2);
        }
        pfVar16 = pfVar16 + uVar32 * 4;
        *pfVar16 = fVar35;
        pfVar16[1] = fVar37;
        *(undefined4 **)(pfVar16 + 2) = puVar23;
        uVar2 = *puVar18;
        *puVar23 = (int)uVar32;
        uVar32 = (ulong)(uVar2 - param_2);
      }
      ppvVar30 = (void **)(__s_02 + uVar32 * 3);
      ppfVar33 = (float **)(ppvVar30 + 1);
      pfVar16 = *ppfVar33;
      if (pfVar16 == (float *)ppvVar30[2]) {
        pvVar31 = *ppvVar30;
        uVar32 = (long)pfVar16 - (long)pvVar31;
        uVar29 = ((long)uVar32 >> 2) + 1;
        if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar29 <= (ulong)((long)uVar32 >> 1)) {
          uVar29 = (long)uVar32 >> 1;
        }
        if (0x7ffffffffffffffb < uVar32) {
          uVar29 = 0x3fffffffffffffff;
        }
        if (uVar29 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7c7cc to 00b7c7cf has its CatchHandler @ 00b7d1b0 */
          pvVar13 = operator_new(uVar29 << 2);
        }
        pfVar16 = (float *)((long)pvVar13 + ((long)uVar32 >> 2) * 4);
        *pfVar16 = fVar37;
        if (0 < (long)uVar32) {
          memcpy(pvVar13,pvVar31,uVar32);
        }
        *ppfVar33 = pfVar16 + 1;
        *ppvVar30 = pvVar13;
        ppvVar30[2] = (float *)((long)pvVar13 + uVar29 * 4);
        if (pvVar31 != (void *)0x0) {
          operator_delete(pvVar31);
        }
      }
      else {
        *pfVar16 = fVar37;
        *ppfVar33 = pfVar16 + 1;
      }
      ppvVar30 = (void **)(__s_02 + (ulong)(puVar18[1] - param_2) * 3);
      ppfVar33 = (float **)(ppvVar30 + 1);
      pfVar16 = *ppfVar33;
      if (pfVar16 == (float *)ppvVar30[2]) {
        pvVar31 = *ppvVar30;
        uVar32 = (long)pfVar16 - (long)pvVar31;
        uVar29 = ((long)uVar32 >> 2) + 1;
        if (uVar29 >> 0x3e != 0) {
                    /* try { // try from 00b7d144 to 00b7d193 has its CatchHandler @ 00b7d1b8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar29 <= (ulong)((long)uVar32 >> 1)) {
          uVar29 = (long)uVar32 >> 1;
        }
        if (0x7ffffffffffffffb < uVar32) {
          uVar29 = 0x3fffffffffffffff;
        }
        if (uVar29 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7c8a4 to 00b7c8a7 has its CatchHandler @ 00b7d1b0 */
          pvVar13 = operator_new(uVar29 << 2);
        }
        pfVar16 = (float *)((long)pvVar13 + ((long)uVar32 >> 2) * 4);
        *pfVar16 = fVar37;
        if (0 < (long)uVar32) {
          memcpy(pvVar13,pvVar31,uVar32);
        }
        *ppfVar33 = pfVar16 + 1;
        *ppvVar30 = pvVar13;
        ppvVar30[2] = (float *)((long)pvVar13 + uVar29 * 4);
        if (pvVar31 != (void *)0x0) {
          operator_delete(pvVar31);
        }
      }
      else {
        *pfVar16 = fVar37;
        *ppfVar33 = pfVar16 + 1;
      }
      ppvVar30 = (void **)(__s_02 + (ulong)(puVar18[2] - param_2) * 3);
      ppfVar33 = (float **)(ppvVar30 + 1);
      pfVar16 = *ppfVar33;
      if (pfVar16 == (float *)ppvVar30[2]) {
        pvVar31 = *ppvVar30;
        uVar32 = (long)pfVar16 - (long)pvVar31;
        uVar29 = ((long)uVar32 >> 2) + 1;
        if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar29 <= (ulong)((long)uVar32 >> 1)) {
          uVar29 = (long)uVar32 >> 1;
        }
        if (0x7ffffffffffffffb < uVar32) {
          uVar29 = 0x3fffffffffffffff;
        }
        if (uVar29 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7c980 to 00b7c983 has its CatchHandler @ 00b7d1b0 */
          pvVar13 = operator_new(uVar29 << 2);
        }
        pfVar16 = (float *)((long)pvVar13 + ((long)uVar32 >> 2) * 4);
        *pfVar16 = fVar37;
        if (0 < (long)uVar32) {
          memcpy(pvVar13,pvVar31,uVar32);
        }
        *ppvVar30 = pvVar13;
        *ppfVar33 = pfVar16 + 1;
        ppvVar30[2] = (float *)((long)pvVar13 + uVar29 * 4);
        if (pvVar31 != (void *)0x0) {
          operator_delete(pvVar31);
        }
      }
      else {
        *pfVar16 = fVar37;
        *ppfVar33 = pfVar16 + 1;
      }
      uVar25 = uVar25 + 1;
      pfVar16 = local_1e0;
      pfVar17 = local_1e8;
    } while (uVar25 != uVar28);
  }
  local_1b0 = 0x3f800000;
  lStack_1c8 = 0;
  local_1d0 = (void *)0x0;
  local_1b8 = 0;
  local_1c0 = (long **)0x0;
                    /* try { // try from 00b7ca08 to 00b7ca13 has its CatchHandler @ 00b7d198 */
  std::__ndk1::
  __hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
  ::rehash((__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
            *)&local_1d0,0x43);
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      fVar37 = local_1e8[1];
      **(undefined4 **)(local_1e8 + 2) = 0xffffffff;
      if (0x10 < (ulong)((long)local_1e0 - (long)local_1e8)) {
        uVar27 = (int)((ulong)((long)local_1e0 - (long)local_1e8) >> 4) - 1;
                    /* try { // try from 00b7ca90 to 00b7ca9b has its CatchHandler @ 00b7d1ac */
        uVar9 = PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>>
                ::adjustDown((PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>>
                              *)&local_1e8,uVar27);
        uVar39 = *(undefined8 *)((long)(local_1e8 + (ulong)uVar27 * 4) + 8);
        *(undefined8 *)(local_1e8 + (ulong)uVar9 * 4) =
             *(undefined8 *)(local_1e8 + (ulong)uVar27 * 4);
        *(undefined8 *)((long)(local_1e8 + (ulong)uVar9 * 4) + 8) = uVar39;
        **(uint **)(local_1e8 + (ulong)uVar9 * 4 + 2) = uVar9;
      }
      local_1e0 = local_1e0 + -4;
      puVar22 = (undefined8 *)(param_4 + (uint)((int)fVar37 * 3));
      uVar27 = *(uint *)puVar22;
      pfVar16 = (float *)__s_02[(ulong)(uVar27 - param_2) * 3];
      pfVar17 = (float *)__s_02[(ulong)(uVar27 - param_2) * 3 + 1];
      if (pfVar16 == pfVar17) {
LAB_00b7cb24:
        if (pfVar16 != pfVar17) {
          sVar5 = (long)pfVar17 - (long)(pfVar16 + 1);
          if (sVar5 != 0) {
            memmove(pfVar16,pfVar16 + 1,sVar5);
          }
          __s_02[(ulong)(uVar27 - param_2) * 3 + 1] = (ulong)((long)pfVar16 + sVar5);
        }
      }
      else {
        do {
          if (*pfVar16 == fVar37) goto LAB_00b7cb24;
          pfVar16 = pfVar16 + 1;
        } while (pfVar16 != pfVar17);
      }
      uVar27 = *(uint *)((long)puVar22 + 4) - param_2;
      pfVar16 = (float *)__s_02[(ulong)uVar27 * 3];
      pfVar17 = (float *)__s_02[(ulong)uVar27 * 3 + 1];
      if (pfVar16 == pfVar17) {
LAB_00b7cb94:
        if (pfVar16 != pfVar17) {
          sVar5 = (long)pfVar17 - (long)(pfVar16 + 1);
          if (sVar5 != 0) {
            memmove(pfVar16,pfVar16 + 1,sVar5);
          }
          __s_02[(ulong)uVar27 * 3 + 1] = (ulong)((long)pfVar16 + sVar5);
        }
      }
      else {
        do {
          if (*pfVar16 == fVar37) goto LAB_00b7cb94;
          pfVar16 = pfVar16 + 1;
        } while (pfVar16 != pfVar17);
      }
      uVar25 = (ulong)(*(uint *)(puVar22 + 1) - param_2);
      pfVar16 = (float *)__s_02[uVar25 * 3];
      lVar19 = uVar25 * 3;
      pfVar17 = (float *)__s_02[lVar19 + 1];
      if (pfVar16 == pfVar17) {
LAB_00b7cc04:
        if (pfVar16 != pfVar17) {
          sVar5 = (long)pfVar17 - (long)(pfVar16 + 1);
          if (sVar5 != 0) {
            memmove(pfVar16,pfVar16 + 1,sVar5);
            uVar25 = (ulong)(*(uint *)(puVar22 + 1) - param_2);
          }
          __s_02[lVar19 + 1] = (ulong)((long)pfVar16 + sVar5);
        }
      }
      else {
        do {
          if (*pfVar16 == fVar37) goto LAB_00b7cc04;
          pfVar16 = pfVar16 + 1;
        } while (pfVar16 != pfVar17);
      }
      lVar19 = 0;
      uVar24 = *(uint *)puVar22 - param_2;
      uVar4 = *(uint *)((long)puVar22 + 4) - param_2;
      uVar9 = __s[uVar25];
      uVar3 = __s[uVar24];
      uVar27 = __s[uVar4];
      __s_01[uVar24] = __s_01[uVar24] - 1;
      __s_01[uVar4] = __s_01[uVar4] - 1;
      __s_01[uVar25] = __s_01[uVar25] - 1;
      __s_00[(uint)fVar37] = uVar2;
      do {
        uVar25 = *(ulong *)((long)&local_1a0 + lVar19);
        uVar39 = NEON_cmeq(uVar25,0xffffffffffffffff,4);
        if ((~(byte)uVar39 & 1) != 0) {
          __s[uVar25 & 0xffffffff] = 0xffffffff;
        }
        uVar39 = NEON_cmeq(uVar25,0xffffffffffffffff,4);
        if ((~(byte)((ulong)uVar39 >> 0x20) & 1) != 0) {
          __s[uVar25 >> 0x20] = 0xffffffff;
        }
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x100);
      if (uVar3 == 0xffffffff) {
        uVar24 = 1;
      }
      else {
        memmove((void *)((long)&local_1a0 + (ulong)uVar3 * 4),
                (void *)((long)&local_1a0 + (ulong)uVar3 * 4 + 4),(ulong)(0x42 - uVar3) << 2);
        bVar8 = uVar27 == 0xffffffff;
        uVar27 = uVar27 - (uVar3 < uVar27);
        if (bVar8) {
          uVar27 = 0xffffffff;
        }
        if (uVar9 == 0xffffffff) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          uVar9 = uVar9 - (uVar3 < uVar9);
        }
      }
      if (uVar27 == 0xffffffff) {
        uVar24 = uVar24 + 1;
        if (uVar9 == 0xffffffff) goto LAB_00b7cd88;
LAB_00b7cd9c:
        memmove((void *)((long)&local_1a0 + (ulong)uVar9 * 4),
                (void *)((long)&local_1a0 + (ulong)(uVar9 + 1) * 4),(ulong)(0x42 - uVar9) << 2);
      }
      else {
        memmove((void *)((long)&local_1a0 + (ulong)uVar27 * 4),
                (void *)((long)&local_1a0 + (ulong)(uVar27 + 1) * 4),(ulong)(0x42 - uVar27) << 2);
        if ((uVar9 != 0xffffffff) && ((uVar9 <= uVar27 || (uVar9 = uVar9 - 1, uVar9 != 0xffffffff)))
           ) goto LAB_00b7cd9c;
LAB_00b7cd88:
        uVar24 = uVar24 + 1;
      }
      memmove((void *)((ulong)&local_1a0 | 0xc),&local_1a0,0x100);
      lVar19 = 0;
      uVar9 = (int)*puVar22 - param_2;
      local_1a0 = CONCAT44((int)((ulong)*puVar22 >> 0x20) - param_2,uVar9);
      uStack_198 = CONCAT44(uStack_198._4_4_,*(uint *)(puVar22 + 1) - param_2);
      uVar27 = uVar9;
      while( true ) {
        if (uVar27 != 0xffffffff) {
          __s[uVar27] = (uint)lVar19;
        }
        if (lVar19 == 0x3f) break;
        uVar27 = *(uint *)(((ulong)&local_1a0 | 4) + lVar19 * 4);
        lVar19 = lVar19 + 1;
      }
      pplVar7 = local_1c0;
      if ((uVar24 | 0x40) != 0) {
        uVar25 = 0;
        while( true ) {
          if (uVar9 != 0xffffffff) {
            uVar29 = (ulong)uVar9;
            uVar27 = __s_01[uVar29];
            if (uVar27 == 0) {
              uVar36 = 0xbf800000;
            }
            else {
              uVar9 = __s[uVar29];
              if (uVar9 == 0xffffffff) {
                fVar37 = 0.0;
              }
              else {
                fVar37 = 0.75;
                if (2 < uVar9) {
                  fVar37 = (float)NEON_fmadd((float)(ulong)(uVar9 - 3),0xbc864b8a,0x3f800000);
                  fVar37 = powf(fVar37,1.5);
                }
              }
              fVar35 = powf((float)(ulong)uVar27,-0.5);
              uVar36 = NEON_fmadd(fVar35,0x40000000,fVar37);
            }
            puVar10[uVar29] = uVar36;
            pfVar17 = (float *)(__s_02 + uVar29 * 3)[1];
            for (pfVar16 = (float *)__s_02[uVar29 * 3]; pfVar16 != pfVar17; pfVar16 = pfVar16 + 1) {
              local_1f0 = *pfVar16;
                    /* try { // try from 00b7ced0 to 00b7cedf has its CatchHandler @ 00b7d1c4 */
              std::__ndk1::
              __hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              ::__emplace_unique_key_args<unsigned_int,unsigned_int_const&>
                        ((__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
                          *)&local_1d0,(uint *)&local_1f0,(uint *)&local_1f0);
            }
          }
          uVar25 = uVar25 + 1;
          pplVar7 = local_1c0;
          if (uVar25 == (uVar24 | 0x40)) break;
          uVar9 = *(uint *)((long)&local_1a0 + uVar25 * 4);
        }
      }
      for (; pplVar7 != (long **)0x0; pplVar7 = (long **)*pplVar7) {
        local_1ec = *(uint *)(pplVar7 + 2);
        puVar18 = param_4 + local_1ec * 3;
        local_1f0 = (float)puVar10[*puVar18 - param_2] + (float)puVar10[puVar18[1] - param_2] +
                    (float)puVar10[puVar18[2] - param_2];
                    /* try { // try from 00b7cf48 to 00b7cf53 has its CatchHandler @ 00b7d1c0 */
        PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>>
        ::updateKey((PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>>
                     *)&local_1e8,*(uint *)((long)pvVar11 + (ulong)local_1ec * 4),
                    (TriangleScore *)&local_1f0);
      }
      pplVar7 = local_1c0;
      if (local_1b8 != 0) {
        while (pplVar7 != (long **)0x0) {
          pplVar26 = (long **)*pplVar7;
          operator_delete(pplVar7);
          pplVar7 = pplVar26;
        }
        local_1c0 = (long **)0x0;
        if (lStack_1c8 != 0) {
          lVar19 = 0;
          do {
            *(undefined8 *)((long)local_1d0 + lVar19 * 8) = 0;
            lVar19 = lVar19 + 1;
          } while (lStack_1c8 != lVar19);
        }
        local_1b8 = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
    if (param_1 != 0) {
      uVar25 = 0;
      piVar21 = __s_00;
      do {
        uVar29 = uVar25 & 0xffffffff;
        iVar14 = (int)uVar25;
        uVar25 = uVar25 + 3;
        uVar2 = *piVar21 * 3;
        param_5[uVar2] = param_4[uVar29];
        param_5[uVar2 + 1] = param_4[iVar14 + 1];
        param_5[uVar2 + 2] = param_4[iVar14 + 2];
        piVar21 = piVar21 + 1;
      } while (uVar28 * 3 != uVar25);
    }
  }
  operator_delete__(__s_00);
  operator_delete__(__s);
  operator_delete__(__s_01);
  operator_delete__(puVar10);
  operator_delete__(pvVar11);
  for (lVar19 = *puVar12 * 0x18; lVar19 != 0; lVar19 = lVar19 + -0x18) {
    pvVar11 = *(void **)((long)puVar12 + lVar19 + -0x10);
    if (pvVar11 != (void *)0x0) {
      *(void **)((long)puVar12 + lVar19 + -8) = pvVar11;
      operator_delete(pvVar11);
    }
  }
  operator_delete__(puVar12);
  pvVar11 = local_1d0;
  pplVar7 = local_1c0;
  while (pplVar7 != (long **)0x0) {
    pplVar26 = (long **)*pplVar7;
    local_1d0 = pvVar11;
    operator_delete(pplVar7);
    pvVar11 = local_1d0;
    pplVar7 = pplVar26;
  }
  local_1d0 = (void *)0x0;
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (local_1e8 != local_1e0) {
    uVar25 = (long)local_1e0 + (-0x10 - (long)local_1e8);
    pfVar16 = local_1e8;
    if (0xf < uVar25) {
      uVar25 = (uVar25 >> 4) + 1;
      uVar29 = uVar25 & 0x1ffffffffffffffe;
      pfVar16 = local_1e8 + uVar29 * 4;
      puVar22 = (undefined8 *)(local_1e8 + 6);
      uVar28 = uVar29;
      do {
        uVar28 = uVar28 - 2;
        puVar23 = (undefined4 *)*puVar22;
        *(undefined4 *)puVar22[-2] = 0xffffffff;
        *puVar23 = 0xffffffff;
        puVar22 = puVar22 + 4;
      } while (uVar28 != 0);
      if (uVar25 == uVar29) goto LAB_00b7d0dc;
    }
    do {
      pfVar17 = pfVar16 + 4;
      **(undefined4 **)(pfVar16 + 2) = 0xffffffff;
      pfVar16 = pfVar17;
    } while (pfVar17 != local_1e0);
  }
LAB_00b7d0dc:
  local_1e0 = local_1e8;
  if (local_1e8 != (float *)0x0) {
    operator_delete(local_1e8);
  }
  if (*(long *)(lVar6 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


