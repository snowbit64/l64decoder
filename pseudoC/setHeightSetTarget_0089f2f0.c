// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHeightSetTarget
// Entry Point: 0089f2f0
// Size: 120 bytes
// Signature: undefined __thiscall setHeightSetTarget(TerrainDeformation * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* TerrainDeformation::setHeightSetTarget(float, float, float, float, float, float) */

void __thiscall
TerrainDeformation::setHeightSetTarget
          (TerrainDeformation *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  long lVar1;
  float fVar2;
  float local_48;
  float fStack_44;
  float local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = param_1;
  if (param_2 < param_1) {
    fVar2 = param_2;
  }
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  *(float *)(this + 0xc0) = param_1;
  *(float *)(this + 0xbc) = fVar2;
  local_48 = param_3;
  fStack_44 = param_4;
  local_40 = param_5;
  Plane::Plane((Plane *)&local_38,(Vector3 *)&local_48,param_6);
  *(undefined8 *)(this + 0xcc) = uStack_30;
  *(undefined8 *)(this + 0xc4) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


