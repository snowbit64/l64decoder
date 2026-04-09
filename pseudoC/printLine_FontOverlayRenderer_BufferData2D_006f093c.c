// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printLine<FontOverlayRenderer::BufferData2D>
// Entry Point: 006f093c
// Size: 1264 bytes
// Signature: void __thiscall printLine<FontOverlayRenderer::BufferData2D>(FontOverlayRenderer * this, float param_1, float param_2, float param_3, float param_4, ADVANCE_MODE param_5, float param_6, char * param_7, uint param_8, Matrix4x4 * param_9, bool param_10, BufferData2D * param_11)


/* void FontOverlayRenderer::printLine<FontOverlayRenderer::BufferData2D>(float, float, float,
   float, FontOverlayRenderer::ADVANCE_MODE, float, char const*, unsigned int, Matrix4x4 const*,
   bool, FontOverlayRenderer::BufferData2D&) */

void __thiscall
FontOverlayRenderer::printLine<FontOverlayRenderer::BufferData2D>
          (FontOverlayRenderer *this,float param_1,float param_2,float param_3,float param_4,
          ADVANCE_MODE param_5,float param_6,char *param_7,uint param_8,Matrix4x4 *param_9,
          bool param_10,BufferData2D *param_11)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  long lVar9;
  bool bVar10;
  void *__dest;
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  void *__src;
  undefined2 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  short *local_b8;
  uint local_b0;
  uint local_ac;
  long local_a8;
  
  lVar9 = tpidr_el0;
  local_a8 = *(long *)(lVar9 + 0x28);
  uVar2 = *(uint *)(param_11 + 0xc);
  if (*(uint *)(param_11 + 8) < uVar2 + param_8 * 4) {
    uVar1 = param_8 * 4 + *(uint *)(param_11 + 8) + 0x80;
    __dest = operator_new__((ulong)uVar1 << 4);
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
  iVar13 = 0;
  local_ac = 0;
  fVar15 = (float)NEON_fmin(param_4,0x3e99999a);
  fVar16 = *(float *)(this + 0xc);
  fVar20 = *(float *)(this + 0x10);
  fVar24 = 0.256;
  if (0.04 <= param_4) {
    fVar24 = fVar15 * 6.4;
  }
  if (param_8 != 0) {
    fVar28 = *(float *)(this + 0x1c) * param_3;
    fVar15 = *(float *)(this + 0x1c) * param_4;
    puVar14 = (undefined2 *)(*(long *)param_11 + (ulong)*(uint *)(param_11 + 0xc) * 0x10);
    fVar24 = (float)NEON_fmadd(fVar24 / param_4,0x42fffe00,0x3f000000);
    do {
      uVar11 = getNextCharInfo(this,param_7,&local_ac,(CharInfo **)&local_b8,&local_b0);
      if ((uVar11 & 1) == 0) break;
      sVar4 = *local_b8;
      if (sVar4 != 0x7fff) {
        if (param_5 == 1) {
LAB_006f0c24:
          bVar10 = true;
          pfVar12 = (float *)(this + 0x14);
        }
        else {
          if (param_5 != 0) {
            if (((local_b0 == 0x2007) || (local_b0 - 0x30 < 10)) ||
               (param_5 == 3 && local_b0 == 0x20)) goto LAB_006f0c24;
          }
          bVar10 = false;
          pfVar12 = (float *)(local_b8 + 4);
        }
        fVar22 = *pfVar12 * param_3;
        fVar17 = (float)(ulong)*(byte *)(local_b8 + 2);
        if (bVar10) {
          fVar18 = fVar28 * (fVar17 + 1.0);
          fVar17 = fVar22 * 0.95;
          if (fVar18 <= fVar22 * 0.95) {
            fVar17 = fVar18;
          }
          fVar18 = (fVar22 - fVar17) * 0.5;
        }
        else {
          fVar17 = fVar28 * (fVar17 + 1.0);
          fVar18 = fVar28 * ((float)(int)*(char *)(local_b8 + 3) + -0.5);
        }
        fVar25 = fVar16 * 32767.0 * ((float)(int)sVar4 + -0.5);
        fVar26 = fVar20 * 32767.0 * ((float)(int)local_b8[1] + -0.5);
        fVar18 = param_1 + fVar18;
        param_1 = param_1 + fVar22;
        fVar22 = (float)NEON_fmadd((float)(int)*(char *)((long)local_b8 + 7) + 0.5,fVar15,param_2);
        fVar21 = fVar20 * 32767.0 *
                 ((float)((uint)*(byte *)((long)local_b8 + 5) + (int)local_b8[1]) + 0.5);
        fVar19 = fVar16 * 32767.0 * ((float)((uint)*(byte *)(local_b8 + 2) + (int)sVar4) + 0.5);
        fVar17 = fVar18 + fVar17;
        fVar27 = (float)NEON_fmsub((float)(ulong)*(byte *)((long)local_b8 + 5) + -1.0,fVar15,fVar22)
        ;
        if (param_10) {
          fVar23 = *(float *)(this + 0x50);
          if (fVar23 < fVar17) {
            if (fVar23 < fVar18) break;
            fVar19 = fVar19 + ((fVar19 - fVar25) * (fVar23 - fVar17)) / (fVar17 - fVar18);
            fVar17 = fVar23;
          }
          fVar23 = *(float *)(this + 0x48);
          if (fVar18 < fVar23) {
            if (fVar17 < fVar23) goto LAB_006f0ba4;
            fVar25 = fVar25 + ((fVar19 - fVar25) * (fVar23 - fVar18)) / (fVar17 - fVar18);
            fVar18 = fVar23;
          }
          fVar23 = *(float *)(this + 0x54);
          if (fVar23 < fVar22) {
            if (fVar23 < fVar27) goto LAB_006f0ba4;
            fVar26 = fVar26 + ((fVar21 - fVar26) * (fVar23 - fVar22)) / (fVar27 - fVar22);
            fVar22 = fVar23;
          }
          fVar23 = *(float *)(this + 0x4c);
          if (fVar27 < fVar23) {
            if (fVar22 < fVar23) goto LAB_006f0ba4;
            fVar21 = fVar21 + ((fVar21 - fVar26) * (fVar23 - fVar27)) / (fVar27 - fVar22);
            fVar27 = fVar23;
          }
        }
        uVar5 = (undefined2)(int)fVar24;
        puVar14[2] = uVar5;
        iVar13 = iVar13 + 1;
        puVar14[3] = 0;
        fVar18 = (float)NEON_fmadd(fVar18,0x45fffe00,0x3f000000);
        fVar23 = (float)NEON_fmadd(fVar22,0x45fffe00,0x3f000000);
        fVar22 = (float)NEON_fmadd(fVar27,0x45fffe00,0x3f000000);
        fVar17 = (float)NEON_fmadd(fVar17,0x45fffe00,0x3f000000);
        uVar6 = (undefined2)(int)(fVar25 + 0.5);
        puVar14[6] = uVar6;
        uVar7 = (undefined2)(int)(fVar26 + 0.5);
        puVar14[7] = uVar7;
        *puVar14 = (short)(int)fVar18;
        puVar14[1] = (short)(int)fVar23;
        uVar3 = *(undefined4 *)(this + 0x28);
        puVar14[8] = (short)(int)fVar18;
        puVar14[0xe] = uVar6;
        puVar14[9] = (short)(int)fVar22;
        puVar14[10] = uVar5;
        puVar14[0xb] = 0;
        uVar6 = (undefined2)(int)(fVar21 + 0.5);
        puVar14[0xf] = uVar6;
        *(undefined4 *)(puVar14 + 4) = uVar3;
        *(undefined4 *)(puVar14 + 0xc) = uVar3;
        puVar14[0x10] = (short)(int)fVar17;
        puVar14[0x11] = (short)(int)fVar22;
        puVar14[0x12] = uVar5;
        puVar14[0x13] = 0;
        uVar8 = (undefined2)(int)(fVar19 + 0.5);
        puVar14[0x16] = uVar8;
        puVar14[0x17] = uVar6;
        *(undefined4 *)(puVar14 + 0x14) = uVar3;
        puVar14[0x18] = (short)(int)fVar17;
        puVar14[0x19] = (short)(int)fVar23;
        puVar14[0x1a] = uVar5;
        puVar14[0x1b] = 0;
        puVar14[0x1e] = uVar8;
        puVar14[0x1f] = uVar7;
        *(undefined4 *)(puVar14 + 0x1c) = uVar3;
        puVar14 = puVar14 + 0x20;
      }
LAB_006f0ba4:
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  *(int *)(param_11 + 0xc) = *(int *)(param_11 + 0xc) + iVar13 * 4;
  if (*(long *)(lVar9 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


