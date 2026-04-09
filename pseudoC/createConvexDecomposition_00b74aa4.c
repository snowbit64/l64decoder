// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConvexDecomposition
// Entry Point: 00b74aa4
// Size: 2060 bytes
// Signature: undefined __cdecl createConvexDecomposition(Brep * param_1, vector * param_2, uint param_3)


/* BrepUtil::createConvexDecomposition(Brep*, std::__ndk1::vector<Brep*,
   std::__ndk1::allocator<Brep*> >&, unsigned int) */

undefined4 BrepUtil::createConvexDecomposition(Brep *param_1,vector *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  Brep **ppBVar3;
  ushort uVar4;
  ushort uVar5;
  undefined auVar6 [16];
  long lVar7;
  undefined auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  undefined auVar14 [16];
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  double *pdVar21;
  void *pvVar22;
  HACD *this;
  ulong *puVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  BrepTriangle *pBVar26;
  Brep *this_00;
  void *__dest;
  int iVar27;
  int iVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  float *pfVar35;
  double *pdVar36;
  undefined4 *puVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  ulong uVar42;
  undefined4 uVar43;
  long lVar44;
  ulong uVar45;
  float *pfVar46;
  ulong uVar47;
  ulong uVar48;
  void *__src;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  uint *local_88;
  float *local_80;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pfVar46 = *(float **)(param_1 + 0x2ef0);
  lVar34 = *(long *)(param_1 + 0x2f70);
  lVar44 = *(long *)(param_1 + 0x2f68);
  uVar47 = *(long *)(param_1 + 0x2ef8) - (long)pfVar46;
  uVar42 = uVar47 >> 4 & 0xffff;
  if (uVar42 == 0) {
    pdVar21 = (double *)0x0;
  }
  else {
    pdVar21 = (double *)operator_new(uVar42 * 0x18);
  }
  uVar48 = (ulong)(lVar34 - lVar44) >> 5 & 0xffffffff;
  if (uVar48 == 0) {
    pvVar22 = (void *)0x0;
  }
  else {
                    /* try { // try from 00b74b2c to 00b74b2f has its CatchHandler @ 00b752b4 */
    pvVar22 = operator_new(uVar48 * 0x18);
  }
  if (((uint)uVar47 >> 4 & 0xffff) != 0) {
    if (uVar42 < 5) {
      lVar30 = 0;
    }
    else {
      uVar45 = 4;
      if ((uVar47 >> 4 & 3) != 0) {
        uVar45 = uVar47 >> 4 & 3;
      }
      lVar30 = uVar42 - uVar45;
      lVar31 = uVar45 - uVar42;
      pfVar35 = pfVar46;
      pdVar36 = pdVar21;
      do {
        fVar52 = *pfVar35;
        fVar51 = pfVar35[1];
        fVar56 = pfVar35[2];
        fVar57 = pfVar35[4];
        fVar53 = pfVar35[5];
        fVar58 = pfVar35[6];
        fVar49 = pfVar35[8];
        fVar54 = pfVar35[9];
        fVar59 = pfVar35[10];
        fVar50 = pfVar35[0xc];
        fVar55 = pfVar35[0xd];
        fVar60 = pfVar35[0xe];
        pfVar35 = pfVar35 + 0x10;
        lVar31 = lVar31 + 4;
        *pdVar36 = (double)fVar52;
        pdVar36[1] = (double)fVar51;
        pdVar36[2] = (double)fVar56;
        pdVar36[3] = (double)fVar57;
        pdVar36[4] = (double)fVar53;
        pdVar36[5] = (double)fVar58;
        pdVar36[6] = (double)fVar49;
        pdVar36[7] = (double)fVar54;
        pdVar36[8] = (double)fVar59;
        pdVar36[9] = (double)fVar50;
        pdVar36[10] = (double)fVar55;
        pdVar36[0xb] = (double)fVar60;
        pdVar36 = pdVar36 + 0xc;
      } while (lVar31 != 0);
    }
    lVar31 = lVar30 - uVar42;
    pfVar46 = pfVar46 + lVar30 * 4 + 2;
    pdVar36 = pdVar21 + lVar30 * 3 + 2;
    do {
      uVar9 = *(undefined8 *)(pfVar46 + -2);
      bVar18 = lVar31 != -1;
      lVar31 = lVar31 + 1;
      fVar52 = *pfVar46;
      pdVar36[-1] = (double)(float)((ulong)uVar9 >> 0x20);
      pdVar36[-2] = (double)(float)uVar9;
      *pdVar36 = (double)fVar52;
      pfVar46 = pfVar46 + 4;
      pdVar36 = pdVar36 + 3;
    } while (bVar18);
  }
  iVar27 = (int)((ulong)(lVar34 - lVar44) >> 5);
  if (iVar27 != 0) {
    lVar34 = 0;
    puVar23 = (ulong *)((long)pvVar22 + 8);
    lVar31 = *(long *)(param_1 + 0x2f50);
    do {
      iVar28 = (int)lVar34;
      lVar34 = lVar34 + 4;
      uVar4 = *(ushort *)(lVar31 + (ulong)*(ushort *)(lVar44 + (ulong)(iVar28 + 2) * 8) * 0xc);
      uVar5 = *(ushort *)(lVar31 + (ulong)*(ushort *)(lVar44 + (ulong)(iVar28 + 3) * 8) * 0xc);
      puVar23[-1] = (ulong)*(ushort *)
                            (lVar31 + (ulong)*(ushort *)(lVar44 + (ulong)(iVar28 + 1) * 8) * 0xc);
      *puVar23 = (ulong)uVar4;
      puVar23[1] = (ulong)uVar5;
      puVar23 = puVar23 + 3;
    } while (uVar48 * 4 - lVar34 != 0);
  }
                    /* try { // try from 00b74c60 to 00b74c67 has its CatchHandler @ 00b752d0 */
  this = (HACD *)operator_new(0x1a0);
                    /* try { // try from 00b74c6c to 00b74c73 has its CatchHandler @ 00b752c0 */
  HACD::HACD::HACD(this,(HeapManager *)0x0);
  *(void **)(this + 0x10) = pvVar22;
  *(double **)(this + 0x18) = pdVar21;
  *(ulong *)(this + 0x58) = uVar48;
  *(ulong *)(this + 0x60) = uVar42;
  *(undefined8 *)(this + 0x150) = 100;
  *(undefined8 *)(this + 0x80) = 0x402e000000000000;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0x3fb999999999999a;
  *(undefined8 *)(this + 0x70) = 1;
  *(undefined8 *)(this + 0xb8) = 0x3fd0000000000000;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined2 *)(this + 0x198) = 1;
                    /* try { // try from 00b74cb0 to 00b74cbf has its CatchHandler @ 00b752d0 */
  HACD::HACD::Compute(this,false,false);
  uVar29 = *(uint *)(this + 0x68);
  if (param_3 < uVar29) {
    *(undefined8 *)(this + 0x80) = 0x4037000000000000;
                    /* try { // try from 00b74cd4 to 00b74ce3 has its CatchHandler @ 00b752b0 */
    HACD::HACD::Compute(this,false,false);
    uVar29 = *(uint *)(this + 0x68);
    if (param_3 < uVar29) {
      HACD::HACD::~HACD(this);
      operator_delete(this);
      uVar43 = 0;
      goto joined_r0x00b75248;
    }
  }
  if (uVar29 != 0) {
    uVar42 = 0;
    do {
                    /* try { // try from 00b74d70 to 00b74d7b has its CatchHandler @ 00b752d8 */
      local_74 = HACD::HACD::GetNPointsCH(this,uVar42);
                    /* try { // try from 00b74d80 to 00b74d8b has its CatchHandler @ 00b752dc */
      uVar20 = HACD::HACD::GetNTrianglesCH(this,uVar42);
      uVar47 = (ulong)local_74;
      local_78 = uVar20;
                    /* try { // try from 00b74d9c to 00b74da3 has its CatchHandler @ 00b752e0 */
      puVar23 = (ulong *)operator_new__(uVar47 * 0x18 + 8);
      *puVar23 = uVar47;
                    /* try { // try from 00b74dbc to 00b74ddb has its CatchHandler @ 00b75318 */
      puVar24 = (ulong *)operator_new__((ulong)uVar20 * 0x18 + 8);
      *puVar24 = (ulong)uVar20;
      HACD::HACD::GetCH(this,uVar42,(Vec3 *)(puVar23 + 1),(Vec3 *)(puVar24 + 1));
      operator_delete__(puVar24);
      uVar20 = local_74;
      uVar47 = (ulong)local_74;
                    /* try { // try from 00b74df0 to 00b74df3 has its CatchHandler @ 00b752e4 */
      pfVar46 = (float *)operator_new__((ulong)(local_74 * 3) << 2);
      if (uVar20 != 0) {
        if (uVar20 < 4) {
          uVar32 = 0;
        }
        else {
          uVar33 = uVar47 - 1;
          uVar32 = 0;
          uVar45 = (uVar33 & 0xffffffff) + (uVar33 & 0xffffffff) * 2;
          bVar18 = (uVar45 & 0xffffffff00000000) == 0;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar33;
          bVar19 = SUB168(auVar6 * ZEXT816(0xc),8) == 0;
          uVar39 = (uint)uVar45;
          if ((((((uVar39 != 0xffffffff) && (bVar18)) && (uVar33 >> 0x20 == 0)) &&
               (((uVar39 < 0xfffffffe && (bVar18)) &&
                ((pfVar46 + 1 <= pfVar46 + 1 + uVar33 * 3 &&
                 ((bVar19 && (pfVar46 + 2 <= pfVar46 + 2 + uVar33 * 3)))))))) && (bVar19)) &&
             ((pfVar46 <= pfVar46 + uVar33 * 3 && (bVar19)))) {
            uVar45 = 0;
            uVar32 = uVar47 & 0xfffffffc;
            pdVar36 = (double *)(puVar23 + 1);
            do {
              dVar12 = pdVar36[1];
              dVar15 = pdVar36[2];
              auVar8._8_4_ = SUB84(pdVar36[3],0);
              auVar8._0_8_ = *pdVar36;
              auVar8._12_4_ = (int)((ulong)pdVar36[3] >> 0x20);
              dVar61 = pdVar36[6];
              dVar63 = pdVar36[7];
              dVar65 = pdVar36[8];
              dVar62 = pdVar36[9];
              dVar64 = pdVar36[10];
              dVar66 = pdVar36[0xb];
              uVar33 = uVar45 & 0xfffffffc;
              uVar45 = uVar45 + 0xc;
              auVar11._8_4_ = SUB84(pdVar36[4],0);
              auVar11._0_8_ = dVar12;
              auVar11._12_4_ = (int)((ulong)pdVar36[4] >> 0x20);
              auVar14._8_4_ = SUB84(pdVar36[5],0);
              auVar14._0_8_ = dVar15;
              auVar14._12_4_ = (int)((ulong)pdVar36[5] >> 0x20);
              pfVar46[uVar33] = (float)*pdVar36;
              pfVar46[uVar33 + 1] = (float)dVar12;
              pfVar46[uVar33 + 2] = (float)dVar15;
              pfVar46[uVar33 + 3] = (float)auVar8._8_8_;
              pfVar46[uVar33 + 4] = (float)auVar11._8_8_;
              pfVar46[uVar33 + 5] = (float)auVar14._8_8_;
              pfVar46[uVar33 + 6] = (float)dVar61;
              pfVar46[uVar33 + 7] = (float)dVar63;
              pfVar46[uVar33 + 8] = (float)dVar65;
              pfVar46[uVar33 + 9] = (float)dVar62;
              pfVar46[uVar33 + 10] = (float)dVar64;
              pfVar46[uVar33 + 0xb] = (float)dVar66;
              pdVar36 = pdVar36 + 0xc;
            } while ((ulong)(uVar20 >> 2) * 0xc - uVar45 != 0);
            if (uVar32 == uVar47) goto LAB_00b74f44;
          }
        }
        uVar20 = (int)uVar32 * 3;
        lVar34 = uVar47 - uVar32;
        pdVar36 = (double *)(puVar23 + uVar32 * 3);
        do {
          dVar12 = pdVar36[2];
          uVar39 = uVar20 + 1;
          uVar40 = uVar20 + 2;
          dVar15 = pdVar36[3];
          lVar34 = lVar34 + -1;
          pfVar46[uVar20] = (float)pdVar36[1];
          uVar20 = uVar20 + 3;
          pfVar46[uVar39] = (float)dVar12;
          pfVar46[uVar40] = (float)dVar15;
          pdVar36 = pdVar36 + 3;
        } while (lVar34 != 0);
      }
LAB_00b74f44:
      operator_delete__(puVar23);
      local_88 = (uint *)0x0;
      local_80 = (float *)0x0;
                    /* try { // try from 00b74f54 to 00b74f6b has its CatchHandler @ 00b752e8 */
      ConvexHull3DUtil::createHull(pfVar46,local_74,&local_80,&local_74,&local_88,&local_78);
      operator_delete__(pfVar46);
      uVar39 = local_74;
      uVar45 = (ulong)local_74;
                    /* try { // try from 00b74f80 to 00b74f83 has its CatchHandler @ 00b752ec */
      puVar25 = (undefined8 *)operator_new__(uVar45 * 0xc);
      uVar20 = local_78;
      uVar47 = (ulong)local_78;
                    /* try { // try from 00b74f94 to 00b74f97 has its CatchHandler @ 00b752f0 */
      pBVar26 = (BrepTriangle *)operator_new__(uVar47 * 0x14);
      if (uVar39 != 0) {
        if (uVar39 < 4) {
LAB_00b74fac:
          uVar33 = 0;
        }
        else {
          uVar38 = uVar45 - 1;
          uVar33 = 0;
          uVar32 = (uVar38 & 0xffffffff) + (uVar38 & 0xffffffff) * 2;
          bVar18 = (uVar32 & 0xffffffff00000000) == 0;
          uVar40 = (uint)uVar32;
          if ((((uVar40 != 0xffffffff) && (bVar18)) && (uVar38 >> 0x20 == 0)) &&
             ((uVar40 < 0xfffffffe && (bVar18)))) {
            if ((puVar25 < local_80 + uVar45 * 3) &&
               (local_80 < (float *)((long)puVar25 + uVar45 * 0xc))) goto LAB_00b74fac;
            uVar32 = 0;
            uVar33 = uVar45 & 0xfffffffc;
            puVar41 = puVar25;
            do {
              uVar38 = uVar32 & 0xfffffffc;
              uVar32 = uVar32 + 0xc;
              puVar2 = (undefined8 *)(local_80 + uVar38);
              uVar13 = puVar2[2];
              uVar10 = puVar2[5];
              uVar9 = puVar2[4];
              uVar17 = puVar2[1];
              uVar16 = *puVar2;
              puVar41[3] = puVar2[3];
              puVar41[2] = uVar13;
              puVar41[5] = uVar10;
              puVar41[4] = uVar9;
              puVar41[1] = uVar17;
              *puVar41 = uVar16;
              puVar41 = puVar41 + 6;
            } while ((ulong)(uVar39 >> 2) * 0xc - uVar32 != 0);
            if (uVar33 == uVar45) goto LAB_00b74ff4;
          }
        }
        uVar39 = (int)uVar33 * 3;
        lVar34 = uVar45 - uVar33;
        pfVar46 = (float *)((long)puVar25 + uVar33 * 0xc + 4);
        do {
          uVar40 = uVar39 + 1;
          uVar1 = uVar39 + 2;
          uVar45 = (ulong)uVar39;
          uVar39 = uVar39 + 3;
          lVar34 = lVar34 + -1;
          fVar52 = local_80[uVar40];
          fVar57 = local_80[uVar1];
          pfVar46[-1] = local_80[uVar45];
          *pfVar46 = fVar52;
          pfVar46[1] = fVar57;
          pfVar46 = pfVar46 + 3;
        } while (lVar34 != 0);
      }
LAB_00b74ff4:
      if (uVar20 != 0) {
        uVar45 = 0;
        puVar37 = (undefined4 *)(pBVar26 + 0x10);
        do {
          iVar28 = (int)uVar45;
          uVar20 = local_88[uVar45 & 0xffffffff];
          uVar45 = uVar45 + 3;
          uVar39 = local_88[iVar28 + 1];
          uVar40 = local_88[iVar28 + 2];
          *(undefined2 *)(puVar37 + -1) = 0;
          *puVar37 = 0;
          local_70 = CONCAT22((short)uVar39,(short)uVar20);
          *(short *)(puVar37 + -3) = (short)uVar40;
          *(undefined4 *)((long)puVar37 + -10) = 0xffffffff;
          *(undefined2 *)((long)puVar37 + -6) = 0xffff;
          puVar37[-4] = local_70;
          puVar37 = puVar37 + 5;
        } while (uVar47 * 3 != uVar45);
      }
      if (local_80 != (float *)0x0) {
        operator_delete__(local_80);
      }
      if (local_88 != (uint *)0x0) {
        operator_delete__(local_88);
      }
                    /* try { // try from 00b75070 to 00b75077 has its CatchHandler @ 00b75308 */
      this_00 = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b75080 to 00b750a7 has its CatchHandler @ 00b752f4 */
      Brep::Brep(this_00,(ushort)local_74,(Vector3 *)puVar25,0,(BrepWedge *)0x0,local_78,pBVar26,
                 true,true,(Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
      ppBVar3 = *(Brep ***)(param_2 + 8);
      if (ppBVar3 == *(Brep ***)(param_2 + 0x10)) {
        __src = *(void **)param_2;
        uVar45 = (long)ppBVar3 - (long)__src;
        uVar47 = ((long)uVar45 >> 3) + 1;
        if (uVar47 >> 0x3d != 0) {
                    /* try { // try from 00b75298 to 00b752ab has its CatchHandler @ 00b752d4 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar47 <= (ulong)((long)uVar45 >> 2)) {
          uVar47 = (long)uVar45 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar45) {
          uVar47 = 0x1fffffffffffffff;
        }
        if (uVar47 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar47 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b750fc to 00b750ff has its CatchHandler @ 00b75308 */
          __dest = operator_new(uVar47 << 3);
        }
        ppBVar3 = (Brep **)((long)__dest + ((long)uVar45 >> 3) * 8);
        *ppBVar3 = this_00;
        if (0 < (long)uVar45) {
          memcpy(__dest,__src,uVar45);
        }
        *(void **)param_2 = __dest;
        *(Brep ***)(param_2 + 8) = ppBVar3 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar47 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *ppBVar3 = this_00;
        *(Brep ***)(param_2 + 8) = ppBVar3 + 1;
      }
      operator_delete__(puVar25);
      operator_delete__(pBVar26);
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar29);
  }
  if (iVar27 != 0) {
    uVar42 = 0;
    lVar34 = *(long *)(this + 0x180);
    do {
                    /* try { // try from 00b75218 to 00b75223 has its CatchHandler @ 00b75304 */
      Brep::setGroupId(param_1,(uint)uVar42,1 << (ulong)(*(uint *)(lVar34 + uVar42 * 8) & 0x1f));
      uVar42 = uVar42 + 1;
    } while (uVar48 != uVar42);
  }
  HACD::HACD::~HACD(this);
  operator_delete(this);
  uVar43 = 1;
joined_r0x00b75248:
  if (pvVar22 != (void *)0x0) {
    operator_delete(pvVar22);
  }
  if (pdVar21 != (double *)0x0) {
    operator_delete(pdVar21);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar43;
}


