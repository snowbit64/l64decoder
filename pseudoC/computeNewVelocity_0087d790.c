// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeNewVelocity
// Entry Point: 0087d790
// Size: 3256 bytes
// Signature: undefined __cdecl computeNewVelocity(Vector2 param_1, Vector2 param_2, float param_3, Vector2 * param_4)


/* WARNING: Removing unreachable block (ram,0x0087d970) */
/* WARNING: Removing unreachable block (ram,0x0087e208) */
/* WARNING: Removing unreachable block (ram,0x0087d9e4) */
/* WARNING: Removing unreachable block (ram,0x0087d9ec) */
/* WARNING: Removing unreachable block (ram,0x0087da04) */
/* WARNING: Removing unreachable block (ram,0x0087d850) */
/* WARNING: Removing unreachable block (ram,0x0087e374) */
/* ObstacleAvoidance::computeNewVelocity(Vector2, Vector2, float, Vector2&) */

void ObstacleAvoidance::computeNewVelocity
               (float param_1,float param_2,float param_3,float param_4,float param_5,long *param_6,
               Vector2 *param_7)

{
  float *pfVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  void *__dest;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  void **ppvVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *__src;
  undefined8 *puVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  lVar10 = *param_6;
  ppvVar11 = (void **)(param_6 + 6);
  __src = (undefined8 *)*ppvVar11;
  param_6[7] = (long)__src;
  puVar15 = __src;
  local_b0 = param_3;
  fStack_ac = param_4;
  if (param_6[1] != lVar10) {
    fVar30 = 1.0 / *(float *)(param_6 + 9);
    uVar18 = 0;
    do {
      pcVar8 = (char *)(lVar10 + uVar18 * 0x1c);
      uVar3 = (long)puVar15 - (long)__src;
      uVar19 = (long)uVar3 >> 4;
      fVar20 = *(float *)((long)param_6 + 0x54);
      pcVar12 = (char *)(lVar10 + (long)*(int *)(pcVar8 + 0x14) * 0x1c);
      fVar24 = *(float *)(pcVar8 + 4) - param_1;
      fVar25 = *(float *)(pcVar8 + 8) - param_2;
      fVar22 = *(float *)(pcVar12 + 4) - param_1;
      fVar23 = *(float *)(pcVar12 + 8) - param_2;
      if (uVar3 != 0) {
        puVar9 = __src + 1;
        uVar13 = uVar19;
        if (uVar19 < 2) {
          uVar13 = 1;
        }
        do {
          uVar38 = NEON_fmadd(fVar30 * fVar24 - *(float *)(puVar9 + -1),
                              *(undefined4 *)((long)puVar9 + 4),
                              *(float *)puVar9 * -(fVar30 * fVar25 - *(float *)((long)puVar9 + -4)))
          ;
          uVar36 = NEON_fmadd(fVar30 * fVar22 - *(float *)(puVar9 + -1),
                              *(undefined4 *)((long)puVar9 + 4),
                              *(float *)puVar9 * -(fVar30 * fVar23 - *(float *)((long)puVar9 + -4)))
          ;
          fVar39 = (float)NEON_fmadd(-fVar30,fVar20,uVar38);
          fVar37 = (float)NEON_fmadd(-fVar30,fVar20,uVar36);
          if (-1e-05 <= fVar39 && -1e-05 <= fVar37) goto LAB_0087d878;
          uVar13 = uVar13 - 1;
          puVar9 = puVar9 + 2;
        } while (uVar13 != 0);
      }
      fVar33 = *(float *)(pcVar12 + 8) - *(float *)(pcVar8 + 8);
      fVar34 = *(float *)(pcVar12 + 4) - *(float *)(pcVar8 + 4);
      fVar27 = -fVar25;
      fVar37 = (float)NEON_fnmadd(fVar24,fVar34,-(fVar25 * fVar33));
      fVar39 = (float)NEON_fmadd(fVar34,fVar34,fVar33 * fVar33);
      fVar37 = fVar37 / fVar39;
      fVar26 = fVar20 * fVar20;
      fVar31 = (float)NEON_fmadd(fVar24,fVar24,fVar25 * fVar25);
      uVar13 = (long)uVar3 >> 3;
      fVar39 = (float)NEON_fmadd(fVar22,fVar22,fVar23 * fVar23);
      if (1.0 < fVar37 && fVar39 < fVar26 || 1.0 < fVar37 && fVar39 == fVar26) {
        if (*pcVar12 == '\0') goto LAB_0087d878;
        lVar10 = lVar10 + (long)*(int *)(pcVar8 + 0x14) * 0x1c;
        fVar20 = (float)NEON_fmadd(fVar22,*(undefined4 *)(lVar10 + 0x10),
                                   *(float *)(lVar10 + 0xc) * -fVar23);
        if (0.0 <= fVar20) {
          fVar24 = (float)NEON_fmadd(fVar23,fVar23,fVar22 * fVar22);
          fVar20 = 1.0;
          if (1e-06 < fVar24) {
            fVar20 = 1.0 / SQRT(fVar24);
          }
          fVar23 = fVar20 * -fVar23;
          if (puVar15 != (undefined8 *)param_6[8]) {
            *puVar15 = 0;
            *(float *)(puVar15 + 1) = fVar23;
            *(float *)((long)puVar15 + 0xc) = fVar22 * fVar20;
            goto LAB_0087d874;
          }
          uVar17 = uVar19 + 1;
          if (uVar17 >> 0x3c != 0) goto LAB_0087e43c;
          if (uVar17 <= uVar13) {
            uVar17 = uVar13;
          }
          if (0x7fffffffffffffef < uVar3) {
            uVar17 = 0xfffffffffffffff;
          }
          if (uVar17 >> 0x3c == 0) {
            uVar17 = uVar17 << 4;
            pvVar16 = operator_new(uVar17);
            puVar15 = (undefined8 *)((long)pvVar16 + uVar19 * 0x10);
            *puVar15 = 0;
            *(float *)(puVar15 + 1) = fVar23;
            *(float *)((long)puVar15 + 0xc) = fVar22 * fVar20;
            goto joined_r0x0087dabc;
          }
          goto LAB_0087e428;
        }
      }
      else {
        fVar35 = fVar27 - fVar33 * fVar37;
        fVar33 = -fVar24 - fVar34 * fVar37;
        fVar33 = (float)NEON_fmadd(fVar33,fVar33,fVar35 * fVar35);
        if ((fVar37 < 0.0 || 1.0 <= fVar37) || (fVar26 < fVar33)) {
          if ((0.0 <= fVar37) || (fVar26 < fVar33)) {
            if ((fVar37 <= 1.0) || (fVar26 < fVar33)) {
              cVar2 = *pcVar8;
              if (cVar2 == '\0') {
                lVar14 = lVar10 + uVar18 * 0x1c;
                fVar27 = -*(float *)(lVar14 + 0xc);
                fVar37 = -*(float *)(lVar14 + 0x10);
              }
              else {
                fVar27 = (float)NEON_fmadd(fVar24,SQRT(fVar31 - fVar26),fVar20 * fVar27);
                fVar37 = (float)NEON_fmadd(fVar24,fVar20,fVar25 * SQRT(fVar31 - fVar26));
                fVar27 = (1.0 / fVar31) * fVar27;
                fVar37 = (1.0 / fVar31) * fVar37;
              }
              bVar7 = *pcVar12 == '\0';
              if (*pcVar12 == '\0') {
                lVar14 = lVar10 + uVar18 * 0x1c;
                fVar31 = *(float *)(lVar14 + 0xc);
                fVar33 = *(float *)(lVar14 + 0x10);
                if (cVar2 != '\0') goto LAB_0087dcb4;
LAB_0087dcd4:
                bVar6 = false;
                bVar5 = false;
                fVar22 = fVar31;
                fVar23 = fVar33;
                if (!bVar7) {
LAB_0087dcf4:
                  fVar31 = *(float *)(pcVar12 + 0xc);
                  fVar33 = *(float *)(pcVar12 + 0x10);
                  fVar24 = (float)NEON_fmadd(fVar22,fVar33,fVar31 * -fVar23);
                  if (0.0 < fVar24) goto LAB_0087dd10;
                  bVar5 = true;
                }
              }
              else {
                fVar31 = (float)NEON_fmadd(fVar22,SQRT(fVar39 - fVar26),fVar23 * fVar20);
                fVar33 = (float)NEON_fmsub(fVar22,fVar20,fVar23 * SQRT(fVar39 - fVar26));
                fVar31 = (1.0 / fVar39) * fVar31;
                fVar33 = (1.0 / fVar39) * fVar33;
                if (cVar2 == '\0') goto LAB_0087dcd4;
LAB_0087dcb4:
                lVar10 = lVar10 + (long)*(int *)(pcVar8 + 0x18) * 0x1c;
                fVar22 = *(float *)(lVar10 + 0xc);
                fVar23 = *(float *)(lVar10 + 0x10);
                fVar24 = (float)NEON_fmsub(fVar27,fVar23,fVar37 * fVar22);
                if (fVar24 < 0.0) goto LAB_0087dcd4;
                fVar37 = -fVar23;
                fVar27 = -fVar22;
                bVar6 = true;
                fVar22 = fVar31;
                fVar23 = fVar33;
                if (!bVar7) goto LAB_0087dcf4;
LAB_0087dd10:
                fVar33 = fVar23;
                fVar31 = fVar22;
                bVar5 = false;
              }
              fVar23 = fVar30 * (*(float *)(pcVar8 + 4) - param_1);
              fVar24 = fVar30 * (*(float *)(pcVar8 + 8) - param_2);
              fVar25 = fVar30 * (*(float *)(pcVar12 + 4) - param_1);
              fVar39 = fVar30 * (*(float *)(pcVar12 + 8) - param_2);
              fVar26 = param_3 - fVar23;
              fVar22 = param_4 - fVar24;
              fVar34 = fVar25 - fVar23;
              fVar35 = fVar39 - fVar24;
              if (pcVar8 == pcVar12) {
                fVar28 = 0.5;
              }
              else {
                fVar28 = (float)NEON_fmadd(fVar26,fVar34,fVar35 * fVar22);
                fVar32 = (float)NEON_fmadd(fVar34,fVar34,fVar35 * fVar35);
                fVar28 = fVar28 / fVar32;
              }
              fVar32 = (float)NEON_fmadd(fVar26,fVar27,fVar37 * fVar22);
              if ((0.0 <= fVar28) || (0.0 <= fVar32)) {
                fVar41 = param_4 - fVar39;
                fVar40 = param_3 - fVar25;
                fVar29 = (float)NEON_fmadd(fVar40,fVar31,fVar33 * fVar41);
                if ((fVar29 < 0.0 && pcVar8 == pcVar12) && (fVar32 < 0.0)) goto LAB_0087ddbc;
                if ((1.0 < fVar28) && (fVar29 < 0.0)) {
                  fVar22 = (float)NEON_fmadd(fVar40,fVar40,fVar41 * fVar41);
                  fVar23 = 1.0;
                  if (1e-06 < fVar22) {
                    fVar23 = 1.0 / SQRT(fVar22);
                  }
                  fVar22 = fVar41 * fVar23;
                  puVar9 = (undefined8 *)param_6[8];
                  fVar37 = fVar40 * fVar23;
                  fVar23 = fVar25 + fVar30 * fVar20 * fVar40 * fVar23;
                  fVar24 = fVar39 + fVar30 * fVar20 * fVar22;
                  goto joined_r0x0087de80;
                }
                fVar22 = INFINITY;
                if (((pcVar8 != pcVar12) && (0.0 <= fVar28)) && (fVar22 = INFINITY, fVar28 <= 1.0))
                {
                  fVar22 = param_4 - (fVar24 + fVar35 * fVar28);
                  fVar26 = param_3 - (fVar23 + fVar34 * fVar28);
                  fVar22 = (float)NEON_fmadd(fVar26,fVar26,fVar22 * fVar22);
                }
                if (fVar32 < 0.0) {
                  fVar26 = INFINITY;
                  if (0.0 <= fVar29) goto LAB_0087df58;
LAB_0087dfac:
                  fVar34 = INFINITY;
                  if (fVar26 < fVar22) goto LAB_0087e00c;
LAB_0087dfbc:
                  if (fVar34 < fVar22) goto LAB_0087e00c;
                  fVar37 = -*(float *)(pcVar8 + 0xc);
                  fVar22 = -*(float *)(pcVar8 + 0x10);
                  fVar25 = fVar23 + fVar30 * fVar20 * *(float *)(pcVar8 + 0x10);
                  fVar39 = fVar24 - fVar30 * fVar20 * *(float *)(pcVar8 + 0xc);
                  if (puVar15 != (undefined8 *)param_6[8]) goto LAB_0087dff4;
LAB_0087e044:
                  uVar17 = uVar19 + 1;
                  if (uVar17 >> 0x3c != 0) goto LAB_0087e43c;
                  if (uVar17 <= uVar13) {
                    uVar17 = uVar13;
                  }
                  if (0x7fffffffffffffef < uVar3) {
                    uVar17 = 0xfffffffffffffff;
                  }
                  if (uVar17 >> 0x3c == 0) {
                    uVar17 = uVar17 << 4;
                    pvVar16 = operator_new(uVar17);
                    puVar15 = (undefined8 *)((long)pvVar16 + uVar19 * 0x10);
                    *(float *)puVar15 = fVar25;
                    *(float *)((long)puVar15 + 4) = fVar39;
                    *(float *)(puVar15 + 1) = fVar37;
                    *(float *)((long)puVar15 + 0xc) = fVar22;
                    goto joined_r0x0087e09c;
                  }
                  goto LAB_0087e428;
                }
                fVar34 = param_4 - (fVar24 + fVar37 * fVar32);
                fVar26 = param_3 - (fVar23 + fVar27 * fVar32);
                fVar26 = (float)NEON_fmadd(fVar26,fVar26,fVar34 * fVar34);
                if (fVar29 < 0.0) goto LAB_0087dfac;
LAB_0087df58:
                fVar35 = param_4 - (fVar39 + fVar33 * fVar29);
                fVar34 = param_3 - (fVar25 + fVar31 * fVar29);
                fVar34 = (float)NEON_fmadd(fVar34,fVar34,fVar35 * fVar35);
                if (fVar22 <= fVar26) goto LAB_0087dfbc;
LAB_0087e00c:
                if (fVar26 <= fVar34) {
                  if (bVar6) goto LAB_0087d878;
                  fVar23 = fVar23 - fVar30 * fVar20 * fVar37;
                  fVar24 = fVar30 * fVar20 * fVar27 + fVar24;
                  if (puVar15 != (undefined8 *)param_6[8]) {
                    *(float *)puVar15 = fVar23;
                    *(float *)((long)puVar15 + 4) = fVar24;
                    *(float *)(puVar15 + 1) = fVar27;
                    *(float *)((long)puVar15 + 0xc) = fVar37;
                    goto LAB_0087d874;
                  }
                  uVar17 = uVar19 + 1;
                  if (uVar17 >> 0x3c != 0) goto LAB_0087e43c;
                  if (uVar17 <= uVar13) {
                    uVar17 = uVar13;
                  }
                  if (0x7fffffffffffffef < uVar3) {
                    uVar17 = 0xfffffffffffffff;
                  }
                  if (uVar17 >> 0x3c == 0) {
                    uVar17 = uVar17 << 4;
                    pvVar16 = operator_new(uVar17);
                    puVar15 = (undefined8 *)((long)pvVar16 + uVar19 * 0x10);
                    *(float *)puVar15 = fVar23;
                    *(float *)((long)puVar15 + 4) = fVar24;
                    *(float *)(puVar15 + 1) = fVar27;
                    *(float *)((long)puVar15 + 0xc) = fVar37;
                    goto joined_r0x0087dabc;
                  }
                  goto LAB_0087e428;
                }
                if (bVar5) goto LAB_0087d878;
                fVar37 = -fVar31;
                fVar22 = -fVar33;
                fVar25 = fVar30 * fVar20 * fVar33 + fVar25;
                fVar39 = fVar39 - fVar30 * fVar20 * fVar31;
                if (puVar15 == (undefined8 *)param_6[8]) goto LAB_0087e044;
LAB_0087dff4:
                *(float *)puVar15 = fVar25;
                *(float *)((long)puVar15 + 4) = fVar39;
                *(float *)(puVar15 + 1) = fVar37;
                *(float *)((long)puVar15 + 0xc) = fVar22;
              }
              else {
LAB_0087ddbc:
                fVar37 = (float)NEON_fmadd(fVar26,fVar26,fVar22 * fVar22);
                fVar25 = 1.0;
                if (1e-06 < fVar37) {
                  fVar25 = 1.0 / SQRT(fVar37);
                }
                fVar22 = fVar22 * fVar25;
                fVar37 = fVar26 * fVar25;
                puVar9 = (undefined8 *)param_6[8];
                fVar23 = fVar23 + fVar30 * fVar20 * fVar26 * fVar25;
                fVar24 = fVar24 + fVar30 * fVar20 * fVar22;
joined_r0x0087de80:
                if (puVar15 == puVar9) {
                  uVar17 = uVar19 + 1;
                  if (uVar17 >> 0x3c != 0) {
LAB_0087e43c:
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar17 <= uVar13) {
                    uVar17 = uVar13;
                  }
                  if (0x7fffffffffffffef < uVar3) {
                    uVar17 = 0xfffffffffffffff;
                  }
                  if (uVar17 >> 0x3c == 0) {
                    uVar17 = uVar17 << 4;
                    pvVar16 = operator_new(uVar17);
                    puVar15 = (undefined8 *)((long)pvVar16 + uVar19 * 0x10);
                    *(float *)puVar15 = fVar23;
                    *(float *)((long)puVar15 + 4) = fVar24;
                    *(float *)(puVar15 + 1) = fVar22;
                    *(float *)((long)puVar15 + 0xc) = -fVar37;
joined_r0x0087e09c:
                    if (0 < (long)uVar3) {
                      memcpy(pvVar16,__src,uVar3);
                    }
                    lVar10 = (long)pvVar16 + uVar17;
                    goto LAB_0087dae0;
                  }
                  goto LAB_0087e428;
                }
                *(float *)puVar15 = fVar23;
                *(float *)((long)puVar15 + 4) = fVar24;
                *(float *)(puVar15 + 1) = fVar22;
                *(float *)((long)puVar15 + 0xc) = -fVar37;
              }
              param_6[7] = (long)(puVar15 + 2);
            }
            else if (*pcVar12 != '\0') {
              fVar33 = 1.0 / fVar39;
              bVar7 = false;
              fVar24 = SQRT(fVar39 - fVar26);
              fVar27 = (float)NEON_fmadd(fVar22,fVar24,fVar20 * -fVar23);
              fVar37 = (float)NEON_fmadd(fVar22,fVar20,fVar23 * fVar24);
              fVar31 = (float)NEON_fmadd(fVar22,fVar24,fVar23 * fVar20);
              fVar22 = (float)NEON_fmsub(fVar22,fVar20,fVar23 * fVar24);
              fVar27 = fVar33 * fVar27;
              fVar37 = fVar33 * fVar37;
              fVar31 = fVar33 * fVar31;
              fVar33 = fVar33 * fVar22;
              pcVar8 = pcVar12;
              goto LAB_0087dcb4;
            }
          }
          else if (*pcVar8 != '\0') {
            fVar33 = 1.0 / fVar31;
            bVar7 = false;
            fVar22 = SQRT(fVar31 - fVar26);
            fVar27 = (float)NEON_fmadd(fVar24,fVar22,fVar20 * fVar27);
            fVar37 = (float)NEON_fmadd(fVar24,fVar20,fVar25 * fVar22);
            fVar31 = (float)NEON_fmadd(fVar24,fVar22,fVar25 * fVar20);
            fVar22 = (float)NEON_fmadd(-fVar24,fVar20,fVar25 * fVar22);
            fVar27 = fVar33 * fVar27;
            fVar37 = fVar33 * fVar37;
            fVar31 = fVar33 * fVar31;
            fVar33 = fVar33 * fVar22;
            pcVar12 = pcVar8;
            goto LAB_0087dcb4;
          }
        }
        else {
          uVar21 = *(undefined8 *)(lVar10 + uVar18 * 0x1c + 0xc);
          uVar21 = CONCAT44(-(float)((ulong)uVar21 >> 0x20),-(float)uVar21);
          if (puVar15 != (undefined8 *)param_6[8]) {
            *puVar15 = 0;
            puVar15[1] = uVar21;
LAB_0087d874:
            param_6[7] = (long)(puVar15 + 2);
            goto LAB_0087d878;
          }
          uVar17 = uVar19 + 1;
          if (uVar17 >> 0x3c != 0) goto LAB_0087e43c;
          if (uVar17 <= uVar13) {
            uVar17 = uVar13;
          }
          if (0x7fffffffffffffef < uVar3) {
            uVar17 = 0xfffffffffffffff;
          }
          if (uVar17 >> 0x3c != 0) goto LAB_0087e428;
          uVar17 = uVar17 << 4;
          pvVar16 = operator_new(uVar17);
          puVar15 = (undefined8 *)((long)pvVar16 + uVar19 * 0x10);
          *puVar15 = 0;
          puVar15[1] = uVar21;
joined_r0x0087dabc:
          if (0 < (long)uVar3) {
            memcpy(pvVar16,__src,uVar3);
          }
          lVar10 = (long)pvVar16 + uVar17;
LAB_0087dae0:
          param_6[6] = (long)pvVar16;
          param_6[7] = (long)(puVar15 + 2);
          param_6[8] = lVar10;
          if (__src != (undefined8 *)0x0) {
            operator_delete(__src);
          }
        }
      }
LAB_0087d878:
      lVar10 = *param_6;
      uVar18 = uVar18 + 1;
      __src = (undefined8 *)param_6[6];
      puVar15 = (undefined8 *)param_6[7];
    } while (uVar18 < (ulong)((param_6[1] - lVar10 >> 2) * 0x6db6db6db6db6db7));
  }
  lVar10 = param_6[3];
  if (param_6[4] != lVar10) {
    uVar18 = 0;
    fVar30 = 1.0 / *(float *)((long)param_6 + 0x4c);
    param_5 = 1.0 / param_5;
    do {
      lVar10 = *(long *)(lVar10 + uVar18 * 8);
      fVar24 = *(float *)(lVar10 + 8) - param_2;
      fVar25 = *(float *)(lVar10 + 4) - param_1;
      fVar20 = *(float *)((long)param_6 + 0x54) + *(float *)(lVar10 + 0x30);
      fVar37 = (float)NEON_fmadd(fVar25,fVar25,fVar24 * fVar24);
      fVar22 = param_3 - *(float *)(lVar10 + 0x14);
      fVar23 = param_4 - *(float *)(lVar10 + 0x18);
      if (fVar37 <= fVar20 * fVar20) {
        fVar23 = fVar23 - param_5 * fVar24;
        fVar24 = fVar22 - param_5 * fVar25;
        fVar22 = (float)NEON_fmadd(fVar24,fVar24,fVar23 * fVar23);
        fVar25 = 1.0 / SQRT(fVar22);
        fVar26 = fVar23 * fVar25;
        fVar23 = (float)NEON_fnmsub(fVar20,param_5,SQRT(fVar22));
        fVar22 = fVar23 * fVar24 * fVar25;
        fVar39 = -(fVar24 * fVar25);
        fVar23 = fVar23 * fVar26;
      }
      else {
        fVar39 = fVar23 - fVar30 * fVar24;
        fVar26 = fVar22 - fVar30 * fVar25;
        NEON_fmadd(fVar26,fVar26,fVar39 * fVar39);
        NEON_fmadd(fVar26,fVar25,fVar24 * fVar39);
        fVar31 = (float)NEON_fmadd(fVar25,fVar39,fVar26 * -fVar24);
        fVar33 = SQRT(fVar37 - fVar20 * fVar20);
        fVar39 = (float)NEON_fnmadd(-fVar25,fVar20,-(fVar24 * fVar33));
        fVar27 = (float)NEON_fmadd(fVar25,fVar20,fVar24 * fVar33);
        fVar26 = (float)NEON_fnmadd(fVar25,fVar33,-(fVar24 * fVar20));
        fVar20 = (float)NEON_fmadd(fVar25,fVar33,fVar20 * -fVar24);
        if (0.0 < fVar31) {
          fVar39 = fVar27;
        }
        fVar39 = (1.0 / fVar37) * fVar39;
        if (0.0 < fVar31) {
          fVar26 = fVar20;
        }
        fVar26 = (1.0 / fVar37) * fVar26;
        fVar20 = (float)NEON_fmadd(fVar22,fVar26,fVar23 * fVar39);
        fVar22 = fVar26 * fVar20 - fVar22;
        fVar23 = fVar39 * fVar20 - fVar23;
      }
      pfVar1 = (float *)param_6[7];
      fVar22 = param_3 + fVar22 * 0.5;
      fVar20 = param_4 + fVar23 * 0.5;
      if (pfVar1 == (float *)param_6[8]) {
        pvVar16 = *ppvVar11;
        uVar19 = (long)pfVar1 - (long)pvVar16;
        uVar3 = ((long)uVar19 >> 4) + 1;
        if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar3 <= (ulong)((long)uVar19 >> 3)) {
          uVar3 = (long)uVar19 >> 3;
        }
        if (0x7fffffffffffffef < uVar19) {
          uVar3 = 0xfffffffffffffff;
        }
        if (uVar3 >> 0x3c != 0) {
LAB_0087e428:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar3 * 0x10);
        pfVar1 = (float *)((long)__dest + ((long)uVar19 >> 4) * 0x10);
        *pfVar1 = fVar22;
        pfVar1[1] = fVar20;
        pfVar1[2] = fVar26;
        pfVar1[3] = fVar39;
        if (0 < (long)uVar19) {
          memcpy(__dest,pvVar16,uVar19);
        }
        param_6[6] = (long)__dest;
        param_6[7] = (long)(pfVar1 + 4);
        param_6[8] = (long)((long)__dest + uVar3 * 0x10);
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
      else {
        *pfVar1 = fVar22;
        pfVar1[1] = fVar20;
        pfVar1[2] = fVar26;
        pfVar1[3] = fVar39;
        param_6[7] = (long)(pfVar1 + 4);
      }
      lVar10 = param_6[3];
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)(param_6[4] - lVar10 >> 3));
  }
  uVar18 = linearProgram2((ObstacleAvoidance *)param_6,(vector *)ppvVar11,*(float *)(param_6 + 10),
                          (Vector2 *)&local_b0,false,param_7);
  if (uVar18 < (ulong)(param_6[7] - param_6[6] >> 4)) {
    linearProgram3((ObstacleAvoidance *)param_6,(vector *)ppvVar11,(long)puVar15 - (long)__src >> 4,
                   uVar18,*(float *)(param_6 + 10),param_7);
  }
  if (*(long *)(lVar4 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


