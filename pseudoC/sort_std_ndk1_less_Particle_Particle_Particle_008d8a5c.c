// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<Particle,Particle>&,Particle*>
// Entry Point: 008d8a5c
// Size: 2116 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<Particle,Particle>&,Particle*>(Particle * param_1, Particle * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<Particle, Particle>&, Particle*>(Particle*,
   Particle*, std::__ndk1::__less<Particle, Particle>&) */

void std::__ndk1::__sort<std::__ndk1::__less<Particle,Particle>&,Particle*>
               (Particle *param_1,Particle *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
LAB_008d8ab0:
  puVar18 = (undefined8 *)((long)param_2 - 0x24);
  puVar19 = (undefined8 *)param_1;
LAB_008d8ab8:
  param_1 = (Particle *)puVar19;
  uVar10 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar10 >> 2) * -0x71c71c71c71c71c7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x008d90b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_008d90b4 +
              (ulong)*(ushort *)(&DAT_00519788 + ((long)uVar10 >> 2) * 0x1c71c71c71c71c72) * 4))();
    return;
  }
  if ((long)uVar10 < 0x45c) {
    fVar29 = *(float *)((long)param_1 + 0x44);
    puVar19 = (undefined8 *)((long)param_1 + 0x48);
    puVar18 = (undefined8 *)((long)param_1 + 0x24);
    fVar28 = *(float *)((long)param_1 + 0x68);
    if (*(float *)((long)param_1 + 0x20) <= fVar29) {
      if (fVar28 < fVar29) {
        uVar2 = *(undefined4 *)((long)param_1 + 0x44);
        *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x68);
        *(undefined4 *)((long)param_1 + 0x68) = uVar2;
        uVar22 = *(undefined8 *)((long)param_1 + 0x2c);
        uVar21 = *puVar18;
        uVar25 = *(undefined8 *)((long)param_1 + 0x3c);
        uVar24 = *(undefined8 *)((long)param_1 + 0x34);
        *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_1 + 0x50);
        *puVar18 = *puVar19;
        *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x60);
        *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_1 + 0x58);
        *(undefined8 *)((long)param_1 + 0x50) = uVar22;
        *puVar19 = uVar21;
        *(undefined8 *)((long)param_1 + 0x60) = uVar25;
        *(undefined8 *)((long)param_1 + 0x58) = uVar24;
        if (*(float *)((long)param_1 + 0x44) < *(float *)((long)param_1 + 0x20)) {
          uVar25 = *(undefined8 *)((long)param_1 + 8);
          uVar24 = *(undefined8 *)param_1;
          uVar22 = *(undefined8 *)((long)param_1 + 0x18);
          uVar21 = *(undefined8 *)((long)param_1 + 0x10);
          uVar2 = *(undefined4 *)((long)param_1 + 0x20);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x2c);
          *(undefined8 *)param_1 = *puVar18;
          *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x3c);
          *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x34);
          *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x44);
          *(undefined8 *)((long)param_1 + 0x2c) = uVar25;
          *puVar18 = uVar24;
          *(undefined8 *)((long)param_1 + 0x3c) = uVar22;
          *(undefined8 *)((long)param_1 + 0x34) = uVar21;
          *(undefined4 *)((long)param_1 + 0x44) = uVar2;
        }
      }
    }
    else if (fVar29 <= fVar28) {
      uVar25 = *(undefined8 *)((long)param_1 + 8);
      uVar24 = *(undefined8 *)param_1;
      uVar22 = *(undefined8 *)((long)param_1 + 0x18);
      uVar21 = *(undefined8 *)((long)param_1 + 0x10);
      uVar2 = *(undefined4 *)((long)param_1 + 0x20);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x2c);
      *(undefined8 *)param_1 = *puVar18;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x3c);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x34);
      *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x44);
      *(undefined4 *)((long)param_1 + 0x44) = uVar2;
      *(undefined8 *)((long)param_1 + 0x2c) = uVar25;
      *puVar18 = uVar24;
      *(undefined8 *)((long)param_1 + 0x3c) = uVar22;
      *(undefined8 *)((long)param_1 + 0x34) = uVar21;
      if (fVar28 < *(float *)((long)param_1 + 0x44)) {
        uVar25 = *(undefined8 *)((long)param_1 + 0x2c);
        uVar24 = *puVar18;
        uVar22 = *(undefined8 *)((long)param_1 + 0x3c);
        uVar21 = *(undefined8 *)((long)param_1 + 0x34);
        *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_1 + 0x50);
        *puVar18 = *puVar19;
        *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x60);
        *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_1 + 0x58);
        *(undefined8 *)((long)param_1 + 0x50) = uVar25;
        *puVar19 = uVar24;
        *(undefined8 *)((long)param_1 + 0x60) = uVar22;
        *(undefined8 *)((long)param_1 + 0x58) = uVar21;
        uVar2 = *(undefined4 *)((long)param_1 + 0x44);
        *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x68);
        *(undefined4 *)((long)param_1 + 0x68) = uVar2;
      }
    }
    else {
      uVar25 = *(undefined8 *)((long)param_1 + 8);
      uVar24 = *(undefined8 *)param_1;
      uVar22 = *(undefined8 *)((long)param_1 + 0x18);
      uVar21 = *(undefined8 *)((long)param_1 + 0x10);
      uVar2 = *(undefined4 *)((long)param_1 + 0x20);
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x50);
      *(undefined8 *)param_1 = *puVar19;
      *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x60);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x58);
      *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)((long)param_1 + 0x68);
      *(undefined8 *)((long)param_1 + 0x50) = uVar25;
      *puVar19 = uVar24;
      *(undefined8 *)((long)param_1 + 0x60) = uVar22;
      *(undefined8 *)((long)param_1 + 0x58) = uVar21;
      *(undefined4 *)((long)param_1 + 0x68) = uVar2;
    }
    if ((undefined8 *)((long)param_1 + 0x6c) == (undefined8 *)param_2) goto LAB_008d950c;
    lVar11 = 0;
    puVar18 = (undefined8 *)((long)param_1 + 0x6c);
    goto LAB_008d94a8;
  }
  if (uVar10 < 0x8c7d) {
    puVar19 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar10 & 0xffff) / 0x48) * 0x24);
    puVar14 = puVar19 + 4;
    fVar28 = *(float *)puVar14;
    if (*(float *)((long)param_1 + 0x20) <= fVar28) {
      if (fVar28 <= *(float *)((long)param_2 + -4)) {
        uVar8 = 0;
      }
      else {
        uVar27 = puVar19[1];
        uVar23 = *puVar19;
        uVar24 = puVar19[3];
        uVar21 = puVar19[2];
        uVar2 = *(undefined4 *)(puVar19 + 4);
        uVar26 = *puVar18;
        uVar25 = *(undefined8 *)((long)param_2 + -0xc);
        uVar22 = *(undefined8 *)((long)param_2 + -0x14);
        uVar3 = *(undefined4 *)((long)param_2 + -4);
        puVar19[1] = *(undefined8 *)((long)param_2 + -0x1c);
        *puVar19 = uVar26;
        puVar19[3] = uVar25;
        puVar19[2] = uVar22;
        *(undefined4 *)(puVar19 + 4) = uVar3;
        *(undefined8 *)((long)param_2 + -0x1c) = uVar27;
        *puVar18 = uVar23;
        *(undefined8 *)((long)param_2 + -0xc) = uVar24;
        *(undefined8 *)((long)param_2 + -0x14) = uVar21;
        *(undefined4 *)((long)param_2 + -4) = uVar2;
        if (*(float *)((long)param_1 + 0x20) <= *(float *)puVar14) goto LAB_008d8dd8;
        uVar27 = *(undefined8 *)((long)param_1 + 8);
        uVar23 = *(undefined8 *)param_1;
        uVar24 = *(undefined8 *)((long)param_1 + 0x18);
        uVar21 = *(undefined8 *)((long)param_1 + 0x10);
        uVar8 = 2;
        uVar2 = *(undefined4 *)((long)param_1 + 0x20);
        uVar26 = *puVar19;
        uVar25 = puVar19[3];
        uVar22 = puVar19[2];
        uVar3 = *(undefined4 *)(puVar19 + 4);
        *(undefined8 *)((long)param_1 + 8) = puVar19[1];
        *(undefined8 *)param_1 = uVar26;
        *(undefined8 *)((long)param_1 + 0x18) = uVar25;
        *(undefined8 *)((long)param_1 + 0x10) = uVar22;
        *(undefined4 *)((long)param_1 + 0x20) = uVar3;
        puVar19[1] = uVar27;
        *puVar19 = uVar23;
        puVar19[3] = uVar24;
        puVar19[2] = uVar21;
        *(undefined4 *)(puVar19 + 4) = uVar2;
      }
    }
    else {
      if (fVar28 <= *(float *)((long)param_2 + -4)) {
        uVar27 = *(undefined8 *)((long)param_1 + 8);
        uVar23 = *(undefined8 *)param_1;
        uVar24 = *(undefined8 *)((long)param_1 + 0x18);
        uVar21 = *(undefined8 *)((long)param_1 + 0x10);
        uVar2 = *(undefined4 *)((long)param_1 + 0x20);
        uVar26 = *puVar19;
        uVar25 = puVar19[3];
        uVar22 = puVar19[2];
        uVar3 = *(undefined4 *)(puVar19 + 4);
        *(undefined8 *)((long)param_1 + 8) = puVar19[1];
        *(undefined8 *)param_1 = uVar26;
        *(undefined8 *)((long)param_1 + 0x18) = uVar25;
        *(undefined8 *)((long)param_1 + 0x10) = uVar22;
        *(undefined4 *)((long)param_1 + 0x20) = uVar3;
        puVar19[1] = uVar27;
        *puVar19 = uVar23;
        puVar19[3] = uVar24;
        puVar19[2] = uVar21;
        *(undefined4 *)(puVar19 + 4) = uVar2;
        if (*(float *)puVar14 <= *(float *)((long)param_2 + -4)) {
LAB_008d8dd8:
          uVar8 = 1;
          goto LAB_008d8ddc;
        }
        uStack_98 = puVar19[1];
        local_a0 = *puVar19;
        uStack_88 = puVar19[3];
        uStack_90 = puVar19[2];
        uVar8 = 2;
        local_80 = *(undefined4 *)(puVar19 + 4);
        uVar24 = *puVar18;
        uVar22 = *(undefined8 *)((long)param_2 + -0xc);
        uVar21 = *(undefined8 *)((long)param_2 + -0x14);
        uVar2 = *(undefined4 *)((long)param_2 + -4);
        puVar19[1] = *(undefined8 *)((long)param_2 + -0x1c);
        *puVar19 = uVar24;
        puVar19[3] = uVar22;
        puVar19[2] = uVar21;
        *(undefined4 *)(puVar19 + 4) = uVar2;
      }
      else {
        uStack_98 = *(undefined8 *)((long)param_1 + 8);
        local_a0 = *(undefined8 *)param_1;
        uStack_88 = *(undefined8 *)((long)param_1 + 0x18);
        uStack_90 = *(undefined8 *)((long)param_1 + 0x10);
        uVar8 = 1;
        local_80 = *(undefined4 *)((long)param_1 + 0x20);
        uVar24 = *puVar18;
        uVar22 = *(undefined8 *)((long)param_2 + -0xc);
        uVar21 = *(undefined8 *)((long)param_2 + -0x14);
        uVar2 = *(undefined4 *)((long)param_2 + -4);
        *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x1c);
        *(undefined8 *)param_1 = uVar24;
        *(undefined8 *)((long)param_1 + 0x18) = uVar22;
        *(undefined8 *)((long)param_1 + 0x10) = uVar21;
        *(undefined4 *)((long)param_1 + 0x20) = uVar2;
      }
      *(undefined4 *)((long)param_2 + -4) = local_80;
      *(undefined8 *)((long)param_2 + -0x1c) = uStack_98;
      *puVar18 = local_a0;
      *(undefined8 *)((long)param_2 + -0xc) = uStack_88;
      *(undefined8 *)((long)param_2 + -0x14) = uStack_90;
    }
  }
  else {
    puVar19 = (undefined8 *)((long)param_1 + (uVar10 / 0x48) * 0x24);
    lVar11 = (uVar10 / 0x90) * 0x24;
    puVar14 = (undefined8 *)((long)param_1 + lVar11);
    puVar16 = (undefined8 *)((long)puVar19 + lVar11);
    uVar8 = __sort4<std::__ndk1::__less<Particle,Particle>&,Particle*>
                      (param_1,(Particle *)puVar14,(Particle *)puVar19,(Particle *)puVar16,param_3);
    if (*(float *)((long)param_2 + -4) < *(float *)(puVar16 + 4)) {
      uVar27 = puVar16[1];
      uVar23 = *puVar16;
      uVar24 = puVar16[3];
      uVar21 = puVar16[2];
      uVar2 = *(undefined4 *)(puVar16 + 4);
      uVar26 = *puVar18;
      uVar25 = *(undefined8 *)((long)param_2 + -0xc);
      uVar22 = *(undefined8 *)((long)param_2 + -0x14);
      uVar3 = *(undefined4 *)((long)param_2 + -4);
      puVar16[1] = *(undefined8 *)((long)param_2 + -0x1c);
      *puVar16 = uVar26;
      puVar16[3] = uVar25;
      puVar16[2] = uVar22;
      *(undefined4 *)(puVar16 + 4) = uVar3;
      *(undefined8 *)((long)param_2 + -0x1c) = uVar27;
      *puVar18 = uVar23;
      *(undefined8 *)((long)param_2 + -0xc) = uVar24;
      *(undefined8 *)((long)param_2 + -0x14) = uVar21;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
      pfVar12 = (float *)((long)param_1 + (uVar10 / 0x48) * 0x24 + 0x20);
      if (*pfVar12 <= *(float *)(puVar16 + 4)) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar27 = puVar19[1];
        uVar23 = *puVar19;
        uVar24 = puVar19[3];
        uVar21 = puVar19[2];
        uVar2 = *(undefined4 *)(puVar19 + 4);
        uVar26 = *puVar16;
        uVar25 = puVar16[3];
        uVar22 = puVar16[2];
        uVar3 = *(undefined4 *)(puVar16 + 4);
        puVar19[1] = puVar16[1];
        *puVar19 = uVar26;
        puVar19[3] = uVar25;
        puVar19[2] = uVar22;
        *(undefined4 *)(puVar19 + 4) = uVar3;
        *(undefined4 *)(puVar16 + 4) = uVar2;
        fVar28 = *pfVar12;
        puVar16[1] = uVar27;
        *puVar16 = uVar23;
        puVar16[3] = uVar24;
        puVar16[2] = uVar21;
        pfVar12 = (float *)((long)param_1 + (uVar10 / 0x90) * 0x24 + 0x20);
        if (fVar28 < *pfVar12) {
          uVar27 = puVar14[1];
          uVar23 = *puVar14;
          uVar24 = puVar14[3];
          uVar21 = puVar14[2];
          uVar2 = *(undefined4 *)(puVar14 + 4);
          uVar26 = *puVar19;
          uVar25 = puVar19[3];
          uVar22 = puVar19[2];
          uVar3 = *(undefined4 *)(puVar19 + 4);
          puVar14[1] = puVar19[1];
          *puVar14 = uVar26;
          puVar14[3] = uVar25;
          puVar14[2] = uVar22;
          *(undefined4 *)(puVar14 + 4) = uVar3;
          *(undefined4 *)(puVar19 + 4) = uVar2;
          fVar28 = *pfVar12;
          puVar19[1] = uVar27;
          *puVar19 = uVar23;
          puVar19[3] = uVar24;
          puVar19[2] = uVar21;
          if (*(float *)((long)param_1 + 0x20) <= fVar28) {
            uVar8 = uVar8 + 3;
          }
          else {
            uVar27 = *(undefined8 *)((long)param_1 + 8);
            uVar23 = *(undefined8 *)param_1;
            uVar24 = *(undefined8 *)((long)param_1 + 0x18);
            uVar21 = *(undefined8 *)((long)param_1 + 0x10);
            uVar8 = uVar8 + 4;
            uVar2 = *(undefined4 *)((long)param_1 + 0x20);
            uVar26 = *puVar14;
            uVar25 = puVar14[3];
            uVar22 = puVar14[2];
            uVar3 = *(undefined4 *)(puVar14 + 4);
            *(undefined8 *)((long)param_1 + 8) = puVar14[1];
            *(undefined8 *)param_1 = uVar26;
            *(undefined8 *)((long)param_1 + 0x18) = uVar25;
            *(undefined8 *)((long)param_1 + 0x10) = uVar22;
            *(undefined4 *)((long)param_1 + 0x20) = uVar3;
            puVar14[1] = uVar27;
            *puVar14 = uVar23;
            puVar14[3] = uVar24;
            puVar14[2] = uVar21;
            *(undefined4 *)(puVar14 + 4) = uVar2;
          }
        }
        else {
          uVar8 = uVar8 + 2;
        }
      }
    }
  }
LAB_008d8ddc:
  fVar28 = *(float *)((long)param_1 + 0x20);
  puVar14 = puVar18;
  if (*(float *)(puVar19 + 4) <= fVar28) {
    do {
      puVar16 = puVar14;
      puVar14 = (undefined8 *)((long)puVar16 - 0x24);
      if (puVar14 == (undefined8 *)param_1) {
        puVar14 = (undefined8 *)((long)param_1 + 0x24);
        if (*(float *)((long)param_2 + -4) <= fVar28) goto joined_r0x008d8f98;
        goto LAB_008d8ffc;
      }
    } while (*(float *)(puVar19 + 4) <= *(float *)((long)puVar16 - 4));
    uVar27 = *(undefined8 *)((long)param_1 + 8);
    uVar23 = *(undefined8 *)param_1;
    uVar24 = *(undefined8 *)((long)param_1 + 0x18);
    uVar21 = *(undefined8 *)((long)param_1 + 0x10);
    uVar8 = uVar8 + 1;
    uVar2 = *(undefined4 *)((long)param_1 + 0x20);
    uVar26 = *puVar14;
    uVar25 = *(undefined8 *)((long)puVar16 - 0xc);
    uVar22 = *(undefined8 *)((long)puVar16 - 0x14);
    uVar3 = *(undefined4 *)((long)puVar16 - 4);
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)puVar16 - 0x1c);
    *(undefined8 *)param_1 = uVar26;
    *(undefined8 *)((long)param_1 + 0x18) = uVar25;
    *(undefined8 *)((long)param_1 + 0x10) = uVar22;
    *(undefined4 *)((long)param_1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar16 - 0x1c) = uVar27;
    *puVar14 = uVar23;
    *(undefined8 *)((long)puVar16 - 0xc) = uVar24;
    *(undefined8 *)((long)puVar16 - 0x14) = uVar21;
    *(undefined4 *)((long)puVar16 - 4) = uVar2;
  }
  puVar16 = (undefined8 *)((long)param_1 + 0x24);
  puVar20 = puVar16;
  if (puVar16 < puVar14) {
    while( true ) {
      puVar16 = (undefined8 *)((long)puVar20 - 0x24);
      do {
        puVar15 = puVar16;
        puVar16 = (undefined8 *)((long)puVar15 + 0x24);
      } while (*(float *)((long)puVar15 + 0x44) < *(float *)(puVar19 + 4));
      puVar20 = puVar15 + 9;
      do {
        puVar13 = puVar14;
        puVar14 = (undefined8 *)((long)puVar13 - 0x24);
      } while (*(float *)(puVar19 + 4) <= *(float *)((long)puVar13 - 4));
      if (puVar14 < puVar16) break;
      uVar25 = *(undefined8 *)((long)puVar15 + 0x2c);
      uVar24 = *puVar16;
      uVar22 = *(undefined8 *)((long)puVar15 + 0x3c);
      uVar21 = *(undefined8 *)((long)puVar15 + 0x34);
      uVar8 = uVar8 + 1;
      puVar1 = puVar14;
      if (puVar16 != puVar19) {
        puVar1 = puVar19;
      }
      uVar2 = *(undefined4 *)((long)puVar15 + 0x44);
      uVar27 = *puVar14;
      uVar26 = *(undefined8 *)((long)puVar13 - 0xc);
      uVar23 = *(undefined8 *)((long)puVar13 - 0x14);
      uVar3 = *(undefined4 *)((long)puVar13 - 4);
      *(undefined8 *)((long)puVar15 + 0x2c) = *(undefined8 *)((long)puVar13 - 0x1c);
      *puVar16 = uVar27;
      *(undefined8 *)((long)puVar15 + 0x3c) = uVar26;
      *(undefined8 *)((long)puVar15 + 0x34) = uVar23;
      *(undefined4 *)((long)puVar15 + 0x44) = uVar3;
      *(undefined8 *)((long)puVar13 - 0x1c) = uVar25;
      *puVar14 = uVar24;
      *(undefined8 *)((long)puVar13 - 0xc) = uVar22;
      *(undefined8 *)((long)puVar13 - 0x14) = uVar21;
      *(undefined4 *)((long)puVar13 - 4) = uVar2;
      puVar19 = puVar1;
    }
  }
  if ((puVar16 != puVar19) && (*(float *)(puVar19 + 4) < *(float *)(puVar16 + 4))) {
    uVar27 = puVar16[1];
    uVar23 = *puVar16;
    uVar24 = puVar16[3];
    uVar21 = puVar16[2];
    uVar8 = uVar8 + 1;
    uVar2 = *(undefined4 *)(puVar16 + 4);
    uVar26 = *puVar19;
    uVar25 = puVar19[3];
    uVar22 = puVar19[2];
    uVar3 = *(undefined4 *)(puVar19 + 4);
    puVar16[1] = puVar19[1];
    *puVar16 = uVar26;
    puVar16[3] = uVar25;
    puVar16[2] = uVar22;
    *(undefined4 *)(puVar16 + 4) = uVar3;
    puVar19[1] = uVar27;
    *puVar19 = uVar23;
    puVar19[3] = uVar24;
    puVar19[2] = uVar21;
    *(undefined4 *)(puVar19 + 4) = uVar2;
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<Particle,Particle>&,Particle*>
                      (param_1,(Particle *)puVar16,param_3);
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<Particle,Particle>&,Particle*>
                      ((Particle *)(undefined8 *)((long)puVar16 + 0x24),param_2,param_3);
    if (bVar7) goto LAB_008d9090;
    puVar19 = (undefined8 *)((long)puVar16 + 0x24);
    if (bVar6) goto LAB_008d8ab8;
  }
  if (((long)param_2 - (long)puVar16 >> 2) * -0x71c71c71c71c71c7 <=
      ((long)puVar16 - (long)param_1 >> 2) * -0x71c71c71c71c71c7) {
    __sort<std::__ndk1::__less<Particle,Particle>&,Particle*>
              ((Particle *)((long)puVar16 + 0x24),param_2,param_3);
    param_2 = (Particle *)puVar16;
    goto LAB_008d8ab0;
  }
  __sort<std::__ndk1::__less<Particle,Particle>&,Particle*>(param_1,(Particle *)puVar16,param_3);
  puVar19 = (undefined8 *)((long)puVar16 + 0x24);
  goto LAB_008d8ab8;
joined_r0x008d8f98:
  if (puVar14 == puVar18) goto LAB_008d950c;
  if (fVar28 < *(float *)(puVar14 + 4)) goto LAB_008d8fc8;
  puVar14 = (undefined8 *)((long)puVar14 + 0x24);
  goto joined_r0x008d8f98;
LAB_008d8fc8:
  uVar27 = puVar14[1];
  uVar23 = *puVar14;
  uVar24 = puVar14[3];
  uVar21 = puVar14[2];
  uVar2 = *(undefined4 *)(puVar14 + 4);
  uVar26 = *puVar18;
  uVar25 = *(undefined8 *)((long)param_2 + -0xc);
  uVar22 = *(undefined8 *)((long)param_2 + -0x14);
  uVar3 = *(undefined4 *)((long)param_2 + -4);
  puVar14[1] = *(undefined8 *)((long)param_2 + -0x1c);
  *puVar14 = uVar26;
  puVar14[3] = uVar25;
  puVar14[2] = uVar22;
  *(undefined4 *)(puVar14 + 4) = uVar3;
  puVar14 = (undefined8 *)((long)puVar14 + 0x24);
  *(undefined8 *)((long)param_2 + -0x1c) = uVar27;
  *puVar18 = uVar23;
  *(undefined8 *)((long)param_2 + -0xc) = uVar24;
  *(undefined8 *)((long)param_2 + -0x14) = uVar21;
  *(undefined4 *)((long)param_2 + -4) = uVar2;
LAB_008d8ffc:
  puVar16 = puVar18;
  if (puVar14 == puVar18) goto LAB_008d950c;
  while( true ) {
    puVar19 = (undefined8 *)((long)puVar14 - 0x24);
    do {
      puVar20 = puVar19;
      puVar19 = (undefined8 *)((long)puVar20 + 0x24);
    } while (*(float *)((long)puVar20 + 0x44) <= *(float *)((long)param_1 + 0x20));
    puVar14 = puVar20 + 9;
    do {
      puVar15 = puVar16;
      puVar16 = (undefined8 *)((long)puVar15 - 0x24);
    } while (*(float *)((long)param_1 + 0x20) < *(float *)((long)puVar15 - 4));
    if (puVar16 <= puVar19) break;
    uVar27 = *(undefined8 *)((long)puVar20 + 0x2c);
    uVar23 = *puVar19;
    uVar24 = *(undefined8 *)((long)puVar20 + 0x3c);
    uVar21 = *(undefined8 *)((long)puVar20 + 0x34);
    uVar2 = *(undefined4 *)((long)puVar20 + 0x44);
    uVar26 = *puVar16;
    uVar25 = *(undefined8 *)((long)puVar15 - 0xc);
    uVar22 = *(undefined8 *)((long)puVar15 - 0x14);
    uVar3 = *(undefined4 *)((long)puVar15 - 4);
    *(undefined8 *)((long)puVar20 + 0x2c) = *(undefined8 *)((long)puVar15 - 0x1c);
    *puVar19 = uVar26;
    *(undefined8 *)((long)puVar20 + 0x3c) = uVar25;
    *(undefined8 *)((long)puVar20 + 0x34) = uVar22;
    *(undefined4 *)((long)puVar20 + 0x44) = uVar3;
    *(undefined8 *)((long)puVar15 - 0x1c) = uVar27;
    *puVar16 = uVar23;
    *(undefined8 *)((long)puVar15 - 0xc) = uVar24;
    *(undefined8 *)((long)puVar15 - 0x14) = uVar21;
    *(undefined4 *)((long)puVar15 - 4) = uVar2;
  }
  goto LAB_008d8ab8;
LAB_008d9090:
  param_2 = (Particle *)puVar16;
  if (bVar6) goto LAB_008d950c;
  goto LAB_008d8ab0;
LAB_008d94a8:
  do {
    fVar28 = *(float *)(puVar18 + 4);
    if (fVar28 < *(float *)(puVar19 + 4)) {
      uVar25 = puVar18[1];
      uVar24 = *puVar18;
      uVar22 = puVar18[3];
      uVar21 = puVar18[2];
      lVar5 = lVar11;
      do {
        lVar17 = lVar5;
        *(undefined8 *)((long)param_1 + lVar17 + 0x74) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x50);
        *(undefined8 *)((long)param_1 + lVar17 + 0x6c) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x48);
        *(undefined8 *)((long)param_1 + lVar17 + 0x84) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x60);
        *(undefined8 *)((long)param_1 + lVar17 + 0x7c) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x58);
        *(undefined4 *)((long)param_1 + lVar17 + 0x8c) =
             *(undefined4 *)((long)param_1 + lVar17 + 0x68);
        puVar19 = (undefined8 *)param_1;
        if (lVar17 == -0x48) goto LAB_008d948c;
        lVar5 = lVar17 + -0x24;
      } while (fVar28 < *(float *)((long)param_1 + lVar17 + 0x44));
      puVar19 = (undefined8 *)((long)param_1 + lVar17 + 0x48);
LAB_008d948c:
      *(float *)(puVar19 + 4) = fVar28;
      puVar19[1] = uVar25;
      *puVar19 = uVar24;
      puVar19[3] = uVar22;
      puVar19[2] = uVar21;
    }
    puVar14 = (undefined8 *)((long)puVar18 + 0x24);
    lVar11 = lVar11 + 0x24;
    puVar19 = puVar18;
    puVar18 = puVar14;
  } while (puVar14 != (undefined8 *)param_2);
LAB_008d950c:
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


