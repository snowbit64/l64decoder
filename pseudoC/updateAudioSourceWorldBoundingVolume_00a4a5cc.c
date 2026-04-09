// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAudioSourceWorldBoundingVolume
// Entry Point: 00a4a5cc
// Size: 136 bytes
// Signature: undefined updateAudioSourceWorldBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSource::updateAudioSourceWorldBoundingVolume() */

void AudioSource::updateAudioSourceWorldBoundingVolume(void)

{
  long lVar1;
  long in_x0;
  float fVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(in_x0 + 0x40) >> 0xc & 1) != 0) {
    *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xffffefff;
    RawTransformGroup::updateWorldTransformation();
    local_48 = *(undefined8 *)(in_x0 + 0xe8);
    local_40 = *(undefined4 *)(in_x0 + 0xf0);
    fVar2 = (float)Sample::getMaxDistance();
    BoundingSphere::assign((BoundingSphere *)(in_x0 + 0x260),(Vector3 *)&local_48,fVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


