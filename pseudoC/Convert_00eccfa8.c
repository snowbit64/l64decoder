// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Convert
// Entry Point: 00eccfa8
// Size: 4192 bytes
// Signature: undefined __thiscall Convert(Volume * this, Mesh * param_1, VOXEL_VALUE param_2)


/* VHACD::Volume::Convert(VHACD::Mesh&, VHACD::VOXEL_VALUE) const */

void __thiscall VHACD::Volume::Convert(Volume *this,Mesh *param_1,VOXEL_VALUE param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  Mesh *pMVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  ulong *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  int *piVar36;
  double *pdVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long *plVar43;
  ulong *puVar44;
  Mesh *pMVar45;
  ulong uVar46;
  ulong *puVar47;
  ulong uVar48;
  ulong uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  
  plVar43 = *(long **)(*(long *)this + 0x30);
  if (plVar43 != (long *)0x0 && DAT_021233a0 == 0) {
    DAT_021233a0 = (**(code **)(*plVar43 + 0x10))(plVar43,"VHACDVolume::Convert");
    plVar43 = *(long **)(*(long *)this + 0x30);
  }
  if (plVar43 != (long *)0x0) {
    (**(code **)(*plVar43 + 0x18))(plVar43,DAT_021233a0);
  }
  uVar33 = *(ulong *)(this + 0x40);
  if (((uVar33 != 0) && (uVar34 = *(ulong *)(this + 0x48), uVar34 != 0)) &&
     (uVar39 = *(ulong *)(this + 0x50), uVar39 != 0)) {
    uVar40 = 0;
    puVar8 = (ulong *)(param_1 + 0x920);
    puVar9 = (ulong *)(param_1 + 0x618);
    ppuVar10 = (ulong **)(param_1 + 0x918);
    do {
      uVar41 = 0;
      do {
        uVar48 = 0;
        do {
          if (*(byte *)(*(long *)(this + 0x70) +
                        *(long *)(this + 0x50) * (uVar41 + uVar40 * *(long *)(this + 0x48)) + uVar48
                       ) == param_2) {
            dVar51 = *(double *)(this + 8);
            dVar53 = *(double *)(this + 0x10);
            uVar49 = *(ulong *)(param_1 + 0x608);
            uVar42 = *(ulong *)(param_1 + 0x610);
            dVar55 = *(double *)(this + 0x38);
            dVar57 = *(double *)(this + 0x18);
            uVar35 = uVar49;
            if (uVar49 == uVar42) {
              uVar42 = uVar49 * 2;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uVar42;
              uVar46 = uVar49 * 0x30 | 8;
              if (SUB168(auVar12 * ZEXT816(0x18),8) != 0) {
                uVar46 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar46);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar49 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar42;
              memcpy(puVar44,pMVar11,uVar49 * 0x18);
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar42;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            *(ulong *)(param_1 + 0x608) = uVar35;
            dVar50 = ((double)(unkuint9)uVar40 + -0.5) * dVar55;
            dVar56 = ((double)(unkuint9)uVar48 + -0.5) * dVar55;
            dVar58 = ((double)(unkuint9)uVar41 + -0.5) * dVar55;
            *pdVar37 = dVar50 + dVar51;
            pdVar37[2] = dVar56 + dVar57;
            pdVar37[1] = dVar58 + dVar53;
            dVar51 = *(double *)(this + 8);
            dVar53 = *(double *)(this + 0x10);
            dVar57 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar13 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            dVar54 = ((double)(unkuint9)uVar40 + 0.5) * dVar55;
            *(ulong *)(param_1 + 0x608) = uVar35;
            pdVar37[2] = dVar56 + dVar57;
            pdVar37[1] = dVar58 + dVar53;
            *pdVar37 = dVar54 + dVar51;
            dVar51 = *(double *)(this + 8);
            dVar53 = *(double *)(this + 0x10);
            dVar57 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar14 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            dVar52 = ((double)(unkuint9)uVar41 + 0.5) * dVar55;
            *(ulong *)(param_1 + 0x608) = uVar35;
            pdVar37[2] = dVar56 + dVar57;
            *pdVar37 = dVar54 + dVar51;
            pdVar37[1] = dVar52 + dVar53;
            dVar51 = *(double *)(this + 8);
            dVar53 = *(double *)(this + 0x10);
            dVar57 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar15 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            pdVar37[1] = dVar52 + dVar53;
            *pdVar37 = dVar50 + dVar51;
            pdVar37[2] = dVar56 + dVar57;
            dVar57 = *(double *)(this + 8);
            dVar51 = *(double *)(this + 0x10);
            *(ulong *)(param_1 + 0x608) = uVar35;
            dVar53 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar16 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            dVar55 = ((double)(unkuint9)uVar48 + 0.5) * dVar55;
            pdVar37[1] = dVar58 + dVar51;
            *(ulong *)(param_1 + 0x608) = uVar35;
            *pdVar37 = dVar50 + dVar57;
            pdVar37[2] = dVar55 + dVar53;
            dVar57 = *(double *)(this + 8);
            dVar51 = *(double *)(this + 0x10);
            dVar53 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar17 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            *pdVar37 = dVar54 + dVar57;
            pdVar37[1] = dVar58 + dVar51;
            pdVar37[2] = dVar55 + dVar53;
            dVar57 = *(double *)(this + 8);
            dVar51 = *(double *)(this + 0x10);
            *(ulong *)(param_1 + 0x608) = uVar35;
            dVar53 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar18 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar35 = uVar35 + 1;
            *pdVar37 = dVar54 + dVar57;
            pdVar37[1] = dVar52 + dVar51;
            pdVar37[2] = dVar55 + dVar53;
            dVar57 = *(double *)(this + 8);
            dVar53 = *(double *)(this + 0x10);
            *(ulong *)(param_1 + 0x608) = uVar35;
            dVar51 = *(double *)(this + 0x18);
            if (uVar35 == uVar42) {
              uVar46 = uVar42 * 2;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar46;
              uVar35 = uVar42 * 0x30 | 8;
              if (SUB168(auVar19 * ZEXT816(0x18),8) != 0) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              pMVar45 = *(Mesh **)(param_1 + 0x600);
              pMVar11 = param_1;
              if (uVar42 != 0x40) {
                pMVar11 = pMVar45;
              }
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              memcpy(puVar44,pMVar11,uVar42 * 0x18);
              uVar35 = uVar42;
              if (pMVar45 != (Mesh *)0x0) {
                operator_delete__(pMVar45 + -8);
                uVar35 = *(ulong *)(param_1 + 0x608);
              }
              *(ulong **)(param_1 + 0x600) = puVar44;
              *(ulong *)(param_1 + 0x610) = uVar46;
              uVar42 = uVar46;
            }
            else {
              puVar44 = *(ulong **)(param_1 + 0x600);
            }
            puVar32 = (ulong *)param_1;
            if (uVar42 != 0x40) {
              puVar32 = puVar44;
            }
            pdVar37 = (double *)(puVar32 + uVar35 * 3);
            uVar42 = *(ulong *)(param_1 + 0x920);
            uVar46 = *(ulong *)(param_1 + 0x928);
            *(ulong *)(param_1 + 0x608) = uVar35 + 1;
            pdVar37[1] = dVar52 + dVar53;
            *pdVar37 = dVar50 + dVar57;
            pdVar37[2] = dVar55 + dVar51;
            if (uVar42 == uVar46) {
              uVar46 = uVar42 * 2;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar46;
              uVar35 = uVar42 * 0x18 + 8;
              if (SUB168(auVar20 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar42 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar46;
              puVar32 = puVar9;
              if (uVar42 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar42 * 0xc);
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar46;
            }
            else {
              puVar44 = *ppuVar10;
            }
            iVar38 = (int)uVar49;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            uVar42 = uVar42 + 1;
            iVar1 = iVar38 + 2;
            iVar2 = iVar38 + 1;
            *puVar8 = uVar42;
            *piVar36 = iVar38;
            piVar36[1] = iVar1;
            piVar36[2] = iVar2;
            if (uVar42 == uVar46) {
              uVar49 = uVar46 * 2;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar49;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar21 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar49;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar42 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar49;
              uVar46 = uVar49;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar35 = uVar42 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            iVar3 = iVar38 + 3;
            *puVar8 = uVar35;
            *piVar36 = iVar38;
            piVar36[1] = iVar3;
            piVar36[2] = iVar1;
            if (uVar35 == uVar46) {
              uVar42 = uVar46 * 2;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = uVar42;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar22 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar42;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar35 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar35 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar42;
              uVar46 = uVar42;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar42 = uVar35 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            iVar4 = iVar38 + 5;
            piVar36 = (int *)((long)puVar32 + uVar35 * 0xc);
            iVar5 = iVar38 + 4;
            iVar6 = iVar38 + 6;
            *puVar8 = uVar42;
            *piVar36 = iVar5;
            piVar36[1] = iVar4;
            piVar36[2] = iVar6;
            if (uVar42 == uVar46) {
              uVar49 = uVar46 * 2;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar49;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar23 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar49;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar42 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar49;
              uVar46 = uVar49;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar35 = uVar42 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            *puVar8 = uVar35;
            iVar7 = iVar38 + 7;
            *piVar36 = iVar5;
            piVar36[1] = iVar6;
            piVar36[2] = iVar7;
            if (uVar35 == uVar46) {
              uVar42 = uVar46 * 2;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar42;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar24 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar42;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar35 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar35 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar42;
              uVar46 = uVar42;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar42 = uVar35 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar35 * 0xc);
            *puVar8 = uVar42;
            *piVar36 = iVar7;
            piVar36[1] = iVar6;
            piVar36[2] = iVar1;
            if (uVar42 == uVar46) {
              uVar49 = uVar46 * 2;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar49;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar25 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar49;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar42 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar49;
              uVar46 = uVar49;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar35 = uVar42 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            *puVar8 = uVar35;
            *piVar36 = iVar7;
            piVar36[1] = iVar1;
            piVar36[2] = iVar3;
            if (uVar35 == uVar46) {
              uVar42 = uVar46 * 2;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = uVar42;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar26 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar42;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar35 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar35 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar42;
              uVar46 = uVar42;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar42 = uVar35 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar35 * 0xc);
            *puVar8 = uVar42;
            *piVar36 = iVar5;
            piVar36[1] = iVar2;
            piVar36[2] = iVar4;
            if (uVar42 == uVar46) {
              uVar49 = uVar46 * 2;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar49;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar27 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar49;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar42 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar49;
              uVar46 = uVar49;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar35 = uVar42 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            *puVar8 = uVar35;
            *piVar36 = iVar5;
            piVar36[1] = iVar38;
            piVar36[2] = iVar2;
            if (uVar35 == uVar46) {
              uVar42 = uVar46 * 2;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar42;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar28 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar42;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar35 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar35 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar42;
              uVar46 = uVar42;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar42 = uVar35 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar35 * 0xc);
            *puVar8 = uVar42;
            *piVar36 = iVar6;
            piVar36[1] = iVar4;
            piVar36[2] = iVar2;
            if (uVar42 == uVar46) {
              uVar49 = uVar46 * 2;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar49;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar29 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar49;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar42 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar49;
              uVar46 = uVar49;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar35 = uVar42 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            *puVar8 = uVar35;
            *piVar36 = iVar6;
            piVar36[1] = iVar2;
            piVar36[2] = iVar1;
            if (uVar35 == uVar46) {
              uVar42 = uVar46 * 2;
              auVar30._8_8_ = 0;
              auVar30._0_8_ = uVar42;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar30 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar42;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar35 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar35 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar42;
              uVar46 = uVar42;
            }
            else {
              puVar44 = *ppuVar10;
            }
            uVar42 = uVar35 + 1;
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar35 * 0xc);
            *puVar8 = uVar42;
            *piVar36 = iVar7;
            piVar36[1] = iVar38;
            piVar36[2] = iVar5;
            if (uVar42 == uVar46) {
              uVar49 = uVar46 * 2;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = uVar49;
              uVar35 = uVar46 * 0x18 + 8;
              if (SUB168(auVar31 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar46 * 0x18) {
                uVar35 = 0xffffffffffffffff;
              }
              puVar32 = (ulong *)operator_new__(uVar35);
              puVar47 = *ppuVar10;
              puVar44 = puVar32 + 1;
              *puVar32 = uVar49;
              puVar32 = puVar9;
              if (uVar46 != 0x40) {
                puVar32 = puVar47;
              }
              memcpy(puVar44,puVar32,uVar46 * 0xc);
              uVar42 = uVar46;
              if (puVar47 != (ulong *)0x0) {
                operator_delete__(puVar47 + -1);
                uVar42 = *puVar8;
              }
              *(ulong **)(param_1 + 0x918) = puVar44;
              *(ulong *)(param_1 + 0x928) = uVar49;
              uVar46 = uVar49;
            }
            else {
              puVar44 = *ppuVar10;
            }
            puVar32 = puVar9;
            if (uVar46 != 0x40) {
              puVar32 = puVar44;
            }
            piVar36 = (int *)((long)puVar32 + uVar42 * 0xc);
            *puVar8 = uVar42 + 1;
            *piVar36 = iVar7;
            piVar36[1] = iVar3;
            piVar36[2] = iVar38;
          }
          uVar48 = uVar48 + 1;
        } while (uVar39 != uVar48);
        uVar41 = uVar41 + 1;
      } while (uVar41 != uVar34);
      uVar40 = uVar40 + 1;
    } while (uVar40 != uVar33);
  }
  if (plVar43 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ecdfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar43 + 0x20))();
    return;
  }
  return;
}


