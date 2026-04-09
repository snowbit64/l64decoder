// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastClipTest
// Entry Point: 0098b564
// Size: 344 bytes
// Signature: undefined __thiscall raycastClipTest(PlayerCenteredCollisionHeightmap * this, Vector3 * param_1, Vector3 * param_2, float param_3)


/* PlayerCenteredCollisionHeightmap::raycastClipTest(Vector3 const&, Vector3 const&, float) */

void __thiscall
PlayerCenteredCollisionHeightmap::raycastClipTest
          (PlayerCenteredCollisionHeightmap *this,Vector3 *param_1,Vector3 *param_2,float param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  fVar7 = (float)raycastClip(this,param_1,param_2,param_3);
  fVar8 = fVar7 * *(float *)(param_2 + 8);
  fVar9 = (float)*(undefined8 *)param_2;
  fVar10 = fVar7 * fVar9;
  fVar8 = (float)NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
  fVar10 = *(float *)(this + 0x10);
  fVar8 = SQRT(fVar8) / fVar10 + SQRT(fVar8) / fVar10;
  iVar6 = (int)fVar8;
  if (iVar6 == 0) {
    return;
  }
  iVar5 = 0;
  bVar4 = false;
  uVar13 = *(undefined8 *)param_1;
  fVar8 = (float)NEON_ucvtf((int)(float)(int)fVar8);
  fVar7 = fVar7 / fVar8;
  fVar9 = fVar9 * fVar7;
  fVar8 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar7;
  fVar7 = *(float *)(param_2 + 8) * fVar7;
  fVar11 = *(float *)(param_1 + 8);
  do {
    iVar5 = iVar5 + 1;
    while( true ) {
      fVar12 = (float)uVar13;
      uVar2 = (int)(fVar12 / fVar10) - *(int *)(this + 0x1c);
      fVar14 = (float)((ulong)uVar13 >> 0x20);
      if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)this)) &&
          (iVar3 = (int)(fVar11 / fVar10) - *(int *)(this + 0x20), -1 < iVar3)) &&
         (((iVar3 < *(int *)(this + 4) &&
           (pfVar1 = (float *)(*(long *)(this + 0x30) + (ulong)uVar2 * 8 +
                              (ulong)(uint)(*(int *)this * iVar3) * 8),
           *(char *)(pfVar1 + 1) != '\0')) && (fVar14 < *pfVar1)))) break;
      uVar13 = CONCAT44(fVar8 + fVar14,fVar9 + fVar12);
      fVar11 = fVar7 + fVar11;
      iVar5 = iVar5 + 1;
      if (iVar5 - iVar6 == 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_0098b684;
      }
    }
    uVar13 = CONCAT44(fVar8 + fVar14,fVar9 + fVar12);
    fVar11 = fVar7 + fVar11;
    bVar4 = true;
    if (iVar5 == iVar6) {
LAB_0098b684:
      raycastClip(this,param_1,param_2,param_3);
      return;
    }
  } while( true );
}


