// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: triangulate3d
// Entry Point: 00ec4834
// Size: 404 bytes
// Signature: undefined __thiscall triangulate3d(Triangulate * this, uint param_1, float * param_2, uint param_3, uint * param_4, bool param_5, float param_6)


/* FLOAT_MATH::Triangulate::triangulate3d(unsigned int, float const*, unsigned int, unsigned int&,
   bool, float) */

void * __thiscall
FLOAT_MATH::Triangulate::triangulate3d
          (Triangulate *this,uint param_1,float *param_2,uint param_3,uint *param_4,bool param_5,
          float param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double *__ptr;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  void **ppvVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  ppvVar14 = (void **)(this + 8);
  uVar13 = (ulong)param_1;
  free(*ppvVar14);
  free(*(void **)(this + 0x10));
  *ppvVar14 = (void *)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  __ptr = (double *)malloc(uVar13 * 0x18);
  if (param_1 != 0) {
    uVar6 = 0;
    pdVar9 = __ptr;
    do {
      uVar12 = (ulong)uVar6;
      uVar6 = uVar6 + param_3;
      uVar13 = uVar13 - 1;
      uVar1 = *(undefined8 *)((long)param_2 + uVar12);
      fVar16 = *(float *)((undefined8 *)((long)param_2 + uVar12) + 1);
      pdVar9[1] = (double)(float)((ulong)uVar1 >> 0x20);
      *pdVar9 = (double)(float)uVar1;
      pdVar9[2] = (double)fVar16;
      pdVar9 = pdVar9 + 3;
    } while (uVar13 != 0);
  }
  lVar4 = (***(code ***)this)(SUB84((double)param_6,0),this,param_1,__ptr,0x18,param_4,param_5);
  if (lVar4 == 0) goto LAB_00ec499c;
  uVar6 = *param_4 * 9;
  uVar13 = (ulong)uVar6;
  pvVar5 = malloc((ulong)*param_4 * 0x24);
  *ppvVar14 = pvVar5;
  if (uVar6 != 0) {
    if (uVar6 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar13 & 0xfffffff8;
      puVar10 = (undefined8 *)((long)pvVar5 + 0x10);
      pdVar9 = (double *)(lVar4 + 0x20);
      uVar12 = uVar7;
      do {
        dVar15 = pdVar9[-3];
        dVar2 = pdVar9[-4];
        uVar12 = uVar12 - 8;
        dVar17 = pdVar9[1];
        dVar3 = *pdVar9;
        dVar19 = pdVar9[3];
        dVar18 = pdVar9[2];
        puVar10[-1] = CONCAT44((float)pdVar9[-1],(float)pdVar9[-2]);
        puVar10[-2] = CONCAT44((float)dVar15,(float)dVar2);
        puVar10[1] = CONCAT44((float)dVar19,(float)dVar18);
        *puVar10 = CONCAT44((float)dVar17,(float)dVar3);
        puVar10 = puVar10 + 4;
        pdVar9 = pdVar9 + 8;
      } while (uVar12 != 0);
      if (uVar7 == uVar13) goto LAB_00ec4990;
    }
    lVar8 = uVar13 - uVar7;
    pdVar9 = (double *)(lVar4 + uVar7 * 8);
    pfVar11 = (float *)((long)pvVar5 + uVar7 * 4);
    do {
      lVar8 = lVar8 + -1;
      *pfVar11 = (float)*pdVar9;
      pdVar9 = pdVar9 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar8 != 0);
  }
LAB_00ec4990:
  free(*(void **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
LAB_00ec499c:
  free(__ptr);
  return *ppvVar14;
}


