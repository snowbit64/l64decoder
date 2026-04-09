// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareRender
// Entry Point: 00a445e4
// Size: 924 bytes
// Signature: undefined __thiscall prepareRender(FFXShadowDenoiser * this, RenderArgs * param_1, ITextureObject * param_2, ITextureObject * param_3, ITextureObject * param_4, ITextureObject * param_5, ITextureObject * param_6)


/* FFXShadowDenoiser::prepareRender(RenderArgs const&, ITextureObject*, ITextureObject*,
   ITextureObject*, ITextureObject*, ITextureObject*) */

void __thiscall
FFXShadowDenoiser::prepareRender
          (FFXShadowDenoiser *this,RenderArgs *param_1,ITextureObject *param_2,
          ITextureObject *param_3,ITextureObject *param_4,ITextureObject *param_5,
          ITextureObject *param_6)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  Matrix4x4 aMStack_f8 [64];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x138))();
  *(ITextureObject **)(this + 0x1e0) = param_6;
  *(ITextureObject **)(this + 0x1e8) = param_4;
  *(ITextureObject **)(this + 0x1c8) = param_3;
  *(ITextureObject **)(this + 0x1d0) = param_5;
  *(ITextureObject **)(this + 0x1d8) = param_2;
  fVar18 = *(float *)(param_1 + 0x154);
  fVar8 = *(float *)(param_1 + 0x120);
  fVar11 = *(float *)(param_1 + 0x124);
  uVar21 = *(undefined4 *)(param_1 + 0x150);
  uVar6 = *(undefined4 *)(param_1 + 0x110);
  fVar16 = *(float *)(param_1 + 0x128);
  uVar10 = *(undefined4 *)(param_1 + 0x114);
  fVar17 = *(float *)(param_1 + 300);
  uVar19 = NEON_fmadd(uVar21,uVar6,fVar18 * fVar8);
  fVar31 = *(float *)(param_1 + 0x164);
  uVar25 = NEON_fmadd(uVar21,uVar10,fVar18 * fVar11);
  uVar23 = *(undefined4 *)(param_1 + 0x158);
  uVar9 = *(undefined4 *)(param_1 + 0x130);
  uVar12 = *(undefined4 *)(param_1 + 0x118);
  uVar34 = *(undefined4 *)(param_1 + 0x160);
  uVar28 = NEON_fmadd(uVar23,uVar9,uVar19);
  uVar20 = *(undefined4 *)(param_1 + 0x11c);
  uVar27 = NEON_fmadd(uVar21,uVar12,fVar18 * fVar16);
  uVar15 = *(undefined4 *)(param_1 + 0x134);
  uVar29 = NEON_fmadd(uVar21,uVar20,fVar18 * fVar17);
  uVar33 = NEON_fmadd(uVar34,uVar6,fVar8 * fVar31);
  uVar26 = NEON_fmadd(uVar23,uVar15,uVar25);
  uVar35 = NEON_fmadd(uVar34,uVar10,fVar11 * fVar31);
  uVar24 = *(undefined4 *)(param_1 + 0x15c);
  uVar21 = *(undefined4 *)(param_1 + 0x140);
  uVar19 = NEON_fmadd(uVar34,uVar12,fVar16 * fVar31);
  uVar13 = *(undefined4 *)(param_1 + 0x138);
  uVar32 = NEON_fmadd(uVar34,uVar20,fVar17 * fVar31);
  uVar34 = *(undefined4 *)(param_1 + 0x144);
  uVar22 = *(undefined4 *)(param_1 + 0x13c);
  local_b8 = NEON_fmadd(uVar24,uVar21,uVar28);
  uVar25 = *(undefined4 *)(param_1 + 0x168);
  uVar27 = NEON_fmadd(uVar23,uVar13,uVar27);
  uStack_b4 = NEON_fmadd(uVar24,uVar34,uVar26);
  uVar26 = *(undefined4 *)(param_1 + 0x148);
  uVar23 = NEON_fmadd(uVar23,uVar22,uVar29);
  uVar30 = *(undefined4 *)(param_1 + 0x14c);
  uVar28 = NEON_fmadd(uVar25,uVar9,uVar33);
  uVar33 = NEON_fmadd(uVar25,uVar15,uVar35);
  uVar29 = *(undefined4 *)(param_1 + 0x16c);
  local_b0 = NEON_fmadd(uVar24,uVar26,uVar27);
  uVar27 = NEON_fmadd(uVar25,uVar22,uVar32);
  uStack_ac = NEON_fmadd(uVar24,uVar30,uVar23);
  uVar19 = NEON_fmadd(uVar25,uVar13,uVar19);
  local_a8 = NEON_fmadd(uVar29,uVar21,uVar28);
  uStack_a4 = NEON_fmadd(uVar29,uVar34,uVar33);
  fVar18 = *(float *)(param_1 + 0x174);
  local_a0 = NEON_fmadd(uVar29,uVar26,uVar19);
  uStack_9c = NEON_fmadd(uVar29,uVar30,uVar27);
  uVar25 = *(undefined4 *)(param_1 + 0x170);
  fVar31 = *(float *)(param_1 + 0x184);
  uVar19 = NEON_fmadd(uVar25,uVar6,fVar8 * fVar18);
  uVar23 = NEON_fmadd(uVar25,uVar10,fVar11 * fVar18);
  uVar29 = *(undefined4 *)(param_1 + 0x178);
  uVar27 = *(undefined4 *)(param_1 + 0x180);
  uVar24 = NEON_fmadd(uVar25,uVar12,fVar16 * fVar18);
  uVar28 = NEON_fmadd(uVar25,uVar20,fVar17 * fVar18);
  uVar6 = NEON_fmadd(uVar27,uVar6,fVar8 * fVar31);
  uVar19 = NEON_fmadd(uVar29,uVar9,uVar19);
  uVar10 = NEON_fmadd(uVar27,uVar10,fVar11 * fVar31);
  uVar25 = NEON_fmadd(uVar29,uVar15,uVar23);
  uVar12 = NEON_fmadd(uVar27,uVar12,fVar16 * fVar31);
  uVar23 = NEON_fmadd(uVar27,uVar20,fVar17 * fVar31);
  uVar27 = *(undefined4 *)(param_1 + 0x17c);
  uVar24 = NEON_fmadd(uVar29,uVar13,uVar24);
  uVar20 = *(undefined4 *)(param_1 + 0x188);
  uVar28 = NEON_fmadd(uVar29,uVar22,uVar28);
  local_98 = NEON_fmadd(uVar27,uVar21,uVar19);
  uStack_94 = NEON_fmadd(uVar27,uVar34,uVar25);
  uVar6 = NEON_fmadd(uVar20,uVar9,uVar6);
  uVar9 = NEON_fmadd(uVar20,uVar15,uVar10);
  uVar10 = NEON_fmadd(uVar20,uVar13,uVar12);
  uVar25 = NEON_fmadd(uVar20,uVar22,uVar23);
  uVar19 = *(undefined4 *)(param_1 + 0x18c);
  local_90 = NEON_fmadd(uVar27,uVar26,uVar24);
  uStack_8c = NEON_fmadd(uVar27,uVar30,uVar28);
  local_88 = NEON_fmadd(uVar19,uVar21,uVar6);
  uStack_84 = NEON_fmadd(uVar19,uVar34,uVar9);
  local_80 = NEON_fmadd(uVar19,uVar26,uVar10);
  uStack_7c = NEON_fmadd(uVar19,uVar30,uVar25);
  Matrix4x4::invert(aMStack_f8,(Matrix4x4 *)(param_1 + 0x80));
  puVar4 = (undefined4 *)
           (**(code **)(**(long **)(this + 0x120) + 0x10))(*(long **)(this + 0x120),uVar3);
  *puVar4 = *(undefined4 *)(this + 0x18);
  puVar4[1] = *(undefined4 *)(this + 0x1c);
  (**(code **)(**(long **)(this + 0x120) + 0x18))(*(long **)(this + 0x120),uVar3);
  puVar4 = (undefined4 *)
           (**(code **)(**(long **)(this + 0x148) + 0x10))(*(long **)(this + 0x148),uVar3);
  *puVar4 = *(undefined4 *)(param_1 + 0x354);
  bVar2 = DAT_02112c98;
  puVar4[1] = *(undefined4 *)(param_1 + 0x358);
  puVar4[2] = *(undefined4 *)(param_1 + 0x35c);
  if ((bVar2 & 1) == 0) {
    puVar4[3] = 1;
    DAT_02112c98 = 1;
  }
  else {
    puVar4[3] = 0;
  }
  uVar14 = NEON_fmov(0x3f800000,4);
  puVar4[4] = *(undefined4 *)(this + 0x18);
  puVar4[5] = *(undefined4 *)(this + 0x1c);
  uVar7 = NEON_ucvtf(*(undefined8 *)(this + 0x18),4);
  fVar8 = (float)((ulong)uVar14 >> 0x20);
  *(ulong *)(puVar4 + 6) =
       CONCAT44(fVar8 / (float)((ulong)uVar7 >> 0x20),(float)uVar14 / (float)uVar7);
  ShaderStructLayout::setMatrix4x4((float *)(puVar4 + 8),aMStack_f8);
  ShaderStructLayout::setMatrix4x4((float *)(puVar4 + 0x18),(Matrix4x4 *)&local_b8);
  ShaderStructLayout::setMatrix4x4((float *)(puVar4 + 0x28),(Matrix4x4 *)(param_1 + 0x150));
  (**(code **)(**(long **)(this + 0x148) + 0x18))(*(long **)(this + 0x148),uVar3);
  pfVar5 = (float *)(**(code **)(**(long **)(this + 0x1c0) + 0x10))(*(long **)(this + 0x1c0),uVar3);
  ShaderStructLayout::setMatrix4x4(pfVar5,aMStack_f8);
  pfVar5[0x10] = *(float *)(this + 0x18);
  pfVar5[0x11] = *(float *)(this + 0x1c);
  uVar7 = *(undefined8 *)(this + 0x18);
  pfVar5[0x14] = 1.0;
  uVar7 = NEON_ucvtf(uVar7,4);
  *(ulong *)(pfVar5 + 0x12) =
       CONCAT44(fVar8 / (float)((ulong)uVar7 >> 0x20),(float)uVar14 / (float)uVar7);
  (**(code **)(**(long **)(this + 0x1c0) + 0x18))(*(long **)(this + 0x1c0),uVar3);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


