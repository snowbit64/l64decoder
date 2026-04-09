// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pivotMB
// Entry Point: 00b62488
// Size: 464 bytes
// Signature: undefined __thiscall pivotMB(BoundingVolumeFactory * this, uchar * param_1, uchar * param_2, uint param_3)


/* BoundingVolumeFactory::pivotMB(unsigned char const*, unsigned char const*, unsigned int) */

void __thiscall
BoundingVolumeFactory::pivotMB
          (BoundingVolumeFactory *this,uchar *param_1,uchar *param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  BoundingVolumeFactory **ppBVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long **pplVar8;
  BoundingVolumeFactory **ppBVar9;
  long lVar10;
  float *unaff_x25;
  float *pfVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar15 = *(float *)(this + 0xd8);
  do {
    if (param_2 <= param_1) break;
    pfVar5 = *(float **)(this + 0xd0);
    fVar12 = 0.0;
    pfVar6 = (float *)param_1;
    pfVar11 = unaff_x25;
    do {
      uVar13 = NEON_fmadd(*pfVar6 - *pfVar5,*pfVar6 - *pfVar5,-fVar15);
      uVar13 = NEON_fmadd(pfVar6[1] - pfVar5[1],pfVar6[1] - pfVar5[1],uVar13);
      fVar14 = (float)NEON_fmadd(pfVar6[2] - pfVar5[2],pfVar6[2] - pfVar5[2],uVar13);
      unaff_x25 = pfVar6;
      if (fVar14 <= fVar12) {
        unaff_x25 = pfVar11;
        fVar14 = fVar12;
      }
      fVar12 = fVar14;
      pfVar6 = (float *)((long)pfVar6 + (ulong)param_3);
      pfVar11 = unaff_x25;
    } while (pfVar6 < param_2);
    if (fVar12 <= 0.0) break;
    local_68 = *unaff_x25;
    fStack_64 = unaff_x25[1];
    lVar7 = *(long *)(this + 0xf8);
    lVar10 = *(long *)(this + 0xe8);
    local_60 = unaff_x25[2];
    if (lVar7 == lVar10) {
LAB_00b62594:
      if (lVar7 == lVar10) goto LAB_00b6259c;
    }
    else {
      do {
        if (((*(float *)(lVar7 + 0x10) == local_68) && (*(float *)(lVar7 + 0x14) == fStack_64)) &&
           (*(float *)(lVar7 + 0x18) == local_60)) goto LAB_00b62594;
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != lVar10);
LAB_00b6259c:
      uVar3 = EnclosingSphere::push((EnclosingSphere *)this,(Vector3F32 *)&local_68);
      if ((uVar3 & 1) != 0) {
        moveToFrontMB(this,(__list_iterator)*(undefined8 *)(this + 0xe8));
        *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + -1;
        ppBVar4 = (BoundingVolumeFactory **)operator_new(0x20);
        *ppBVar4 = this + 0xf0;
        pplVar8 = *(long ***)(this + 0xf8);
        *(float *)(ppBVar4 + 3) = local_60;
        ppBVar4[1] = (BoundingVolumeFactory *)pplVar8;
        ppBVar4[2] = (BoundingVolumeFactory *)CONCAT44(fStack_64,local_68);
        *pplVar8 = (long *)ppBVar4;
        ppBVar9 = *(BoundingVolumeFactory ***)(this + 0xe8);
        *(BoundingVolumeFactory ***)(this + 0xf8) = ppBVar4;
        *(long *)(this + 0x100) = *(long *)(this + 0x100) + 1;
        if (ppBVar4 != ppBVar9) {
          lVar7 = 5;
          do {
            ppBVar4 = (BoundingVolumeFactory **)ppBVar4[1];
            lVar7 = lVar7 + -1;
          } while (ppBVar4 != ppBVar9);
          if (lVar7 == 0) {
            *(BoundingVolumeFactory **)(this + 0xe8) = *ppBVar9;
          }
        }
      }
    }
    bVar1 = fVar15 < *(float *)(this + 0xd8);
    fVar15 = *(float *)(this + 0xd8);
  } while (bVar1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


