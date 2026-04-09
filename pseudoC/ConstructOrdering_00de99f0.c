// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConstructOrdering
// Entry Point: 00de99f0
// Size: 796 bytes
// Signature: undefined __thiscall ConstructOrdering(ClusterFit * this, Vec3 * param_1, int param_2)


/* squish::ClusterFit::ConstructOrdering(squish::Vec3 const&, int) */

byte __thiscall squish::ClusterFit::ConstructOrdering(ClusterFit *this,Vec3 *param_1,int param_2)

{
  uint uVar1;
  ClusterFit CVar2;
  ClusterFit CVar3;
  long lVar4;
  bool bVar5;
  ClusterFit *pCVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ClusterFit *pCVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ClusterFit *pCVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined8 local_58 [8];
  long local_18;
  
  uVar7 = (ulong)(uint)param_2;
  lVar4 = tpidr_el0;
  uVar9 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  local_18 = *(long *)(lVar4 + 0x28);
  puVar12 = *(uint **)(this + 8);
  uVar1 = *puVar12;
  uVar8 = (ulong)uVar1;
  if ((int)uVar1 < 1) goto LAB_00de9af0;
  if (uVar1 < 0x10) {
    uVar11 = 0;
LAB_00de9a28:
    puVar12 = puVar12 + uVar11 * 3;
    do {
      uVar30 = puVar12[3];
      uVar22 = NEON_fmadd(puVar12[1],*(undefined4 *)param_1,
                          (float)puVar12[2] * *(float *)(param_1 + 4));
      uVar24 = *(undefined4 *)(param_1 + 8);
      this[uVar11 + uVar9 + 0x24] = SUB81(uVar11,0);
      uVar22 = NEON_fmadd(uVar30,uVar24,uVar22);
      *(undefined4 *)((long)local_58 + uVar11 * 4) = uVar22;
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 3;
    } while (uVar8 != uVar11);
  }
  else {
    uVar11 = 0;
    if ((this + uVar9 + 0x24 < puVar12 + uVar8 * 3 + 1 && puVar12 + 1 < this + uVar9 + uVar8 + 0x24)
       || (this + uVar9 + 0x24 < param_1 + 0xc && param_1 < this + uVar9 + uVar8 + 0x24))
    goto LAB_00de9a28;
    uVar11 = uVar8 & 0xfffffff0;
    fVar23 = *(float *)(param_1 + 8);
    uVar28 = 0xf0e0d0c0b0a0908;
    uVar26 = 0x706050403020100;
    pfVar14 = (float *)(puVar12 + 1);
    puVar15 = (undefined8 *)(this + uVar9 + 0x24);
    puVar18 = local_58;
    uVar16 = uVar11;
    do {
      uVar16 = uVar16 - 0x10;
      fVar25 = *pfVar14;
      fVar32 = pfVar14[1];
      fVar36 = pfVar14[2];
      fVar27 = pfVar14[3];
      fVar33 = pfVar14[4];
      fVar37 = pfVar14[5];
      fVar29 = pfVar14[6];
      fVar34 = pfVar14[7];
      fVar38 = pfVar14[8];
      fVar31 = pfVar14[9];
      fVar35 = pfVar14[10];
      fVar39 = pfVar14[0xb];
      fVar41 = pfVar14[0xc];
      fVar45 = pfVar14[0xd];
      fVar49 = pfVar14[0xe];
      fVar42 = pfVar14[0xf];
      fVar46 = pfVar14[0x10];
      fVar50 = pfVar14[0x11];
      fVar43 = pfVar14[0x12];
      fVar47 = pfVar14[0x13];
      fVar51 = pfVar14[0x14];
      fVar44 = pfVar14[0x15];
      fVar48 = pfVar14[0x16];
      fVar52 = pfVar14[0x17];
      fVar40 = (float)*(undefined8 *)(param_1 + 4);
      fVar77 = (float)*(undefined8 *)param_1;
      fVar53 = pfVar14[0x18];
      fVar57 = pfVar14[0x19];
      fVar61 = pfVar14[0x1a];
      fVar54 = pfVar14[0x1b];
      fVar58 = pfVar14[0x1c];
      fVar62 = pfVar14[0x1d];
      fVar55 = pfVar14[0x1e];
      fVar59 = pfVar14[0x1f];
      fVar63 = pfVar14[0x20];
      fVar56 = pfVar14[0x21];
      fVar60 = pfVar14[0x22];
      fVar64 = pfVar14[0x23];
      fVar65 = pfVar14[0x24];
      fVar69 = pfVar14[0x25];
      fVar73 = pfVar14[0x26];
      fVar66 = pfVar14[0x27];
      fVar70 = pfVar14[0x28];
      fVar74 = pfVar14[0x29];
      fVar67 = pfVar14[0x2a];
      fVar71 = pfVar14[0x2b];
      fVar75 = pfVar14[0x2c];
      fVar68 = pfVar14[0x2d];
      fVar72 = pfVar14[0x2e];
      fVar76 = pfVar14[0x2f];
      puVar15[1] = uVar28;
      *puVar15 = uVar26;
      uVar26 = CONCAT17((char)((ulong)uVar26 >> 0x38) + '\x10',
                        CONCAT16((char)((ulong)uVar26 >> 0x30) + '\x10',
                                 CONCAT15((char)((ulong)uVar26 >> 0x28) + '\x10',
                                          CONCAT14((char)((ulong)uVar26 >> 0x20) + '\x10',
                                                   CONCAT13((char)((ulong)uVar26 >> 0x18) + '\x10',
                                                            CONCAT12((char)((ulong)uVar26 >> 0x10) +
                                                                     '\x10',CONCAT11((char)((ulong)
                                                  uVar26 >> 8) + '\x10',(char)uVar26 + '\x10')))))))
      ;
      uVar28 = CONCAT17((char)((ulong)uVar28 >> 0x38) + '\x10',
                        CONCAT16((char)((ulong)uVar28 >> 0x30) + '\x10',
                                 CONCAT15((char)((ulong)uVar28 >> 0x28) + '\x10',
                                          CONCAT14((char)((ulong)uVar28 >> 0x20) + '\x10',
                                                   CONCAT13((char)((ulong)uVar28 >> 0x18) + '\x10',
                                                            CONCAT12((char)((ulong)uVar28 >> 0x10) +
                                                                     '\x10',CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + '\x10',(char)uVar28 + '\x10')))))))
      ;
      puVar18[5] = CONCAT44(fVar60 * fVar40 + fVar56 * fVar77 + fVar23 * fVar64,
                            fVar59 * fVar40 + fVar55 * fVar77 + fVar23 * fVar63);
      puVar18[4] = CONCAT44(fVar58 * fVar40 + fVar54 * fVar77 + fVar23 * fVar62,
                            fVar57 * fVar40 + fVar53 * fVar77 + fVar23 * fVar61);
      puVar18[7] = CONCAT44(fVar72 * fVar40 + fVar68 * fVar77 + fVar23 * fVar76,
                            fVar71 * fVar40 + fVar67 * fVar77 + fVar23 * fVar75);
      puVar18[6] = CONCAT44(fVar70 * fVar40 + fVar66 * fVar77 + fVar23 * fVar74,
                            fVar69 * fVar40 + fVar65 * fVar77 + fVar23 * fVar73);
      puVar18[1] = CONCAT44(fVar35 * fVar40 + fVar31 * fVar77 + fVar23 * fVar39,
                            fVar34 * fVar40 + fVar29 * fVar77 + fVar23 * fVar38);
      *puVar18 = CONCAT44(fVar33 * fVar40 + fVar27 * fVar77 + fVar23 * fVar37,
                          fVar32 * fVar40 + fVar25 * fVar77 + fVar23 * fVar36);
      puVar18[3] = CONCAT44(fVar48 * fVar40 + fVar44 * fVar77 + fVar23 * fVar52,
                            fVar47 * fVar40 + fVar43 * fVar77 + fVar23 * fVar51);
      puVar18[2] = CONCAT44(fVar46 * fVar40 + fVar42 * fVar77 + fVar23 * fVar50,
                            fVar45 * fVar40 + fVar41 * fVar77 + fVar23 * fVar49);
      pfVar14 = pfVar14 + 0x30;
      puVar15 = puVar15 + 2;
      puVar18 = puVar18 + 8;
    } while (uVar16 != 0);
    if (uVar11 != uVar8) goto LAB_00de9a28;
  }
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      uVar16 = uVar11;
      if ((int)uVar11 != 0) {
        do {
          uVar19 = uVar16 - 1;
          fVar23 = *(float *)((long)local_58 + uVar16 * 4);
          fVar25 = *(float *)((long)local_58 + (uVar19 & 0xffffffff) * 4);
          if (fVar25 <= fVar23) break;
          uVar20 = uVar19 & 0xffffffff;
          *(float *)((long)local_58 + uVar16 * 4) = fVar25;
          CVar2 = this[uVar16 + uVar9 + 0x24];
          CVar3 = this[uVar20 + uVar9 + 0x24];
          *(float *)((long)local_58 + uVar20 * 4) = fVar23;
          this[uVar16 + uVar9 + 0x24] = CVar3;
          this[uVar20 + uVar9 + 0x24] = CVar2;
          bVar5 = 1 < (long)uVar16;
          uVar16 = uVar19;
        } while (bVar5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
LAB_00de9af0:
  if (param_2 < 1) {
    bVar5 = false;
LAB_00de9b64:
    puVar15 = (undefined8 *)(this + 0x1a4);
    lVar13 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1ac) = 0;
    *puVar15 = 0;
    if (0 < (int)uVar1) {
      pfVar14 = (float *)(this + 0xb0);
      pCVar10 = this + uVar9 + 0x24;
      do {
        uVar8 = uVar8 - 1;
        lVar21 = lVar13 + (ulong)(byte)*pCVar10 * 0xc;
        fVar23 = *(float *)(lVar13 + (ulong)(byte)*pCVar10 * 4 + 0xc4);
        uVar26 = *(undefined8 *)(lVar21 + 4);
        fVar25 = (float)uVar26 * fVar23;
        fVar27 = (float)((ulong)uVar26 >> 0x20) * fVar23;
        fVar29 = *(float *)(lVar21 + 0xc) * fVar23;
        *(ulong *)(pfVar14 + -3) = CONCAT44(fVar27,fVar25);
        pfVar14[-1] = fVar29;
        *pfVar14 = fVar23;
        pfVar14 = pfVar14 + 4;
        *(ulong *)(this + 0x1ac) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(this + 0x1ac) >> 0x20),
                      fVar29 + (float)*(undefined8 *)(this + 0x1ac));
        *puVar15 = CONCAT44(fVar27 + (float)((ulong)*puVar15 >> 0x20),fVar25 + (float)*puVar15);
        pCVar10 = pCVar10 + 1;
      } while (uVar8 != 0);
    }
  }
  else if ((int)uVar1 < 1) {
    bVar5 = true;
  }
  else {
    uVar11 = 0;
    pCVar10 = this + 0x24;
    bVar5 = true;
    pCVar6 = this + uVar9 + 0x24;
    uVar16 = uVar8;
    pCVar17 = pCVar10;
    do {
      while (*pCVar6 != *pCVar10) {
        uVar11 = uVar11 + 1;
        pCVar10 = pCVar17 + 0x10;
        bVar5 = uVar11 < uVar7;
        pCVar6 = this + uVar9 + 0x24;
        uVar16 = uVar8;
        pCVar17 = pCVar10;
        if (uVar11 == uVar7) goto LAB_00de9b64;
      }
      pCVar10 = pCVar10 + 1;
      uVar16 = uVar16 - 1;
      pCVar6 = pCVar6 + 1;
    } while (uVar16 != 0);
  }
  if (*(long *)(lVar4 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5 ^ 1;
}


