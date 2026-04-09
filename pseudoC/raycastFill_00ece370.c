// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastFill
// Entry Point: 00ece370
// Size: 1208 bytes
// Signature: undefined __cdecl raycastFill(Volume * param_1, RaycastMesh * param_2)


/* VHACD::raycastFill(VHACD::Volume*, VHACD::RaycastMesh*) */

void VHACD::raycastFill(Volume *param_1,RaycastMesh *param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_17c;
  uint uStack_178;
  undefined auStack_174 [4];
  double local_170;
  undefined auStack_168 [8];
  undefined auStack_160 [8];
  undefined auStack_158 [8];
  undefined auStack_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  if ((((param_2 != (RaycastMesh *)0x0) && (uVar4 = *(ulong *)(param_1 + 0x40), uVar4 != 0)) &&
      (uVar5 = *(ulong *)(param_1 + 0x48), uVar5 != 0)) &&
     (uVar7 = *(ulong *)(param_1 + 0x50), uVar7 != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    uVar12 = 0;
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    dVar16 = (double)(float)*(double *)(param_1 + 0x38);
    do {
      uVar10 = 0;
      uVar17 = NEON_fmadd((double)(unkuint9)uVar12,dVar16,uVar13);
      do {
        uVar9 = 0;
        uVar18 = NEON_fmadd((double)(unkuint9)uVar10,dVar16,uVar14);
        do {
          if (*(char *)(*(long *)(param_1 + 0x70) +
                        *(long *)(param_1 + 0x50) * (uVar10 + uVar12 * *(long *)(param_1 + 0x48)) +
                       uVar9) != '\x04') {
            local_140 = 0;
            uStack_138 = 0;
            local_148 = 0x3ff0000000000000;
            local_130 = 0x3ff0000000000000;
            local_110 = 0x3ff0000000000000;
            local_d8 = 0x3ff0000000000000;
            local_a8 = NEON_fmadd((double)(unkuint9)uVar9,dVar16,uVar15);
            local_108 = 0;
            uStack_100 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_128 = 0;
            local_f8 = 0xbff0000000000000;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f0 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            local_c0 = 0xbff0000000000000;
            local_17c = 0;
            uStack_178 = 0;
            local_b8 = uVar17;
            uStack_b0 = uVar18;
            uVar3 = (***(code ***)param_2)
                              (param_2,&local_b8,&local_148,auStack_150,auStack_158,auStack_160,
                               auStack_168,&local_170,auStack_174);
            uVar11 = 0;
            uVar8 = 0;
            if ((uVar3 & 1) != 0) {
              puVar1 = &local_17c;
              if (0.0 <= local_170) {
                puVar1 = &uStack_178;
              }
              *puVar1 = *puVar1 + 1;
              uVar11 = uStack_178;
              uVar8 = local_17c;
            }
            if ((uVar8 == 0) && (uVar11 < 3)) {
              uVar3 = (***(code ***)param_2)
                                (param_2,&local_b8,&local_130,auStack_150,auStack_158,auStack_160,
                                 auStack_168,&local_170,auStack_174);
              if ((uVar3 & 1) != 0) {
                puVar1 = &local_17c;
                if (0.0 <= local_170) {
                  puVar1 = &uStack_178;
                }
                *puVar1 = *puVar1 + 1;
                uVar11 = uStack_178;
                uVar8 = local_17c;
                if (local_17c != 0) goto LAB_00ece47c;
              }
              if (uVar11 < 3) {
                uVar3 = (***(code ***)param_2)
                                  (param_2,&local_b8,&uStack_118,auStack_150,auStack_158,auStack_160
                                   ,auStack_168,&local_170,auStack_174);
                if ((uVar3 & 1) != 0) {
                  puVar1 = &local_17c;
                  if (0.0 <= local_170) {
                    puVar1 = &uStack_178;
                  }
                  *puVar1 = *puVar1 + 1;
                  uVar11 = uStack_178;
                  uVar8 = local_17c;
                  if (local_17c != 0) goto LAB_00ece47c;
                }
                if (uVar11 < 3) {
                  uVar3 = (***(code ***)param_2)
                                    (param_2,&local_b8,&uStack_100,auStack_150,auStack_158,
                                     auStack_160,auStack_168,&local_170,auStack_174);
                  if ((uVar3 & 1) != 0) {
                    puVar1 = &local_17c;
                    if (0.0 <= local_170) {
                      puVar1 = &uStack_178;
                    }
                    *puVar1 = *puVar1 + 1;
                    uVar11 = uStack_178;
                    uVar8 = local_17c;
                    if (local_17c != 0) goto LAB_00ece47c;
                  }
                  if (uVar11 < 3) {
                    uVar3 = (***(code ***)param_2)
                                      (param_2,&local_b8,&local_e8,auStack_150,auStack_158,
                                       auStack_160,auStack_168,&local_170,auStack_174);
                    if ((uVar3 & 1) != 0) {
                      puVar1 = &local_17c;
                      if (0.0 <= local_170) {
                        puVar1 = &uStack_178;
                      }
                      *puVar1 = *puVar1 + 1;
                      uVar11 = uStack_178;
                      uVar8 = local_17c;
                      if (local_17c != 0) goto LAB_00ece47c;
                    }
                    if ((uVar11 < 3) &&
                       (uVar3 = (***(code ***)param_2)
                                          (param_2,&local_b8,&local_d0,auStack_150,auStack_158,
                                           auStack_160,auStack_168,&local_170,auStack_174),
                       (uVar3 & 1) != 0)) {
                      puVar1 = &local_17c;
                      if (0.0 <= local_170) {
                        puVar1 = &uStack_178;
                      }
                      *puVar1 = *puVar1 + 1;
                      uVar11 = uStack_178;
                      uVar8 = local_17c;
                    }
                  }
                }
              }
            }
LAB_00ece47c:
            uVar6 = 2;
            if (2 < uVar11 && uVar8 == 0) {
              uVar6 = 3;
            }
            *(undefined *)
             (*(long *)(param_1 + 0x70) +
              *(long *)(param_1 + 0x50) * (uVar10 + uVar12 * *(long *)(param_1 + 0x48)) + uVar9) =
                 uVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


