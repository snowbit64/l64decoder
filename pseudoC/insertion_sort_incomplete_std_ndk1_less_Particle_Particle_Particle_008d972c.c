// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<Particle,Particle>&,Particle*>
// Entry Point: 008d972c
// Size: 1168 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<Particle,Particle>&,Particle*>(Particle * param_1, Particle * param_2, __less * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<Particle, Particle>&,
   Particle*>(Particle*, Particle*, std::__ndk1::__less<Particle, Particle>&) */

bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<Particle,Particle>&,Particle*>
               (Particle *param_1,Particle *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar4 = tpidr_el0;
  lVar12 = *(long *)(lVar4 + 0x28);
  uVar7 = ((long)param_2 - (long)param_1 >> 2) * -0x71c71c71c71c71c7;
  if (uVar7 < 6) {
    bVar6 = true;
    switch(uVar7) {
    default:
      goto switchD_008d979c_caseD_0;
    case 2:
      if (*(float *)(param_2 + -4) < *(float *)(param_1 + 0x20)) {
        uVar15 = *(undefined8 *)(param_1 + 8);
        uVar14 = *(undefined8 *)param_1;
        uVar18 = *(undefined8 *)(param_1 + 0x18);
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        bVar6 = true;
        uVar20 = *(undefined8 *)(param_2 + -0x24);
        uVar22 = *(undefined8 *)(param_2 + -0xc);
        uVar21 = *(undefined8 *)(param_2 + -0x14);
        uVar3 = *(undefined4 *)(param_2 + -4);
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x1c);
        *(undefined8 *)param_1 = uVar20;
        *(undefined8 *)(param_1 + 0x18) = uVar22;
        *(undefined8 *)(param_1 + 0x10) = uVar21;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        *(undefined4 *)(param_2 + -4) = uVar2;
        *(undefined8 *)(param_2 + -0xc) = uVar18;
        *(undefined8 *)(param_2 + -0x14) = uVar17;
        *(undefined8 *)(param_2 + -0x1c) = uVar15;
        *(undefined8 *)(param_2 + -0x24) = uVar14;
        goto switchD_008d979c_caseD_0;
      }
      break;
    case 3:
      fVar16 = *(float *)(param_1 + 0x44);
      puVar8 = (undefined8 *)(param_1 + 0x24);
      puVar9 = (undefined8 *)(param_2 + -0x24);
      if (fVar16 < *(float *)(param_1 + 0x20)) {
        if (fVar16 <= *(float *)(param_2 + -4)) {
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x2c);
          *(undefined8 *)param_1 = *puVar8;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x34);
          *(undefined8 *)(param_1 + 0x2c) = uVar18;
          *puVar8 = uVar17;
          *(undefined8 *)(param_1 + 0x3c) = uVar15;
          *(undefined8 *)(param_1 + 0x34) = uVar14;
          uVar2 = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
          if (*(float *)(param_1 + 0x44) <= *(float *)(param_2 + -4)) break;
          uVar17 = *puVar9;
          uVar15 = *(undefined8 *)(param_2 + -0xc);
          uVar14 = *(undefined8 *)(param_2 + -0x14);
          uVar20 = *(undefined8 *)(param_1 + 0x2c);
          uVar18 = *puVar8;
          uVar22 = *(undefined8 *)(param_1 + 0x3c);
          uVar21 = *(undefined8 *)(param_1 + 0x34);
          uVar2 = *(undefined4 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + -0x1c);
          *puVar8 = uVar17;
          *(undefined8 *)(param_1 + 0x3c) = uVar15;
          *(undefined8 *)(param_1 + 0x34) = uVar14;
          uVar3 = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
          *(undefined4 *)(param_2 + -4) = uVar3;
        }
        else {
          uVar17 = *puVar9;
          uVar15 = *(undefined8 *)(param_2 + -0xc);
          uVar14 = *(undefined8 *)(param_2 + -0x14);
          uVar20 = *(undefined8 *)(param_1 + 8);
          uVar18 = *(undefined8 *)param_1;
          uVar22 = *(undefined8 *)(param_1 + 0x18);
          uVar21 = *(undefined8 *)(param_1 + 0x10);
          uVar2 = *(undefined4 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x1c);
          *(undefined8 *)param_1 = uVar17;
          *(undefined8 *)(param_1 + 0x18) = uVar15;
          *(undefined8 *)(param_1 + 0x10) = uVar14;
          uVar3 = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
          *(undefined4 *)(param_2 + -4) = uVar3;
        }
        bVar6 = true;
        *(undefined8 *)(param_2 + -0x1c) = uVar20;
        *puVar9 = uVar18;
        *(undefined8 *)(param_2 + -0xc) = uVar22;
        *(undefined8 *)(param_2 + -0x14) = uVar21;
        goto switchD_008d979c_caseD_0;
      }
      if (*(float *)(param_2 + -4) < fVar16) {
        uVar17 = *puVar9;
        uVar15 = *(undefined8 *)(param_2 + -0xc);
        uVar14 = *(undefined8 *)(param_2 + -0x14);
        uVar20 = *(undefined8 *)(param_1 + 0x2c);
        uVar18 = *puVar8;
        uVar22 = *(undefined8 *)(param_1 + 0x3c);
        uVar21 = *(undefined8 *)(param_1 + 0x34);
        uVar2 = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + -0x1c);
        *puVar8 = uVar17;
        *(undefined8 *)(param_1 + 0x3c) = uVar15;
        *(undefined8 *)(param_1 + 0x34) = uVar14;
        uVar3 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x44) = uVar2;
        *(undefined4 *)(param_2 + -4) = uVar3;
        *(undefined8 *)(param_2 + -0x1c) = uVar20;
        *puVar9 = uVar18;
        *(undefined8 *)(param_2 + -0xc) = uVar22;
        *(undefined8 *)(param_2 + -0x14) = uVar21;
        if (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x20)) {
          bVar6 = true;
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x2c);
          *(undefined8 *)param_1 = *puVar8;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x34);
          *(undefined8 *)(param_1 + 0x2c) = uVar18;
          *puVar8 = uVar17;
          *(undefined8 *)(param_1 + 0x3c) = uVar15;
          *(undefined8 *)(param_1 + 0x34) = uVar14;
          uVar2 = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
          goto switchD_008d979c_caseD_0;
        }
      }
      break;
    case 4:
      __sort4<std::__ndk1::__less<Particle,Particle>&,Particle*>
                (param_1,param_1 + 0x24,param_1 + 0x48,param_2 + -0x24,param_3);
      break;
    case 5:
      puVar8 = (undefined8 *)(param_1 + 0x24);
      puVar9 = (undefined8 *)(param_1 + 0x48);
      puVar1 = (undefined8 *)(param_1 + 0x6c);
      __sort4<std::__ndk1::__less<Particle,Particle>&,Particle*>
                (param_1,(Particle *)puVar8,(Particle *)puVar9,(Particle *)puVar1,param_3);
      if (*(float *)(param_2 + -4) < *(float *)(param_1 + 0x8c)) {
        uVar15 = *(undefined8 *)(param_1 + 0x74);
        uVar14 = *puVar1;
        uVar18 = *(undefined8 *)(param_1 + 0x84);
        uVar17 = *(undefined8 *)(param_1 + 0x7c);
        uVar20 = *(undefined8 *)(param_2 + -0x24);
        uVar22 = *(undefined8 *)(param_2 + -0xc);
        uVar21 = *(undefined8 *)(param_2 + -0x14);
        uVar3 = *(undefined4 *)(param_2 + -4);
        uVar2 = *(undefined4 *)(param_1 + 0x8c);
        *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + -0x1c);
        *puVar1 = uVar20;
        *(undefined8 *)(param_1 + 0x84) = uVar22;
        *(undefined8 *)(param_1 + 0x7c) = uVar21;
        *(undefined4 *)(param_1 + 0x8c) = uVar3;
        *(undefined4 *)(param_2 + -4) = uVar2;
        *(undefined8 *)(param_2 + -0xc) = uVar18;
        *(undefined8 *)(param_2 + -0x14) = uVar17;
        *(undefined8 *)(param_2 + -0x1c) = uVar15;
        *(undefined8 *)(param_2 + -0x24) = uVar14;
        if (*(float *)(param_1 + 0x8c) < *(float *)(param_1 + 0x68)) {
          uVar2 = *(undefined4 *)(param_1 + 0x68);
          *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x8c);
          *(undefined4 *)(param_1 + 0x8c) = uVar2;
          uVar15 = *(undefined8 *)(param_1 + 0x50);
          uVar14 = *puVar9;
          uVar18 = *(undefined8 *)(param_1 + 0x60);
          uVar17 = *(undefined8 *)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x74);
          *puVar9 = *puVar1;
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x84);
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x7c);
          *(undefined8 *)(param_1 + 0x74) = uVar15;
          *puVar1 = uVar14;
          *(undefined8 *)(param_1 + 0x84) = uVar18;
          *(undefined8 *)(param_1 + 0x7c) = uVar17;
          if (*(float *)(param_1 + 0x68) < *(float *)(param_1 + 0x44)) {
            uVar2 = *(undefined4 *)(param_1 + 0x44);
            *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x68);
            *(undefined4 *)(param_1 + 0x68) = uVar2;
            uVar15 = *(undefined8 *)(param_1 + 0x2c);
            uVar14 = *puVar8;
            uVar18 = *(undefined8 *)(param_1 + 0x3c);
            uVar17 = *(undefined8 *)(param_1 + 0x34);
            *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x50);
            *puVar8 = *puVar9;
            *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(param_1 + 0x50) = uVar15;
            *puVar9 = uVar14;
            *(undefined8 *)(param_1 + 0x60) = uVar18;
            *(undefined8 *)(param_1 + 0x58) = uVar17;
            if (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x20)) {
              bVar6 = true;
              uVar18 = *(undefined8 *)(param_1 + 8);
              uVar17 = *(undefined8 *)param_1;
              uVar15 = *(undefined8 *)(param_1 + 0x18);
              uVar14 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x2c);
              *(undefined8 *)param_1 = *puVar8;
              *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
              *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x34);
              *(undefined8 *)(param_1 + 0x2c) = uVar18;
              *puVar8 = uVar17;
              *(undefined8 *)(param_1 + 0x3c) = uVar15;
              *(undefined8 *)(param_1 + 0x34) = uVar14;
              uVar2 = *(undefined4 *)(param_1 + 0x20);
              *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x44);
              *(undefined4 *)(param_1 + 0x44) = uVar2;
              goto switchD_008d979c_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    fVar19 = *(float *)(param_1 + 0x44);
    puVar8 = (undefined8 *)(param_1 + 0x48);
    puVar9 = (undefined8 *)(param_1 + 0x24);
    fVar16 = *(float *)(param_1 + 0x68);
    if (*(float *)(param_1 + 0x20) <= fVar19) {
      if (fVar16 < fVar19) {
        uVar2 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x68) = uVar2;
        uVar15 = *(undefined8 *)(param_1 + 0x2c);
        uVar14 = *puVar9;
        uVar18 = *(undefined8 *)(param_1 + 0x3c);
        uVar17 = *(undefined8 *)(param_1 + 0x34);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x50);
        *puVar9 = *puVar8;
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x50) = uVar15;
        *puVar8 = uVar14;
        *(undefined8 *)(param_1 + 0x60) = uVar18;
        *(undefined8 *)(param_1 + 0x58) = uVar17;
        if (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x20)) {
          uVar18 = *(undefined8 *)(param_1 + 8);
          uVar17 = *(undefined8 *)param_1;
          uVar15 = *(undefined8 *)(param_1 + 0x18);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x2c);
          *(undefined8 *)param_1 = *puVar9;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x34);
          *(undefined8 *)(param_1 + 0x2c) = uVar18;
          *puVar9 = uVar17;
          *(undefined8 *)(param_1 + 0x3c) = uVar15;
          *(undefined8 *)(param_1 + 0x34) = uVar14;
          uVar2 = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
      }
    }
    else if (fVar19 <= fVar16) {
      uVar2 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      uVar18 = *(undefined8 *)(param_1 + 8);
      uVar17 = *(undefined8 *)param_1;
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x2c);
      *(undefined8 *)param_1 = *puVar9;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x34);
      *(undefined8 *)(param_1 + 0x2c) = uVar18;
      *puVar9 = uVar17;
      *(undefined8 *)(param_1 + 0x3c) = uVar15;
      *(undefined8 *)(param_1 + 0x34) = uVar14;
      if (fVar16 < *(float *)(param_1 + 0x44)) {
        uVar18 = *(undefined8 *)(param_1 + 0x2c);
        uVar17 = *puVar9;
        uVar15 = *(undefined8 *)(param_1 + 0x3c);
        uVar14 = *(undefined8 *)(param_1 + 0x34);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x50);
        *puVar9 = *puVar8;
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x50) = uVar18;
        *puVar8 = uVar17;
        *(undefined8 *)(param_1 + 0x60) = uVar15;
        *(undefined8 *)(param_1 + 0x58) = uVar14;
        uVar2 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x68) = uVar2;
      }
    }
    else {
      uVar18 = *(undefined8 *)(param_1 + 8);
      uVar17 = *(undefined8 *)param_1;
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)param_1 = *puVar8;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = uVar18;
      *puVar8 = uVar17;
      *(undefined8 *)(param_1 + 0x60) = uVar15;
      *(undefined8 *)(param_1 + 0x58) = uVar14;
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x68) = uVar2;
    }
    if (param_1 + 0x6c != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar9 = (undefined8 *)(param_1 + 0x6c);
      do {
        fVar16 = *(float *)(puVar9 + 4);
        if (fVar16 < *(float *)(puVar8 + 4)) {
          uVar15 = puVar9[1];
          uVar14 = *puVar9;
          uVar18 = puVar9[3];
          uVar17 = puVar9[2];
          lVar5 = lVar10;
          do {
            lVar13 = lVar5;
            *(undefined8 *)(param_1 + lVar13 + 0x74) = *(undefined8 *)(param_1 + lVar13 + 0x50);
            *(undefined8 *)(param_1 + lVar13 + 0x6c) = *(undefined8 *)(param_1 + lVar13 + 0x48);
            *(undefined8 *)(param_1 + lVar13 + 0x84) = *(undefined8 *)(param_1 + lVar13 + 0x60);
            *(undefined8 *)(param_1 + lVar13 + 0x7c) = *(undefined8 *)(param_1 + lVar13 + 0x58);
            *(undefined4 *)(param_1 + lVar13 + 0x8c) = *(undefined4 *)(param_1 + lVar13 + 0x68);
            puVar8 = (undefined8 *)param_1;
            if (lVar13 == -0x48) goto LAB_008d9aec;
            lVar5 = lVar13 + -0x24;
          } while (fVar16 < *(float *)(param_1 + lVar13 + 0x44));
          puVar8 = (undefined8 *)(param_1 + lVar13 + 0x48);
LAB_008d9aec:
          iVar11 = iVar11 + 1;
          *(float *)(puVar8 + 4) = fVar16;
          puVar8[1] = uVar15;
          *puVar8 = uVar14;
          puVar8[3] = uVar18;
          puVar8[2] = uVar17;
          if (iVar11 == 8) {
            bVar6 = (Particle *)((long)puVar9 + 0x24) == param_2;
            goto switchD_008d979c_caseD_0;
          }
        }
        puVar1 = (undefined8 *)((long)puVar9 + 0x24);
        lVar10 = lVar10 + 0x24;
        puVar8 = puVar9;
        puVar9 = puVar1;
      } while (puVar1 != (undefined8 *)param_2);
    }
  }
  bVar6 = true;
switchD_008d979c_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


