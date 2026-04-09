// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contactAddedCallback
// Entry Point: 009980f0
// Size: 560 bytes
// Signature: undefined __cdecl contactAddedCallback(btManifoldPoint * param_1, btCollisionObjectWrapper * param_2, int param_3, int param_4, btCollisionObjectWrapper * param_5, int param_6, int param_7)


/* Bt2PhysicsUtil::contactAddedCallback(btManifoldPoint&, btCollisionObjectWrapper const*, int, int,
   btCollisionObjectWrapper const*, int, int) */

undefined8
Bt2PhysicsUtil::contactAddedCallback
          (btManifoldPoint *param_1,btCollisionObjectWrapper *param_2,int param_3,int param_4,
          btCollisionObjectWrapper *param_5,int param_6,int param_7)

{
  char *pcVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_5 + 0x10);
  if ((*(byte *)(lVar4 + 0xe0) >> 2 & 1) == 0) {
    BtAdjustInternalEdgeContacts(param_1,param_5,param_2,param_6,param_7,0);
  }
  if ((*(byte *)(lVar4 + 0xb8) >> 2 & 1) == 0) {
    if ((*(byte *)(lVar3 + 0xb8) >> 2 & 1) == 0) {
      return 1;
    }
    pcVar1 = *(char **)(lVar3 + 0x108);
    if ((pcVar1 == (char *)0x0) || (-1 < *pcVar1)) {
      pfVar2 = (float *)(lVar3 + 0xa8);
    }
    else {
      pfVar2 = (float *)(*(long *)(pcVar1 + 0x18) + (long)param_7 * 0x10 + 0xc);
    }
    fVar5 = *pfVar2;
    if (fVar5 == 0.0) {
      return 1;
    }
    pfVar2 = *(float **)(param_5 + 0x18);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[8];
    fVar9 = pfVar2[4];
    *(float *)(param_1 + 0xa0) = fVar7;
    *(float *)(param_1 + 0xa8) = fVar8;
    *(float *)(param_1 + 0xa4) = fVar9;
    param_1[0x78] = (btManifoldPoint)0x1;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    fVar6 = (float)NEON_fmadd(fVar8,*(float *)(param_1 + 0x40),*(float *)(param_1 + 0x48) * -fVar7);
    fVar8 = (float)NEON_fmadd(fVar9,*(float *)(param_1 + 0x48),*(float *)(param_1 + 0x44) * -fVar8);
    *(float *)(param_1 + 0xb4) = fVar6;
    fVar7 = (float)NEON_fmadd(fVar7,*(float *)(param_1 + 0x44),*(float *)(param_1 + 0x40) * -fVar9);
    *(float *)(param_1 + 0xb0) = fVar8;
    uVar10 = NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
    *(float *)(param_1 + 0xb8) = fVar7;
    fVar9 = (float)NEON_fmadd(fVar7,fVar7,uVar10);
    if (1e-06 < fVar9) {
      fVar9 = 1.0 / SQRT(fVar9);
      *(float *)(param_1 + 0xb0) = fVar8 * fVar9;
      *(float *)(param_1 + 0xb4) = fVar6 * fVar9;
      *(float *)(param_1 + 0xb8) = fVar7 * fVar9;
    }
  }
  else {
    pcVar1 = *(char **)(lVar4 + 0x108);
    if ((pcVar1 == (char *)0x0) || (-1 < *pcVar1)) {
      pfVar2 = (float *)(lVar4 + 0xa8);
    }
    else {
      pfVar2 = (float *)(*(long *)(pcVar1 + 0x18) + (long)param_4 * 0x10 + 0xc);
    }
    fVar5 = *pfVar2;
    if (fVar5 == 0.0) {
      return 1;
    }
    pfVar2 = *(float **)(param_2 + 0x18);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[8];
    fVar9 = pfVar2[4];
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(float *)(param_1 + 0xa8) = fVar8;
    *(float *)(param_1 + 0xa0) = fVar7;
    *(float *)(param_1 + 0xa4) = fVar9;
    param_1[0x78] = (btManifoldPoint)0x1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    fVar6 = (float)NEON_fmadd(fVar8,*(float *)(param_1 + 0x40),*(float *)(param_1 + 0x48) * -fVar7);
    fVar8 = (float)NEON_fmadd(fVar9,*(float *)(param_1 + 0x48),*(float *)(param_1 + 0x44) * -fVar8);
    fVar7 = (float)NEON_fmadd(fVar7,*(float *)(param_1 + 0x44),*(float *)(param_1 + 0x40) * -fVar9);
    *(float *)(param_1 + 0xb0) = fVar8;
    *(float *)(param_1 + 0xb4) = fVar6;
    uVar10 = NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
    *(float *)(param_1 + 0xb8) = fVar7;
    fVar9 = (float)NEON_fmadd(fVar7,fVar7,uVar10);
    if (1e-06 < fVar9) {
      fVar9 = 1.0 / SQRT(fVar9);
      *(float *)(param_1 + 0xb0) = fVar8 * fVar9;
      *(float *)(param_1 + 0xb4) = fVar6 * fVar9;
      *(float *)(param_1 + 0xb8) = fVar7 * fVar9;
    }
    fVar5 = -fVar5;
  }
  *(float *)(param_1 + 0x88) = fVar5;
  return 1;
}


