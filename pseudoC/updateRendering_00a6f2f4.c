// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a6f2f4
// Size: 324 bytes
// Signature: undefined __thiscall updateRendering(LocalGeometryTransformGroup * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* LocalGeometryTransformGroup::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void __thiscall
LocalGeometryTransformGroup::updateRendering
          (LocalGeometryTransformGroup *this,float param_1,SharedRenderArgs *param_2,
          RenderStats *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_98,(Matrix4x4 *)(this + 0xb8));
  fVar6 = *(float *)(param_2 + 0x60);
  fVar4 = *(float *)(param_2 + 100);
  fVar7 = *(float *)(param_2 + 0x68);
  uVar5 = NEON_fmadd(fVar6,local_90,fVar4 * local_80);
  *(undefined4 *)(this + 0x168) = 0;
  local_50 = (float)NEON_fmadd(fVar7,local_70,uVar5);
  local_58 = CONCAT44((float)((ulong)local_88 >> 0x20) * fVar4 +
                      (float)((ulong)local_98 >> 0x20) * fVar6 +
                      (float)((ulong)local_78 >> 0x20) * fVar7 + (float)((ulong)local_68 >> 0x20),
                      (float)local_88 * fVar4 + (float)local_98 * fVar6 + (float)local_78 * fVar7 +
                      (float)local_68);
  local_50 = local_60 + local_50;
  do {
    updateDetailLevel(this,param_1,(Vector3 *)&local_58,param_2);
  } while (this[0x1b0] != (LocalGeometryTransformGroup)0x0);
  uVar2 = *(long *)(this + 0x1d0) - *(long *)(this + 0x1c8);
  if (uVar2 != 0) {
    (**(code **)(*(long *)this + 0x58))
              (this,*(long *)(this + 0x1c8),uVar2 >> 4,*(int *)(this + 0x194),*(int *)(this + 0x198)
               ,*(int *)(this + 400) + *(int *)(this + 0x194),
               *(int *)(this + 400) + *(int *)(this + 0x198),*(undefined8 *)param_2);
    *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x1c8);
  }
  lVar1 = 0x44;
  if ((*(ulong *)(this + 0x10) & 0x400) != 0) {
    lVar1 = 0x48;
  }
  *(int *)(param_3 + lVar1) = *(int *)(param_3 + lVar1) + *(int *)(this + 0x168);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


