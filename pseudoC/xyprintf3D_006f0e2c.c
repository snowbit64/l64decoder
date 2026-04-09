// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: xyprintf3D
// Entry Point: 006f0e2c
// Size: 1548 bytes
// Signature: undefined __thiscall xyprintf3D(FontOverlayRenderer * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, ADVANCE_MODE param_8, char * param_9)


/* FontOverlayRenderer::xyprintf3D(float, float, float, float, float, float, float,
   FontOverlayRenderer::ADVANCE_MODE, char const*) */

void __thiscall
FontOverlayRenderer::xyprintf3D
          (FontOverlayRenderer *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,ADVANCE_MODE param_8,char *param_9)

{
  long lVar1;
  FontOverlayRenderer FVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  ulong local_118;
  undefined8 local_110;
  undefined local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  puVar11 = *(undefined8 **)(this + 0x410);
  puVar9 = (undefined8 *)(this + 0x410);
  if (puVar11 != (undefined8 *)0x0) {
    uVar10 = *(ulong *)(this + 1000);
    puVar15 = puVar9;
    do {
      if ((ulong)puVar11[4] >= uVar10) {
        puVar15 = puVar11;
      }
      puVar11 = (undefined8 *)puVar11[(ulong)puVar11[4] < uVar10];
    } while (puVar11 != (undefined8 *)0x0);
    if ((puVar15 != puVar9) && ((ulong)puVar15[4] <= uVar10)) goto LAB_006f1080;
  }
  plVar12 = *(long **)(this + 0x78);
  pvVar5 = operator_new__(0x14000);
  local_f0 = 0;
  local_e0 = "Font3D";
  local_e8 = 0x800014000;
  uVar6 = (**(code **)(*plVar12 + 0x138))(plVar12);
  uVar6 = (**(code **)(*plVar12 + 0x108))(plVar12,uVar6,&local_f0);
  plVar12 = *(long **)(this + 0x78);
  pvVar7 = operator_new__(0x14000);
  local_f0 = 0;
  local_e8 = 0x800014000;
  local_e0 = "Font3D";
  uVar8 = (**(code **)(*plVar12 + 0x138))(plVar12);
  uVar8 = (**(code **)(*plVar12 + 0x108))(plVar12,uVar8,&local_f0);
  uVar10 = *(ulong *)(this + 1000);
  if (*(undefined8 **)(this + 0x410) == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*puVar9;
    puVar11 = puVar9;
  }
  else {
    puVar15 = *(undefined8 **)(this + 0x410);
    puVar11 = (undefined8 *)(this + 0x410);
LAB_006f0f8c:
    do {
      puVar9 = puVar15;
      if ((ulong)puVar9[4] <= uVar10) {
        if ((ulong)puVar9[4] < uVar10) {
          puVar11 = puVar9 + 1;
          puVar15 = (undefined8 *)*puVar11;
          if ((undefined8 *)*puVar11 != (undefined8 *)0x0) goto LAB_006f0f8c;
        }
        puVar15 = (undefined8 *)*puVar11;
        goto joined_r0x006f0fd0;
      }
      puVar15 = (undefined8 *)*puVar9;
      puVar11 = puVar9;
    } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
    puVar15 = (undefined8 *)*puVar9;
  }
joined_r0x006f0fd0:
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)operator_new(0x58);
    puVar15[4] = uVar10;
    puVar15[5] = pvVar5;
    puVar15[7] = uVar6;
    puVar15[8] = pvVar7;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = puVar9;
    puVar15[6] = 0x1000;
    puVar15[10] = uVar8;
    puVar15[9] = 0x1000;
    *puVar11 = puVar15;
    puVar9 = puVar15;
    if (**(long **)(this + 0x408) != 0) {
      *(long *)(this + 0x408) = **(long **)(this + 0x408);
      puVar9 = (undefined8 *)*puVar11;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x410),(__tree_node_base *)puVar9);
    *(long *)(this + 0x418) = *(long *)(this + 0x418) + 1;
  }
LAB_006f1080:
  fVar17 = *(float *)(this + 0x44);
  fVar30 = *(float *)(this + 0x38);
  fVar27 = *(float *)(this + 0x40) * param_7;
  FVar2 = this[0x3c];
  lVar1 = 0x40;
  if (this[0x58] != (FontOverlayRenderer)0x0) {
    lVar1 = 0x28;
  }
  local_b4 = 0x3f800000;
  local_c0 = param_1;
  fStack_bc = param_2;
  local_b8 = param_3;
  sincosf(param_6,&fStack_11c,&local_120);
  fVar32 = fStack_11c * -0.0;
  fVar19 = (float)NEON_fnmsub(local_120,0,fStack_11c);
  uVar26 = NEON_fmadd(fStack_11c,0,local_120);
  fVar28 = fStack_11c + local_120 * 0.0;
  uVar31 = NEON_fmadd(fStack_11c,0,local_120 * 0.0);
  fVar16 = (float)NEON_fmadd(local_120,0,fVar32);
  sincosf(param_5,&fStack_124,&local_128);
  uVar24 = NEON_fmadd(uVar31,fStack_124,local_128);
  fVar22 = local_128 * 0.0;
  fVar20 = fStack_124 * -0.0;
  uVar23 = NEON_fmadd(uVar26,local_128,fVar20);
  uVar25 = NEON_fmadd(fVar28,local_128,fVar20);
  uVar21 = NEON_fmadd(uVar31,local_128,fVar20);
  uVar18 = NEON_fnmsub(uVar31,local_128,fStack_124);
  uVar26 = NEON_fmadd(uVar26,fStack_124,fVar22);
  uVar29 = NEON_fmadd(fVar28,fStack_124,fVar22);
  uVar31 = NEON_fmadd(uVar31,fStack_124,fVar22);
  local_f0 = CONCAT44(uVar25,uVar23);
  local_e8 = CONCAT44(uVar21,uVar18);
  sincosf(param_4,&fStack_12c,&local_130);
  fVar22 = (float)NEON_fnmadd(local_120,0,-fVar32);
  fVar20 = (float)NEON_fnmadd(local_120,0,--fStack_11c);
  fVar28 = 0.0;
  uVar18 = NEON_fmadd(uVar26,fStack_12c,local_130 * fVar19);
  uVar21 = NEON_fmadd(uVar29,fStack_12c,local_130 * (local_120 + fVar32));
  local_d8 = NEON_fmadd(uVar24,fStack_12c,local_130 * fVar16);
  uStack_d4 = NEON_fmadd(uVar31,fStack_12c,local_130 * fVar16);
  local_d0 = NEON_fmadd(uVar26,local_130,fStack_12c * fVar20);
  local_e0 = (char *)CONCAT44(uVar21,uVar18);
  uStack_cc = NEON_fmadd(uVar29,local_130,fStack_12c * -(local_120 + fVar32));
  local_c8 = NEON_fmadd(uVar24,local_130,fStack_12c * fVar22);
  uStack_c4 = NEON_fmadd(uVar31,local_130,fStack_12c * fVar22);
  if (*(int *)(this + 0x34) != 0) {
    if (*(int *)(this + 0x34) == 1) {
      fVar28 = 0.0 - param_7;
    }
    else {
      local_104 = 0xffffffff;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_fc = 0;
      uStack_f8 = 0;
      uVar10 = getNextLine(this,(PrintState *)&local_118,param_9,fVar27,param_8,fVar30,
                           FVar2 != (FontOverlayRenderer)0x0);
      iVar13 = 0;
      if ((uVar10 & 1) != 0) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
          uVar10 = getNextLine(this,(PrintState *)&local_118,param_9,fVar27,param_8,fVar30,
                               FVar2 != (FontOverlayRenderer)0x0);
        } while ((uVar10 & 1) != 0);
      }
      if ((uint)local_110 != 0) {
        iVar13 = iVar13 + 1;
      }
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      fVar16 = (float)NEON_fmadd((float)(iVar13 + -1),*(float *)(this + 0x44) * param_7,param_7);
      if (*(int *)(this + 0x34) == 3) {
        fVar28 = (0.0 - param_7) + fVar16;
      }
      else if (*(int *)(this + 0x34) == 2) {
        fVar28 = (float)NEON_fmadd(fVar16,0x3f000000,0.0 - param_7);
      }
    }
  }
  local_104 = 0xffffffff;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_fc = 0;
  uStack_f8 = 0;
  uVar10 = getNextLine(this,(PrintState *)&local_118,param_9,fVar27,param_8,fVar30,
                       FVar2 != (FontOverlayRenderer)0x0);
  uVar14 = 0;
  if ((uVar10 & 1) != 0) {
    uVar14 = 0;
    do {
      uVar3 = uVar14 - *(uint *)(this + 0x20);
      if ((*(uint *)(this + 0x20) <= uVar14) && (uVar3 < *(uint *)(this + 0x24))) {
        fVar16 = (float)NEON_fmsub((float)(ulong)uVar3,fVar17 * param_7,fVar28);
        printLine<FontOverlayRenderer::BufferData3D>
                  (this,0.0,fVar16,fVar27,param_7,param_8,local_110._4_4_,
                   param_9 + (local_118 >> 0x20),(uint)local_110,(Matrix4x4 *)&local_f0,false,
                   (BufferData3D *)((long)puVar15 + lVar1));
      }
      uVar14 = uVar14 + 1;
      uVar10 = getNextLine(this,(PrintState *)&local_118,param_9,fVar27,param_8,fVar30,
                           FVar2 != (FontOverlayRenderer)0x0);
    } while ((uVar10 & 1) != 0);
  }
  if ((((uint)local_110 != 0) &&
      (uVar3 = uVar14 - *(uint *)(this + 0x20), *(uint *)(this + 0x20) <= uVar14)) &&
     (uVar3 < *(uint *)(this + 0x24))) {
    fVar17 = (float)NEON_fmsub((float)(ulong)uVar3,fVar17 * param_7,fVar28);
    printLine<FontOverlayRenderer::BufferData3D>
              (this,0.0,fVar17,fVar27,param_7,param_8,local_110._4_4_,param_9 + (local_118 >> 0x20),
               (uint)local_110,(Matrix4x4 *)&local_f0,false,(BufferData3D *)((long)puVar15 + lVar1))
    ;
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


