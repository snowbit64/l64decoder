// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawSpherePatch
// Entry Point: 009ad660
// Size: 1072 bytes
// Signature: undefined __thiscall drawSpherePatch(btIDebugDraw * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, btVector3 * param_9, float param_10, bool param_11)


/* btIDebugDraw::drawSpherePatch(btVector3 const&, btVector3 const&, btVector3 const&, float, float,
   float, float, float, btVector3 const&, float, bool) */

void __thiscall
btIDebugDraw::drawSpherePatch
          (btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float param_4
          ,float param_5,float param_6,float param_7,float param_8,btVector3 *param_9,float param_10
          ,bool param_11)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float local_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  undefined8 local_a20;
  undefined8 uStack_a18;
  float local_a10;
  undefined8 local_a0c;
  undefined4 local_a04;
  float local_a00;
  undefined8 local_9fc;
  undefined4 local_9f4;
  undefined8 local_9f0 [148];
  undefined8 auStack_550 [148];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  fVar36 = *(float *)param_2;
  fVar26 = (float)*(undefined8 *)(param_2 + 4);
  fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar24 = param_10 * 0.01745329;
  local_9f4 = 0;
  local_a00 = fVar36 * param_4 + *(float *)param_1;
  local_a04 = 0;
  fVar33 = (float)*(undefined8 *)(param_1 + 4);
  fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  local_a0c = CONCAT44(fVar35 - fVar27 * param_4,fVar33 - fVar26 * param_4);
  local_a10 = *(float *)param_1 - fVar36 * param_4;
  fVar30 = param_5;
  if (param_5 <= -1.570796) {
    fVar30 = fVar24 + -1.570796;
  }
  uVar34 = NEON_rev64(CONCAT44(-fVar27,-fVar36),4);
  local_9fc = CONCAT44(fVar27 * param_4 + fVar35,fVar26 * param_4 + fVar33);
  fVar35 = *(float *)param_3;
  fVar33 = param_6;
  if (1.570796 <= param_6) {
    fVar33 = 1.570796 - fVar24;
  }
  fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar28 = (float)*(undefined8 *)(param_3 + 4);
  bVar1 = fVar33 < fVar30;
  if (bVar1) {
    fVar30 = fVar24 + -1.570796;
    fVar33 = 1.570796 - fVar24;
  }
  iVar9 = (int)((fVar33 - fVar30) / fVar24);
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  fVar22 = 3.141593;
  if (param_7 <= param_8) {
    fVar22 = param_8;
  }
  fVar31 = fVar24 + -3.141593;
  if (param_7 <= param_8) {
    fVar31 = param_7;
  }
  iVar7 = (int)((fVar22 - fVar31) / fVar24);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  lVar11 = (ulong)(iVar7 + 1) * 0x10;
  lVar10 = lVar11 + -0x10;
  puVar2 = auStack_550;
  puVar14 = local_9f0;
  iVar13 = 0;
  do {
    puVar8 = puVar2;
    fVar24 = (float)NEON_fmadd((float)iVar13,(fVar33 - fVar30) / (float)iVar9,fVar30);
    sincosf(fVar24,&fStack_a24,&local_a28);
    fVar24 = fStack_a24 * param_4;
    fVar32 = local_a28 * param_4;
    iVar12 = 0;
    lVar15 = 0;
    do {
      fVar16 = (float)NEON_fmadd((float)iVar12,(fVar22 - fVar31) / (float)iVar7,fVar31);
      sincosf(fVar16,&fStack_a2c,&local_a30);
      uVar18 = *(undefined8 *)param_3;
      puVar2 = (undefined8 *)((long)puVar14 + lVar15);
      fVar19 = *(float *)(param_3 + 8);
      uVar23 = *(undefined8 *)param_1;
      fVar16 = fVar32 * local_a30;
      fVar17 = fVar32 * fStack_a2c;
      uVar25 = *(undefined8 *)param_2;
      fVar20 = *(float *)(param_1 + 8);
      fVar21 = *(float *)(param_2 + 8);
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      *puVar2 = CONCAT44((fVar29 * (float)((ulong)uVar34 >> 0x20) + fVar35 * fVar27) * fVar17 +
                         (float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar18 >> 0x20) * fVar16 +
                         (float)((ulong)uVar25 >> 0x20) * fVar24,
                         (fVar28 * (float)uVar34 + fVar29 * fVar26) * fVar17 +
                         (float)uVar23 + (float)uVar18 * fVar16 + (float)uVar25 * fVar24);
      *(float *)(puVar2 + 1) =
           (fVar35 * -fVar26 + fVar36 * fVar28) * fVar17 + fVar19 * fVar16 + fVar20 +
           fVar24 * fVar21;
      if (iVar13 == 0) {
        if (bVar1 || 1.570796 <= param_6) {
          pfVar6 = &local_a10;
          goto LAB_009ad98c;
        }
      }
      else {
        pfVar6 = (float *)((long)puVar8 + lVar15);
LAB_009ad98c:
        (**(code **)(*(long *)this + 0x20))(this,pfVar6,puVar2,param_9);
      }
      if (lVar15 == 0) {
        uStack_a18 = puVar14[1];
        local_a20 = *puVar14;
      }
      else {
        (**(code **)(*(long *)this + 0x20))(this,(long)puVar14 + lVar15 + -0x10,puVar2,param_9);
      }
      if ((bVar1 || param_5 <= -1.570796) && iVar13 == iVar9) {
        (**(code **)(*(long *)this + 0x20))(this,&local_a00,puVar2,param_9);
      }
      if (param_11) {
        if (param_7 <= param_8 && param_8 - param_7 < 6.283185) {
          if ((iVar13 == 0 || iVar13 == iVar9) &&
             ((puVar5 = (undefined8 *)param_1, lVar15 == 0 || (lVar10 == lVar15))))
          goto LAB_009ad8c8;
        }
        else if (lVar10 == lVar15) {
          puVar5 = &local_a20;
LAB_009ad8c8:
          (**(code **)(*(long *)this + 0x20))(this,puVar5,puVar2,param_9);
        }
      }
      lVar15 = lVar15 + 0x10;
      iVar12 = iVar12 + 1;
    } while (lVar11 != lVar15);
    bVar4 = iVar13 == iVar9;
    puVar2 = puVar14;
    puVar14 = puVar8;
    iVar13 = iVar13 + 1;
    if (bVar4) {
      if (*(long *)(lVar3 + 0x28) == local_b0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


