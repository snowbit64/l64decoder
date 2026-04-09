// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSHB2FromCubeMap
// Entry Point: 00b5eae8
// Size: 2056 bytes
// Signature: undefined __cdecl computeSHB2FromCubeMap(SHB2 * param_1, uint param_2, uchar * param_3, FORMAT param_4, TYPE param_5, uint param_6, uint param_7, uint param_8, uint param_9)


/* SphericalHarmonicsUtil::computeSHB2FromCubeMap(SphericalHarmonicsUtil::SHB2*, unsigned int,
   unsigned char*, ImageDesc::FORMAT, ImageDesc::TYPE, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void SphericalHarmonicsUtil::computeSHB2FromCubeMap
               (SHB2 *param_1,uint param_2,uchar *param_3,FORMAT param_4,TYPE param_5,uint param_6,
               uint param_7,uint param_8,uint param_9)

{
  uint uVar1;
  float *pfVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  PIXEL_FORMAT PVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float *local_480;
  float local_454;
  float local_450;
  float local_44c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  uint local_3f8;
  uint uStack_3f4;
  float local_3f0;
  float local_3ec;
  float fStack_3e8;
  float local_3e0;
  float local_3dc;
  float fStack_3d8;
  float local_3d0;
  float local_3cc;
  undefined4 uStack_3c8;
  Matrix4x4 aMStack_3b0 [64];
  Matrix4x4 aMStack_370 [64];
  Matrix4x4 aMStack_330 [64];
  Matrix4x4 aMStack_2f0 [64];
  Matrix4x4 aMStack_2b0 [64];
  Matrix4x4 aMStack_270 [64];
  float afStack_230 [16];
  float afStack_1f0 [16];
  float afStack_1b0 [16];
  float afStack_170 [16];
  float afStack_130 [16];
  float afStack_f0 [16];
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  uVar14 = (ulong)param_7;
  uVar17 = (ulong)param_6;
  RenderDeviceUtil::makeCubeFaceMatrix(0,afStack_230);
  Matrix4x4::invert(aMStack_3b0,(Matrix4x4 *)afStack_230);
  RenderDeviceUtil::makeCubeFaceMatrix(1,afStack_1f0);
  Matrix4x4::invert(aMStack_370,(Matrix4x4 *)afStack_1f0);
  RenderDeviceUtil::makeCubeFaceMatrix(2,afStack_1b0);
  Matrix4x4::invert(aMStack_330,(Matrix4x4 *)afStack_1b0);
  RenderDeviceUtil::makeCubeFaceMatrix(3,afStack_170);
  Matrix4x4::invert(aMStack_2f0,(Matrix4x4 *)afStack_170);
  RenderDeviceUtil::makeCubeFaceMatrix(4,afStack_130);
  Matrix4x4::invert(aMStack_2b0,(Matrix4x4 *)afStack_130);
  RenderDeviceUtil::makeCubeFaceMatrix(5,afStack_f0);
  Matrix4x4::invert(aMStack_270,(Matrix4x4 *)afStack_f0);
  uVar12 = 0;
  uVar13 = param_2;
  if (param_2 != 0) {
    do {
      iVar9 = ImageUtil::getMemorySize((uint)uVar17,(uint)uVar14,1,param_4,param_5);
      uVar17 = uVar17 >> 1;
      param_6 = (uint)uVar17;
      uVar12 = iVar9 + uVar12;
      uVar14 = uVar14 >> 1;
      param_7 = (uint)uVar14;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar15 = param_6;
  uVar18 = param_7;
  uVar13 = uVar12;
  if (param_2 <= param_9) {
    do {
      iVar9 = ImageUtil::getMemorySize(uVar15,uVar18,1,param_4,param_5);
      uVar13 = iVar9 + uVar13;
      param_2 = param_2 + 1;
      uVar15 = uVar15 >> 1;
      uVar18 = uVar18 >> 1;
    } while (param_2 <= param_9);
  }
  uVar15 = param_4 - 0x1f;
  bVar8 = (param_4 & 0xfffffffe) == 0xe;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  if (uVar15 < 0xd || bVar8) {
    local_480 = (float *)operator_new__((ulong)(param_7 * param_6 * 4) << 2);
  }
  else {
    local_480 = (float *)0x0;
  }
  fVar28 = 0.0;
  lVar16 = 0;
  fVar19 = 1.0 / (float)(ulong)param_6;
  do {
    RenderDeviceUtil::makeCubeFaceMatrix((uint)lVar16,&local_3f0);
    fVar27 = -fStack_3e8;
    fVar23 = (float)NEON_fmadd(local_3ec,uStack_3c8,local_3cc * fVar27);
    fVar30 = (float)NEON_fmadd(local_3dc,uStack_3c8,local_3cc * -fStack_3d8);
    fVar32 = (float)NEON_fmadd(local_3ec,fStack_3d8,local_3dc * fVar27);
    uVar36 = NEON_fmadd(local_3f0,fVar30,fVar23 * -local_3e0);
    fVar37 = (float)NEON_fmadd(local_3d0,fVar32,uVar36);
    if (1e-36 < ABS(fVar37)) {
      fVar37 = 1.0 / fVar37;
      fVar34 = (float)NEON_fmadd(local_3e0,uStack_3c8,local_3d0 * -fStack_3d8);
      fVar22 = (float)NEON_fmadd(local_3f0,uStack_3c8,local_3d0 * fVar27);
      fVar27 = (float)NEON_fmadd(local_3f0,fStack_3d8,local_3e0 * fVar27);
      fVar21 = (float)NEON_fmadd(local_3e0,local_3cc,local_3d0 * -local_3dc);
      fVar20 = (float)NEON_fmadd(local_3f0,local_3cc,local_3d0 * -local_3ec);
      fVar25 = (float)NEON_fmadd(local_3f0,local_3dc,local_3e0 * -local_3ec);
      fVar38 = -fVar37;
      local_434 = fVar30 * fVar37;
      local_430 = fVar32 * fVar37;
      local_44c = fVar22 * fVar37;
      local_450 = fVar27 * fVar38;
      local_424 = fVar21 * fVar37;
      local_438 = fVar23 * fVar38;
      local_42c = fVar20 * fVar38;
      local_454 = fVar34 * fVar38;
      local_428 = fVar25 * fVar37;
    }
    pfVar2 = (float *)(param_3 + (ulong)(uVar13 * (uint)lVar16) + (ulong)uVar12);
    if (uVar15 < 0xd) {
      PVar10 = PixelFormatUtil::getPixelFormat(4,param_4,param_5,false,"");
      ASTCUtil::getBlockSize(PVar10,&uStack_3f4,&local_3f8);
      ASTCUtil::decodeASTCToFloat((uchar *)pfVar2,param_6,param_7,uStack_3f4,local_3f8,local_480);
      pfVar11 = local_480;
    }
    else {
      pfVar11 = (float *)0x0;
      switch(param_4) {
      case 3:
      case 5:
        pfVar11 = pfVar2;
        break;
      case 0xe:
        BC6BC7Util::decodeBC6HU((uchar *)pfVar2,param_6,param_7,local_480);
        pfVar11 = local_480;
        break;
      case 0xf:
        BC6BC7Util::decodeBC6HS((uchar *)pfVar2,param_6,param_7,local_480);
        pfVar11 = local_480;
      }
    }
    if (param_7 != 0) {
      uVar12 = 0;
      uVar18 = 1;
      do {
        if (param_6 != 0) {
          uVar17 = 0;
          fVar23 = (float)NEON_fmadd(((float)(ulong)uVar12 + 0.5) / (float)(ulong)param_7,0x40000000
                                     ,0xbf800000);
          fVar27 = fVar23 - fVar19;
          fVar30 = fVar19 + fVar23;
          uVar1 = uVar18;
          do {
            fVar29 = 1.0;
            fVar34 = (float)NEON_fmadd(((float)(uVar17 & 0xffffffff) + 0.5) / (float)(ulong)param_6,
                                       0x40000000,0xbf800000);
            fVar20 = fVar34 - fVar19;
            fVar22 = fVar19 + fVar34;
            fVar32 = (float)NEON_fmadd(fVar20,fVar20,fVar27 * fVar27);
            fVar37 = atan2f(fVar27 * fVar20,SQRT(fVar32 + 1.0));
            fVar32 = (float)NEON_fmadd(fVar20,fVar20,fVar30 * fVar30);
            fVar20 = atan2f(fVar30 * fVar20,SQRT(fVar32 + 1.0));
            fVar32 = (float)NEON_fmadd(fVar22,fVar22,fVar27 * fVar27);
            fVar21 = atan2f(fVar27 * fVar22,SQRT(fVar32 + 1.0));
            fVar32 = (float)NEON_fmadd(fVar22,fVar22,fVar30 * fVar30);
            fVar32 = atan2f(fVar30 * fVar22,SQRT(fVar32 + 1.0));
            fVar25 = (float)NEON_fmadd(fVar34,local_438,local_44c * fVar23);
            fVar22 = (float)NEON_fmadd(fVar34,local_434,local_454 * fVar23);
            fVar25 = fVar25 - local_42c;
            fVar22 = fVar22 - local_424;
            fVar34 = (float)NEON_fmadd(fVar34,local_430,local_450 * fVar23);
            fVar34 = fVar34 - local_428;
            uVar36 = NEON_fmadd(fVar22,fVar22,fVar25 * fVar25);
            fVar38 = (float)NEON_fmadd(fVar34,fVar34,uVar36);
            if (1e-06 < fVar38) {
              fVar29 = 1.0 / SQRT(fVar38);
            }
            if (uVar15 < 0xd || bVar8) {
              fVar38 = pfVar11[uVar1 - 1];
              fVar26 = pfVar11[uVar1];
              fVar24 = pfVar11[uVar1 + 1];
            }
            else {
              uVar3 = *(ushort *)((long)pfVar11 + (ulong)(uVar1 - 1) * 2);
              uVar6 = (uint)uVar3 << 0xd;
              if ((uVar6 & 0xf800000) == 0xf800000) {
                fVar38 = (float)(uVar6 | 0x70000000);
              }
              else if ((uVar6 & 0xf800000) == 0) {
                fVar38 = (float)((uVar6 & 0xfffe000) + 0x38800000) + -6.103516e-05;
              }
              else {
                fVar38 = (float)((uVar6 & 0xfffe000) + 0x38000000);
              }
              uVar4 = *(ushort *)((long)pfVar11 + (ulong)uVar1 * 2);
              uVar6 = (uint)uVar4 << 0xd;
              if ((uVar6 & 0xf800000) == 0xf800000) {
                fVar26 = (float)(uVar6 | 0x70000000);
              }
              else if ((uVar6 & 0xf800000) == 0) {
                fVar26 = (float)((uVar6 & 0xfffe000) + 0x38800000) + -6.103516e-05;
              }
              else {
                fVar26 = (float)((uVar6 & 0xfffe000) + 0x38000000);
              }
              uVar5 = *(ushort *)((long)pfVar11 + (ulong)(uVar1 + 1) * 2);
              uVar6 = (uint)uVar5 << 0xd;
              if ((uVar6 & 0xf800000) == 0xf800000) {
                fVar24 = (float)(uVar6 | 0x70000000);
              }
              else if ((uVar6 & 0xf800000) == 0) {
                fVar24 = (float)((uVar6 & 0xfffe000) + 0x38800000) + -6.103516e-05;
              }
              else {
                fVar24 = (float)((uVar6 & 0xfffe000) + 0x38000000);
              }
              fVar38 = (float)((uint)fVar38 | (int)(short)uVar3 & 0x80000000U);
              fVar26 = (float)((uint)fVar26 | (int)(short)uVar4 & 0x80000000U);
              fVar24 = (float)((uint)fVar24 | (int)(short)uVar5 & 0x80000000U);
            }
            fVar25 = fVar25 * fVar29;
            fVar34 = fVar34 * fVar29;
            fVar22 = fVar22 * fVar29;
            uVar17 = uVar17 + 1;
            uVar1 = uVar1 + 4;
            fVar32 = ((fVar37 - fVar20) - fVar21) + fVar32;
            fVar38 = fVar32 * fVar38;
            fVar26 = fVar32 * fVar26;
            fVar24 = fVar32 * fVar24;
            fVar28 = fVar28 + fVar32;
            uVar31 = NEON_fmadd(fVar25,fVar38,*(undefined4 *)(param_1 + 4));
            uVar33 = NEON_fmadd(fVar34,fVar38,*(undefined4 *)(param_1 + 8));
            uVar36 = NEON_fmadd(fVar22,fVar38,*(undefined4 *)(param_1 + 0xc));
            uVar35 = NEON_fmadd(fVar25,fVar26,*(undefined4 *)(param_1 + 0x14));
            *(float *)param_1 = fVar38 + *(float *)param_1;
            *(undefined4 *)(param_1 + 4) = uVar31;
            uVar31 = NEON_fmadd(fVar34,fVar26,*(undefined4 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 8) = uVar33;
            *(undefined4 *)(param_1 + 0xc) = uVar36;
            uVar36 = NEON_fmadd(fVar22,fVar26,*(undefined4 *)(param_1 + 0x1c));
            uVar33 = NEON_fmadd(fVar25,fVar24,*(undefined4 *)(param_1 + 0x24));
            *(float *)(param_1 + 0x10) = fVar26 + *(float *)(param_1 + 0x10);
            *(undefined4 *)(param_1 + 0x14) = uVar35;
            *(undefined4 *)(param_1 + 0x18) = uVar31;
            *(undefined4 *)(param_1 + 0x1c) = uVar36;
            uVar31 = NEON_fmadd(fVar34,fVar24,*(undefined4 *)(param_1 + 0x28));
            uVar36 = NEON_fmadd(fVar22,fVar24,*(undefined4 *)(param_1 + 0x2c));
            *(float *)(param_1 + 0x20) = fVar24 + *(float *)(param_1 + 0x20);
            *(undefined4 *)(param_1 + 0x24) = uVar33;
            *(undefined4 *)(param_1 + 0x28) = uVar31;
            *(undefined4 *)(param_1 + 0x2c) = uVar36;
          } while (param_6 != uVar17);
        }
        uVar12 = uVar12 + 1;
        uVar18 = uVar18 + param_6 * 4;
      } while (uVar12 != param_7);
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 6);
  fVar28 = 12.56637 / fVar28;
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * -0.488603 * fVar28,
                (float)*(undefined8 *)(param_1 + 8) * 0.488603 * fVar28);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * -0.488603 * fVar28,
                (float)*(undefined8 *)param_1 * 0.282095 * fVar28);
  *(ulong *)(param_1 + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * -0.488603 * fVar28,
                (float)*(undefined8 *)(param_1 + 0x18) * 0.488603 * fVar28);
  *(ulong *)(param_1 + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * -0.488603 * fVar28,
                (float)*(undefined8 *)(param_1 + 0x10) * 0.282095 * fVar28);
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * -0.488603 * fVar28,
                (float)*(undefined8 *)(param_1 + 0x28) * 0.488603 * fVar28);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * -0.488603 * fVar28,
                (float)*(undefined8 *)(param_1 + 0x20) * 0.282095 * fVar28);
  if (local_480 != (float *)0x0) {
    operator_delete__(local_480);
  }
  if (*(long *)(lVar7 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


