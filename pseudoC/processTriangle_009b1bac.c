// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 009b1bac
// Size: 664 bytes
// Signature: undefined __cdecl processTriangle(btVector3 * param_1, int param_2, int param_3)


/* Bt2ScenegraphPhysicsContext::DebugDrawCallback::processTriangle(btVector3*, int, int) */

undefined8
Bt2ScenegraphPhysicsContext::DebugDrawCallback::processTriangle
          (btVector3 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  puVar3 = (undefined4 *)(ulong)(uint)param_2;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *puVar3;
  fVar5 = (float)puVar3[1];
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  fVar6 = *(float *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x3c);
  uVar10 = *(undefined4 *)(param_1 + 0x48);
  fVar11 = *(float *)(param_1 + 0x4c);
  uVar13 = puVar3[4];
  fVar12 = (float)puVar3[5];
  uVar18 = puVar3[2];
  uVar19 = *(undefined4 *)(param_1 + 0x30);
  uVar20 = *(undefined4 *)(param_1 + 0x40);
  uVar14 = NEON_fmadd(uVar4,uVar7,fVar5 * fVar6);
  uVar15 = NEON_fmadd(uVar4,uVar8,fVar5 * fVar9);
  uVar21 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = NEON_fmadd(uVar4,uVar10,fVar5 * fVar11);
  uVar22 = puVar3[6];
  uVar16 = NEON_fmadd(uVar13,uVar7,fVar6 * fVar12);
  uVar17 = NEON_fmadd(uVar13,uVar8,fVar9 * fVar12);
  local_48 = (float)NEON_fmadd(uVar18,uVar19,uVar14);
  uVar13 = NEON_fmadd(uVar13,uVar10,fVar11 * fVar12);
  uVar14 = puVar3[8];
  fVar5 = (float)puVar3[9];
  local_68 = *(float *)(param_1 + 0x58);
  fStack_64 = *(float *)(param_1 + 0x5c);
  fStack_44 = (float)NEON_fmadd(uVar18,uVar20,uVar15);
  local_58 = (float)NEON_fmadd(uVar22,uVar19,uVar16);
  local_50 = (float)NEON_fmadd(uVar22,uVar21,uVar13);
  local_60 = *(float *)(param_1 + 0x60);
  local_40 = (float)NEON_fmadd(uVar18,uVar21,uVar4);
  local_48 = local_48 + local_68;
  fStack_44 = fStack_44 + fStack_64;
  fStack_54 = (float)NEON_fmadd(uVar22,uVar20,uVar17);
  uVar15 = puVar3[10];
  uVar13 = NEON_fmadd(uVar14,uVar7,fVar6 * fVar5);
  uVar4 = NEON_fmadd(uVar14,uVar8,fVar9 * fVar5);
  uVar7 = NEON_fmadd(uVar14,uVar10,fVar11 * fVar5);
  local_58 = local_68 + local_58;
  local_40 = local_40 + local_60;
  fStack_54 = fStack_64 + fStack_54;
  fVar5 = (float)NEON_fmadd(uVar15,uVar19,uVar13);
  fVar9 = (float)NEON_fmadd(uVar15,uVar20,uVar4);
  local_50 = local_60 + local_50;
  fVar6 = (float)NEON_fmadd(uVar15,uVar21,uVar7);
  local_3c = 0;
  local_68 = local_68 + fVar5;
  fStack_64 = fStack_64 + fVar9;
  local_60 = local_60 + fVar6;
  local_4c = 0;
  local_5c = 0;
  if (param_1[0x68] != (btVector3)0x0) {
    fVar9 = (float)NEON_fmadd(local_50 - local_40,local_68 - local_48,
                              (local_60 - local_40) * -(local_58 - local_48));
    fVar11 = (float)NEON_fmadd(fStack_54 - fStack_44,local_60 - local_40,
                               (fStack_64 - fStack_44) * -(local_50 - local_40));
    fVar6 = (float)NEON_fmadd(local_58 - local_48,fStack_64 - fStack_44,
                              (local_68 - local_48) * -(fStack_54 - fStack_44));
    uVar4 = NEON_fmadd(fVar11,fVar11,fVar9 * fVar9);
    local_78 = local_48 + ((local_58 + local_68) * 0.5 - local_48) * 0.6666;
    local_6c = 0;
    fStack_74 = fStack_44 + ((fStack_54 + fStack_64) * 0.5 - fStack_44) * 0.6666;
    local_70 = local_40 + ((local_50 + local_60) * 0.5 - local_40) * 0.6666;
    local_7c = 0;
    fVar5 = (float)NEON_fmadd(fVar6,fVar6,uVar4);
    fVar5 = 1.0 / SQRT(fVar5);
    local_88 = local_78 + fVar11 * fVar5;
    fStack_84 = fStack_74 + fVar9 * fVar5;
    local_80 = local_70 + fVar6 * fVar5;
    uStack_98 = 0x3f80000000000000;
    local_a0 = 0x3f8000003f800000;
    DeferredDebugRenderer::addLine
              (*(DeferredDebugRenderer **)(param_1 + 0x10),&local_78,(float *)&local_a0,&local_88,
               (float *)&local_a0,0x40);
  }
  pfVar1 = (float *)(param_1 + 0x18);
  DeferredDebugRenderer::addLine
            (*(DeferredDebugRenderer **)(param_1 + 0x10),&local_48,pfVar1,&local_58,pfVar1,0x40);
  DeferredDebugRenderer::addLine
            (*(DeferredDebugRenderer **)(param_1 + 0x10),&local_58,pfVar1,&local_68,pfVar1,0x40);
  DeferredDebugRenderer::addLine
            (*(DeferredDebugRenderer **)(param_1 + 0x10),&local_68,pfVar1,&local_48,pfVar1,0x40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


