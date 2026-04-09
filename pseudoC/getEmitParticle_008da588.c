// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEmitParticle
// Entry Point: 008da588
// Size: 924 bytes
// Signature: undefined __thiscall getEmitParticle(IndexedTriangleSetEmitterShape * this, Vector3 * param_1, Vector3 * param_2)


/* IndexedTriangleSetEmitterShape::getEmitParticle(Vector3&, Vector3&) */

undefined8 __thiscall
IndexedTriangleSetEmitterShape::getEmitParticle
          (IndexedTriangleSetEmitterShape *this,Vector3 *param_1,Vector3 *param_2)

{
  int iVar1;
  ushort *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  
  if (*(long *)(this + 8) != 0) {
    if ((*(long *)(*(long *)(this + 8) + 0x170) != 0) &&
       (lVar11 = Geometry::getCollisionProxyMesh(), lVar11 != 0)) {
      Geometry::getCollisionProxyMesh();
      uVar9 = IndexedTriangleSet::getNumIndices();
      if (2 < uVar9) {
        Geometry::getCollisionProxyMesh();
        fVar15 = (float)MathUtil::getRandom();
        fVar31 = *(float *)(this + 0x18);
        uVar9 = IndexedTriangleSet::getNumIndices();
        if ((int)uVar9 < 6) {
          lVar11 = 0;
        }
        else {
          iVar10 = 0;
          iVar14 = uVar9 / 3 - 1;
          do {
            iVar1 = iVar14 + iVar10;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar1 >> 1;
            if (*(float *)(*(long *)(this + 0x10) + (long)iVar1 * 4) < fVar15 * fVar31) {
              iVar10 = iVar1 + 1;
              iVar1 = iVar14;
            }
            iVar14 = iVar1;
          } while (iVar10 < iVar1);
          lVar11 = (long)(iVar10 * 3);
        }
        lVar12 = TriangleSet::getPositions();
        lVar13 = IndexedTriangleSet::getIndices16();
        puVar2 = (ushort *)(lVar13 + lVar11 * 2);
        lVar11 = TriangleSet::getNormals();
        pfVar3 = (float *)(lVar12 + (ulong)*puVar2 * 0xc);
        puVar4 = (undefined4 *)(lVar12 + (ulong)puVar2[1] * 0xc);
        pfVar5 = (float *)(lVar11 + (ulong)*puVar2 * 0xc);
        puVar6 = (undefined4 *)(lVar11 + (ulong)puVar2[1] * 0xc);
        fVar15 = pfVar3[1];
        fVar23 = *pfVar3;
        fVar34 = *pfVar5;
        fVar35 = pfVar5[1];
        fVar31 = pfVar3[2];
        fVar33 = pfVar5[2];
        puVar7 = (undefined4 *)(lVar12 + (ulong)puVar2[2] * 0xc);
        puVar8 = (undefined4 *)(lVar11 + (ulong)puVar2[2] * 0xc);
        uVar24 = *puVar4;
        uVar16 = puVar4[1];
        uVar36 = *puVar6;
        uVar37 = puVar6[1];
        uVar30 = puVar6[2];
        uVar25 = puVar4[2];
        uVar17 = *puVar7;
        uVar26 = puVar7[1];
        uVar18 = puVar7[2];
        uVar19 = puVar8[2];
        uVar32 = *puVar8;
        uVar27 = puVar8[1];
        fVar20 = (float)MathUtil::getRandom();
        fVar20 = SQRT(fVar20);
        fVar21 = (float)MathUtil::getRandom();
        fVar28 = 1.0 - fVar20;
        fVar22 = fVar20 * fVar21;
        lVar11 = *(long *)(this + 8);
        fVar20 = fVar20 * (1.0 - fVar21);
        uVar24 = NEON_fmadd(uVar24,fVar20,fVar23 * fVar28);
        uVar29 = NEON_fmadd(uVar36,fVar20,fVar34 * fVar28);
        uVar37 = NEON_fmadd(uVar37,fVar20,fVar35 * fVar28);
        uVar36 = NEON_fmadd(uVar16,fVar20,fVar15 * fVar28);
        uVar16 = NEON_fmadd(uVar30,fVar20,fVar33 * fVar28);
        uVar25 = NEON_fmadd(uVar25,fVar20,fVar31 * fVar28);
        uVar29 = NEON_fmadd(uVar32,fVar22,uVar29);
        uVar17 = NEON_fmadd(uVar17,fVar22,uVar24);
        fVar31 = (float)NEON_fmadd(uVar26,fVar22,uVar36);
        uVar18 = NEON_fmadd(uVar18,fVar22,uVar25);
        fVar20 = (float)NEON_fmadd(uVar27,fVar22,uVar37);
        uVar19 = NEON_fmadd(uVar19,fVar22,uVar16);
        RawTransformGroup::updateWorldTransformation();
        uVar16 = NEON_fmadd(uVar17,*(undefined4 *)(lVar11 + 0xb8),fVar31 * *(float *)(lVar11 + 200))
        ;
        fVar15 = (float)NEON_fmadd(uVar18,*(undefined4 *)(lVar11 + 0xd8),uVar16);
        *(float *)param_1 = *(float *)(lVar11 + 0xe8) + fVar15;
        uVar16 = NEON_fmadd(uVar17,*(undefined4 *)(lVar11 + 0xbc),fVar31 * *(float *)(lVar11 + 0xcc)
                           );
        fVar15 = (float)NEON_fmadd(uVar18,*(undefined4 *)(lVar11 + 0xdc),uVar16);
        *(float *)(param_1 + 4) = *(float *)(lVar11 + 0xec) + fVar15;
        uVar16 = NEON_fmadd(uVar17,*(undefined4 *)(lVar11 + 0xc0),fVar31 * *(float *)(lVar11 + 0xd0)
                           );
        fVar15 = (float)NEON_fmadd(uVar18,*(undefined4 *)(lVar11 + 0xe0),uVar16);
        *(float *)(param_1 + 8) = *(float *)(lVar11 + 0xf0) + fVar15;
        uVar16 = NEON_fmadd(uVar29,*(undefined4 *)(lVar11 + 0xb8),fVar20 * *(float *)(lVar11 + 200))
        ;
        uVar16 = NEON_fmadd(uVar19,*(undefined4 *)(lVar11 + 0xd8),uVar16);
        *(undefined4 *)param_2 = uVar16;
        uVar16 = NEON_fmadd(uVar29,*(undefined4 *)(lVar11 + 0xbc),fVar20 * *(float *)(lVar11 + 0xcc)
                           );
        uVar16 = NEON_fmadd(uVar19,*(undefined4 *)(lVar11 + 0xdc),uVar16);
        *(undefined4 *)(param_2 + 4) = uVar16;
        uVar16 = NEON_fmadd(uVar29,*(undefined4 *)(lVar11 + 0xc0),fVar20 * *(float *)(lVar11 + 0xd0)
                           );
        uVar16 = NEON_fmadd(uVar19,*(undefined4 *)(lVar11 + 0xe0),uVar16);
        *(undefined4 *)(param_2 + 8) = uVar16;
        return 1;
      }
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 008da8ec to 008da8f7 has its CatchHandler @ 008da924 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Emittershape \'%s\' has been deleted\n",
                       *(undefined8 *)(*(long *)(this + 8) + 8));
  }
  return 0;
}


