// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLightSourceWorldBoundingVolume
// Entry Point: 00a55268
// Size: 360 bytes
// Signature: undefined updateLightSourceWorldBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::updateLightSourceWorldBoundingVolume() */

void LightSource::updateLightSourceWorldBoundingVolume(void)

{
  long lVar1;
  long in_x0;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(in_x0 + 0x40) >> 0xc & 1) != 0) {
    *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xffffefff;
    if (*(int *)(in_x0 + 0x16c) == 2) {
      fVar5 = *(float *)(in_x0 + 0x194);
      if (*(float *)(in_x0 + 0x19c) <= 90.0) {
        fVar2 = (fVar5 * 0.5) / *(float *)(in_x0 + 0x1a4);
        fVar5 = fVar2;
      }
      else {
        fVar4 = *(float *)(in_x0 + 0x1a4);
        fVar2 = sinf(((*(float *)(in_x0 + 0x19c) * 3.141593) / 180.0) * 0.5);
        fVar2 = fVar2 * fVar5;
        fVar5 = fVar5 * fVar4;
      }
      RawTransformGroup::updateWorldTransformation();
      uVar3 = NEON_fmadd(*(undefined4 *)(in_x0 + 0xc0),0,*(float *)(in_x0 + 0xd0) * 0.0);
      local_40 = (float)NEON_fmsub(fVar5,*(undefined4 *)(in_x0 + 0xe0),uVar3);
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0xe8) >> 0x20) +
                          (((float)((ulong)*(undefined8 *)(in_x0 + 200) >> 0x20) * 0.0 +
                           (float)((ulong)*(undefined8 *)(in_x0 + 0xb8) >> 0x20) * 0.0) -
                          (float)((ulong)*(undefined8 *)(in_x0 + 0xd8) >> 0x20) * fVar5),
                          (float)*(undefined8 *)(in_x0 + 0xe8) +
                          (((float)*(undefined8 *)(in_x0 + 200) * 0.0 +
                           (float)*(undefined8 *)(in_x0 + 0xb8) * 0.0) -
                          (float)*(undefined8 *)(in_x0 + 0xd8) * fVar5));
      local_40 = *(float *)(in_x0 + 0xf0) + local_40;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      local_48 = *(undefined8 *)(in_x0 + 0xe8);
      local_40 = *(float *)(in_x0 + 0xf0);
      fVar2 = *(float *)(in_x0 + 0x194);
    }
    BoundingSphere::assign((BoundingSphere *)(in_x0 + 0x210),(Vector3 *)&local_48,fVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


