// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clip
// Entry Point: 00eb0c70
// Size: 872 bytes
// Signature: undefined __thiscall Clip(Mesh * this, Plane * param_1, SArray * param_2, SArray * param_3)


/* VHACD::Mesh::Clip(VHACD::Plane const&, VHACD::SArray<VHACD::Vec3<double>, 64ul>&,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>&) const */

void __thiscall VHACD::Mesh::Clip(Mesh *this,Plane *param_1,SArray *param_2,SArray *param_3)

{
  ulong *puVar1;
  Mesh *pMVar2;
  SArray *pSVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  ulong *puVar8;
  SArray *pSVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  double dVar17;
  
  lVar12 = *(long *)(this + 0x608);
  if (lVar12 != 0) {
    lVar13 = 0;
    do {
      while( true ) {
        pMVar2 = this;
        if (*(long *)(this + 0x610) != 0x40) {
          pMVar2 = *(Mesh **)(this + 0x600);
        }
        puVar1 = (ulong *)(pMVar2 + lVar13);
        uVar15 = *puVar1;
        uVar16 = NEON_fmadd(*(undefined8 *)param_1,uVar15,
                            *(double *)(param_1 + 8) * (double)puVar1[1]);
        dVar17 = (double)NEON_fmadd(*(undefined8 *)(param_1 + 0x10),puVar1[2],uVar16);
        if (dVar17 + *(double *)(param_1 + 0x18) <= 0.0) break;
        uVar14 = *(ulong *)(param_2 + 0x608);
        uVar10 = *(ulong *)(param_2 + 0x610);
        if (uVar14 == uVar10) {
          uVar10 = uVar14 * 2;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar10;
          uVar15 = uVar14 * 0x30 | 8;
          if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
            uVar15 = 0xffffffffffffffff;
          }
          puVar8 = (ulong *)operator_new__(uVar15);
          pSVar9 = *(SArray **)(param_2 + 0x600);
          pSVar3 = param_2;
          if (uVar14 != 0x40) {
            pSVar3 = pSVar9;
          }
          puVar11 = puVar8 + 1;
          *puVar8 = uVar10;
          memcpy(puVar11,pSVar3,uVar14 * 0x18);
          if (pSVar9 != (SArray *)0x0) {
            operator_delete__(pSVar9 + -8);
            uVar14 = *(ulong *)(param_2 + 0x608);
          }
          *(ulong **)(param_2 + 0x600) = puVar11;
          uVar15 = *(ulong *)(pMVar2 + lVar13);
          *(ulong *)(param_2 + 0x610) = uVar10;
        }
        else {
          puVar11 = *(ulong **)(param_2 + 0x600);
        }
        puVar8 = (ulong *)param_2;
        if (uVar10 != 0x40) {
          puVar8 = puVar11;
        }
        puVar8 = puVar8 + uVar14 * 3;
        *(ulong *)(param_2 + 0x608) = uVar14 + 1;
        *puVar8 = uVar15;
        puVar8[1] = puVar1[1];
        lVar12 = lVar12 + -1;
        lVar13 = lVar13 + 0x18;
        puVar8[2] = puVar1[2];
        if (lVar12 == 0) {
          return;
        }
      }
      if (0.0 <= dVar17 + *(double *)(param_1 + 0x18)) {
        uVar14 = *(ulong *)(param_2 + 0x608);
        uVar10 = *(ulong *)(param_2 + 0x610);
        if (uVar14 == uVar10) {
          uVar10 = uVar14 * 2;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar10;
          uVar15 = uVar14 * 0x30 | 8;
          if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
            uVar15 = 0xffffffffffffffff;
          }
          puVar8 = (ulong *)operator_new__(uVar15);
          pSVar9 = *(SArray **)(param_2 + 0x600);
          pSVar3 = param_2;
          if (uVar14 != 0x40) {
            pSVar3 = pSVar9;
          }
          puVar11 = puVar8 + 1;
          *puVar8 = uVar10;
          memcpy(puVar11,pSVar3,uVar14 * 0x18);
          if (pSVar9 != (SArray *)0x0) {
            operator_delete__(pSVar9 + -8);
            uVar14 = *(ulong *)(param_2 + 0x608);
          }
          *(ulong **)(param_2 + 0x600) = puVar11;
          uVar15 = *(ulong *)(pMVar2 + lVar13);
          *(ulong *)(param_2 + 0x610) = uVar10;
        }
        else {
          puVar11 = *(ulong **)(param_2 + 0x600);
        }
        puVar8 = (ulong *)param_2;
        if (uVar10 != 0x40) {
          puVar8 = puVar11;
        }
        uVar10 = *(ulong *)(param_3 + 0x610);
        puVar8 = puVar8 + uVar14 * 3;
        *(ulong *)(param_2 + 0x608) = uVar14 + 1;
        uVar14 = *(ulong *)(param_3 + 0x608);
        *puVar8 = uVar15;
        puVar8[1] = puVar1[1];
        puVar8[2] = puVar1[2];
        if (uVar14 == uVar10) {
          uVar10 = uVar14 * 2;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar10;
          uVar15 = uVar14 * 0x30 | 8;
          if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
            uVar15 = 0xffffffffffffffff;
          }
          puVar8 = (ulong *)operator_new__(uVar15);
          pSVar9 = *(SArray **)(param_3 + 0x600);
          puVar11 = puVar8 + 1;
          *puVar8 = uVar10;
          pSVar3 = param_3;
          if (uVar14 != 0x40) {
            pSVar3 = pSVar9;
          }
          memcpy(puVar11,pSVar3,uVar14 * 0x18);
          if (pSVar9 != (SArray *)0x0) {
            operator_delete__(pSVar9 + -8);
            uVar14 = *(ulong *)(param_3 + 0x608);
          }
          *(ulong **)(param_3 + 0x600) = puVar11;
          *(ulong *)(param_3 + 0x610) = uVar10;
        }
        else {
          puVar11 = *(ulong **)(param_3 + 0x600);
        }
        uVar15 = *(ulong *)(pMVar2 + lVar13);
      }
      else {
        uVar14 = *(ulong *)(param_3 + 0x608);
        uVar10 = *(ulong *)(param_3 + 0x610);
        if (uVar14 == uVar10) {
          uVar10 = uVar14 * 2;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar10;
          uVar15 = uVar14 * 0x30 | 8;
          if (SUB168(auVar5 * ZEXT816(0x18),8) != 0) {
            uVar15 = 0xffffffffffffffff;
          }
          puVar8 = (ulong *)operator_new__(uVar15);
          pSVar9 = *(SArray **)(param_3 + 0x600);
          puVar11 = puVar8 + 1;
          *puVar8 = uVar10;
          pSVar3 = param_3;
          if (uVar14 != 0x40) {
            pSVar3 = pSVar9;
          }
          memcpy(puVar11,pSVar3,uVar14 * 0x18);
          if (pSVar9 != (SArray *)0x0) {
            operator_delete__(pSVar9 + -8);
            uVar14 = *(ulong *)(param_3 + 0x608);
          }
          *(ulong **)(param_3 + 0x600) = puVar11;
          uVar15 = *(ulong *)(pMVar2 + lVar13);
          *(ulong *)(param_3 + 0x610) = uVar10;
        }
        else {
          puVar11 = *(ulong **)(param_3 + 0x600);
        }
      }
      puVar8 = (ulong *)param_3;
      if (uVar10 != 0x40) {
        puVar8 = puVar11;
      }
      puVar8 = puVar8 + uVar14 * 3;
      *(ulong *)(param_3 + 0x608) = uVar14 + 1;
      *puVar8 = uVar15;
      puVar8[1] = puVar1[1];
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 0x18;
      puVar8[2] = puVar1[2];
    } while (lVar12 != 0);
  }
  return;
}


