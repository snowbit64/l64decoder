// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Evaluate
// Entry Point: 00f8948c
// Size: 1144 bytes
// Signature: undefined __thiscall Evaluate(btSparseSdf<3> * this, btVector3 * param_1, btCollisionShape * param_2, btVector3 * param_3, float param_4)


/* btSparseSdf<3>::Evaluate(btVector3 const&, btCollisionShape const*, btVector3&, float) */

float __thiscall
btSparseSdf<3>::Evaluate
          (btSparseSdf<3> *this,btVector3 *param_1,btCollisionShape *param_2,btVector3 *param_3,
          float param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  uint uVar31;
  float fVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  uVar30 = NEON_fmov(0x3f800000,4);
  uVar3 = *(uint *)(this + 4);
  lVar18 = *(long *)(this + 0x10);
  fVar19 = 0.3333333 / *(float *)(this + 0x20);
  fVar20 = fVar19 * *(float *)param_1;
  uVar26 = NEON_rev64(CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar19,
                               (float)*(undefined8 *)(param_1 + 4) * fVar19),4);
  fVar19 = (float)((ulong)uVar26 >> 0x20);
  uVar36 = NEON_fcmlt(uVar26,0,4);
  iVar10 = (int)(1.0 - fVar20);
  if (0.0 <= fVar20) {
    iVar10 = 0;
  }
  uVar36 = CONCAT44((int)((float)((ulong)uVar30 >> 0x20) - fVar19),
                    (int)((float)uVar30 - (float)uVar26)) & uVar36;
  uVar30 = NEON_scvtf(uVar36,4);
  fVar20 = fVar20 + (float)iVar10;
  fVar23 = (float)uVar26 + (float)uVar30;
  fVar19 = fVar19 + (float)((ulong)uVar30 >> 0x20);
  uVar5 = (int)fVar20 - iVar10;
  uVar1 = (uVar5 & 0xffff) + 0x18;
  uVar33 = (int)fVar23 - (int)uVar36;
  uVar37 = (int)fVar19 - (int)(uVar36 >> 0x20);
  uVar1 = uVar5 >> 5 & 0x7fff800 ^ uVar1 ^ uVar1 * 0x10000;
  uVar26 = NEON_fmov(0x40400000,4);
  uVar1 = uVar1 + (uVar37 & 0xffff) + (uVar1 >> 0xb);
  uVar1 = uVar1 ^ uVar37 >> 5 & 0x7fff800 ^ uVar1 * 0x10000;
  fVar20 = (fVar20 - (float)(int)fVar20) * 3.0;
  fVar23 = (fVar23 - (float)(int)fVar23) * (float)uVar26;
  fVar19 = (fVar19 - (float)(int)fVar19) * (float)((ulong)uVar26 >> 0x20);
  uVar1 = uVar1 + (uVar33 & 0xffff) + (uVar1 >> 0xb);
  uVar1 = uVar1 ^ uVar33 >> 5 & 0x7fff800 ^ uVar1 * 0x10000;
  uVar17 = (uint)fVar20;
  uVar1 = uVar1 + (uVar1 >> 0xb);
  uVar1 = uVar1 ^ uVar1 * 0x10000;
  fVar20 = fVar20 - (float)(int)fVar20;
  uVar27 = (uint)fVar23;
  uVar31 = (uint)fVar19;
  uVar1 = uVar1 + (ushort)param_2 + (uVar1 >> 0xb);
  uVar1 = uVar1 ^ (uint)((ulong)param_2 >> 5) & 0x7fff800 ^ uVar1 * 0x10000;
  fVar23 = fVar23 - (float)(int)fVar23;
  fVar19 = fVar19 - (float)(int)fVar19;
  uVar1 = uVar1 + (ushort)((ulong)param_2 >> 0x20) + (uVar1 >> 0xb);
  uVar1 = uVar1 ^ (uint)((ulong)param_2 >> 0x25) & 0x7fff800 ^ uVar1 * 0x10000;
  iVar10 = *(int *)(this + 0x30);
  uVar1 = uVar1 + (uVar1 >> 0xb);
  uVar1 = uVar1 ^ uVar1 * 8;
  uVar1 = uVar1 + (uVar1 >> 5);
  uVar1 = uVar1 ^ uVar1 * 0x10;
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
  uVar1 = uVar1 + (uVar1 >> 0x11);
  uVar1 = uVar1 ^ uVar1 * 0x2000000;
  uVar1 = uVar1 + (uVar1 >> 6);
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar1 / uVar3;
  }
  iVar4 = uVar1 - uVar6 * uVar3;
  for (puVar16 = *(undefined8 **)(lVar18 + (long)iVar4 * 8); puVar16 != (undefined8 *)0x0;
      puVar16 = (undefined8 *)puVar16[0x24]) {
    uVar6 = *(uint *)(puVar16 + 0x22);
    iVar10 = iVar10 + 1;
    *(int *)(this + 0x30) = iVar10;
    if ((((uVar6 == uVar1) && (*(uint *)(puVar16 + 0x20) == uVar5)) &&
        (*(uint *)((long)puVar16 + 0x104) == uVar37)) &&
       ((*(uint *)(puVar16 + 0x21) == uVar33 && ((btCollisionShape *)puVar16[0x23] == param_2))))
    goto LAB_00f8979c;
  }
  iVar2 = *(int *)(this + 0x28);
  *(int *)(this + 0x30) = iVar10 + 1;
  *(int *)(this + 0x28) = iVar2 + 1;
  if (*(int *)(this + 0x2c) <= iVar2) {
    Evaluate(btVector3_const&,btCollisionShape_const*,btVector3&,float)::numResets =
         Evaluate(btVector3_const&,btCollisionShape_const*,btVector3&,float)::numResets + 1;
    if (0 < (int)uVar3) {
      uVar36 = 0;
      lVar11 = lVar18;
      while( true ) {
        pvVar9 = *(void **)(lVar11 + uVar36 * 8);
        *(undefined8 *)(lVar11 + uVar36 * 8) = 0;
        while (pvVar9 != (void *)0x0) {
          pvVar15 = *(void **)((long)pvVar9 + 0x120);
          operator_delete(pvVar9);
          pvVar9 = pvVar15;
        }
        uVar36 = uVar36 + 1;
        if (uVar36 == uVar3) break;
        lVar11 = *(long *)(this + 0x10);
      }
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x20) = 0x3e800000;
    *(undefined8 *)(this + 0x30) = 0x100000001;
  }
  puVar16 = (undefined8 *)operator_new(0x128);
  lVar11 = (long)iVar4 * 8;
  puVar16[1] = 0;
  *puVar16 = 0;
  puVar16[3] = 0;
  puVar16[2] = 0;
  puVar16[5] = 0;
  puVar16[4] = 0;
  puVar16[7] = 0;
  puVar16[6] = 0;
  puVar16[9] = 0;
  puVar16[8] = 0;
  puVar16[0xb] = 0;
  puVar16[10] = 0;
  puVar16[0xd] = 0;
  puVar16[0xc] = 0;
  puVar16[0xf] = 0;
  puVar16[0xe] = 0;
  puVar16[0x11] = 0;
  puVar16[0x10] = 0;
  puVar16[0x13] = 0;
  puVar16[0x12] = 0;
  puVar16[0x15] = 0;
  puVar16[0x14] = 0;
  puVar16[0x17] = 0;
  puVar16[0x16] = 0;
  puVar16[0x19] = 0;
  puVar16[0x18] = 0;
  puVar16[0x1b] = 0;
  puVar16[0x1a] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1c] = 0;
  puVar16[0x1f] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x21] = 0;
  puVar16[0x20] = 0;
  puVar16[0x23] = 0;
  puVar16[0x22] = 0;
  uVar26 = *(undefined8 *)(lVar18 + lVar11);
  *(uint *)(puVar16 + 0x22) = uVar1;
  *(uint *)(puVar16 + 0x20) = uVar5;
  uVar30 = NEON_rev64(CONCAT44(uVar37,uVar33),4);
  puVar16[0x24] = uVar26;
  *(undefined8 **)(lVar18 + lVar11) = puVar16;
  puVar16[0x23] = param_2;
  *(undefined8 *)((long)puVar16 + 0x104) = uVar30;
  BuildCell(this,(Cell *)puVar16);
LAB_00f8979c:
  uVar13 = -(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2;
  lVar14 = (long)(((ulong)uVar31 << 0x20) + 0x100000000) >> 0x1c;
  lVar12 = (long)(((ulong)uVar27 << 0x20) + 0x100000000) >> 0x1e;
  lVar11 = lVar14 + (long)(int)uVar17 * 0x40;
  uVar36 = -(ulong)(uVar31 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar31 << 4;
  lVar7 = uVar36 + (long)(int)uVar17 * 0x40;
  lVar18 = (long)(((ulong)uVar17 << 0x20) + 0x100000000) >> 0x1a;
  fVar24 = *(float *)((long)puVar16 + uVar13 + lVar11);
  lVar8 = uVar36 + lVar18;
  fVar28 = *(float *)((long)puVar16 + uVar13 + lVar7);
  fVar21 = *(float *)((long)puVar16 + lVar12 + lVar7);
  lVar14 = lVar14 + lVar18;
  fVar34 = *(float *)((long)puVar16 + uVar13 + lVar8);
  fVar38 = *(float *)((long)puVar16 + uVar13 + lVar14);
  fVar40 = *(float *)((long)puVar16 + lVar12 + lVar8);
  fVar41 = *(float *)((long)puVar16 + lVar12 + lVar11);
  fVar42 = *(float *)((long)puVar16 + lVar12 + lVar14);
  fVar35 = fVar34 - fVar28;
  fVar39 = fVar40 - fVar21;
  fVar29 = (float)NEON_fmadd(fVar35,fVar20,fVar28);
  *(undefined4 *)((long)puVar16 + 0x10c) = *(undefined4 *)(this + 0x24);
  fVar22 = (float)NEON_fmadd(fVar39,fVar20,fVar21);
  fVar25 = (float)NEON_fmadd(fVar38 - fVar24,fVar20,fVar24 - fVar29);
  fVar35 = fVar35 + ((fVar38 - fVar24) - fVar35) * fVar19;
  fVar32 = (fVar24 - fVar28) + (fVar38 - (fVar34 + (fVar24 - fVar28))) * fVar20;
  fVar28 = (fVar21 - fVar28) + (fVar40 - (fVar34 + (fVar21 - fVar28))) * fVar20;
  fVar29 = fVar29 + fVar25 * fVar19;
  fVar32 = fVar32 + fVar23 * (((fVar41 - fVar21) - fVar32) +
                             (fVar42 - (fVar40 + (fVar41 - fVar21))) * fVar20);
  fVar28 = fVar28 + fVar19 * (((fVar41 - fVar24) - fVar28) +
                             (fVar42 - (fVar38 + (fVar41 - fVar24))) * fVar20);
  fVar35 = fVar35 + ((fVar39 - fVar35) + ((fVar42 - fVar41) - fVar39) * fVar19) * fVar23;
  fVar21 = (float)NEON_fmadd(fVar35,fVar35,fVar32 * fVar32);
  fVar21 = 1.0 / SQRT(fVar21 + fVar28 * fVar28);
  fVar20 = (float)NEON_fmadd(fVar42 - fVar41,fVar20,fVar41 - fVar22);
  *(float *)param_3 = fVar21 * fVar35;
  *(ulong *)(param_3 + 4) = CONCAT44(fVar28 * fVar21,fVar32 * fVar21);
  return (fVar29 - param_4) + ((fVar22 - fVar29) + fVar20 * fVar19) * fVar23;
}


