// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00a1cedc
// Size: 5228 bytes
// Signature: undefined __thiscall set(NPlaneFrustum * this, Frustum * param_1, Vector3 * param_2)


/* WARNING: Type propagation algorithm not settling */
/* NPlaneFrustum::set(Frustum const&, Vector3 const&) */

void __thiscall NPlaneFrustum::set(NPlaneFrustum *this,Frustum *param_1,Vector3 *param_2)

{
  NPlaneFrustum *pNVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Plane *this_00;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_278;
  float local_270;
  undefined8 local_268;
  float local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_248;
  float local_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  Vector3 aVStack_178 [16];
  Vector3 aVStack_168 [16];
  Vector3 aVStack_158 [16];
  Vector3 aVStack_148 [16];
  Vector3 aVStack_138 [16];
  Vector3 aVStack_128 [16];
  Vector3 aVStack_118 [16];
  Vector3 aVStack_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  this_00 = (Plane *)operator_new__(0x140);
                    /* try { // try from 00a1cf2c to 00a1cfc7 has its CatchHandler @ 00a1e348 */
  Plane::Plane(this_00);
  Plane::Plane(this_00 + 0x10);
  Plane::Plane(this_00 + 0x20);
  Plane::Plane(this_00 + 0x30);
  Plane::Plane(this_00 + 0x40);
  Plane::Plane(this_00 + 0x50);
  Plane::Plane(this_00 + 0x60);
  Plane::Plane(this_00 + 0x70);
  Plane::Plane(this_00 + 0x80);
  Plane::Plane(this_00 + 0x90);
  Plane::Plane(this_00 + 0xa0);
  Plane::Plane(this_00 + 0xb0);
  Plane::Plane(this_00 + 0xc0);
  Plane::Plane(this_00 + 0xd0);
  Plane::Plane(this_00 + 0xe0);
  Plane::Plane(this_00 + 0xf0);
  Plane::Plane(this_00 + 0x100);
  Plane::Plane(this_00 + 0x110);
  Plane::Plane(this_00 + 0x120);
  Plane::Plane(this_00 + 0x130);
  *(Plane **)(this + 8) = this_00;
  Plane::Plane((Plane *)&local_a8);
  Plane::Plane((Plane *)&local_b8);
  Plane::Plane((Plane *)&local_c8);
  Plane::Plane((Plane *)&local_d8);
  Plane::Plane((Plane *)&local_e8);
  Plane::Plane((Plane *)&local_f8);
  Frustum::getPlane(param_1,1,(Plane *)&local_a8);
  Frustum::getPlane(param_1,0,(Plane *)&local_b8);
  Frustum::getPlane(param_1,3,(Plane *)&local_c8);
  Frustum::getPlane(param_1,2,(Plane *)&local_d8);
  Frustum::getPlane(param_1,5,(Plane *)&local_e8);
  Frustum::getPlane(param_1,4,(Plane *)&local_f8);
  Plane::intersectionWithPlane((Plane *)&local_a8,(Plane *)&local_e8,aVStack_118,aVStack_108);
  Plane::intersectionWithPlane((Plane *)&local_a8,(Plane *)&local_f8,aVStack_138,aVStack_128);
  Plane::intersectionWithPlane((Plane *)&local_b8,(Plane *)&local_e8,aVStack_158,aVStack_148);
  Plane::intersectionWithPlane((Plane *)&local_b8,(Plane *)&local_f8,aVStack_178,aVStack_168);
  Plane::intersectionWithLine((Plane *)&local_d8,aVStack_118,aVStack_108,(Vector3 *)&local_188);
  Plane::intersectionWithLine((Plane *)&local_c8,aVStack_118,aVStack_108,(Vector3 *)&local_198);
  Plane::intersectionWithLine((Plane *)&local_d8,aVStack_138,aVStack_128,(Vector3 *)&local_1a8);
  Plane::intersectionWithLine((Plane *)&local_c8,aVStack_138,aVStack_128,(Vector3 *)&local_1b8);
  Plane::intersectionWithLine((Plane *)&local_d8,aVStack_158,aVStack_148,(Vector3 *)&local_1c8);
  Plane::intersectionWithLine((Plane *)&local_c8,aVStack_158,aVStack_148,(Vector3 *)&local_1d8);
  Plane::intersectionWithLine((Plane *)&local_d8,aVStack_178,aVStack_168,(Vector3 *)&local_1e8);
  Plane::intersectionWithLine((Plane *)&local_c8,aVStack_178,aVStack_168,(Vector3 *)&local_1f8);
  local_270 = *(float *)(param_2 + 8);
  uVar12 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x10) = 0;
  local_200 = local_180 + local_270;
  fVar11 = (float)uVar12;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  local_208 = CONCAT44((float)((ulong)local_188 >> 0x20) + fVar13,(float)local_188 + fVar11);
  local_218 = CONCAT44(fVar13 + (float)((ulong)local_198 >> 0x20),fVar11 + (float)local_198);
  local_210 = local_270 + local_190;
  local_228 = CONCAT44(fVar13 + (float)((ulong)local_1a8 >> 0x20),fVar11 + (float)local_1a8);
  local_238 = CONCAT44(fVar13 + (float)((ulong)local_1b8 >> 0x20),fVar11 + (float)local_1b8);
  local_220 = local_270 + local_1a0;
  local_230 = local_270 + local_1b0;
  local_248 = CONCAT44(fVar13 + (float)((ulong)local_1c8 >> 0x20),fVar11 + (float)local_1c8);
  local_250 = local_270 + local_1d0;
  local_240 = local_270 + local_1c0;
  local_268 = CONCAT44(fVar13 + (float)((ulong)local_1e8 >> 0x20),fVar11 + (float)local_1e8);
  local_258 = CONCAT44(fVar13 + (float)((ulong)local_1d8 >> 0x20),fVar11 + (float)local_1d8);
  local_260 = local_270 + local_1e0;
  local_278 = CONCAT44(fVar13 + (float)((ulong)local_1f8 >> 0x20),fVar11 + (float)local_1f8);
  local_270 = local_270 + local_1f0;
  uVar9 = Plane::isFrontFacingTo((Plane *)&local_e8,param_2);
  uVar10 = Plane::isFrontFacingTo((Plane *)&local_f8,param_2);
  uVar5 = Plane::isFrontFacingTo((Plane *)&local_c8,param_2);
  uVar6 = Plane::isFrontFacingTo((Plane *)&local_d8,param_2);
  uVar7 = Plane::isFrontFacingTo((Plane *)&local_a8,param_2);
  uVar8 = Plane::isFrontFacingTo((Plane *)&local_b8,param_2);
  if ((uVar9 & 1) == 0) {
    uVar2 = *(uint *)(this + 0x10);
    pNVar1 = this + 0x18;
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = uStack_e0;
    *puVar3 = local_e8;
    local_98 = local_1c8;
    uStack_8c = (undefined4)local_188;
    uStack_88 = (undefined4)((ulong)local_188 >> 0x20);
    fStack_90 = local_1c0;
    local_80 = local_198;
    local_84 = local_180;
    local_74 = local_1d8;
    local_78 = local_190;
    local_6c = local_1d0;
    FUN_00a1e59c(pNVar1,&local_98);
    if ((uVar5 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1d8,(Vector3 *)&local_198,
                   (Vector3 *)&local_218);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1d8;
      uStack_8c = (undefined4)local_198;
      uStack_88 = (undefined4)((ulong)local_198 >> 0x20);
      fStack_90 = local_1d0;
      local_80 = local_218;
      local_84 = local_190;
      local_78 = local_210;
      local_6c = local_250;
      local_74 = local_258;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar6 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_188,(Vector3 *)&local_1c8,
                   (Vector3 *)&local_208);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_188;
      uStack_8c = (undefined4)local_1c8;
      uStack_88 = (undefined4)((ulong)local_1c8 >> 0x20);
      fStack_90 = local_180;
      local_80 = local_248;
      local_84 = local_1c0;
      local_78 = local_240;
      local_6c = local_200;
      local_74 = local_208;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar7 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_198,(Vector3 *)&local_188,
                   (Vector3 *)&local_208);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_198;
      uStack_8c = (undefined4)local_188;
      uStack_88 = (undefined4)((ulong)local_188 >> 0x20);
      fStack_90 = local_190;
      local_80 = local_208;
      local_84 = local_180;
      local_78 = local_200;
      local_6c = local_210;
      local_74 = local_218;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar8 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1c8,(Vector3 *)&local_1d8,
                   (Vector3 *)&local_248);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1c8;
      uStack_8c = (undefined4)local_1d8;
      uStack_88 = (undefined4)((ulong)local_1d8 >> 0x20);
      fStack_90 = local_1c0;
      local_80 = local_258;
      local_74 = local_248;
      local_84 = local_1d0;
      local_78 = local_250;
      local_6c = local_240;
      goto LAB_00a1d730;
    }
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_248,(Vector3 *)&local_208,
                 (Vector3 *)&local_218);
    uVar2 = *(uint *)(this + 0x10);
    pNVar1 = this + 0x18;
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_248;
    uStack_8c = (undefined4)local_208;
    uStack_88 = (undefined4)((ulong)local_208 >> 0x20);
    fStack_90 = local_240;
    local_80 = local_218;
    local_84 = local_200;
    local_74 = local_258;
    local_78 = local_210;
    local_6c = local_250;
    FUN_00a1e59c(pNVar1,&local_98);
    if ((uVar5 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_198,(Vector3 *)&local_1d8,
                   (Vector3 *)&local_218);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_198;
      uStack_8c = (undefined4)local_1d8;
      uStack_88 = (undefined4)((ulong)local_1d8 >> 0x20);
      fStack_90 = local_190;
      local_80 = local_258;
      local_84 = local_1d0;
      local_78 = local_250;
      local_6c = local_210;
      local_74 = local_218;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar6 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1c8,(Vector3 *)&local_188,
                   (Vector3 *)&local_208);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1c8;
      uStack_8c = (undefined4)local_188;
      uStack_88 = (undefined4)((ulong)local_188 >> 0x20);
      fStack_90 = local_1c0;
      local_80 = local_208;
      local_84 = local_180;
      local_78 = local_200;
      local_6c = local_240;
      local_74 = local_248;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar7 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_188,(Vector3 *)&local_198,
                   (Vector3 *)&local_208);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_188;
      uStack_8c = (undefined4)local_198;
      uStack_88 = (undefined4)((ulong)local_198 >> 0x20);
      fStack_90 = local_180;
      local_80 = local_218;
      local_84 = local_190;
      local_78 = local_210;
      local_6c = local_200;
      local_74 = local_208;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar8 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1d8,(Vector3 *)&local_1c8,
                   (Vector3 *)&local_248);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1d8;
      uStack_8c = (undefined4)local_1c8;
      uStack_88 = (undefined4)((ulong)local_1c8 >> 0x20);
      fStack_90 = local_1d0;
      local_80 = local_248;
      local_74 = local_258;
      local_84 = local_1c0;
      local_78 = local_240;
      local_6c = local_250;
LAB_00a1d730:
      FUN_00a1e59c(this + 0x18,&local_98);
    }
  }
  if ((uVar10 & 1) == 0) {
    uVar2 = *(uint *)(this + 0x10);
    pNVar1 = this + 0x18;
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = uStack_f0;
    *puVar3 = local_f8;
    local_98 = local_1a8;
    uStack_8c = (undefined4)local_1e8;
    uStack_88 = (undefined4)((ulong)local_1e8 >> 0x20);
    fStack_90 = local_1a0;
    local_80 = local_1f8;
    local_84 = local_1e0;
    local_74 = local_1b8;
    local_78 = local_1f0;
    local_6c = local_1b0;
    FUN_00a1e59c(pNVar1,&local_98);
    if ((uVar5 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1b8,(Vector3 *)&local_1f8,
                   (Vector3 *)&local_238);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1b8;
      uStack_8c = (undefined4)local_1f8;
      uStack_88 = (undefined4)((ulong)local_1f8 >> 0x20);
      fStack_90 = local_1b0;
      local_80 = local_278;
      local_84 = local_1f0;
      local_78 = local_270;
      local_6c = local_230;
      local_74 = local_238;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar6 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1e8,(Vector3 *)&local_1a8,
                   (Vector3 *)&local_228);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1e8;
      uStack_8c = (undefined4)local_1a8;
      uStack_88 = (undefined4)((ulong)local_1a8 >> 0x20);
      fStack_90 = local_1e0;
      local_80 = local_228;
      local_84 = local_1a0;
      local_78 = local_220;
      local_6c = local_260;
      local_74 = local_268;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar7 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1a8,(Vector3 *)&local_1b8,
                   (Vector3 *)&local_228);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1a8;
      uStack_8c = (undefined4)local_1b8;
      uStack_88 = (undefined4)((ulong)local_1b8 >> 0x20);
      fStack_90 = local_1a0;
      local_80 = local_238;
      local_84 = local_1b0;
      local_78 = local_230;
      local_6c = local_220;
      local_74 = local_228;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar8 & 1) != 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1f8,(Vector3 *)&local_1e8,
                   (Vector3 *)&local_268);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1f8;
      uStack_8c = (undefined4)local_1e8;
      uStack_88 = (undefined4)((ulong)local_1e8 >> 0x20);
      fStack_90 = local_1f0;
      local_80 = local_268;
      local_74 = local_278;
      local_84 = local_1e0;
      local_78 = local_260;
      local_6c = local_270;
      goto LAB_00a1dc00;
    }
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_228,(Vector3 *)&local_268,
                 (Vector3 *)&local_238);
    uVar2 = *(uint *)(this + 0x10);
    pNVar1 = this + 0x18;
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_228;
    uStack_8c = (undefined4)local_268;
    uStack_88 = (undefined4)((ulong)local_268 >> 0x20);
    fStack_90 = local_220;
    local_80 = local_278;
    local_84 = local_260;
    local_74 = local_238;
    local_78 = local_270;
    local_6c = local_230;
    FUN_00a1e59c(pNVar1,&local_98);
    if ((uVar5 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1f8,(Vector3 *)&local_1b8,
                   (Vector3 *)&local_238);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1f8;
      uStack_8c = (undefined4)local_1b8;
      uStack_88 = (undefined4)((ulong)local_1b8 >> 0x20);
      fStack_90 = local_1f0;
      local_80 = local_238;
      local_84 = local_1b0;
      local_78 = local_230;
      local_6c = local_270;
      local_74 = local_278;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar6 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1a8,(Vector3 *)&local_1e8,
                   (Vector3 *)&local_228);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1a8;
      uStack_8c = (undefined4)local_1e8;
      uStack_88 = (undefined4)((ulong)local_1e8 >> 0x20);
      fStack_90 = local_1a0;
      local_80 = local_268;
      local_84 = local_1e0;
      local_78 = local_260;
      local_6c = local_220;
      local_74 = local_228;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar7 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1b8,(Vector3 *)&local_1a8,
                   (Vector3 *)&local_228);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1b8;
      uStack_8c = (undefined4)local_1a8;
      uStack_88 = (undefined4)((ulong)local_1a8 >> 0x20);
      fStack_90 = local_1b0;
      local_80 = local_228;
      local_84 = local_1a0;
      local_78 = local_220;
      local_6c = local_230;
      local_74 = local_238;
      FUN_00a1e59c(pNVar1,&local_98);
    }
    if ((uVar8 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1e8,(Vector3 *)&local_1f8,
                   (Vector3 *)&local_268);
      uVar2 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar2 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1e8;
      uStack_8c = (undefined4)local_1f8;
      uStack_88 = (undefined4)((ulong)local_1f8 >> 0x20);
      fStack_90 = local_1e0;
      local_80 = local_278;
      local_74 = local_268;
      local_84 = local_1f0;
      local_78 = local_270;
      local_6c = local_260;
LAB_00a1dc00:
      FUN_00a1e59c(this + 0x18,&local_98);
    }
  }
  if ((uVar7 & 1) == 0) {
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = uStack_a0;
    *puVar3 = local_a8;
    local_98 = local_188;
    uStack_8c = (undefined4)local_1a8;
    uStack_88 = (undefined4)((ulong)local_1a8 >> 0x20);
    fStack_90 = local_180;
    local_84 = local_1a0;
    local_80 = local_1b8;
    local_74 = local_198;
    local_78 = local_1b0;
    local_6c = local_190;
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_208,(Vector3 *)&local_228,
                 (Vector3 *)&local_238);
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_208;
    uStack_8c = (undefined4)local_228;
    uStack_88 = (undefined4)((ulong)local_228 >> 0x20);
    fStack_90 = local_200;
    local_84 = local_220;
    local_80 = local_238;
    local_74 = local_218;
    local_78 = local_230;
    local_6c = local_210;
  }
  FUN_00a1e59c(this + 0x18,&local_98);
  if ((uVar8 & 1) == 0) {
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = uStack_b0;
    *puVar3 = local_b8;
    local_98 = local_1e8;
    uStack_8c = (undefined4)local_1c8;
    uStack_88 = (undefined4)((ulong)local_1c8 >> 0x20);
    fStack_90 = local_1e0;
    local_84 = local_1c0;
    local_80 = local_1d8;
    local_74 = local_1f8;
    local_78 = local_1d0;
    local_6c = local_1f0;
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_268,(Vector3 *)&local_248,
                 (Vector3 *)&local_278);
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_268;
    uStack_8c = (undefined4)local_248;
    uStack_88 = (undefined4)((ulong)local_248 >> 0x20);
    fStack_90 = local_260;
    local_84 = local_240;
    local_80 = local_258;
    local_74 = local_278;
    local_78 = local_250;
    local_6c = local_270;
  }
  FUN_00a1e59c(this + 0x18,&local_98);
  if ((uVar5 & 1) == 0) {
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = uStack_c0;
    *puVar3 = local_c8;
    local_98 = local_1d8;
    uStack_8c = (undefined4)local_198;
    uStack_88 = (undefined4)((ulong)local_198 >> 0x20);
    fStack_90 = local_1d0;
    local_84 = local_190;
    local_80 = local_1b8;
    local_74 = local_1f8;
    local_78 = local_1b0;
    local_6c = local_1f0;
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_258,(Vector3 *)&local_218,
                 (Vector3 *)&local_278);
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_258;
    uStack_8c = (undefined4)local_218;
    uStack_88 = (undefined4)((ulong)local_218 >> 0x20);
    fStack_90 = local_250;
    local_84 = local_210;
    local_80 = local_238;
    local_74 = local_278;
    local_78 = local_230;
    local_6c = local_270;
  }
  FUN_00a1e59c(this + 0x18,&local_98);
  if ((uVar6 & 1) == 0) {
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = uStack_d0;
    *puVar3 = local_d8;
    local_98 = local_188;
    uStack_8c = (undefined4)local_1c8;
    uStack_88 = (undefined4)((ulong)local_1c8 >> 0x20);
    fStack_90 = local_180;
    local_84 = local_1c0;
    local_80 = local_1e8;
    local_74 = local_1a8;
    local_78 = local_1e0;
    local_6c = local_1a0;
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_208,(Vector3 *)&local_248,
                 (Vector3 *)&local_268);
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar2 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_208;
    uStack_8c = (undefined4)local_248;
    uStack_88 = (undefined4)((ulong)local_248 >> 0x20);
    fStack_90 = local_200;
    local_84 = local_240;
    local_80 = local_268;
    local_74 = local_228;
    local_78 = local_260;
    local_6c = local_220;
  }
  FUN_00a1e59c(this + 0x18,&local_98);
  uVar2 = uVar6 ^ uVar7;
  if ((uVar5 & 1) == (uVar7 & 1)) {
    if ((uVar2 & 1) != 0) {
      if ((uVar7 & 1) == 0) goto LAB_00a1e0b8;
LAB_00a1dfe0:
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_188,(Vector3 *)&local_1a8,
                   (Vector3 *)&local_228);
      uVar7 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar7 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar7 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_188;
      uStack_8c = (undefined4)local_1a8;
      uStack_88 = (undefined4)((ulong)local_1a8 >> 0x20);
      fStack_90 = local_180;
      local_84 = local_1a0;
      local_80 = local_228;
      local_74 = local_208;
      local_78 = local_220;
      local_6c = local_200;
LAB_00a1e114:
      FUN_00a1e59c(this + 0x18,&local_98);
    }
  }
  else if ((uVar7 & 1) == 0) {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_198,(Vector3 *)&local_1b8,
                 (Vector3 *)&local_218);
    uVar7 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar7 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar7 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_198;
    uStack_8c = (undefined4)local_1b8;
    uStack_88 = (undefined4)((ulong)local_1b8 >> 0x20);
    fStack_90 = local_190;
    local_80 = local_238;
    local_84 = local_1b0;
    local_74 = local_218;
    local_78 = local_230;
    local_6c = local_210;
    FUN_00a1e59c(this + 0x18,&local_98);
    if ((uVar2 & 1) != 0) {
LAB_00a1e0b8:
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1a8,(Vector3 *)&local_188,
                   (Vector3 *)&local_228);
      uVar7 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar7 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar7 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1a8;
      uStack_8c = (undefined4)local_188;
      uStack_88 = (undefined4)((ulong)local_188 >> 0x20);
      fStack_90 = local_1a0;
      local_84 = local_180;
      local_80 = local_208;
      local_74 = local_228;
      local_78 = local_200;
      local_6c = local_220;
      goto LAB_00a1e114;
    }
  }
  else {
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1b8,(Vector3 *)&local_198,
                 (Vector3 *)&local_218);
    uVar7 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar7 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar7 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_1b8;
    uStack_8c = (undefined4)local_198;
    uStack_88 = (undefined4)((ulong)local_198 >> 0x20);
    fStack_90 = local_1b0;
    local_80 = local_218;
    local_84 = local_190;
    local_74 = local_238;
    local_78 = local_210;
    local_6c = local_230;
    FUN_00a1e59c(this + 0x18,&local_98);
    if ((uVar2 & 1) != 0) goto LAB_00a1dfe0;
  }
  uVar6 = uVar6 ^ uVar8;
  if (((uVar5 ^ uVar8) & 1) == 0) {
    if ((uVar6 & 1) == 0) goto LAB_00a1e314;
    if ((uVar8 & 1) != 0) goto LAB_00a1e1c4;
LAB_00a1e29c:
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1c8,(Vector3 *)&local_1e8,
                 (Vector3 *)&local_268);
    uVar6 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar6 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar6 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_1c8;
    uStack_8c = (undefined4)local_1e8;
    uStack_88 = (undefined4)((ulong)local_1e8 >> 0x20);
    fStack_90 = local_1c0;
    local_80 = local_268;
    local_74 = local_248;
    local_1c0 = local_1e0;
    local_78 = local_260;
    local_6c = local_240;
  }
  else {
    if ((uVar8 & 1) == 0) {
      Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1f8,(Vector3 *)&local_1d8,
                   (Vector3 *)&local_278);
      uVar5 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar5 + 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar5 * 0x10);
      puVar3[1] = CONCAT44(uStack_8c,fStack_90);
      *puVar3 = local_98;
      local_98 = local_1f8;
      uStack_8c = (undefined4)local_1d8;
      uStack_88 = (undefined4)((ulong)local_1d8 >> 0x20);
      fStack_90 = local_1f0;
      local_80 = local_258;
      local_84 = local_1d0;
      local_74 = local_278;
      local_78 = local_250;
      local_6c = local_270;
      FUN_00a1e59c(this + 0x18,&local_98);
      if ((uVar6 & 1) == 0) goto LAB_00a1e314;
      goto LAB_00a1e29c;
    }
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1d8,(Vector3 *)&local_1f8,
                 (Vector3 *)&local_278);
    uVar5 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar5 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar5 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_1d8;
    uStack_8c = (undefined4)local_1f8;
    uStack_88 = (undefined4)((ulong)local_1f8 >> 0x20);
    fStack_90 = local_1d0;
    local_80 = local_278;
    local_84 = local_1f0;
    local_74 = local_258;
    local_78 = local_270;
    local_6c = local_250;
    FUN_00a1e59c(this + 0x18,&local_98);
    if ((uVar6 & 1) == 0) goto LAB_00a1e314;
LAB_00a1e1c4:
    Plane::Plane((Plane *)&local_98,(Vector3 *)&local_1e8,(Vector3 *)&local_1c8,
                 (Vector3 *)&local_268);
    uVar6 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar6 + 1;
    puVar3 = (undefined8 *)(*(long *)(this + 8) + (ulong)uVar6 * 0x10);
    puVar3[1] = CONCAT44(uStack_8c,fStack_90);
    *puVar3 = local_98;
    local_98 = local_1e8;
    uStack_8c = (undefined4)local_1c8;
    uStack_88 = (undefined4)((ulong)local_1c8 >> 0x20);
    fStack_90 = local_1e0;
    local_80 = local_248;
    local_74 = local_268;
    local_78 = local_240;
    local_6c = local_260;
  }
  local_84 = local_1c0;
  FUN_00a1e59c(this + 0x18,&local_98);
LAB_00a1e314:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


