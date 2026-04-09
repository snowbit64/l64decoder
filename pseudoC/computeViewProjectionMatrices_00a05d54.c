// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeViewProjectionMatrices
// Entry Point: 00a05d54
// Size: 740 bytes
// Signature: undefined __thiscall computeViewProjectionMatrices(RenderArgs * this, float * param_1, float * param_2)


/* RenderArgs::computeViewProjectionMatrices(float (*) [4], float (*) [4]) const */

void __thiscall
RenderArgs::computeViewProjectionMatrices(RenderArgs *this,float *param_1,float *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x39c] == (RenderArgs)0x0) {
    ShaderStructLayout::setMatrix4x4(param_1,(Matrix4x4 *)(this + 0x2d4));
    puVar2 = (undefined4 *)(this + 0x314);
  }
  else {
    fVar6 = *(float *)(this + 0x2d4);
    fVar8 = *(float *)(this + 0x2d8) * 0.0;
    uVar4 = NEON_fmadd(fVar6,0,*(float *)(this + 0x2d8));
    fVar16 = *(float *)(this + 0x2e8) * 0.0;
    fVar7 = *(float *)(this + 0x2dc);
    fVar12 = *(float *)(this + 0x590) + *(float *)(this + 0x590);
    fVar13 = *(float *)(this + 0x2e4);
    fVar3 = (float)NEON_fmadd(fVar6,0,fVar8);
    fVar11 = *(float *)(this + 0x594) + *(float *)(this + 0x594);
    uVar5 = NEON_fmadd(fVar7,0,uVar4);
    uVar4 = NEON_fmadd(fVar13,0,*(float *)(this + 0x2e8));
    fStack_7c = *(float *)(this + 0x2e0);
    fVar10 = (float)NEON_fmadd(fVar13,0,fVar16);
    uVar9 = NEON_fmadd(fVar7,0,fVar6 + fVar8);
    fVar15 = *(float *)(this + 0x2ec);
    fVar6 = (float)NEON_fmadd(fVar7,0,fVar3);
    uStack_84 = NEON_fmadd(fStack_7c,fVar11,uVar5);
    fStack_6c = *(float *)(this + 0x2f0);
    uVar4 = NEON_fmadd(fVar15,0,uVar4);
    uVar5 = NEON_fmadd(fVar15,0,fVar13 + fVar16);
    local_88 = NEON_fmadd(fStack_7c,fVar12,uVar9);
    local_80 = NEON_fmadd(fStack_7c,0,fVar7 + fVar3);
    fStack_7c = fStack_7c + fVar6;
    fVar8 = *(float *)(this + 0x2f8) * 0.0;
    uStack_74 = NEON_fmadd(fStack_6c,fVar11,uVar4);
    local_78 = NEON_fmadd(fStack_6c,fVar12,uVar5);
    fVar6 = (float)NEON_fmadd(fVar15,0,fVar10);
    fVar3 = *(float *)(this + 0x2f4);
    local_70 = NEON_fmadd(fStack_6c,0,fVar15 + fVar10);
    fVar15 = *(float *)(this + 0x304);
    fStack_6c = fStack_6c + fVar6;
    uVar5 = NEON_fmadd(fVar3,0,*(float *)(this + 0x2f8));
    fVar13 = *(float *)(this + 0x308) * 0.0;
    fVar6 = (float)NEON_fmadd(fVar3,0,fVar8);
    fVar7 = *(float *)(this + 0x2fc);
    uVar9 = NEON_fmadd(fVar15,0,*(float *)(this + 0x308));
    fVar10 = *(float *)(this + 0x30c);
    fStack_5c = *(float *)(this + 0x300);
    uVar4 = NEON_fmadd(fVar7,0,fVar3 + fVar8);
    uVar5 = NEON_fmadd(fVar7,0,uVar5);
    fVar8 = (float)NEON_fmadd(fVar15,0,fVar13);
    fVar3 = (float)NEON_fmadd(fVar7,0,fVar6);
    uVar9 = NEON_fmadd(fVar10,0,uVar9);
    fStack_4c = *(float *)(this + 0x310);
    local_68 = NEON_fmadd(fStack_5c,fVar12,uVar4);
    uStack_64 = NEON_fmadd(fStack_5c,fVar11,uVar5);
    uVar4 = NEON_fmadd(fVar10,0,fVar15 + fVar13);
    local_60 = NEON_fmadd(fStack_5c,0,fVar7 + fVar6);
    fStack_5c = fStack_5c + fVar3;
    fVar3 = (float)NEON_fmadd(fVar10,0,fVar8);
    uStack_54 = NEON_fmadd(fStack_4c,fVar11,uVar9);
    local_58 = NEON_fmadd(fStack_4c,fVar12,uVar4);
    local_50 = NEON_fmadd(fStack_4c,0,fVar10 + fVar8);
    fStack_4c = fStack_4c + fVar3;
    ShaderStructLayout::setMatrix4x4(param_1,(Matrix4x4 *)&local_88);
    puVar2 = &local_c8;
    fVar3 = *(float *)(this + 0x314);
    fVar8 = *(float *)(this + 0x318) * 0.0;
    fVar7 = *(float *)(this + 0x31c);
    uVar4 = NEON_fmadd(fVar3,0,*(float *)(this + 0x318));
    fVar10 = *(float *)(this + 0x324);
    fVar15 = *(float *)(this + 0x328) * 0.0;
    fStack_bc = *(float *)(this + 800);
    fVar16 = *(float *)(this + 0x32c);
    fVar6 = (float)NEON_fmadd(fVar3,0,fVar8);
    uVar5 = NEON_fmadd(fVar10,0,*(float *)(this + 0x328));
    uVar4 = NEON_fmadd(fVar7,0,uVar4);
    fVar13 = (float)NEON_fmadd(fVar10,0,fVar15);
    fStack_ac = *(float *)(this + 0x330);
    uVar14 = NEON_fmadd(fVar7,0,fVar3 + fVar8);
    fVar3 = (float)NEON_fmadd(fVar7,0,fVar6);
    uVar9 = NEON_fmadd(fVar16,0,uVar5);
    uVar5 = NEON_fmadd(fVar16,0,fVar10 + fVar15);
    uStack_c4 = NEON_fmadd(fStack_bc,fVar11,uVar4);
    local_c8 = NEON_fmadd(fStack_bc,fVar12,uVar14);
    local_c0 = NEON_fmadd(fStack_bc,0,fVar7 + fVar6);
    fStack_bc = fStack_bc + fVar3;
    uStack_b4 = NEON_fmadd(fStack_ac,fVar11,uVar9);
    local_b8 = NEON_fmadd(fStack_ac,fVar12,uVar5);
    fVar6 = (float)NEON_fmadd(fVar16,0,fVar13);
    fVar10 = *(float *)(this + 0x334);
    fVar3 = *(float *)(this + 0x338) * 0.0;
    local_b0 = NEON_fmadd(fStack_ac,0,fVar16 + fVar13);
    fStack_ac = fStack_ac + fVar6;
    uVar5 = NEON_fmadd(fVar10,0,*(float *)(this + 0x338));
    fVar8 = *(float *)(this + 0x348) * 0.0;
    fVar6 = (float)NEON_fmadd(fVar10,0,fVar3);
    fVar7 = *(float *)(this + 0x33c);
    fVar13 = *(float *)(this + 0x344);
    fStack_9c = *(float *)(this + 0x340);
    uVar4 = NEON_fmadd(fVar7,0,fVar10 + fVar3);
    uVar5 = NEON_fmadd(fVar7,0,uVar5);
    uVar9 = NEON_fmadd(fVar13,0,*(float *)(this + 0x348));
    fVar10 = (float)NEON_fmadd(fVar13,0,fVar8);
    fVar3 = (float)NEON_fmadd(fVar7,0,fVar6);
    fVar15 = *(float *)(this + 0x34c);
    local_a8 = NEON_fmadd(fStack_9c,fVar12,uVar4);
    uStack_a4 = NEON_fmadd(fStack_9c,fVar11,uVar5);
    uVar4 = NEON_fmadd(fVar15,0,fVar13 + fVar8);
    uVar5 = NEON_fmadd(fVar15,0,uVar9);
    local_a0 = NEON_fmadd(fStack_9c,0,fVar7 + fVar6);
    fStack_9c = fStack_9c + fVar3;
    fVar3 = (float)NEON_fmadd(fVar15,0,fVar10);
    fStack_8c = *(float *)(this + 0x350);
    local_98 = NEON_fmadd(fStack_8c,fVar12,uVar4);
    uStack_94 = NEON_fmadd(fStack_8c,fVar11,uVar5);
    local_90 = NEON_fmadd(fStack_8c,0,fVar15 + fVar10);
    fStack_8c = fStack_8c + fVar3;
  }
  ShaderStructLayout::setMatrix4x4(param_2,(Matrix4x4 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


