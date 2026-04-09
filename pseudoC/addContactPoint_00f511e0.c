// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addContactPoint
// Entry Point: 00f511e0
// Size: 844 bytes
// Signature: undefined __thiscall addContactPoint(btPerturbedContactResult * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* btPerturbedContactResult::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btPerturbedContactResult::addContactPoint
          (btPerturbedContactResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)param_1;
  if (this[0x100] == (btPerturbedContactResult)0x0) {
    uVar18 = *(undefined4 *)(this + 0xb4);
    fVar16 = *(float *)(this + 0xb8);
    fVar36 = *(float *)(this + 0xa0);
    fVar5 = *(float *)(this + 0xa4);
    fVar31 = *(float *)(this + 0x90);
    fVar35 = *(float *)(this + 0x94);
    fVar37 = *(float *)(this + 0x80);
    fVar38 = *(float *)(this + 0x84);
    fVar3 = *(float *)(this + 0xa8);
    uVar12 = *(undefined4 *)(this + 0xb0);
    fVar25 = *(float *)(this + 0xd8);
    fVar7 = *(float *)(this + 0x98);
    fVar42 = *(float *)(this + 0xe0);
    fVar43 = *(float *)(this + 0xe4);
    fVar6 = (float)NEON_fmadd(uVar18,fVar31,fVar16 * fVar36);
    fVar10 = *(float *)(this + 0x88);
    fVar17 = (float)NEON_fmadd(uVar18,fVar35,fVar16 * fVar5);
    fVar21 = *(float *)param_2;
    fVar16 = (float)NEON_fmadd(uVar18,fVar7,fVar16 * fVar3);
    fVar26 = *(float *)(this + 0xc0);
    uVar32 = *(undefined4 *)(this + 0xc4);
    fVar29 = (float)NEON_fnmadd(uVar12,fVar37,-fVar6);
    fVar19 = *(float *)(this + 0xd0);
    fVar22 = *(float *)(this + 0xd4);
    fVar28 = (float)NEON_fnmadd(uVar12,fVar38,-fVar17);
    fVar15 = (float)NEON_fnmadd(uVar12,fVar10,-fVar16);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar12 = NEON_fmadd(uVar32,fVar38,fVar26 * fVar37);
    uVar41 = NEON_fmadd(uVar32,fVar35,fVar26 * fVar31);
    uVar18 = NEON_fmadd(fVar22,fVar38,fVar19 * fVar37);
    fVar40 = *(float *)(this + 0xe8);
    fVar39 = (float)NEON_fmadd(fVar25,fVar10,uVar18);
    uVar30 = *(undefined4 *)(this + 200);
    uVar18 = NEON_fmadd(uVar32,fVar28,fVar29 * fVar26);
    uVar27 = NEON_fmadd(fVar43,fVar5,fVar42 * fVar36);
    uVar12 = NEON_fmadd(uVar30,fVar10,uVar12);
    uVar9 = NEON_fmadd(uVar30,fVar15,uVar18);
    fVar34 = (float)NEON_fmadd(fVar40,fVar3,uVar27);
    uVar18 = NEON_fmadd(uVar32,fVar5,fVar26 * fVar36);
    fVar8 = (float)NEON_fmadd(uVar30,fVar7,uVar41);
    uVar11 = NEON_rev64(uVar4,4);
    fVar24 = (float)NEON_fmadd(uVar12,fVar21,uVar9);
    fVar33 = (float)uVar4;
    fVar23 = (float)((ulong)uVar4 >> 0x20);
    fVar17 = (float)NEON_fmadd(uVar30,fVar3,uVar18);
    fVar6 = (float)*(undefined8 *)(param_1 + 4);
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar16 = (float)NEON_fmadd(fVar2,param_3,fVar21);
    local_68 = fVar24 + fVar8 * fVar33 + fVar17 * fVar23 + *(float *)(this + 0xf0);
    fStack_64 = fVar19 * fVar29 + fVar22 * fVar28 + fVar25 * fVar15 + fVar39 * fVar21 +
                fVar33 * (fVar19 * fVar31 + fVar35 * fVar22 + fVar7 * fVar25) +
                (float)uVar11 * (fVar19 * fVar36 + fVar5 * fVar22 + fVar3 * fVar25) +
                (float)*(undefined8 *)(this + 0xf4);
    local_60 = fVar42 * fVar29 + fVar43 * fVar28 + fVar40 * fVar15 +
               (float)((ulong)*(undefined8 *)(this + 0xf4) >> 0x20) +
               fVar21 * (fVar42 * fVar37 + fVar38 * fVar43 + fVar10 * fVar40) +
               (float)((ulong)uVar11 >> 0x20) * (fVar42 * fVar31 + fVar35 * fVar43 + fVar7 * fVar40)
               + fVar34 * fVar23;
    fVar16 = (float)NEON_fmadd(fVar16 - local_68,fVar2,
                               ((fVar33 + fVar6 * param_3) - fStack_64) * fVar6);
    fVar16 = fVar16 + ((fVar23 + fVar26 * param_3) - local_60) * fVar26;
  }
  else {
    uVar4 = *(undefined8 *)(this + 0x60);
    fVar28 = *(float *)(this + 0x74);
    fVar16 = *(float *)(this + 0x78);
    uVar14 = *(undefined8 *)(this + 0x50);
    uVar11 = NEON_rev64(uVar4,4);
    uVar20 = *(undefined8 *)(this + 0x40);
    uVar13 = NEON_rev64(uVar14,4);
    fVar34 = *(float *)(this + 0xd0);
    fVar36 = *(float *)(this + 0xd4);
    fVar26 = (float)uVar11;
    fVar7 = (float)((ulong)uVar11 >> 0x20);
    uVar11 = NEON_rev64(uVar20,4);
    fVar24 = *(float *)(this + 0x70);
    fVar6 = *(float *)(this + 0x68);
    fVar8 = (float)uVar13;
    fVar10 = (float)((ulong)uVar13 >> 0x20);
    fVar40 = *(float *)(this + 0x58);
    fVar15 = *(float *)(this + 0x48);
    fVar37 = (float)*(undefined8 *)(this + 0xc0);
    fVar3 = (float)*(undefined8 *)(this + 200);
    fVar5 = *(float *)(this + 0xd8);
    fVar17 = (float)NEON_fmadd(fVar28,fVar40,fVar16 * fVar6);
    fVar38 = (float)*(undefined8 *)(this + 0xc4);
    fVar33 = (float)uVar11;
    fVar35 = (float)((ulong)uVar11 >> 0x20);
    fVar21 = -(fVar26 * fVar16 + fVar8 * fVar28) - fVar33 * fVar24;
    fVar23 = -(fVar7 * fVar16 + fVar10 * fVar28) - fVar35 * fVar24;
    uVar11 = NEON_rev64(*(undefined8 *)(this + 0xe0),4);
    fVar28 = (float)NEON_fnmadd(fVar24,fVar15,-fVar17);
    fVar39 = (float)*(undefined8 *)(this + 0xe0);
    fVar29 = (float)uVar11;
    fVar31 = (float)((ulong)uVar11 >> 0x20);
    fVar19 = (float)*(undefined8 *)param_2;
    fVar43 = (float)NEON_fmadd(fVar2,param_3,fVar19);
    fVar22 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar25 = *(float *)(param_1 + 4);
    uVar32 = *(undefined4 *)(param_1 + 8);
    fVar24 = (float)NEON_fmadd(fVar25,param_3,fVar22);
    fVar16 = (float)NEON_fmadd(uVar32,param_3,*(float *)(param_2 + 8));
    uVar18 = *(undefined4 *)(this + 0xe8);
    fVar17 = (float)NEON_fmadd(uVar18,fVar28,fVar29 * fVar21 + fVar31 * fVar23);
    uVar12 = NEON_fmadd(uVar18,fVar15,fVar29 * fVar33 + fVar31 * fVar35);
    uVar9 = NEON_fmadd(uVar18,fVar40,fVar39 * (float)uVar14 + fVar8 * fVar29);
    uVar18 = NEON_fmadd(uVar18,fVar6,fVar39 * (float)uVar4 + fVar26 * fVar29);
    uVar12 = NEON_fmadd(uVar12,fVar43,fVar17 + *(float *)(this + 0xf8));
    local_68 = fVar37 * fVar23 + fVar38 * fVar21 + fVar3 * fVar28 +
               (fVar37 * (float)uVar20 + fVar33 * fVar38 + fVar3 * fVar15) * fVar43 +
               (fVar37 * (float)uVar14 + fVar8 * fVar38 + fVar3 * fVar40) * fVar24 +
               (fVar37 * (float)uVar4 + fVar26 * fVar38 + fVar3 * fVar6) * fVar16 +
               (float)*(undefined8 *)(this + 0xf0);
    fStack_64 = fVar34 * fVar23 + fVar36 * fVar21 + fVar5 * fVar28 +
                (fVar36 * (float)((ulong)uVar20 >> 0x20) + fVar35 * fVar34 + fVar5 * fVar15) *
                fVar43 + (fVar36 * (float)((ulong)uVar14 >> 0x20) + fVar10 * fVar34 + fVar5 * fVar40
                         ) * fVar24 +
                (fVar36 * (float)((ulong)uVar4 >> 0x20) + fVar7 * fVar34 + fVar5 * fVar6) * fVar16 +
                (float)((ulong)*(undefined8 *)(this + 0xf0) >> 0x20);
    uVar12 = NEON_fmadd(uVar9,fVar24,uVar12);
    fVar3 = (float)NEON_fmadd(uVar18,fVar16,uVar12);
    fVar16 = (float)NEON_fmadd(fVar3 - *(float *)(param_2 + 8),uVar32,
                               (local_68 - fVar19) * fVar2 + (fStack_64 - fVar22) * fVar25);
    local_68 = local_68 + fVar2 * fVar16;
    fStack_64 = fStack_64 + fVar25 * fVar16;
    local_60 = (float)NEON_fmadd(fVar16,uVar32,fVar3);
  }
  local_5c = 0;
  (**(code **)(**(long **)(this + 0x38) + 0x20))(fVar16,*(long **)(this + 0x38),param_1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


