// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeServerUpdateToStream
// Entry Point: 00859d40
// Size: 3188 bytes
// Signature: undefined __cdecl writeServerUpdateToStream(GsBitStream * param_1, uint param_2, float param_3, float param_4, float param_5, float param_6, uint param_7, uint param_8)


/* DensityMapSyncer::writeServerUpdateToStream(GsBitStream*, unsigned int, float, float, float,
   float, unsigned int, unsigned int) */

void DensityMapSyncer::writeServerUpdateToStream
               (GsBitStream *param_1,uint param_2,float param_3,float param_4,float param_5,
               float param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  ulong uVar26;
  long *plVar27;
  GsBitStream *this;
  uint *puVar28;
  uchar *puVar29;
  uint uVar30;
  uint in_w4;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long *plVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  undefined4 *puVar43;
  uint uVar44;
  int iVar45;
  ulong uVar46;
  int iVar47;
  long **pplVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  int iVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 local_1e98;
  undefined4 local_1e90 [2];
  ushort local_1e88 [3836];
  long local_90;
  
  this = (GsBitStream *)(ulong)param_2;
  lVar15 = tpidr_el0;
  local_90 = *(long *)(lVar15 + 0x28);
  iVar22 = (int)((ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 4);
  iVar40 = iVar22 + -1;
  if (0 < iVar22) {
    iVar22 = 0;
    do {
      iVar23 = iVar22 + iVar40;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      uVar19 = iVar23 >> 1;
      uVar24 = *(uint *)(*(long *)(param_1 + 0x40) +
                        (-(ulong)(uVar19 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar19 << 4));
      if (uVar24 < param_7) {
        iVar22 = uVar19 + 1;
      }
      else {
        if (uVar24 <= param_7) {
          lVar50 = *(long *)(param_1 + 0x58);
          RawTransformGroup::updateWorldTransformation();
          lVar49 = *(long *)(param_1 + 0x28);
          uVar35 = (*(long *)(param_1 + 0x30) - lVar49 >> 4) * -0x5555555555555555;
          if ((int)uVar35 == 0) goto LAB_0085a918;
          uVar38 = 0;
          fVar56 = param_4 - *(float *)(lVar50 + 0xec);
          fVar57 = param_3 - *(float *)(lVar50 + 0xe8);
          uVar24 = 0;
          fVar58 = param_5 - *(float *)(lVar50 + 0xf0);
          uVar59 = NEON_fmadd(fVar57,*(undefined4 *)(lVar50 + 0xb8),
                              fVar56 * *(float *)(lVar50 + 0xbc));
          uVar60 = NEON_fmadd(fVar57,*(undefined4 *)(lVar50 + 0xd8),
                              fVar56 * *(float *)(lVar50 + 0xdc));
          plVar39 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)uVar19 * 0x10 + 8);
          fVar56 = (float)NEON_fmadd(fVar58,*(undefined4 *)(lVar50 + 0xc0),uVar59);
          fVar57 = (float)NEON_fmadd(fVar58,*(undefined4 *)(lVar50 + 0xe0),uVar60);
          lVar50 = *plVar39;
          goto LAB_00859e9c;
        }
        iVar40 = uVar19 - 1;
      }
    } while (iVar22 <= iVar40);
  }
  goto LAB_0085a974;
LAB_00859e9c:
  do {
    uVar19 = uVar24 + 0x14;
    lVar36 = lVar49 + uVar38 * 0x30;
    fVar58 = *(float *)(lVar36 + 0x10);
    uVar54 = *(uint *)(lVar36 + 0xc);
    fVar63 = (float)(ulong)uVar54;
    lVar36 = *(long *)(lVar50 + uVar38 * 8);
    fVar61 = (float)NEON_fmadd(fVar63,0x3f000000,fVar56 / fVar58);
    uVar31 = (uint)fVar61;
    fVar61 = -fVar63;
    fVar63 = (float)NEON_fmadd(fVar63,0x3f000000,fVar57 / fVar58);
    uVar30 = (uint)fVar63;
    iVar40 = (int)(60.0 / fVar58 + 0.5);
    uVar7 = (ushort)uVar38;
    if (((uVar31 < uVar54 && uVar30 <= uVar54) && (uVar54 <= uVar31 || uVar54 != uVar30)) &&
       (uVar44 = uVar31 + uVar54 * uVar30,
       (*(ulong *)(lVar36 + (ulong)(uVar44 >> 6) * 8) >> ((ulong)uVar44 & 0x3f) & 1) != 0)) {
      if (uVar24 < 0xffffffec) {
        uVar32 = (ulong)uVar24;
        uVar24 = uVar24 + 1;
        *(short *)(local_1e90 + uVar32 * 3) = (short)uVar31;
        fVar63 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar30 + 0.5);
        fVar62 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar31 + 0.5);
        *(short *)((long)local_1e90 + (uVar32 * 6 + 1) * 2) = (short)uVar30;
        local_1e88[uVar32 * 6] = uVar7;
        fVar63 = fVar58 * fVar63 - fVar57;
        fVar62 = fVar58 * fVar62 - fVar56;
        uVar59 = NEON_fmadd(fVar62,fVar62,fVar63 * fVar63);
        local_1e90[uVar32 * 3 + 1] = uVar59;
        goto LAB_00859f6c;
      }
    }
    else {
LAB_00859f6c:
      if (0 < iVar40) {
        iVar23 = 1;
        iVar47 = 0;
        iVar20 = uVar54 * (uVar30 - 1);
        iVar33 = uVar30 * uVar54;
        iVar55 = uVar54 + iVar33;
        iVar22 = iVar33 + 1;
        iVar33 = iVar33 + -1;
        iVar21 = 2;
        iVar34 = 2;
        do {
          uVar12 = uVar30 - iVar23;
          uVar44 = iVar23 + uVar30;
          uVar53 = uVar31 - iVar23;
          uVar41 = iVar23 + uVar31;
          iVar45 = -iVar23;
          fVar63 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar12 + 0.5);
          fVar62 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar44 + 0.5);
          fVar64 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar53 + 0.5);
          fVar65 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar41 + 0.5);
          fVar66 = fVar58 * fVar63 - fVar57;
          fVar67 = fVar58 * fVar62 - fVar57;
          fVar63 = fVar58 * fVar64 - fVar56;
          fVar62 = fVar58 * fVar65 - fVar56;
          iVar10 = iVar47;
          iVar9 = iVar21;
          iVar13 = iVar33;
          iVar11 = iVar55;
          iVar2 = iVar22;
          iVar1 = iVar20;
          do {
            iVar45 = iVar45 + 1;
            if (((uVar53 < uVar54) && (uVar51 = uVar30 + iVar10, uVar51 < uVar54)) &&
               ((*(ulong *)(lVar36 + (ulong)(uVar31 + iVar13 >> 6) * 8) >>
                 ((ulong)(uVar31 + iVar13) & 0x3f) & 1) != 0)) {
              if (uVar19 <= uVar24) break;
              uVar32 = (ulong)uVar24;
              uVar24 = uVar24 + 1;
              *(short *)(local_1e90 + uVar32 * 3) = (short)uVar53;
              *(short *)((long)local_1e90 + (uVar32 * 6 + 1) * 2) = (short)uVar51;
              fVar64 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar51 + 0.5);
              local_1e88[uVar32 * 6] = uVar7;
              fVar64 = fVar58 * fVar64 - fVar57;
              uVar59 = NEON_fmadd(fVar63,fVar63,fVar64 * fVar64);
              local_1e90[uVar32 * 3 + 1] = uVar59;
            }
            if (((uVar12 < uVar54) && (uVar51 = uVar31 + iVar45, uVar51 < uVar54)) &&
               ((*(ulong *)(lVar36 + (ulong)(uVar31 + iVar1 >> 6) * 8) >>
                 ((ulong)(uVar31 + iVar1) & 0x3f) & 1) != 0)) {
              if (uVar19 <= uVar24) break;
              uVar32 = (ulong)uVar24;
              uVar24 = uVar24 + 1;
              *(short *)(local_1e90 + uVar32 * 3) = (short)uVar51;
              *(short *)((long)local_1e90 + (uVar32 * 6 + 1) * 2) = (short)uVar12;
              fVar64 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar51 + 0.5);
              local_1e88[uVar32 * 6] = uVar7;
              fVar64 = fVar58 * fVar64 - fVar56;
              uVar59 = NEON_fmadd(fVar64,fVar64,fVar66 * fVar66);
              local_1e90[uVar32 * 3 + 1] = uVar59;
            }
            if (((uVar41 < uVar54) && (uVar51 = uVar30 + iVar45, uVar51 < uVar54)) &&
               ((*(ulong *)(lVar36 + (ulong)(uVar31 + iVar2 >> 6) * 8) >>
                 ((ulong)(uVar31 + iVar2) & 0x3f) & 1) != 0)) {
              if (uVar19 <= uVar24) break;
              uVar32 = (ulong)uVar24;
              uVar24 = uVar24 + 1;
              *(short *)(local_1e90 + uVar32 * 3) = (short)uVar41;
              *(short *)((long)local_1e90 + (uVar32 * 6 + 1) * 2) = (short)uVar51;
              fVar64 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar51 + 0.5);
              local_1e88[uVar32 * 6] = uVar7;
              fVar64 = fVar58 * fVar64 - fVar57;
              uVar59 = NEON_fmadd(fVar62,fVar62,fVar64 * fVar64);
              local_1e90[uVar32 * 3 + 1] = uVar59;
            }
            if (uVar44 < uVar54) {
              uVar51 = uVar31 + iVar10;
              if ((uVar51 < uVar54) &&
                 ((*(ulong *)(lVar36 + (ulong)(uVar31 + iVar11 >> 6) * 8) >>
                   ((ulong)(uVar31 + iVar11) & 0x3f) & 1) != 0)) {
                if (uVar19 <= uVar24) break;
                uVar32 = (ulong)uVar24;
                uVar24 = uVar24 + 1;
                *(short *)(local_1e90 + uVar32 * 3) = (short)uVar51;
                *(short *)((long)local_1e90 + (uVar32 * 6 + 1) * 2) = (short)uVar44;
                fVar64 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar51 + 0.5);
                local_1e88[uVar32 * 6] = uVar7;
                fVar64 = fVar58 * fVar64 - fVar56;
                uVar59 = NEON_fmadd(fVar64,fVar64,fVar67 * fVar67);
                local_1e90[uVar32 * 3 + 1] = uVar59;
              }
            }
            iVar9 = iVar9 + -1;
            iVar10 = iVar10 + -1;
            iVar11 = iVar11 + -1;
            iVar2 = iVar2 + uVar54;
            iVar1 = iVar1 + 1;
            iVar13 = iVar13 - uVar54;
          } while (iVar9 != 0);
          iVar23 = iVar23 + 1;
          iVar21 = iVar21 + 2;
          iVar47 = iVar47 + 1;
          bVar18 = iVar34 != iVar40 + 1;
          iVar34 = iVar34 + 1;
          iVar55 = iVar55 + uVar54 + 1;
          iVar22 = iVar22 + (1 - uVar54);
          iVar20 = iVar20 + ~uVar54;
          iVar33 = iVar33 + (uVar54 - 1);
        } while (bVar18);
      }
    }
    if (uVar24 < uVar19) {
      lVar37 = plVar39[1];
      uVar41 = *(uint *)(lVar37 + uVar38 * 4);
      uVar44 = *(int *)(lVar49 + uVar38 * 0x30 + 8) + 0x3f;
      uVar12 = uVar44 >> 6;
      uVar53 = 0;
      if (uVar12 != 0) {
        uVar53 = uVar41 / uVar12;
      }
      uVar51 = uVar12;
      if (0x43f < uVar44) {
        uVar51 = 0x10;
      }
      uVar41 = uVar41 - uVar53 * uVar12;
      *(uint *)(lVar37 + uVar38 * 4) = uVar41;
      if (uVar51 != 0) {
        uVar44 = 0;
        uVar53 = uVar31 + iVar40;
        uVar52 = uVar30 + iVar40;
        do {
          uVar4 = 0;
          if (uVar41 + 1 < uVar12) {
            uVar4 = uVar41 + 1;
          }
          uVar32 = *(ulong *)(lVar36 + (ulong)uVar4 * 8);
          if (uVar32 != 0) {
            uVar41 = uVar4 << 6;
            uVar42 = (ulong)uVar24;
            do {
              uVar46 = uVar42;
              if ((uVar32 & 1) != 0) {
                uVar14 = 0;
                if (uVar54 != 0) {
                  uVar14 = uVar41 / uVar54;
                }
                uVar8 = uVar41 - uVar14 * uVar54;
                bVar18 = (int)(uVar31 - iVar40) <= (int)uVar8;
                bVar16 = false;
                if (bVar18) {
                  bVar16 = (int)(uVar8 - uVar53) < 0;
                }
                bVar16 = bVar16 != (bVar18 && SBORROW4(uVar8,uVar53));
                bVar17 = true;
                if (bVar18 && uVar8 == uVar53 || bVar16) {
                  bVar17 = (int)(uVar14 - (uVar30 - iVar40)) < 0;
                }
                bVar18 = bVar17 == ((bVar18 && uVar8 == uVar53 || bVar16) &&
                                   SBORROW4(uVar14,uVar30 - iVar40));
                bVar16 = false;
                if (bVar18) {
                  bVar16 = (int)(uVar14 - uVar52) < 0;
                }
                if ((!bVar18 || uVar14 != uVar52) && bVar16 == (bVar18 && SBORROW4(uVar14,uVar52)))
                {
                  if (uVar19 <= (uint)uVar42) goto LAB_00859e88;
                  uVar24 = (uint)uVar42 + 1;
                  uVar46 = (ulong)uVar24;
                  *(short *)(local_1e90 + uVar42 * 3) = (short)uVar8;
                  fVar63 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar14 + 0.5);
                  fVar62 = (float)NEON_fmadd(fVar61,0x3f000000,(float)(ulong)uVar8 + 0.5);
                  *(short *)((long)local_1e90 + (uVar42 * 6 + 1) * 2) = (short)uVar14;
                  local_1e88[uVar42 * 6] = uVar7;
                  fVar63 = fVar58 * fVar63 - fVar57;
                  fVar62 = fVar58 * fVar62 - fVar56;
                  uVar59 = NEON_fmadd(fVar62,fVar62,fVar63 * fVar63);
                  local_1e90[uVar42 * 3 + 1] = uVar59;
                }
              }
              uVar41 = uVar41 + 1;
              bVar18 = 1 < uVar32;
              uVar32 = uVar32 >> 1;
              uVar42 = uVar46;
            } while (bVar18);
          }
          uVar44 = uVar44 + 1;
          uVar41 = uVar4;
        } while (uVar44 != uVar51);
LAB_00859e88:
        *(uint *)(lVar37 + uVar38 * 4) = uVar4;
      }
    }
    uVar38 = uVar38 + 1;
  } while (uVar38 != (uVar35 & 0xffffffff));
  if (uVar24 == 0) {
LAB_0085a918:
    local_1e98 = (code *)((ulong)local_1e98 & 0xffffffffffffff00);
    GsBitStream::writeBits(this,(uchar *)&local_1e98,8,true);
  }
  else {
    local_1e98 = TempSendData::sortByDistanceAsc;
    std::__ndk1::
    __sort<bool(*&)(DensityMapSyncer::TempSendData_const&,DensityMapSyncer::TempSendData_const&),DensityMapSyncer::TempSendData*>
              ((TempSendData *)local_1e90,(TempSendData *)(local_1e90 + (ulong)uVar24 * 3),
               (_func_bool_TempSendData_ptr_TempSendData_ptr *)&local_1e98);
    uVar19 = GsBitStream::getWriteOffset();
    GsBitStream::writeSkipBits(this,8);
    uVar35 = 0;
    if (0x27 < uVar24) {
      uVar24 = 0x28;
    }
    uVar54 = 0;
    uVar30 = 0;
    if (*(int *)(plVar39 + 2) + 1U < 0x20) {
      uVar30 = *(int *)(plVar39 + 2) + 1;
    }
    uVar38 = (ulong)uVar30;
    *(uint *)(plVar39 + 2) = uVar30;
    *(uint *)((long)plVar39 + uVar38 * 0xa4 + 0x14) = in_w4;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0xb0) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar39 + uVar38 * 0xa4 + 0xa8) = 0xffffffffffffffff;
    do {
      puVar43 = local_1e90 + uVar35 * 3;
      lVar49 = *(long *)(param_1 + 0x28);
      uVar5 = *(ushort *)puVar43;
      uVar6 = *(ushort *)((long)local_1e90 + (uVar35 * 6 + 1) * 2);
      uVar7 = local_1e88[uVar35 * 6];
      uVar32 = (ulong)uVar7;
      iVar40 = *(int *)(param_1 + 0x60) * (uint)uVar5;
      iVar22 = *(int *)(param_1 + 0x60) * (uint)uVar6;
      pplVar48 = (long **)(lVar49 + uVar32 * 0x30);
      if ((in_w4 - (in_w4 / 3 + ((uint)((ulong)in_w4 * 0xaaaaaaab >> 0x20) & 0xfffffffe)) < 2) ||
         (uVar54 != 0)) {
        puVar25 = (uint *)(**(code **)(**pplVar48 + 0x30))();
        if (puVar25 == (uint *)0x0) {
          iVar23 = *(int *)(param_1 + 100);
          iVar21 = (**(code **)(**pplVar48 + 0x58))();
          iVar23 = ((uint)(iVar23 * iVar23 * iVar21) >> 3) + 0x18;
        }
        else {
          iVar21 = *(int *)(param_1 + 0x60);
          if (iVar21 == 0) {
            iVar23 = 0x18;
          }
          else {
            iVar47 = 0;
            uVar30 = puVar25[0xd];
            uVar42 = (ulong)uVar30;
            iVar23 = 0x18;
            do {
              iVar34 = 0;
              uVar46 = (ulong)(uVar30 * (iVar40 + (iVar47 + iVar22 << (ulong)(*puVar25 & 0x1f))));
              do {
                if (uVar30 == 0) {
                  iVar55 = 0;
                }
                else {
                  uVar26 = 0;
                  iVar55 = 0;
                  puVar28 = puVar25 + 0x10;
                  do {
                    iVar20 = (int)uVar26;
                    uVar26 = uVar26 + 1;
                    puVar3 = puVar28;
                    if (uVar42 <= uVar26) {
                      puVar3 = puVar25 + 8;
                    }
                    lVar50 = *(long *)(*(long *)(puVar25 + 10) +
                                      (ulong)(uint)((int)uVar46 + iVar20) * 8);
                    if (*(byte *)(lVar50 + 0x10) == 0) {
                      iVar20 = (*puVar3 - puVar28[-2]) + 3;
                    }
                    else {
                      iVar20 = 3;
                      if (*(char *)(lVar50 + 0x13) != '\0') {
                        iVar20 = (*puVar3 - puVar28[-2]) * (uint)*(byte *)(lVar50 + 0x12) + 6;
                      }
                      iVar20 = iVar20 + (uint)*(byte *)(lVar50 + 0x10) * 0x400;
                    }
                    iVar55 = iVar20 + iVar55;
                    puVar28 = puVar28 + 2;
                  } while (uVar42 != uVar26);
                }
                iVar23 = iVar55 + iVar23;
                iVar34 = iVar34 + 1;
                uVar46 = uVar46 + uVar42;
              } while (iVar34 != iVar21);
              iVar47 = iVar47 + 1;
            } while (iVar47 != iVar21);
          }
        }
        iVar21 = GsBitStream::getWriteOffset();
        if ((iVar23 - uVar19) + iVar21 <= (param_8 * 0x78) / 100) {
          uVar6 = *(ushort *)((ulong)puVar43 | 2);
          uVar5 = *(ushort *)puVar43;
          goto code_r0x0085a6a0;
        }
      }
      else {
code_r0x0085a6a0:
        uVar30 = (uint)uVar5 + *(int *)(lVar49 + uVar32 * 0x30 + 0xc) * (uint)uVar6;
        local_1e98 = (code *)CONCAT44(local_1e98._4_4_,uVar30 | (uint)uVar7 << 0x13);
        GsBitStream::writeBits(this,(uchar *)&local_1e98,0x18,true);
        puVar25 = (uint *)(**(code **)(**pplVar48 + 0x30))();
        if (puVar25 == (uint *)0x0) {
          plVar27 = (long *)(**(code **)(**pplVar48 + 0x38))();
          iVar40 = (**(code **)(**pplVar48 + 0x48))();
          iVar22 = (**(code **)(**pplVar48 + 0x58))();
          uVar41 = (uint)(iVar22 * iVar40) >> 3;
          iVar40 = *(int *)(param_1 + 100);
          iVar23 = (**(code **)(**pplVar48 + 0x58))(*pplVar48);
          iVar22 = *(int *)(param_1 + 100) * uVar41;
          uVar44 = iVar22 * (uint)*(ushort *)((ulong)puVar43 | 2);
          uVar31 = uVar44 + iVar22;
          if (uVar44 < uVar31) {
            uVar12 = (uint)(iVar23 * iVar40) >> 3;
            uVar7 = *(ushort *)puVar43;
            do {
              uVar53 = uVar44 + uVar12 * uVar7;
              uVar51 = uVar53 & 0xffff;
              uVar4 = (*(int *)(plVar27 + 1) + 7U >> 3) - uVar53;
              uVar52 = 0x10000 - uVar51;
              if (uVar4 + uVar51 < 0x10001) {
                uVar52 = uVar4;
              }
              puVar29 = (uchar *)(*(long *)(*plVar27 + (ulong)(uVar53 >> 0x10) * 8) + (ulong)uVar51)
              ;
              uVar51 = uVar12;
              if (uVar52 < uVar12) {
                do {
                  GsBitStream::writeAlignedBytes(this,puVar29,uVar52);
                  uVar53 = uVar52 + uVar53;
                  uVar51 = uVar51 - uVar52;
                  uVar4 = uVar53 & 0xffff;
                  uVar14 = (*(int *)(plVar27 + 1) + 7U >> 3) - uVar53;
                  uVar52 = 0x10000 - uVar4;
                  if (uVar14 + uVar4 < 0x10001) {
                    uVar52 = uVar14;
                  }
                  puVar29 = (uchar *)(*(long *)(*plVar27 + (ulong)(uVar53 >> 0x10) * 8) +
                                     (ulong)uVar4);
                } while (uVar52 < uVar51);
              }
              GsBitStream::writeAlignedBytes(this,puVar29,uVar51);
              uVar44 = uVar44 + uVar41;
            } while (uVar44 < uVar31);
          }
        }
        else {
          uVar31 = *(uint *)(param_1 + 0x60);
          if (uVar31 != 0) {
            uVar44 = 0;
            do {
              uVar41 = 0;
              uVar42 = (ulong)puVar25[0xd];
              iVar23 = iVar40;
              do {
                iVar21 = (int)uVar42;
                if (iVar21 != 0) {
                  uVar31 = *puVar25;
                  uVar46 = 0;
                  puVar28 = puVar25 + 0x10;
                  do {
                    iVar47 = (int)uVar46;
                    uVar46 = uVar46 + 1;
                    puVar3 = puVar28;
                    if (uVar42 <= uVar46) {
                      puVar3 = puVar25 + 8;
                    }
                    ChunkedBitSquareChunk::writeToStream
                              (*(ChunkedBitSquareChunk **)
                                (*(long *)(puVar25 + 10) +
                                (ulong)(iVar21 * ((uVar44 + iVar22 << (ulong)(uVar31 & 0x1f)) +
                                                 iVar23) + iVar47) * 8),this,*puVar3 - puVar28[-2]);
                    uVar42 = (ulong)puVar25[0xd];
                    puVar28 = puVar28 + 2;
                  } while (uVar46 < uVar42);
                  uVar31 = *(uint *)(param_1 + 0x60);
                }
                uVar41 = uVar41 + 1;
                iVar23 = iVar23 + 1;
              } while (uVar41 < uVar31);
              uVar44 = uVar44 + 1;
            } while (uVar44 < uVar31);
          }
        }
        lVar49 = *plVar39;
        uVar42 = (ulong)uVar54;
        uVar54 = uVar54 + 1;
        *(undefined4 *)((long)plVar39 + uVar42 * 4 + uVar38 * 0xa4 + 0x18) = (undefined4)local_1e98;
        lVar50 = *(long *)(lVar49 + uVar32 * 8);
        lVar49 = (ulong)(uVar30 >> 6) * 8;
        *(ulong *)(lVar50 + lVar49) =
             *(ulong *)(lVar50 + lVar49) & (1L << ((ulong)uVar30 & 0x3f) ^ 0xffffffffffffffffU);
        iVar40 = GsBitStream::getWriteOffset();
        if (param_8 < iVar40 - uVar19) break;
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != uVar24);
    uVar24 = GsBitStream::getWriteOffset();
    GsBitStream::setWriteOffset(this,uVar19);
    local_1e98 = (code *)CONCAT71(local_1e98._1_7_,(char)uVar54);
    GsBitStream::writeBits(this,(uchar *)&local_1e98,8,true);
    GsBitStream::setWriteOffset(this,uVar24);
  }
LAB_0085a974:
  if (*(long *)(lVar15 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


