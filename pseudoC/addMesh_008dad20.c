// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMesh
// Entry Point: 008dad20
// Size: 2144 bytes
// Signature: undefined __thiscall addMesh(ParticleSystemManager * this, IndexedTriangleSet * param_1)


/* ParticleSystemManager::addMesh(IndexedTriangleSet*) */

MeshData * __thiscall
ParticleSystemManager::addMesh(ParticleSystemManager *this,IndexedTriangleSet *param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  ushort *puVar22;
  void *pvVar23;
  InstancedGeometryManager *this_00;
  MeshData *pMVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined2 *puVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  int iVar46;
  int iVar47;
  float fVar48;
  undefined auVar44 [16];
  undefined auVar45 [16];
  int iVar49;
  float fVar50;
  float fVar51;
  int iVar52;
  float fVar54;
  int iVar55;
  float fVar56;
  int iVar57;
  float fVar58;
  undefined auVar53 [16];
  int iVar59;
  float fVar60;
  uint uVar61;
  int iVar63;
  int iVar64;
  undefined auVar62 [16];
  int iVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  MeshData *local_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((((param_1 == (IndexedTriangleSet *)0x0) ||
       (uVar13 = IndexedTriangleSet::getNumSubsets(), 1 < uVar13)) ||
      (uVar16 = IndexedTriangleSet::is16Bit(), (uVar16 & 1) == 0)) ||
     ((lVar17 = TriangleSet::getTexCoords((TriangleSet *)param_1,0), lVar17 == 0 ||
      (lVar17 = TriangleSet::getNormals(), lVar17 == 0)))) {
    local_78 = *(MeshData **)this;
    goto LAB_008dae18;
  }
  IndexedTriangleSet::optimize();
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 8;
  CRC64::initTable();
  local_70 = -1;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_70);
  lVar17 = local_70;
  uVar16 = IndexedTriangleSet::getNumIndices();
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
     iVar15 != 0)) {
                    /* try { // try from 008db544 to 008db54f has its CatchHandler @ 008db580 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  uVar1 = lVar17 + (uVar16 & 0xffffffff) / 3;
  uVar16 = InstancedGeometryManager::findUserChecksum
                     ((InstancedGeometryManager *)
                      InstancedGeometryManager::getInstance()::s_instance,uVar1,&local_78);
  if ((uVar16 & 1) != 0) goto LAB_008dae18;
  uVar16 = TriangleSet::getNumVertices();
  uVar13 = (uint)uVar16;
  pfVar18 = (float *)TriangleSet::getPositions();
  if (uVar13 == 0) {
    bVar12 = false;
    fVar38 = 1.0;
  }
  else {
    uVar25 = 0;
    bVar12 = false;
    fVar38 = 1.0;
    do {
      iVar15 = (int)uVar25;
      uVar27 = uVar25 & 0xffffffff;
      uVar25 = uVar25 + 3;
      fVar39 = ABS(pfVar18[iVar15 + 2]);
      bVar12 = (bool)(0.001 < fVar39 | bVar12);
      if (fVar38 < ABS(pfVar18[uVar27])) {
        fVar38 = ABS(pfVar18[uVar27]);
      }
      if (fVar38 < ABS(pfVar18[iVar15 + 1])) {
        fVar38 = ABS(pfVar18[iVar15 + 1]);
      }
      if (fVar38 < fVar39) {
        fVar38 = fVar39;
      }
    } while ((uVar16 & 0xffffffff) + (uVar16 & 0xffffffff) * 2 != uVar25);
  }
  fVar38 = 32767.0 / fVar38;
  pfVar19 = (float *)TriangleSet::getTexCoords((TriangleSet *)param_1,0);
  pfVar20 = (float *)TriangleSet::getNormals();
  pfVar21 = (float *)operator_new__((ulong)(uVar13 << 2) << 2);
  uVar25 = IndexedTriangleSet::getNumIndices();
  puVar22 = (ushort *)IndexedTriangleSet::getIndices16();
  MathUtil::tangentArray
            (uVar13,pfVar18,pfVar20,pfVar19,(uint)((uVar25 & 0xffffffff) / 3),puVar22,pfVar21);
  uVar25 = uVar16 & 0xffffffff;
  if (bVar12) {
    pvVar23 = operator_new__(uVar25 * 0x14);
    if (uVar13 != 0) {
      if (uVar13 < 4) {
        uVar26 = 0;
      }
      else {
        uVar28 = uVar25 - 1;
        uVar26 = 0;
        uVar27 = (uVar28 & 0xffffffff) + (uVar28 & 0xffffffff) * 2;
        bVar12 = (uVar27 & 0xffffffff00000000) == 0;
        uVar14 = (uint)uVar27;
        if (((((uVar14 != 0xffffffff) && (bVar12)) && (uVar28 >> 0x20 == 0)) &&
            ((uVar14 < 0xfffffffe && (bVar12)))) && (uVar28 >> 0x1e == 0)) {
          uVar28 = 0;
          uVar27 = 0;
          uVar26 = uVar16 & 0xfffffffc;
          uVar16 = 0;
          puVar29 = (undefined2 *)((long)pvVar23 + 0x28);
          do {
            pfVar2 = pfVar18 + (uVar27 & 0xfffffffc);
            pfVar3 = pfVar20 + (uVar27 & 0xfffffffc);
            uVar27 = uVar27 + 0xc;
            fVar39 = *pfVar2;
            fVar50 = pfVar2[1];
            fVar51 = pfVar2[2];
            fVar40 = pfVar2[3];
            fVar60 = pfVar2[4];
            fVar54 = pfVar2[5];
            fVar41 = pfVar2[6];
            fVar68 = pfVar2[7];
            fVar56 = pfVar2[8];
            fVar42 = pfVar2[9];
            fVar48 = pfVar2[10];
            fVar58 = pfVar2[0xb];
            puVar29[-0x11] = 0x7fff;
            puVar29[-7] = 0x7fff;
            puVar29[3] = 0x7fff;
            puVar29[0xd] = 0x7fff;
            puVar29[-10] = (short)(int)(fVar40 * fVar38);
            puVar29[1] = (short)(int)(fVar68 * fVar38);
            puVar29[10] = (short)(int)(fVar42 * fVar38);
            puVar29[-9] = (short)(int)(fVar60 * fVar38);
            puVar29[0xb] = (short)(int)(fVar48 * fVar38);
            pfVar2 = pfVar19 + (uVar16 & 0xfffffff8);
            puVar29[-0x14] = (short)(int)(fVar39 * fVar38);
            *puVar29 = (short)(int)(fVar41 * fVar38);
            uVar16 = uVar16 + 8;
            puVar29[-0x13] = (short)(int)(fVar50 * fVar38);
            puVar29[-0x12] = (short)(int)(fVar51 * fVar38);
            puVar29[-8] = (short)(int)(fVar54 * fVar38);
            puVar29[2] = (short)(int)(fVar56 * fVar38);
            puVar29[0xc] = (short)(int)(fVar58 * fVar38);
            pfVar4 = pfVar21 + (uVar28 & 0xfffffff0);
            uVar28 = uVar28 + 0x10;
            auVar53._0_4_ = *pfVar2 * 0.125 * 32767.0;
            auVar53._4_4_ = pfVar2[2] * 0.125 * 32767.0;
            auVar53._8_4_ = pfVar2[4] * 0.125 * 32767.0;
            auVar53._12_4_ = pfVar2[6] * 0.125 * 32767.0;
            fVar39 = pfVar2[1] * 0.125 * 32767.0;
            fVar40 = pfVar2[3] * 0.125 * 32767.0;
            fVar41 = pfVar2[5] * 0.125 * 32767.0;
            fVar42 = pfVar2[7] * 0.125 * 32767.0;
            auVar44 = NEON_fcmge(auVar53,0,4);
            auVar62[4] = SUB41(fVar40,0);
            auVar62._0_4_ = fVar39;
            auVar62[5] = (char)((uint)fVar40 >> 8);
            auVar62[6] = (char)((uint)fVar40 >> 0x10);
            auVar62[7] = (char)((uint)fVar40 >> 0x18);
            auVar62[8] = SUB41(fVar41,0);
            auVar62[9] = (char)((uint)fVar41 >> 8);
            auVar62[10] = (char)((uint)fVar41 >> 0x10);
            auVar62[11] = (char)((uint)fVar41 >> 0x18);
            auVar62[12] = SUB41(fVar42,0);
            auVar62[13] = (char)((uint)fVar42 >> 8);
            auVar62[14] = (char)((uint)fVar42 >> 0x10);
            auVar62[15] = (char)((uint)fVar42 >> 0x18);
            auVar62 = NEON_fcmge(auVar62,0,4);
            auVar45._8_4_ = 0xbf000000;
            auVar45._0_8_ = 0xbf000000bf000000;
            auVar45._12_4_ = 0xbf000000;
            auVar6._8_4_ = 0x3f000000;
            auVar6._0_8_ = 0x3f0000003f000000;
            auVar6._12_4_ = 0x3f000000;
            auVar45 = NEON_bsl(auVar44,auVar6,auVar45,1);
            fVar68 = *pfVar4;
            fVar56 = pfVar4[1];
            fVar69 = pfVar4[2];
            fVar50 = pfVar4[3];
            fVar48 = pfVar4[4];
            fVar58 = pfVar4[5];
            fVar70 = pfVar4[6];
            fVar60 = pfVar4[7];
            fVar51 = pfVar4[8];
            fVar66 = pfVar4[9];
            fVar71 = pfVar4[10];
            fVar73 = pfVar4[0xb];
            fVar54 = pfVar4[0xc];
            fVar67 = pfVar4[0xd];
            fVar72 = pfVar4[0xe];
            fVar74 = pfVar4[0xf];
            auVar44._8_4_ = 0xbf000000;
            auVar44._0_8_ = 0xbf000000bf000000;
            auVar44._12_4_ = 0xbf000000;
            auVar7._8_4_ = 0x3f000000;
            auVar7._0_8_ = 0x3f0000003f000000;
            auVar7._12_4_ = 0x3f000000;
            auVar44 = NEON_bsl(auVar62,auVar7,auVar44,1);
            puVar29[-4] = (short)(int)(auVar53._4_4_ + auVar45._4_4_);
            puVar29[6] = (short)(int)(auVar53._8_4_ + auVar45._8_4_);
            puVar29[-0xe] = (short)(int)(auVar53._0_4_ + auVar45._0_4_);
            puVar29[0x10] = (short)(int)(auVar53._12_4_ + auVar45._12_4_);
            iVar43 = (int)(fVar69 * 127.5 + 127.5);
            iVar46 = (int)(fVar70 * 127.5 + 127.5);
            iVar47 = (int)(fVar71 * 127.5 + 127.5);
            iVar49 = (int)(fVar72 * 127.5 + 127.5);
            puVar29[-0xd] = (short)(int)(fVar39 + auVar44._0_4_);
            puVar29[-3] = (short)(int)(fVar40 + auVar44._4_4_);
            puVar29[7] = (short)(int)(fVar41 + auVar44._8_4_);
            puVar29[0x11] = (short)(int)(fVar42 + auVar44._12_4_);
            iVar15 = (int)(fVar68 * 127.5 + 127.5);
            iVar9 = (int)(fVar48 * 127.5 + 127.5);
            iVar10 = (int)(fVar51 * 127.5 + 127.5);
            iVar11 = (int)(fVar54 * 127.5 + 127.5);
            uVar14 = (int)(fVar56 * 127.5 + 127.5) & 0xffff;
            uVar32 = (int)(fVar58 * 127.5 + 127.5) & 0xffff;
            uVar34 = (int)(fVar66 * 127.5 + 127.5) & 0xffff;
            uVar36 = (int)(fVar67 * 127.5 + 127.5) & 0xffff;
            iVar63 = (int)(pfVar3[3] * 127.5 + 127.5);
            iVar64 = (int)(pfVar3[6] * 127.5 + 127.5);
            iVar65 = (int)(pfVar3[9] * 127.5 + 127.5);
            iVar52 = (int)(pfVar3[2] * 127.5 + 127.5);
            iVar55 = (int)(pfVar3[5] * 127.5 + 127.5);
            iVar57 = (int)(pfVar3[8] * 127.5 + 127.5);
            iVar59 = (int)(pfVar3[0xb] * 127.5 + 127.5);
            uVar61 = (int)(*pfVar3 * 127.5 + 127.5) & 0xffff;
            uVar31 = (int)(pfVar3[1] * 127.5 + 127.5) & 0xffff;
            uVar33 = (int)(pfVar3[4] * 127.5 + 127.5) & 0xffff;
            uVar35 = (int)(pfVar3[7] * 127.5 + 127.5) & 0xffff;
            uVar37 = (int)(pfVar3[10] * 127.5 + 127.5) & 0xffff;
            *(uint *)(puVar29 + -0xc) =
                 CONCAT13((byte)((uint)iVar43 >> 8) | (byte)(int)(fVar50 * 127.5 + 127.5),
                          CONCAT12((byte)(uVar14 >> 8) | (byte)iVar43,
                                   CONCAT11((byte)uVar14 | (byte)((uint)iVar15 >> 8),(char)iVar15)))
            ;
            *(uint *)(puVar29 + -2) =
                 CONCAT13((byte)((uint)iVar46 >> 8) | (byte)(int)(fVar60 * 127.5 + 127.5),
                          CONCAT12((byte)(uVar32 >> 8) | (byte)iVar46,
                                   CONCAT11((byte)uVar32 | (byte)((uint)iVar9 >> 8),(char)iVar9)));
            *(uint *)(puVar29 + 0x12) =
                 CONCAT13((byte)((uint)iVar49 >> 8) | (byte)(int)(fVar74 * 127.5 + 127.5),
                          CONCAT12((byte)(uVar36 >> 8) | (byte)iVar49,
                                   CONCAT11((byte)uVar36 | (byte)((uint)iVar11 >> 8),(char)iVar11)))
            ;
            *(uint *)(puVar29 + 8) =
                 CONCAT13((byte)((uint)iVar47 >> 8) | (byte)(int)(fVar73 * 127.5 + 127.5),
                          CONCAT12((byte)(uVar34 >> 8) | (byte)iVar47,
                                   CONCAT11((byte)uVar34 | (byte)((uint)iVar10 >> 8),(char)iVar10)))
            ;
            *(char *)(puVar29 + -0x10) = (char)uVar61;
            *(byte *)((long)puVar29 + -0x1f) = (byte)uVar31 | (byte)(uVar61 >> 8);
            *(byte *)(puVar29 + -0xf) = (byte)(uVar31 >> 8) | (byte)iVar52;
            *(char *)((long)puVar29 + -0x1d) = (char)((uint)iVar52 >> 8);
            *(char *)(puVar29 + -4) = (char)iVar63;
            *(byte *)((long)puVar29 + -7) = (byte)uVar33 | (byte)((uint)iVar63 >> 8);
            *(byte *)(puVar29 + -3) = (byte)(uVar33 >> 8) | (byte)iVar55;
            *(char *)((long)puVar29 + -5) = (char)((uint)iVar55 >> 8);
            *(char *)(puVar29 + 8) = (char)iVar64;
            *(byte *)((long)puVar29 + 0x11) = (byte)uVar35 | (byte)((uint)iVar64 >> 8);
            *(byte *)(puVar29 + 9) = (byte)(uVar35 >> 8) | (byte)iVar57;
            *(char *)((long)puVar29 + 0x13) = (char)((uint)iVar57 >> 8);
            *(char *)(puVar29 + 0x14) = (char)iVar65;
            *(byte *)((long)puVar29 + 0x29) = (byte)uVar37 | (byte)((uint)iVar65 >> 8);
            *(byte *)(puVar29 + 0x15) = (byte)(uVar37 >> 8) | (byte)iVar59;
            *(char *)((long)puVar29 + 0x2b) = (char)((uint)iVar59 >> 8);
            puVar29 = puVar29 + 0x28;
          } while ((uVar25 >> 2) * 0xc - uVar27 != 0);
          if (uVar26 == uVar25) goto LAB_008db0d0;
        }
      }
      uVar27 = uVar26 << 2;
      uVar16 = uVar26 << 1;
      lVar17 = uVar25 - uVar26;
      uVar14 = (int)uVar26 * 3;
      puVar30 = (uint *)((long)pvVar23 + uVar26 * 0x14 + 8);
      do {
        uVar31 = uVar14 + 1;
        lVar17 = lVar17 + -1;
        pfVar2 = pfVar20 + uVar14;
        *(short *)(puVar30 + -2) = (short)(int)(fVar38 * pfVar18[uVar14]);
        uVar32 = uVar14 + 2;
        uVar14 = uVar14 + 3;
        *(short *)((long)puVar30 + -6) = (short)(int)(fVar38 * pfVar18[uVar31]);
        uVar25 = uVar16 & 0xfffffffe;
        fVar39 = pfVar18[uVar32];
        *(undefined2 *)((long)puVar30 + -2) = 0x7fff;
        uVar16 = uVar16 + 2;
        *(short *)(puVar30 + -1) = (short)(int)(fVar38 * fVar39);
        uVar26 = uVar27 & 0xfffffffc;
        uVar27 = uVar27 + 4;
        pfVar3 = pfVar21 + uVar26;
        fVar50 = pfVar3[2];
        fVar60 = pfVar3[3];
        fVar40 = (float)*(undefined8 *)(pfVar19 + uVar25) * 0.125 * 32767.0;
        fVar41 = (float)((ulong)*(undefined8 *)(pfVar19 + uVar25) >> 0x20) * 0.125 * 32767.0;
        uVar8 = NEON_fcmge(CONCAT44(fVar41,fVar40),0,4);
        uVar8 = NEON_bsl(uVar8,0x3f0000003f000000,0xbf000000bf000000,1);
        fVar39 = *pfVar3;
        fVar42 = pfVar3[1];
        *(short *)(puVar30 + 1) = (short)(int)(fVar40 + (float)uVar8);
        *(short *)((long)puVar30 + 6) = (short)(int)(fVar41 + (float)((ulong)uVar8 >> 0x20));
        fVar39 = (float)NEON_fmadd(fVar39,0x42ff0000,0x42ff0000);
        fVar41 = (float)NEON_fmadd(fVar42,0x42ff0000,0x42ff0000);
        fVar42 = (float)NEON_fmadd(fVar50,0x42ff0000,0x42ff0000);
        fVar50 = (float)NEON_fmadd(fVar60,0x42ff0000,0x42ff0000);
        fVar60 = (float)NEON_fmadd(*pfVar2,0x42ff0000,0x42ff0000);
        fVar68 = (float)NEON_fmadd(pfVar2[1],0x42ff0000,0x42ff0000);
        fVar40 = (float)NEON_fmadd(pfVar2[2],0x42ff0000,0x42ff0000);
        puVar30[2] = (int)fVar39 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                     ((int)fVar42 & 0xffU) << 0x10 | (int)fVar50 << 0x18;
        *puVar30 = (int)fVar60 & 0xff000000U |
                   (int)fVar60 & 0xffU | ((int)fVar68 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10;
        puVar30 = puVar30 + 5;
      } while (lVar17 != 0);
    }
LAB_008db0d0:
    this_00 = (InstancedGeometryManager *)InstancedGeometryManager::getInstance();
    uVar14 = IndexedTriangleSet::getNumIndices();
    puVar22 = (ushort *)IndexedTriangleSet::getIndices16();
    uVar31 = 0x14;
  }
  else {
    pvVar23 = operator_new__(uVar25 << 4);
    if (uVar13 != 0) {
      uVar16 = 0;
      puVar29 = (undefined2 *)((long)pvVar23 + 8);
      iVar15 = 3;
      uVar14 = 0;
      do {
        pfVar2 = pfVar20 + uVar14;
        puVar29[-4] = (short)(int)(fVar38 * pfVar18[uVar14]);
        uVar27 = uVar16 & 0xfffffffe;
        uVar16 = uVar16 + 2;
        puVar29[-3] = (short)(int)(fVar38 * pfVar18[uVar14 + 1]);
        uVar31 = iVar15 - 3;
        iVar15 = iVar15 + 4;
        pfVar3 = pfVar21 + ((ulong)uVar31 & 0xfffffffc);
        fVar50 = pfVar3[2];
        fVar60 = pfVar3[3];
        fVar40 = (float)*(undefined8 *)(pfVar19 + uVar27) * 0.125 * 32767.0;
        fVar41 = (float)((ulong)*(undefined8 *)(pfVar19 + uVar27) >> 0x20) * 0.125 * 32767.0;
        uVar8 = NEON_fcmge(CONCAT44(fVar41,fVar40),0,4);
        uVar8 = NEON_bsl(uVar8,0x3f0000003f000000,0xbf000000bf000000,1);
        fVar39 = *pfVar3;
        fVar42 = pfVar3[1];
        *puVar29 = (short)(int)(fVar40 + (float)uVar8);
        puVar29[1] = (short)(int)(fVar41 + (float)((ulong)uVar8 >> 0x20));
        fVar39 = (float)NEON_fmadd(fVar39,0x42ff0000,0x42ff0000);
        fVar41 = (float)NEON_fmadd(fVar42,0x42ff0000,0x42ff0000);
        fVar42 = (float)NEON_fmadd(fVar50,0x42ff0000,0x42ff0000);
        fVar50 = (float)NEON_fmadd(fVar60,0x42ff0000,0x42ff0000);
        fVar60 = (float)NEON_fmadd(*pfVar2,0x42ff0000,0x42ff0000);
        fVar68 = (float)NEON_fmadd(pfVar2[1],0x42ff0000,0x42ff0000);
        fVar40 = (float)NEON_fmadd(pfVar2[2],0x42ff0000,0x42ff0000);
        *(uint *)(puVar29 + 2) =
             (int)fVar39 & 0xffU | ((int)fVar41 & 0xffU) << 8 | ((int)fVar42 & 0xffU) << 0x10 |
             (int)fVar50 << 0x18;
        *(uint *)(puVar29 + -2) =
             (int)fVar60 & 0xff000000U |
             (int)fVar60 & 0xffU | ((int)fVar68 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10;
        puVar29 = puVar29 + 8;
        uVar14 = uVar14 + 3;
      } while (uVar25 * 2 - uVar16 != 0);
    }
    this_00 = (InstancedGeometryManager *)InstancedGeometryManager::getInstance();
    uVar14 = IndexedTriangleSet::getNumIndices();
    puVar22 = (ushort *)IndexedTriangleSet::getIndices16();
    uVar31 = 0x10;
  }
  pMVar24 = (MeshData *)
            InstancedGeometryManager::registerInstancedMesh
                      (this_00,uVar31,uVar13,pvVar23,uVar14,puVar22,false,uVar1);
  operator_delete__(pvVar23);
  operator_delete__(pfVar21);
  local_78 = pMVar24;
LAB_008dae18:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


