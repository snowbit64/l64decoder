// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _optimiseTriangles<unsigned_short>
// Entry Point: 00b7b494
// Size: 3624 bytes
// Signature: void __cdecl _optimiseTriangles<unsigned_short>(uint param_1, uint param_2, uint param_3, ushort * param_4, ushort * param_5)


/* void GeometryUtil::_optimiseTriangles<unsigned short>(unsigned int, unsigned int, unsigned int,
   unsigned short const*, unsigned short*) */

void GeometryUtil::_optimiseTriangles<unsigned_short>
               (uint param_1,uint param_2,uint param_3,ushort *param_4,ushort *param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  long **pplVar8;
  bool bVar9;
  uint uVar10;
  uint *__s;
  int *__s_00;
  uint *__s_01;
  undefined4 *puVar11;
  void *pvVar12;
  ulong *puVar13;
  void *pvVar14;
  int iVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  ushort *puVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 *puVar23;
  ulong *__s_02;
  undefined4 *puVar24;
  uint uVar25;
  ulong uVar26;
  long **pplVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  void **ppvVar31;
  void *pvVar32;
  uint uVar33;
  ulong uVar34;
  float **ppfVar35;
  uint *puVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
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
  
  lVar7 = tpidr_el0;
  uVar26 = (ulong)param_3;
  uVar30 = uVar26 << 2;
  uVar28 = (ulong)param_1;
  local_90 = *(long *)(lVar7 + 0x28);
  __s = (uint *)operator_new__(uVar30);
  memset(__s,0xff,uVar30);
  uVar34 = uVar28 << 2;
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
  __s_00 = (int *)operator_new__(uVar34);
  if (param_1 != 0) {
    memset(__s_00,0xff,uVar34);
  }
  __s_01 = (uint *)operator_new__(uVar30);
  memset(__s_01,0,uVar30);
  uVar16 = (ulong)(param_1 * 3);
  puVar19 = param_4;
  if (param_1 * 3 != 0) {
    do {
      uVar16 = uVar16 - 1;
      __s_01[*puVar19 - param_2] = __s_01[*puVar19 - param_2] + 1;
      puVar19 = puVar19 + 1;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined4 *)operator_new__(uVar30);
  puVar29 = __s;
  uVar30 = uVar26;
  puVar24 = puVar11;
  puVar36 = __s_01;
  if (param_3 != 0) {
    do {
      uVar2 = *puVar36;
      if (uVar2 == 0) {
        uVar38 = 0xbf800000;
      }
      else {
        uVar25 = *puVar29;
        if (uVar25 == 0xffffffff) {
          fVar39 = 0.0;
        }
        else {
          fVar39 = 0.75;
          if (2 < uVar25) {
            fVar39 = (float)NEON_fmadd((float)(ulong)(uVar25 - 3),0xbc864b8a,0x3f800000);
            fVar39 = powf(fVar39,1.5);
          }
        }
        fVar37 = powf((float)(ulong)uVar2,-0.5);
        uVar38 = NEON_fmadd(fVar37,0x40000000,fVar39);
      }
      uVar30 = uVar30 - 1;
      *puVar24 = uVar38;
      puVar29 = puVar29 + 1;
      puVar24 = puVar24 + 1;
      puVar36 = puVar36 + 1;
    } while (uVar30 != 0);
  }
  local_1e8 = (float *)0x0;
  local_1e0 = (float *)0x0;
  local_1d8 = (float *)0x0;
                    /* try { // try from 00b7b654 to 00b7b65b has its CatchHandler @ 00b7c2c8 */
  pvVar12 = operator_new__(uVar34);
                    /* try { // try from 00b7b66c to 00b7b66f has its CatchHandler @ 00b7c2c0 */
  puVar13 = (ulong *)operator_new__(uVar26 * 0x18 + 8);
  __s_02 = puVar13 + 1;
  *puVar13 = uVar26;
  if (param_3 != 0) {
    memset(__s_02,0,((uVar26 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
  }
  if (param_1 != 0) {
    uVar26 = 0;
    pfVar17 = (float *)0x0;
    pfVar18 = (float *)0x0;
    do {
      fVar39 = (float)uVar26;
      uVar16 = (long)pfVar17 - (long)pfVar18;
      uVar30 = uVar16 >> 4;
      puVar19 = param_4 + (uint)((int)fVar39 * 3);
      iVar15 = (int)uVar30;
      uVar34 = (ulong)(*puVar19 - param_2);
      if (iVar15 != -1) {
        puVar24 = (undefined4 *)((long)pvVar12 + uVar26 * 4);
        fVar37 = (float)puVar11[uVar34] + (float)puVar11[puVar19[1] - param_2] +
                 (float)puVar11[puVar19[2] - param_2];
        if (pfVar17 < local_1d8) {
          *pfVar17 = fVar37;
          local_1e0 = pfVar17 + 4;
          pfVar17[1] = fVar39;
          *(undefined4 **)(pfVar17 + 2) = puVar24;
          pfVar17 = local_1e8;
          if (iVar15 == 0) goto LAB_00b7b7e4;
LAB_00b7b824:
          do {
            uVar2 = (int)uVar30 - 1;
            uVar34 = (ulong)(uVar2 >> 1);
            fVar40 = pfVar17[uVar34 * 4];
            if ((fVar40 <= fVar37) &&
               ((fVar40 != fVar37 || (uVar26 <= (uint)pfVar17[uVar34 * 4 + 1])))) {
              uVar34 = uVar30 & 0xffffffff;
              break;
            }
            uVar41 = *(undefined8 *)(pfVar17 + uVar34 * 4 + 2);
            *(undefined8 *)(pfVar17 + (uVar30 & 0xffffffff) * 4) =
                 *(undefined8 *)(pfVar17 + uVar34 * 4);
            *(undefined8 *)((long)(pfVar17 + (uVar30 & 0xffffffff) * 4) + 8) = uVar41;
            **(int **)(local_1e8 + (uVar30 & 0xffffffff) * 4 + 2) = (int)uVar30;
            pfVar17 = local_1e8;
            uVar30 = uVar34;
          } while (1 < uVar2);
        }
        else {
          uVar34 = ((long)uVar16 >> 4) + 1;
          if (uVar34 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar21 = (long)local_1d8 - (long)pfVar18 >> 3;
          if (uVar34 <= uVar21) {
            uVar34 = uVar21;
          }
          if (0x7fffffffffffffef < (ulong)((long)local_1d8 - (long)pfVar18)) {
            uVar34 = 0xfffffffffffffff;
          }
          if (uVar34 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7b78c to 00b7b78f has its CatchHandler @ 00b7c2d4 */
          pfVar17 = (float *)operator_new(uVar34 << 4);
          pfVar1 = pfVar17 + ((long)uVar16 >> 4) * 4;
          *pfVar1 = fVar37;
          pfVar1[1] = fVar39;
          *(undefined4 **)(pfVar1 + 2) = puVar24;
          if (0 < (long)uVar16) {
            memcpy(pfVar17,pfVar18,uVar16);
          }
          local_1e0 = pfVar1 + 4;
          local_1d8 = pfVar17 + uVar34 * 4;
          local_1e8 = pfVar17;
          if (pfVar18 != (float *)0x0) {
            operator_delete(pfVar18);
          }
          if (iVar15 != 0) goto LAB_00b7b824;
LAB_00b7b7e4:
          uVar34 = 0;
        }
        pfVar17 = pfVar17 + uVar34 * 4;
        *pfVar17 = fVar37;
        pfVar17[1] = fVar39;
        *(undefined4 **)(pfVar17 + 2) = puVar24;
        uVar4 = *puVar19;
        *puVar24 = (int)uVar34;
        uVar34 = (ulong)(uVar4 - param_2);
      }
      ppvVar31 = (void **)(__s_02 + uVar34 * 3);
      ppfVar35 = (float **)(ppvVar31 + 1);
      pfVar17 = *ppfVar35;
      if (pfVar17 == (float *)ppvVar31[2]) {
        pvVar32 = *ppvVar31;
        uVar34 = (long)pfVar17 - (long)pvVar32;
        uVar30 = ((long)uVar34 >> 2) + 1;
        if (uVar30 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar30 <= (ulong)((long)uVar34 >> 1)) {
          uVar30 = (long)uVar34 >> 1;
        }
        if (0x7ffffffffffffffb < uVar34) {
          uVar30 = 0x3fffffffffffffff;
        }
        if (uVar30 == 0) {
          pvVar14 = (void *)0x0;
        }
        else {
          if (uVar30 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7b8e4 to 00b7b8e7 has its CatchHandler @ 00b7c2d4 */
          pvVar14 = operator_new(uVar30 << 2);
        }
        pfVar17 = (float *)((long)pvVar14 + ((long)uVar34 >> 2) * 4);
        *pfVar17 = fVar39;
        if (0 < (long)uVar34) {
          memcpy(pvVar14,pvVar32,uVar34);
        }
        *ppfVar35 = pfVar17 + 1;
        *ppvVar31 = pvVar14;
        ppvVar31[2] = (float *)((long)pvVar14 + uVar30 * 4);
        if (pvVar32 != (void *)0x0) {
          operator_delete(pvVar32);
        }
      }
      else {
        *pfVar17 = fVar39;
        *ppfVar35 = pfVar17 + 1;
      }
      ppvVar31 = (void **)(__s_02 + (ulong)(puVar19[1] - param_2) * 3);
      ppfVar35 = (float **)(ppvVar31 + 1);
      pfVar17 = *ppfVar35;
      if (pfVar17 == (float *)ppvVar31[2]) {
        pvVar32 = *ppvVar31;
        uVar34 = (long)pfVar17 - (long)pvVar32;
        uVar30 = ((long)uVar34 >> 2) + 1;
        if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00b7c268 to 00b7c2b7 has its CatchHandler @ 00b7c2dc */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar30 <= (ulong)((long)uVar34 >> 1)) {
          uVar30 = (long)uVar34 >> 1;
        }
        if (0x7ffffffffffffffb < uVar34) {
          uVar30 = 0x3fffffffffffffff;
        }
        if (uVar30 == 0) {
          pvVar14 = (void *)0x0;
        }
        else {
          if (uVar30 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7b9bc to 00b7b9bf has its CatchHandler @ 00b7c2d4 */
          pvVar14 = operator_new(uVar30 << 2);
        }
        pfVar17 = (float *)((long)pvVar14 + ((long)uVar34 >> 2) * 4);
        *pfVar17 = fVar39;
        if (0 < (long)uVar34) {
          memcpy(pvVar14,pvVar32,uVar34);
        }
        *ppfVar35 = pfVar17 + 1;
        *ppvVar31 = pvVar14;
        ppvVar31[2] = (float *)((long)pvVar14 + uVar30 * 4);
        if (pvVar32 != (void *)0x0) {
          operator_delete(pvVar32);
        }
      }
      else {
        *pfVar17 = fVar39;
        *ppfVar35 = pfVar17 + 1;
      }
      ppvVar31 = (void **)(__s_02 + (ulong)(puVar19[2] - param_2) * 3);
      ppfVar35 = (float **)(ppvVar31 + 1);
      pfVar17 = *ppfVar35;
      if (pfVar17 == (float *)ppvVar31[2]) {
        pvVar32 = *ppvVar31;
        uVar34 = (long)pfVar17 - (long)pvVar32;
        uVar30 = ((long)uVar34 >> 2) + 1;
        if (uVar30 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar30 <= (ulong)((long)uVar34 >> 1)) {
          uVar30 = (long)uVar34 >> 1;
        }
        if (0x7ffffffffffffffb < uVar34) {
          uVar30 = 0x3fffffffffffffff;
        }
        if (uVar30 == 0) {
          pvVar14 = (void *)0x0;
        }
        else {
          if (uVar30 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b7ba98 to 00b7ba9b has its CatchHandler @ 00b7c2d4 */
          pvVar14 = operator_new(uVar30 << 2);
        }
        pfVar17 = (float *)((long)pvVar14 + ((long)uVar34 >> 2) * 4);
        *pfVar17 = fVar39;
        if (0 < (long)uVar34) {
          memcpy(pvVar14,pvVar32,uVar34);
        }
        *ppfVar35 = pfVar17 + 1;
        *ppvVar31 = pvVar14;
        ppvVar31[2] = (float *)((long)pvVar14 + uVar30 * 4);
        if (pvVar32 != (void *)0x0) {
          operator_delete(pvVar32);
        }
      }
      else {
        *pfVar17 = fVar39;
        *ppfVar35 = pfVar17 + 1;
      }
      uVar26 = uVar26 + 1;
      pfVar17 = local_1e0;
      pfVar18 = local_1e8;
    } while (uVar26 != uVar28);
  }
  local_1b0 = 0x3f800000;
  lStack_1c8 = 0;
  local_1d0 = (void *)0x0;
  local_1b8 = 0;
  local_1c0 = (long **)0x0;
                    /* try { // try from 00b7bb20 to 00b7bb2b has its CatchHandler @ 00b7c2bc */
  std::__ndk1::
  __hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
  ::rehash((__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
            *)&local_1d0,0x43);
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      fVar39 = local_1e8[1];
      **(undefined4 **)(local_1e8 + 2) = 0xffffffff;
      if (0x10 < (ulong)((long)local_1e0 - (long)local_1e8)) {
        uVar25 = (int)((ulong)((long)local_1e0 - (long)local_1e8) >> 4) - 1;
                    /* try { // try from 00b7bba4 to 00b7bbaf has its CatchHandler @ 00b7c2d0 */
        uVar10 = PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>>
                 ::adjustDown((PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>>
                               *)&local_1e8,uVar25);
        uVar41 = *(undefined8 *)((long)(local_1e8 + (ulong)uVar25 * 4) + 8);
        *(undefined8 *)(local_1e8 + (ulong)uVar10 * 4) =
             *(undefined8 *)(local_1e8 + (ulong)uVar25 * 4);
        *(undefined8 *)((long)(local_1e8 + (ulong)uVar10 * 4) + 8) = uVar41;
        **(uint **)(local_1e8 + (ulong)uVar10 * 4 + 2) = uVar10;
      }
      local_1e0 = local_1e0 + -4;
      puVar19 = param_4 + (uint)((int)fVar39 * 3);
      uVar4 = *puVar19;
      pfVar17 = (float *)__s_02[(ulong)(uVar4 - param_2) * 3];
      pfVar18 = (float *)__s_02[(ulong)(uVar4 - param_2) * 3 + 1];
      if (pfVar17 == pfVar18) {
LAB_00b7bc38:
        if (pfVar17 != pfVar18) {
          sVar6 = (long)pfVar18 - (long)(pfVar17 + 1);
          if (sVar6 != 0) {
            memmove(pfVar17,pfVar17 + 1,sVar6);
          }
          __s_02[(ulong)(uVar4 - param_2) * 3 + 1] = (ulong)((long)pfVar17 + sVar6);
        }
      }
      else {
        do {
          if (*pfVar17 == fVar39) goto LAB_00b7bc38;
          pfVar17 = pfVar17 + 1;
        } while (pfVar17 != pfVar18);
      }
      uVar4 = puVar19[1];
      pfVar17 = (float *)__s_02[(ulong)(uVar4 - param_2) * 3];
      pfVar18 = (float *)__s_02[(ulong)(uVar4 - param_2) * 3 + 1];
      if (pfVar17 == pfVar18) {
LAB_00b7bca8:
        if (pfVar17 != pfVar18) {
          sVar6 = (long)pfVar18 - (long)(pfVar17 + 1);
          if (sVar6 != 0) {
            memmove(pfVar17,pfVar17 + 1,sVar6);
          }
          __s_02[(ulong)(uVar4 - param_2) * 3 + 1] = (ulong)((long)pfVar17 + sVar6);
        }
      }
      else {
        do {
          if (*pfVar17 == fVar39) goto LAB_00b7bca8;
          pfVar17 = pfVar17 + 1;
        } while (pfVar17 != pfVar18);
      }
      uVar26 = (ulong)(puVar19[2] - param_2);
      pfVar17 = (float *)__s_02[uVar26 * 3];
      lVar20 = uVar26 * 3;
      pfVar18 = (float *)__s_02[lVar20 + 1];
      if (pfVar17 == pfVar18) {
LAB_00b7bd18:
        if (pfVar17 != pfVar18) {
          sVar6 = (long)pfVar18 - (long)(pfVar17 + 1);
          if (sVar6 != 0) {
            memmove(pfVar17,pfVar17 + 1,sVar6);
            uVar26 = (ulong)(puVar19[2] - param_2);
          }
          __s_02[lVar20 + 1] = (ulong)((long)pfVar17 + sVar6);
        }
      }
      else {
        do {
          if (*pfVar17 == fVar39) goto LAB_00b7bd18;
          pfVar17 = pfVar17 + 1;
        } while (pfVar17 != pfVar18);
      }
      lVar20 = 0;
      uVar33 = *puVar19 - param_2;
      uVar10 = __s[uVar26];
      uVar5 = puVar19[1] - param_2;
      uVar3 = __s[uVar33];
      uVar25 = __s[uVar5];
      __s_01[uVar33] = __s_01[uVar33] - 1;
      __s_01[uVar5] = __s_01[uVar5] - 1;
      __s_01[uVar26] = __s_01[uVar26] - 1;
      __s_00[(uint)fVar39] = uVar2;
      do {
        uVar26 = *(ulong *)((long)&local_1a0 + lVar20);
        uVar41 = NEON_cmeq(uVar26,0xffffffffffffffff,4);
        if ((~(byte)uVar41 & 1) != 0) {
          __s[uVar26 & 0xffffffff] = 0xffffffff;
        }
        uVar41 = NEON_cmeq(uVar26,0xffffffffffffffff,4);
        if ((~(byte)((ulong)uVar41 >> 0x20) & 1) != 0) {
          __s[uVar26 >> 0x20] = 0xffffffff;
        }
        lVar20 = lVar20 + 8;
      } while (lVar20 != 0x100);
      if (uVar3 == 0xffffffff) {
        uVar33 = 1;
joined_r0x00b7be98:
        if (uVar25 != 0xffffffff) goto LAB_00b7be50;
LAB_00b7be9c:
        uVar33 = uVar33 + 1;
        if (uVar10 != 0xffffffff) goto LAB_00b7bea8;
LAB_00b7be88:
        uVar33 = uVar33 + 1;
      }
      else {
        memmove((void *)((long)&local_1a0 + (ulong)uVar3 * 4),
                (void *)((long)&local_1a0 + (ulong)uVar3 * 4 + 4),(ulong)(0x42 - uVar3) << 2);
        bVar9 = uVar25 == 0xffffffff;
        uVar25 = uVar25 - (uVar3 < uVar25);
        if (bVar9) {
          uVar25 = 0xffffffff;
        }
        if (uVar10 == 0xffffffff) {
          uVar33 = 0;
          goto joined_r0x00b7be98;
        }
        uVar33 = 0;
        uVar10 = uVar10 - (uVar3 < uVar10);
        if (uVar25 == 0xffffffff) goto LAB_00b7be9c;
LAB_00b7be50:
        memmove((void *)((long)&local_1a0 + (ulong)uVar25 * 4),
                (void *)((long)&local_1a0 + (ulong)(uVar25 + 1) * 4),(ulong)(0x42 - uVar25) << 2);
        if ((uVar10 == 0xffffffff) ||
           ((uVar25 < uVar10 && (uVar10 = uVar10 - 1, uVar10 == 0xffffffff)))) goto LAB_00b7be88;
LAB_00b7bea8:
        memmove((void *)((long)&local_1a0 + (ulong)uVar10 * 4),
                (void *)((long)&local_1a0 + (ulong)(uVar10 + 1) * 4),(ulong)(0x42 - uVar10) << 2);
      }
      memmove((void *)((ulong)&local_1a0 | 0xc),&local_1a0,0x100);
      lVar20 = 0;
      uVar10 = *puVar19 - param_2;
      uStack_198 = CONCAT44(uStack_198._4_4_,puVar19[2] - param_2);
      local_1a0 = CONCAT44(puVar19[1] - param_2,uVar10);
      uVar25 = uVar10;
      while( true ) {
        if (uVar25 != 0xffffffff) {
          __s[uVar25] = (uint)lVar20;
        }
        if (lVar20 == 0x3f) break;
        uVar25 = *(uint *)(((ulong)&local_1a0 | 4) + lVar20 * 4);
        lVar20 = lVar20 + 1;
      }
      pplVar8 = local_1c0;
      if ((uVar33 | 0x40) != 0) {
        uVar26 = 0;
        while( true ) {
          if (uVar10 != 0xffffffff) {
            uVar30 = (ulong)uVar10;
            uVar25 = __s_01[uVar30];
            if (uVar25 == 0) {
              uVar38 = 0xbf800000;
            }
            else {
              uVar10 = __s[uVar30];
              if (uVar10 == 0xffffffff) {
                fVar39 = 0.0;
              }
              else {
                fVar39 = 0.75;
                if (2 < uVar10) {
                  fVar39 = (float)NEON_fmadd((float)(ulong)(uVar10 - 3),0xbc864b8a,0x3f800000);
                  fVar39 = powf(fVar39,1.5);
                }
              }
              fVar37 = powf((float)(ulong)uVar25,-0.5);
              uVar38 = NEON_fmadd(fVar37,0x40000000,fVar39);
            }
            puVar11[uVar30] = uVar38;
            pfVar18 = (float *)(__s_02 + uVar30 * 3)[1];
            for (pfVar17 = (float *)__s_02[uVar30 * 3]; pfVar17 != pfVar18; pfVar17 = pfVar17 + 1) {
              local_1f0 = *pfVar17;
                    /* try { // try from 00b7bfe4 to 00b7bff3 has its CatchHandler @ 00b7c2e8 */
              std::__ndk1::
              __hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              ::__emplace_unique_key_args<unsigned_int,unsigned_int_const&>
                        ((__hash_table<unsigned_int,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
                          *)&local_1d0,(uint *)&local_1f0,(uint *)&local_1f0);
            }
          }
          uVar26 = uVar26 + 1;
          pplVar8 = local_1c0;
          if (uVar26 == (uVar33 | 0x40)) break;
          uVar10 = *(uint *)((long)&local_1a0 + uVar26 * 4);
        }
      }
      for (; pplVar8 != (long **)0x0; pplVar8 = (long **)*pplVar8) {
        local_1ec = *(uint *)(pplVar8 + 2);
        puVar19 = param_4 + local_1ec * 3;
        local_1f0 = (float)puVar11[*puVar19 - param_2] + (float)puVar11[puVar19[1] - param_2] +
                    (float)puVar11[puVar19[2] - param_2];
                    /* try { // try from 00b7c060 to 00b7c06b has its CatchHandler @ 00b7c2e4 */
        PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>>
        ::updateKey((PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>>
                     *)&local_1e8,*(uint *)((long)pvVar12 + (ulong)local_1ec * 4),
                    (TriangleScore *)&local_1f0);
      }
      pplVar8 = local_1c0;
      if (local_1b8 != 0) {
        while (pplVar8 != (long **)0x0) {
          pplVar27 = (long **)*pplVar8;
          operator_delete(pplVar8);
          pplVar8 = pplVar27;
        }
        local_1c0 = (long **)0x0;
        if (lStack_1c8 != 0) {
          lVar20 = 0;
          do {
            *(undefined8 *)((long)local_1d0 + lVar20 * 8) = 0;
            lVar20 = lVar20 + 1;
          } while (lStack_1c8 != lVar20);
        }
        local_1b8 = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
    if (param_1 != 0) {
      uVar26 = 0;
      piVar22 = __s_00;
      do {
        uVar30 = uVar26 & 0xffffffff;
        iVar15 = (int)uVar26;
        uVar26 = uVar26 + 3;
        uVar2 = *piVar22 * 3;
        param_5[uVar2] = param_4[uVar30];
        param_5[uVar2 + 1] = param_4[iVar15 + 1];
        param_5[uVar2 + 2] = param_4[iVar15 + 2];
        piVar22 = piVar22 + 1;
      } while (uVar28 * 3 != uVar26);
    }
  }
  operator_delete__(__s_00);
  operator_delete__(__s);
  operator_delete__(__s_01);
  operator_delete__(puVar11);
  operator_delete__(pvVar12);
  for (lVar20 = *puVar13 * 0x18; lVar20 != 0; lVar20 = lVar20 + -0x18) {
    pvVar12 = *(void **)((long)puVar13 + lVar20 + -0x10);
    if (pvVar12 != (void *)0x0) {
      *(void **)((long)puVar13 + lVar20 + -8) = pvVar12;
      operator_delete(pvVar12);
    }
  }
  operator_delete__(puVar13);
  pvVar12 = local_1d0;
  pplVar8 = local_1c0;
  while (pplVar8 != (long **)0x0) {
    pplVar27 = (long **)*pplVar8;
    local_1d0 = pvVar12;
    operator_delete(pplVar8);
    pvVar12 = local_1d0;
    pplVar8 = pplVar27;
  }
  local_1d0 = (void *)0x0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (local_1e8 != local_1e0) {
    uVar26 = (long)local_1e0 + (-0x10 - (long)local_1e8);
    pfVar17 = local_1e8;
    if (0xf < uVar26) {
      uVar26 = (uVar26 >> 4) + 1;
      uVar30 = uVar26 & 0x1ffffffffffffffe;
      pfVar17 = local_1e8 + uVar30 * 4;
      puVar23 = (undefined8 *)(local_1e8 + 6);
      uVar28 = uVar30;
      do {
        uVar28 = uVar28 - 2;
        puVar24 = (undefined4 *)*puVar23;
        *(undefined4 *)puVar23[-2] = 0xffffffff;
        *puVar24 = 0xffffffff;
        puVar23 = puVar23 + 4;
      } while (uVar28 != 0);
      if (uVar26 == uVar30) goto LAB_00b7c200;
    }
    do {
      pfVar18 = pfVar17 + 4;
      **(undefined4 **)(pfVar17 + 2) = 0xffffffff;
      pfVar17 = pfVar18;
    } while (pfVar18 != local_1e0);
  }
LAB_00b7c200:
  local_1e0 = local_1e8;
  if (local_1e8 != (float *)0x0) {
    operator_delete(local_1e8);
  }
  if (*(long *)(lVar7 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


