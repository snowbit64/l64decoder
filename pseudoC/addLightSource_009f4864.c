// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLightSource
// Entry Point: 009f4864
// Size: 1092 bytes
// Signature: undefined __thiscall addLightSource(DeferredDebugRenderer * this, Matrix4x4 * param_1, float param_2, float param_3, float param_4, uint param_5, bool param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeferredDebugRenderer::addLightSource(Matrix4x4 const&, float, float, float, unsigned int, bool)
    */

void __thiscall
DeferredDebugRenderer::addLightSource
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,float param_2,float param_3,float param_4,
          uint param_5,bool param_6)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 local_140;
  float local_138;
  float local_130;
  float fStack_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if (((byte)this[0x2a0] >> 1 & 1) != 0) {
    uStack_b8 = 0x3f73333300000000;
    local_c0 = 0x3f8000003f800000;
    uStack_a8 = 0x3f73333300000000;
    uStack_b0 = 0x3f8000003f800000;
    uStack_98 = 0x3f73333300000000;
    local_a0 = 0x3f8000003f800000;
    local_100 = *(undefined8 *)(param_1 + 0x30);
    uStack_e8 = 0x3f7333333f800000;
    local_f0 = 0x3f800000;
    uStack_d8 = 0x3f7333333f800000;
    uStack_e0 = 0x3f800000;
    local_f8 = *(float *)(param_1 + 0x38);
    uStack_c8 = 0x3f7333333f800000;
    local_d0 = 0x3f800000;
    addPoint(this,(float *)&local_100,(float *)&local_c0,2);
    if ((param_5 == 2) ||
       (addSphere((float *)this,param_2,(float *)&local_100,(CATEGORY)&local_c0,(Matrix4x4 *)0x2,0,
                  false,(Vector3 *)0x0), (param_5 & 0xfffffffd) == 0)) {
      fVar12 = *(float *)(param_1 + 0x28);
      local_108 = 1.0;
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
      fVar16 = (float)*(undefined8 *)(param_1 + 0x20);
      fVar8 = 1.0;
      fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar9 * fVar9 + fVar16 * fVar16);
      if (1e-06 < fVar10) {
        local_108 = 1.0 / SQRT(fVar10);
      }
      local_120 = *(float *)param_1;
      fStack_11c = *(float *)(param_1 + 4);
      local_110 = CONCAT44(-fVar9 * local_108,-fVar16 * local_108);
      local_108 = local_108 * -fVar12;
      uVar15 = NEON_fmadd(local_120,local_120,fStack_11c * fStack_11c);
      local_118 = *(float *)(param_1 + 8);
      fVar16 = (float)NEON_fmadd(local_118,local_118,uVar15);
      if (1e-06 < fVar16) {
        fVar8 = 1.0 / SQRT(fVar16);
      }
      local_130 = *(float *)(param_1 + 0x10);
      fStack_12c = *(float *)(param_1 + 0x14);
      local_120 = local_120 * fVar8;
      fStack_11c = fStack_11c * fVar8;
      local_118 = local_118 * fVar8;
      fVar16 = 1.0;
      uVar15 = NEON_fmadd(local_130,local_130,fStack_12c * fStack_12c);
      local_128 = *(float *)(param_1 + 0x18);
      fVar8 = (float)NEON_fmadd(local_128,local_128,uVar15);
      if (1e-06 < fVar8) {
        fVar16 = 1.0 / SQRT(fVar8);
      }
      local_130 = local_130 * fVar16;
      fStack_12c = fStack_12c * fVar16;
      local_128 = local_128 * fVar16;
      if (param_5 == 0) {
        if (((DAT_02111dc0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_02111dc0), iVar6 != 0)) {
          _DAT_02111da8 = 0xbf99999a;
          _DAT_02111da0 = 0;
          uRam0000000002111db8 = 0xbf8504823f19999a;
          _DAT_02111db0 = 0x3f8504823f19999a;
          __cxa_guard_release(&DAT_02111dc0);
        }
        fVar5 = local_108;
        uVar4 = local_110;
        fVar3 = local_118;
        fVar12 = fStack_11c;
        fVar10 = local_120;
        fVar9 = local_128;
        fVar8 = fStack_12c;
        fVar16 = local_130;
        lVar7 = 0;
        puVar1 = &local_f0;
        if (!param_6) {
          puVar1 = &local_c0;
        }
        do {
          fVar11 = *(float *)((long)&DAT_02111da0 + lVar7);
          fVar13 = *(float *)((long)&DAT_02111da4 + lVar7);
          fVar14 = *(float *)(this + 0x2a4) * 0.5;
          local_140 = CONCAT44((fVar8 * fVar13 + fVar12 * fVar11 + (float)((ulong)local_100 >> 0x20)
                               ) - (float)((ulong)uVar4 >> 0x20) * fVar14,
                               (fVar16 * fVar13 + fVar10 * fVar11 + (float)local_100) -
                               (float)uVar4 * fVar14);
          local_138 = (fVar9 * fVar13 + fVar3 * fVar11 + local_f8) - fVar5 * fVar14;
          addSimpleArrow(this,(Vector3 *)&local_140,(Vector3 *)&local_110,(Vector3 *)&local_120,
                         *(float *)(this + 0x2a4),(float *)puVar1,2);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x20);
      }
      else if (param_5 == 2) {
        puVar1 = &local_f0;
        if (!param_6) {
          puVar1 = &local_c0;
        }
        addSimpleArrow(this,(Vector3 *)&local_100,(Vector3 *)&local_110,(Vector3 *)&local_120,
                       param_2,(float *)puVar1,2);
        fVar8 = param_3 * 0.5;
        fVar16 = cosf(fVar8);
        addSimpleCone(this,param_3,fVar16 * param_2,(Vector3 *)&local_100,(Vector3 *)&local_110,
                      (Vector3 *)&local_120,(Vector3 *)&local_130,(float *)&local_c0,2);
        if (0.001 < param_4) {
          fVar16 = cosf(param_4 * 0.5);
          addSimpleCone(this,param_4,fVar16 * param_2,(Vector3 *)&local_100,(Vector3 *)&local_110,
                        (Vector3 *)&local_120,(Vector3 *)&local_130,(float *)&DAT_0051b088,2);
        }
        addArc(this,(float *)&local_100,&local_120,(float *)&local_110,param_2,param_2,
               param_3 * -0.5,fVar8,0.09,false,(float *)&local_c0,2);
        addArc(this,(float *)&local_100,&local_130,(float *)&local_110,param_2,param_2,
               param_3 * -0.5,fVar8,0.09,false,(float *)&local_c0,2);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


