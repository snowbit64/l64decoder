// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0087f928
// Size: 1384 bytes
// Signature: undefined __thiscall update(AnimalSteering * this, float param_1)


/* WARNING: Removing unreachable block (ram,0x0087fb14) */
/* WARNING: Removing unreachable block (ram,0x0087fb1c) */
/* WARNING: Removing unreachable block (ram,0x0087fb28) */
/* WARNING: Removing unreachable block (ram,0x0087fb44) */
/* WARNING: Removing unreachable block (ram,0x0087fb5c) */
/* WARNING: Removing unreachable block (ram,0x0087fb68) */
/* WARNING: Removing unreachable block (ram,0x0087fb70) */
/* WARNING: Removing unreachable block (ram,0x0087fb7c) */
/* WARNING: Removing unreachable block (ram,0x0087fba8) */
/* WARNING: Removing unreachable block (ram,0x0087fbb8) */
/* WARNING: Removing unreachable block (ram,0x0087fbcc) */
/* WARNING: Removing unreachable block (ram,0x0087fbd4) */
/* AnimalSteering::update(float) */

void __thiscall AnimalSteering::update(AnimalSteering *this,float param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  size_t sVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_78;
  float fStack_74;
  
  if (*(int *)this == 0) {
    return;
  }
  fVar17 = param_1 * 0.001;
  avoidObstacles(this,fVar17);
  steerToTarget();
  fVar18 = *(float *)(this + 0x34);
  fVar12 = 1.0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  if (*(int *)this == 2) {
    if (fVar18 <= 0.01) {
      puVar2 = *(undefined4 **)(this + 0xa0);
      *(undefined4 *)(this + 0x40) = 0;
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined4 *)this = 0;
      if (puVar2 < *(undefined4 **)(this + 0xa8)) {
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined *)(puVar2 + 3) = 0;
        *puVar2 = 4;
        *(undefined4 **)(this + 0xa0) = puVar2 + 4;
      }
      else {
        pvVar9 = *(void **)(this + 0x98);
        sVar10 = (long)puVar2 - (long)pvVar9;
        uVar11 = ((long)sVar10 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) {
LAB_0087fe8c:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar6 = (long)*(undefined4 **)(this + 0xa8) - (long)pvVar9;
        uVar7 = (long)uVar6 >> 3;
        if (uVar11 <= uVar7) {
          uVar11 = uVar7;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar11 = 0xfffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          if (uVar11 >> 0x3c != 0) {
LAB_0087fe7c:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar3 = operator_new(uVar11 << 4);
        }
        puVar2 = (undefined4 *)((long)pvVar3 + ((long)sVar10 >> 4) * 0x10);
        *puVar2 = 4;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined *)(puVar2 + 3) = 0;
        if (0 < (long)sVar10) {
          memcpy(pvVar3,pvVar9,sVar10);
        }
        *(void **)(this + 0x98) = pvVar3;
        *(undefined4 **)(this + 0xa0) = puVar2 + 4;
        *(void **)(this + 0xa8) = (void *)((long)pvVar3 + uVar11 * 0x10);
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
      }
      fVar12 = *(float *)(this + 0x40);
    }
    else {
      fVar12 = -*(float *)(this + 0x44);
      *(float *)(this + 0x40) = fVar12;
    }
  }
  pfVar1 = (float *)(this + 0x48);
  if (fVar12 <= 0.0) {
    pfVar1 = (float *)(this + 0x4c);
  }
  iVar5 = *(int *)this;
  uVar15 = NEON_fmadd(*(float *)(this + 0x3c) * *(float *)(this + 0x5c),fVar17,
                      *(undefined4 *)(this + 0x38));
  *(undefined4 *)(this + 0x38) = uVar15;
  lVar4 = *(long *)(this + 0x80);
  fVar13 = (float)NEON_fmadd(fVar17 * *pfVar1,fVar12,*(undefined4 *)(this + 0x34));
  fVar16 = *(float *)(this + 0x54);
  fVar12 = fVar16;
  if (fVar13 <= fVar16) {
    fVar12 = fVar13;
  }
  fVar14 = -fVar16;
  if (-fVar16 <= fVar13) {
    fVar14 = fVar12;
  }
  *(float *)(this + 0x34) = fVar14;
  if ((*(long *)(this + 0x88) != lVar4) && (iVar5 != 2)) {
    uVar11 = 0;
    while( true ) {
      fVar12 = *(float *)(lVar4 + uVar11 * 4);
      if (fVar12 < fVar18 && fVar14 < fVar12) {
        puVar2 = *(undefined4 **)(this + 0xa0);
        if (puVar2 < *(undefined4 **)(this + 0xa8)) {
          puVar2[1] = fVar12;
          puVar2[2] = 0;
          *(undefined *)(puVar2 + 3) = 0;
          *puVar2 = 1;
          *(undefined4 **)(this + 0xa0) = puVar2 + 4;
        }
        else {
          pvVar9 = *(void **)(this + 0x98);
          sVar10 = (long)puVar2 - (long)pvVar9;
          uVar6 = ((long)sVar10 >> 4) + 1;
          if (uVar6 >> 0x3c != 0) goto LAB_0087fe8c;
          uVar7 = (long)*(undefined4 **)(this + 0xa8) - (long)pvVar9;
          uVar8 = (long)uVar7 >> 3;
          if (uVar6 <= uVar8) {
            uVar6 = uVar8;
          }
          if (0x7fffffffffffffef < uVar7) {
            uVar6 = 0xfffffffffffffff;
          }
          if (uVar6 >> 0x3c != 0) goto LAB_0087fe7c;
          pvVar3 = operator_new(uVar6 * 0x10);
          puVar2 = (undefined4 *)((long)pvVar3 + ((long)sVar10 >> 4) * 0x10);
          puVar2[1] = fVar12;
          *puVar2 = 1;
          puVar2[2] = 0;
          *(undefined *)(puVar2 + 3) = 0;
          if (0 < (long)sVar10) {
            memcpy(pvVar3,pvVar9,sVar10);
          }
          *(void **)(this + 0x98) = pvVar3;
          *(undefined4 **)(this + 0xa0) = puVar2 + 4;
          *(void **)(this + 0xa8) = (void *)((long)pvVar3 + uVar6 * 0x10);
          if (pvVar9 != (void *)0x0) {
            operator_delete(pvVar9);
          }
        }
        lVar4 = *(long *)(this + 0x80);
      }
      uVar11 = (ulong)((int)uVar11 + 1);
      if ((ulong)(*(long *)(this + 0x88) - lVar4 >> 2) <= uVar11) break;
      fVar14 = *(float *)(this + 0x34);
    }
    iVar5 = *(int *)this;
  }
  if (iVar5 == 2) {
    fVar13 = *(float *)(this + 0x38);
  }
  else {
    fVar12 = *(float *)(this + 0x34);
    if ((0.001 <= ABS(fVar12)) && (fVar18 = *(float *)(this + 0x6c), 0.001 <= fVar18)) {
      fVar13 = *(float *)(this + 0x38);
      if ((fVar12 <= 0.0) || (0.0 <= fVar13)) {
        fVar16 = 1.0;
        if ((fVar12 < 0.0) && (fVar16 = 1.0, 0.0 < fVar13)) goto LAB_0087fe50;
      }
      else {
LAB_0087fe50:
        fVar16 = -1.0;
      }
      if (ABS(fVar13 / fVar12) <= fVar18) {
        fVar16 = fVar13 / (fVar12 * fVar18);
        *(float *)(this + 100) = fVar16;
      }
      else {
        fVar13 = fVar12 * fVar18 * fVar16;
        *(float *)(this + 100) = fVar16;
        *(float *)(this + 0x38) = fVar13;
      }
      goto LAB_0087fd28;
    }
    fVar13 = 0.0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  fVar16 = 0.0;
  *(undefined4 *)(this + 100) = 0;
LAB_0087fd28:
  fVar12 = (float)NEON_fmadd(fVar13,fVar17,*(undefined4 *)(this + 0x2c));
  uVar15 = NEON_fmadd(fVar16 - *(float *)(this + 0x68),0x3e4ccccd,*(float *)(this + 0x68));
  *(undefined4 *)(this + 0x68) = uVar15;
  for (; fVar12 < 0.0; fVar12 = fVar12 + 6.283185) {
  }
  for (; 6.283185 < fVar12; fVar12 = fVar12 + -6.283185) {
  }
  *(float *)(this + 0x2c) = fVar12;
  sincosf(fVar12,&fStack_74,&local_78);
  fVar16 = (float)NEON_fnmsub(local_78,0,fStack_74);
  fVar12 = (float)NEON_fmadd(fStack_74,0,local_78);
  fVar18 = fVar16 * *(float *)(this + 0x34);
  fVar13 = fVar12 * *(float *)(this + 0x34);
  *(float *)(this + 0xc) = fVar16;
  *(float *)(this + 0x10) = fVar12;
  *(float *)(this + 0x14) = fVar18;
  *(float *)(this + 0x18) = fVar13;
  *(float *)(this + 4) = fVar17 * fVar18 + *(float *)(this + 4);
  *(float *)(this + 8) = fVar17 * fVar13 + *(float *)(this + 8);
  return;
}


