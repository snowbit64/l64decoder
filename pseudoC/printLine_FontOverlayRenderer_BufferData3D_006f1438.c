// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printLine<FontOverlayRenderer::BufferData3D>
// Entry Point: 006f1438
// Size: 1388 bytes
// Signature: void __thiscall printLine<FontOverlayRenderer::BufferData3D>(FontOverlayRenderer * this, float param_1, float param_2, float param_3, float param_4, ADVANCE_MODE param_5, float param_6, char * param_7, uint param_8, Matrix4x4 * param_9, bool param_10, BufferData3D * param_11)


/* void FontOverlayRenderer::printLine<FontOverlayRenderer::BufferData3D>(float, float, float,
   float, FontOverlayRenderer::ADVANCE_MODE, float, char const*, unsigned int, Matrix4x4 const*,
   bool, FontOverlayRenderer::BufferData3D&) */

void __thiscall
FontOverlayRenderer::printLine<FontOverlayRenderer::BufferData3D>
          (FontOverlayRenderer *this,float param_1,float param_2,float param_3,float param_4,
          ADVANCE_MODE param_5,float param_6,char *param_7,uint param_8,Matrix4x4 *param_9,
          bool param_10,BufferData3D *param_11)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long lVar7;
  bool bVar8;
  void *__dest;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  void *__src;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  short *local_b8;
  uint local_b0;
  uint local_ac;
  long local_a8;
  
  lVar7 = tpidr_el0;
  local_a8 = *(long *)(lVar7 + 0x28);
  uVar2 = *(uint *)(param_11 + 0xc);
  if (*(uint *)(param_11 + 8) < uVar2 + param_8 * 4) {
    uVar1 = param_8 * 4 + *(uint *)(param_11 + 8) + 0x80;
    __dest = operator_new__((ulong)uVar1 * 0x14);
    if (uVar2 == 0) {
      __src = *(void **)param_11;
    }
    else {
      __src = *(void **)param_11;
      memcpy(__dest,__src,(ulong)uVar2 << 4);
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    *(void **)param_11 = __dest;
    *(uint *)(param_11 + 8) = uVar1;
  }
  if (*(int *)(this + 0x30) == 1) {
    param_1 = (float)NEON_fmadd(param_6,0xbf000000,param_1);
  }
  else if (*(int *)(this + 0x30) == 2) {
    param_1 = param_1 - param_6;
  }
  fVar13 = *(float *)(this + 0xc);
  fVar16 = *(float *)(this + 0x10);
  iVar11 = 0;
  local_ac = 0;
  if (param_8 != 0) {
    fVar24 = *(float *)(this + 0x1c) * param_4;
    fVar25 = *(float *)(this + 0x1c) * param_3;
    puVar12 = (undefined8 *)(*(long *)param_11 + (ulong)*(uint *)(param_11 + 0xc) * 0x14);
    do {
      uVar9 = getNextCharInfo(this,param_7,&local_ac,(CharInfo **)&local_b8,&local_b0);
      if ((uVar9 & 1) == 0) break;
      sVar3 = *local_b8;
      if (sVar3 != 0x7fff) {
        if (param_5 == 1) {
LAB_006f1794:
          bVar8 = true;
          pfVar10 = (float *)(this + 0x14);
        }
        else {
          if (param_5 != 0) {
            if (((local_b0 == 0x2007) || (local_b0 - 0x30 < 10)) ||
               (param_5 == 3 && local_b0 == 0x20)) goto LAB_006f1794;
          }
          bVar8 = false;
          pfVar10 = (float *)(local_b8 + 4);
        }
        fVar14 = *pfVar10 * param_3;
        fVar17 = (float)(ulong)*(byte *)(local_b8 + 2);
        if (bVar8) {
          fVar18 = fVar25 * (fVar17 + 1.0);
          fVar17 = fVar14 * 0.95;
          if (fVar18 <= fVar14 * 0.95) {
            fVar17 = fVar18;
          }
          fVar18 = (fVar14 - fVar17) * 0.5;
        }
        else {
          fVar17 = fVar25 * (fVar17 + 1.0);
          fVar18 = fVar25 * ((float)(int)*(char *)(local_b8 + 3) + -0.5);
        }
        fVar18 = param_1 + fVar18;
        fVar21 = fVar13 * 32767.0 * ((float)(int)sVar3 + -0.5);
        fVar17 = fVar18 + fVar17;
        param_1 = param_1 + fVar14;
        fVar23 = fVar16 * 32767.0 * ((float)(int)local_b8[1] + -0.5);
        fVar14 = (float)NEON_fmadd((float)(int)*(char *)((long)local_b8 + 7) + 0.5,fVar24,param_2);
        fVar19 = fVar13 * 32767.0 * ((float)((uint)*(byte *)(local_b8 + 2) + (int)sVar3) + 0.5);
        fVar20 = fVar16 * 32767.0 *
                 ((float)((uint)*(byte *)((long)local_b8 + 5) + (int)local_b8[1]) + 0.5);
        fVar26 = (float)NEON_fmsub((float)(ulong)(uint)*(byte *)((long)local_b8 + 5) + -1.0,fVar24,
                                   fVar14);
        if (param_10) {
          fVar15 = *(float *)(this + 0x50);
          if (fVar15 < fVar17) {
            if (fVar15 < fVar18) break;
            fVar19 = fVar19 + ((fVar19 - fVar21) * (fVar15 - fVar17)) / (fVar17 - fVar18);
            fVar17 = fVar15;
          }
          fVar15 = *(float *)(this + 0x48);
          if (fVar18 < fVar15) {
            if (fVar17 < fVar15) goto LAB_006f1710;
            fVar21 = fVar21 + ((fVar19 - fVar21) * (fVar15 - fVar18)) / (fVar17 - fVar18);
            fVar18 = fVar15;
          }
          fVar15 = *(float *)(this + 0x54);
          if (fVar15 < fVar14) {
            if (fVar15 < fVar26) goto LAB_006f1710;
            fVar23 = fVar23 + ((fVar20 - fVar23) * (fVar15 - fVar14)) / (fVar26 - fVar14);
            fVar14 = fVar15;
          }
          fVar15 = *(float *)(this + 0x4c);
          if (fVar26 < fVar15) {
            if (fVar14 < fVar15) goto LAB_006f1710;
            fVar20 = fVar20 + ((fVar20 - fVar23) * (fVar15 - fVar26)) / (fVar26 - fVar14);
            fVar26 = fVar15;
          }
        }
        uVar27 = *(undefined8 *)(param_9 + 0x10);
        uVar29 = *(undefined8 *)param_9;
        iVar11 = iVar11 + 1;
        uVar30 = *(undefined8 *)(param_9 + 0x20);
        uVar28 = NEON_fmadd(fVar18,*(undefined4 *)(param_9 + 8),fVar14 * *(float *)(param_9 + 0x18))
        ;
        uVar31 = *(undefined8 *)(param_9 + 0x30);
        fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_9 + 0x28),0,uVar28);
        fVar32 = *(float *)(param_9 + 0x38);
        uVar4 = (undefined2)(int)(fVar21 + 0.5);
        *(undefined2 *)(puVar12 + 2) = uVar4;
        uVar5 = (undefined2)(int)(fVar23 + 0.5);
        *(undefined2 *)((long)puVar12 + 0x12) = uVar5;
        *puVar12 = CONCAT44((float)((ulong)uVar31 >> 0x20) +
                            (float)((ulong)uVar27 >> 0x20) * fVar14 +
                            (float)((ulong)uVar29 >> 0x20) * fVar18 +
                            (float)((ulong)uVar30 >> 0x20) * 0.0,
                            (float)uVar31 +
                            (float)uVar27 * fVar14 + (float)uVar29 * fVar18 + (float)uVar30 * 0.0);
        *(float *)(puVar12 + 1) = fVar32 + fVar15;
        uVar28 = *(undefined4 *)(this + 0x28);
        *(undefined4 *)((long)puVar12 + 0xc) = uVar28;
        uVar27 = *(undefined8 *)(param_9 + 0x10);
        uVar31 = *(undefined8 *)param_9;
        uVar22 = NEON_fmadd(fVar18,*(undefined4 *)(param_9 + 8),fVar26 * *(float *)(param_9 + 0x18))
        ;
        uVar29 = *(undefined8 *)(param_9 + 0x20);
        uVar30 = *(undefined8 *)(param_9 + 0x30);
        fVar21 = (float)NEON_fmadd(*(undefined4 *)(param_9 + 0x28),0,uVar22);
        fVar23 = *(float *)(param_9 + 0x38);
        *(undefined2 *)((long)puVar12 + 0x24) = uVar4;
        uVar4 = (undefined2)(int)(fVar20 + 0.5);
        *(undefined2 *)((long)puVar12 + 0x26) = uVar4;
        *(undefined4 *)(puVar12 + 4) = uVar28;
        *(ulong *)((long)puVar12 + 0x14) =
             CONCAT44((float)((ulong)uVar30 >> 0x20) +
                      (float)((ulong)uVar27 >> 0x20) * fVar26 +
                      (float)((ulong)uVar31 >> 0x20) * fVar18 + (float)((ulong)uVar29 >> 0x20) * 0.0
                      ,(float)uVar30 +
                       (float)uVar27 * fVar26 + (float)uVar31 * fVar18 + (float)uVar29 * 0.0);
        *(float *)((long)puVar12 + 0x1c) = fVar23 + fVar21;
        uVar27 = *(undefined8 *)(param_9 + 0x10);
        uVar29 = *(undefined8 *)param_9;
        fVar18 = *(float *)(param_9 + 0x38);
        uVar30 = *(undefined8 *)(param_9 + 0x20);
        uVar22 = NEON_fmadd(fVar17,*(undefined4 *)(param_9 + 8),fVar26 * *(float *)(param_9 + 0x18))
        ;
        uVar31 = *(undefined8 *)(param_9 + 0x30);
        fVar20 = (float)NEON_fmadd(*(undefined4 *)(param_9 + 0x28),0,uVar22);
        uVar6 = (undefined2)(int)(fVar19 + 0.5);
        *(undefined2 *)(puVar12 + 7) = uVar6;
        *(undefined2 *)((long)puVar12 + 0x3a) = uVar4;
        *(undefined4 *)((long)puVar12 + 0x34) = uVar28;
        puVar12[5] = CONCAT44((float)((ulong)uVar31 >> 0x20) +
                              (float)((ulong)uVar27 >> 0x20) * fVar26 +
                              (float)((ulong)uVar29 >> 0x20) * fVar17 +
                              (float)((ulong)uVar30 >> 0x20) * 0.0,
                              (float)uVar31 +
                              (float)uVar27 * fVar26 + (float)uVar29 * fVar17 + (float)uVar30 * 0.0)
        ;
        *(float *)(puVar12 + 6) = fVar18 + fVar20;
        uVar27 = *(undefined8 *)(param_9 + 0x10);
        uVar30 = *(undefined8 *)param_9;
        uVar31 = *(undefined8 *)(param_9 + 0x20);
        uVar22 = NEON_fmadd(fVar17,*(undefined4 *)(param_9 + 8),fVar14 * *(float *)(param_9 + 0x18))
        ;
        uVar29 = *(undefined8 *)(param_9 + 0x30);
        fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_9 + 0x28),0,uVar22);
        fVar26 = *(float *)(param_9 + 0x38);
        *(undefined2 *)((long)puVar12 + 0x4c) = uVar6;
        *(undefined2 *)((long)puVar12 + 0x4e) = uVar5;
        *(undefined4 *)(puVar12 + 9) = uVar28;
        *(ulong *)((long)puVar12 + 0x3c) =
             CONCAT44((float)((ulong)uVar29 >> 0x20) +
                      (float)((ulong)uVar27 >> 0x20) * fVar14 +
                      (float)((ulong)uVar30 >> 0x20) * fVar17 + (float)((ulong)uVar31 >> 0x20) * 0.0
                      ,(float)uVar29 +
                       (float)uVar27 * fVar14 + (float)uVar30 * fVar17 + (float)uVar31 * 0.0);
        *(float *)((long)puVar12 + 0x44) = fVar26 + fVar18;
        puVar12 = puVar12 + 10;
      }
LAB_006f1710:
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  *(int *)(param_11 + 0xc) = *(int *)(param_11 + 0xc) + iVar11 * 4;
  if (*(long *)(lVar7 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


