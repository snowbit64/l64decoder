// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zoom
// Entry Point: 00a50c3c
// Size: 160 bytes
// Signature: undefined __thiscall zoom(Camera * this, float param_1)


/* Camera::zoom(float) */

void __thiscall Camera::zoom(Camera *this,float param_1)

{
  long lVar1;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x41] >> 3 & 1) != 0) {
    TransformGroup::updateEulerFromMatrix();
  }
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x98) >> 0x20) * param_1 +
                      (float)((ulong)*(undefined8 *)(this + 0x130) >> 0x20),
                      (float)*(undefined8 *)(this + 0x98) * param_1 +
                      (float)*(undefined8 *)(this + 0x130));
  local_30 = *(float *)(this + 0xa0) * param_1 + *(float *)(this + 0x138);
  TransformGroup::setTranslation((TransformGroup *)this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


