// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshContactPoints
// Entry Point: 00f708d0
// Size: 692 bytes
// Signature: undefined __thiscall refreshContactPoints(btPersistentManifold * this, btTransform * param_1, btTransform * param_2)


/* btPersistentManifold::refreshContactPoints(btTransform const&, btTransform const&) */

void __thiscall
btPersistentManifold::refreshContactPoints
          (btPersistentManifold *this,btTransform *param_1,btTransform *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  
  uVar7 = (ulong)*(uint *)(this + 0x318);
  if (0 < (int)*(uint *)(this + 0x318)) {
    uVar4 = uVar7 + 1;
    do {
      uVar3 = (int)uVar4 - 2;
      uVar4 = uVar4 - 1;
      fVar8 = *(float *)param_1;
      uVar11 = *(undefined4 *)(param_1 + 4);
      fVar17 = *(float *)(param_1 + 0x10);
      uVar32 = *(undefined4 *)(param_1 + 0x14);
      fVar22 = *(float *)(param_1 + 0x20);
      uVar38 = *(undefined4 *)(param_1 + 0x24);
      fVar14 = *(float *)(this + (ulong)uVar3 * 0xc0 + 8);
      uVar28 = *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0xc);
      uVar41 = *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x20);
      this[(ulong)uVar3 * 0xc0 + 0xa4] = (btPersistentManifold)0x0;
      uVar23 = *(undefined4 *)(param_1 + 8);
      uVar11 = NEON_fmadd(uVar11,uVar28,fVar8 * fVar14);
      uVar18 = NEON_fmadd(uVar32,uVar28,fVar17 * fVar14);
      uVar32 = NEON_fmadd(uVar38,uVar28,fVar22 * fVar14);
      uVar28 = *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x10);
      uVar38 = *(undefined4 *)(param_1 + 0x18);
      *(int *)(this + (ulong)uVar3 * 0xc0 + 0xa0) = *(int *)(this + (ulong)uVar3 * 0xc0 + 0xa0) + 1;
      fVar8 = (float)NEON_fmadd(uVar23,uVar28,uVar11);
      fVar19 = (float)NEON_fmadd(uVar38,uVar28,uVar18);
      fVar24 = *(float *)(param_1 + 0x30);
      fVar33 = *(float *)(param_1 + 0x34);
      fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar28,uVar32);
      fVar17 = *(float *)(param_1 + 0x38);
      *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x44) = 0;
      fVar22 = *(float *)(this + (ulong)uVar3 * 0xc0 + 0x18);
      uVar28 = *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x1c);
      *(float *)(this + (ulong)uVar3 * 0xc0 + 0x38) = fVar8 + fVar24;
      *(float *)(this + (ulong)uVar3 * 0xc0 + 0x3c) = fVar19 + fVar33;
      *(float *)(this + (ulong)uVar3 * 0xc0 + 0x40) = fVar14 + fVar17;
      uVar11 = NEON_fmadd(*(undefined4 *)(param_2 + 4),uVar28,*(float *)param_2 * fVar22);
      uVar32 = NEON_fmadd(*(undefined4 *)(param_2 + 0x14),uVar28,*(float *)(param_2 + 0x10) * fVar22
                         );
      uVar28 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),uVar28,*(float *)(param_2 + 0x20) * fVar22
                         );
      fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),uVar41,uVar11);
      fVar29 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x18),uVar41,uVar32);
      fVar34 = *(float *)(param_2 + 0x30);
      fVar39 = *(float *)(param_2 + 0x34);
      fVar40 = *(float *)(this + (ulong)uVar3 * 0xc0 + 0x48);
      uVar11 = *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x4c);
      fVar25 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x28),uVar41,uVar28);
      fVar35 = *(float *)(param_2 + 0x38);
      *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x34) = 0;
      *(float *)(this + (ulong)uVar3 * 0xc0 + 0x28) = fVar22 + fVar34;
      *(float *)(this + (ulong)uVar3 * 0xc0 + 0x2c) = fVar29 + fVar39;
      *(float *)(this + (ulong)uVar3 * 0xc0 + 0x30) = fVar25 + fVar35;
      uVar11 = NEON_fmadd(uVar11,(fVar19 + fVar33) - (fVar29 + fVar39),
                          fVar40 * ((fVar8 + fVar24) - (fVar22 + fVar34)));
      uVar11 = NEON_fmadd(*(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x50),
                          (fVar14 + fVar17) - (fVar25 + fVar35),uVar11);
      *(undefined4 *)(this + (ulong)uVar3 * 0xc0 + 0x58) = uVar11;
    } while (1 < uVar4);
    do {
      fVar8 = *(float *)(this + 0x31c);
      uVar4 = uVar7 - 1 & 0xffffffff;
      fVar14 = *(float *)(this + uVar4 * 0xc0 + 0x58);
      if (fVar8 < fVar14) {
LAB_00f70aac:
        if ((*(long *)(this + uVar4 * 0xc0 + 0x78) != 0) &&
           (gContactDestroyedCallback != (code *)0x0)) {
          (*gContactDestroyedCallback)();
          *(long *)(this + uVar4 * 0xc0 + 0x78) = 0;
        }
        uVar5 = (long)(int)*(uint *)(this + 0x318) - 1;
        uVar6 = uVar5;
        if (uVar7 != *(uint *)(this + 0x318)) {
          uVar9 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x38);
          uVar13 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x10);
          uVar12 = *(undefined8 *)(this + uVar5 * 0xc0 + 8);
          uVar16 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x20);
          uVar15 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x18);
          uVar21 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x30);
          uVar20 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x28);
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x40) = *(undefined8 *)(this + uVar5 * 0xc0 + 0x40);
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x38) = uVar9;
          uVar10 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x80);
          uVar9 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x78);
          uVar26 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x68);
          uVar30 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x60);
          uVar27 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x58);
          uVar36 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x50);
          uVar31 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x48);
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x70) = *(undefined8 *)(this + uVar5 * 0xc0 + 0x70);
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x68) = uVar26;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x80) = uVar10;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x78) = uVar9;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x50) = uVar36;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x48) = uVar31;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x60) = uVar30;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x58) = uVar27;
          uVar10 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x90);
          uVar9 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x88);
          uVar27 = *(undefined8 *)(this + uVar5 * 0xc0 + 0xa0);
          uVar26 = *(undefined8 *)(this + uVar5 * 0xc0 + 0x98);
          uVar31 = *(undefined8 *)(this + uVar5 * 0xc0 + 0xb0);
          uVar30 = *(undefined8 *)(this + uVar5 * 0xc0 + 0xa8);
          uVar37 = *(undefined8 *)(this + uVar5 * 0xc0 + 0xc0);
          uVar36 = *(undefined8 *)(this + uVar5 * 0xc0 + 0xb8);
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x20) = uVar16;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x18) = uVar15;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x30) = uVar21;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x28) = uVar20;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x90) = uVar10;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x88) = uVar9;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0xa0) = uVar27;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x98) = uVar26;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0x10) = uVar13;
          *(undefined8 *)(this + uVar4 * 0xc0 + 8) = uVar12;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0xb0) = uVar31;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0xa8) = uVar30;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0xc0) = uVar37;
          *(undefined8 *)(this + uVar4 * 0xc0 + 0xb8) = uVar36;
          iVar2 = *(int *)(this + 0x318);
          *(undefined8 *)(this + uVar5 * 0xc0 + 0x78) = 0;
          this[uVar5 * 0xc0 + 0x80] = (btPersistentManifold)0x0;
          *(undefined8 *)(this + uVar5 * 0xc0 + 0x88) = 0;
          uVar6 = (ulong)(iVar2 - 1);
          *(undefined4 *)(this + uVar5 * 0xc0 + 0x84) = 0;
          *(undefined4 *)(this + uVar5 * 0xc0 + 0xa0) = 0;
          this[uVar5 * 0xc0 + 0xa4] = (btPersistentManifold)0x0;
        }
        *(int *)(this + 0x318) = (int)uVar6;
      }
      else {
        fVar17 = (float)NEON_fnmsub(fVar14,*(undefined4 *)(this + uVar4 * 0xc0 + 0x48),
                                    *(undefined4 *)(this + uVar4 * 0xc0 + 0x38));
        fVar22 = (float)*(undefined8 *)(this + uVar4 * 0xc0 + 0x2c) +
                 -(float)*(undefined8 *)(this + uVar4 * 0xc0 + 0x3c) +
                 (float)*(undefined8 *)(this + uVar4 * 0xc0 + 0x4c) * fVar14;
        fVar19 = (float)((ulong)*(undefined8 *)(this + uVar4 * 0xc0 + 0x2c) >> 0x20) +
                 -(float)((ulong)*(undefined8 *)(this + uVar4 * 0xc0 + 0x3c) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(this + uVar4 * 0xc0 + 0x4c) >> 0x20) * fVar14;
        fVar14 = (float)NEON_fmadd(*(float *)(this + uVar4 * 0xc0 + 0x28) + fVar17,
                                   *(float *)(this + uVar4 * 0xc0 + 0x28) + fVar17,fVar22 * fVar22);
        if (fVar8 * fVar8 < fVar14 + fVar19 * fVar19) goto LAB_00f70aac;
        if (gContactProcessedCallback != (code *)0x0) {
          (*gContactProcessedCallback)
                    (this + uVar4 * 0xc0 + 8,*(undefined8 *)(this + 0x308),
                     *(undefined8 *)(this + 0x310));
        }
      }
      bVar1 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  return;
}


