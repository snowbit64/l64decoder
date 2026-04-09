// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: steerToTarget
// Entry Point: 00880088
// Size: 1156 bytes
// Signature: undefined steerToTarget(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSteering::steerToTarget() */

void AnimalSteering::steerToTarget(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  int *in_x0;
  void *__dest;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar16 = (float)in_x0[7];
  fVar17 = (float)in_x0[8];
  fVar13 = (float)in_x0[1];
  fVar14 = (float)in_x0[2];
  lVar3 = *(long *)(in_x0 + 0x36);
  fVar11 = fVar16 - fVar13;
  fVar7 = fVar17 - fVar14;
  if (lVar3 == 0) {
    fVar15 = (float)NEON_fmadd(fVar11,fVar11,fVar7 * fVar7);
    fVar15 = SQRT(fVar15);
    if (0.0001 <= fVar15) {
      fVar9 = 1.0 / fVar15;
      goto LAB_00880138;
    }
  }
  else if (*in_x0 == 2) {
    fVar11 = *(float *)(lVar3 + 0x10);
    fVar7 = *(float *)(lVar3 + 0x14);
    fVar15 = *(float *)(lVar3 + 0x28);
  }
  else {
    fVar15 = (float)NEON_fmadd(fVar11,fVar11,fVar7 * fVar7);
    fVar9 = 1.0;
    if (1e-06 < fVar15) {
      fVar9 = 1.0 / SQRT(fVar15);
    }
    fVar15 = *(float *)(lVar3 + 0x28);
LAB_00880138:
    fVar11 = fVar11 * fVar9;
    fVar7 = fVar7 * fVar9;
  }
  fVar6 = atan2f(fVar11,fVar7);
  fVar7 = (float)in_x0[0xe];
  fVar9 = -fVar6;
  if (0.0 <= fVar11) {
    fVar9 = 6.283185 - fVar6;
  }
  fVar8 = ABS(fVar7 / (float)in_x0[0x17]);
  fVar6 = (float)in_x0[0x17] * 0.5 * fVar8;
  fVar11 = -(fVar8 * fVar6);
  if (0.0 <= fVar7) {
    fVar11 = fVar8 * fVar6;
  }
  for (fVar11 = (float)in_x0[0xb] + fVar11; fVar11 < 0.0; fVar11 = fVar11 + 6.283185) {
  }
  for (; 6.283185 < fVar11; fVar11 = fVar11 + -6.283185) {
  }
  fVar6 = 1.0;
  if (*(char *)((long)in_x0 + 0x79) != '\0' || *in_x0 == 2) {
    fVar6 = 3.0;
  }
  if (0.01 <= ABS(fVar9 - fVar11)) {
    if (3.141593 <= ABS(fVar11 - fVar9)) {
      if (fVar11 < fVar9) goto LAB_0088026c;
    }
    else if (fVar9 < fVar11) {
LAB_0088026c:
      fVar11 = -fVar6;
      goto LAB_00880270;
    }
    in_x0[0xf] = (int)fVar6;
  }
  else {
    if (ABS(fVar7) <= 0.01) {
      fVar7 = 0.0;
      *(undefined8 *)(in_x0 + 0xe) = 0;
      goto joined_r0x008802a4;
    }
    fVar11 = -fVar6;
    if (fVar7 <= 0.0) {
      fVar11 = fVar6;
    }
LAB_00880270:
    in_x0[0xf] = (int)fVar11;
  }
joined_r0x008802a4:
  if (*in_x0 != 2) {
    fVar8 = (float)in_x0[0x1c];
    fVar9 = fVar8 * (float)in_x0[3];
    fVar11 = (float)in_x0[4] * fVar8;
    fVar10 = (fVar14 + fVar9) - fVar17;
    fVar18 = (fVar13 - fVar11) - fVar16;
    fVar10 = (float)NEON_fmadd(fVar18,fVar18,fVar10 * fVar10);
    if ((fVar10 < fVar8 * fVar8) ||
       (fVar17 = (fVar14 - fVar9) - fVar17, fVar16 = (fVar13 + fVar11) - fVar16,
       fVar16 = (float)NEON_fmadd(fVar16,fVar16,fVar17 * fVar17), fVar16 < fVar8 * fVar8)) {
      fVar16 = -fVar6;
      if (fVar7 <= 0.0) {
        fVar16 = fVar6;
      }
      in_x0[0xf] = (int)fVar16;
    }
    else if (*(char *)(in_x0 + 0x1e) == '\0') {
      fVar16 = (float)in_x0[0x13];
      fVar7 = ABS((float)in_x0[0xd] / fVar16);
      fVar17 = fVar7 * fVar16 * 0.5 * fVar7;
      if (fVar17 < fVar15) {
        fVar11 = (float)in_x0[0x14];
        fVar9 = ABS((float)in_x0[0xd] / fVar11);
        fVar6 = fVar9 * fVar11 * 0.5 * fVar9;
        if (fVar15 < fVar6) {
          fVar14 = (float)in_x0[10] - fVar14;
          fVar13 = (float)in_x0[9] - fVar13;
          fVar10 = (float)NEON_fmadd(fVar13,fVar13,fVar14 * fVar14);
          fVar8 = 1.0;
          if (1e-06 < fVar10) {
            fVar8 = 1.0 / SQRT(fVar10);
          }
          fVar13 = (float)NEON_fmadd(in_x0[3],fVar13 * fVar8,(float)in_x0[4] * fVar14 * fVar8);
          if (0.5 < fVar13) {
            puVar2 = *(undefined4 **)(in_x0 + 0x28);
            fVar17 = (fVar15 - fVar17) / (fVar6 - fVar17);
            fVar11 = (float)NEON_fmadd(1.0 - fVar17,fVar16 - fVar11,fVar11);
            uVar12 = NEON_fmadd(fVar17,fVar9 - fVar7,fVar7);
            in_x0[0x11] = (int)(fVar11 / fVar16);
            if (puVar2 < *(undefined4 **)(in_x0 + 0x2a)) {
              puVar2[1] = uVar12;
              puVar2[2] = 0;
              *(undefined *)(puVar2 + 3) = 0;
              *puVar2 = 2;
              *(undefined4 **)(in_x0 + 0x28) = puVar2 + 4;
            }
            else {
              __src = *(void **)(in_x0 + 0x26);
              __n = (long)puVar2 - (long)__src;
              uVar1 = ((long)__n >> 4) + 1;
              if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar4 = (long)*(undefined4 **)(in_x0 + 0x2a) - (long)__src;
              uVar5 = (long)uVar4 >> 3;
              if (uVar1 <= uVar5) {
                uVar1 = uVar5;
              }
              if (0x7fffffffffffffef < uVar4) {
                uVar1 = 0xfffffffffffffff;
              }
              if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar1 * 0x10);
              puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
              puVar2[1] = uVar12;
              *puVar2 = 2;
              puVar2[2] = 0;
              *(undefined *)(puVar2 + 3) = 0;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
              }
              *(void **)(in_x0 + 0x26) = __dest;
              *(undefined4 **)(in_x0 + 0x28) = puVar2 + 4;
              *(void **)(in_x0 + 0x2a) = (void *)((long)__dest + uVar1 * 0x10);
              if (__src != (void *)0x0) {
                operator_delete(__src);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


