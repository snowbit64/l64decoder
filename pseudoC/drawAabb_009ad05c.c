// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawAabb
// Entry Point: 009ad05c
// Size: 460 bytes
// Signature: undefined __thiscall drawAabb(btIDebugDraw * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3)


/* btIDebugDraw::drawAabb(btVector3 const&, btVector3 const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawAabb(btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  fVar10 = *(float *)(param_2 + 8);
  fVar13 = *(float *)(param_1 + 8);
  fVar3 = (float)*(undefined8 *)param_2;
  fVar5 = (float)*(undefined8 *)param_1;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar14 = (fVar3 + fVar5) * 0.5;
  fVar15 = (fVar4 + fVar8) * 0.5;
  fVar16 = (fVar10 + fVar13) * 0.5;
  uVar7 = NEON_fmov(0x3f800000,4);
  fVar17 = 1.0;
  do {
    fVar6 = (fVar3 - fVar5) * 0.5 * (float)uVar7;
    fVar9 = (fVar4 - fVar8) * 0.5 * (float)((ulong)uVar7 >> 0x20);
    fVar17 = (fVar10 - fVar13) * 0.5 * fVar17;
    local_7c = 0;
    fVar11 = fVar14 - fVar6;
    uVar7 = CONCAT44(fVar15 - fVar9,fVar11);
    fVar9 = fVar15 + fVar9;
    local_88 = CONCAT44(fVar9,fVar14 + fVar6);
    fVar6 = fVar16 + fVar17;
    local_8c = 0;
    uVar12 = CONCAT44(fVar9,fVar11);
    local_98 = uVar12;
    local_90 = fVar6;
    local_80 = fVar6;
    (**(code **)(*(long *)this + 0x20))(this,&local_88,&local_98,param_3);
    local_7c = 0;
    local_8c = 0;
    local_98 = uVar7;
    local_90 = fVar6;
    local_88 = uVar12;
    local_80 = fVar6;
    (**(code **)(*(long *)this + 0x20))(this,&local_88,&local_98,param_3);
    local_90 = fVar16 - fVar17;
    local_7c = 0;
    local_8c = 0;
    local_98 = uVar7;
    local_88 = uVar7;
    local_80 = fVar6;
    (**(code **)(*(long *)this + 0x20))(this,&local_88,&local_98,param_3);
    uStack_a8 = 0xbf800000;
    local_b0 = 0xbf800000bf800000;
    if (uVar2 < 3) {
      *(float *)((long)&local_b0 + uVar2 * 4) = -*(float *)((long)&local_b0 + uVar2 * 4);
    }
    else if (uVar2 == 3) {
      if (*(long *)(lVar1 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar2 = uVar2 + 1;
    uVar7 = local_b0;
    fVar17 = (float)uStack_a8;
  } while( true );
}


