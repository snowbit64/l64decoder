// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pan
// Entry Point: 00a50acc
// Size: 184 bytes
// Signature: undefined __thiscall pan(Camera * this, float param_1, float param_2)


/* Camera::pan(float, float) */

void __thiscall Camera::pan(Camera *this,float param_1,float param_2)

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
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) * param_1 +
                      (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20) * param_2 +
                      (float)((ulong)*(undefined8 *)(this + 0x130) >> 0x20),
                      (float)*(undefined8 *)(this + 0x78) * param_1 +
                      (float)*(undefined8 *)(this + 0x88) * param_2 +
                      (float)*(undefined8 *)(this + 0x130));
  local_30 = *(float *)(this + 0x80) * param_1 + *(float *)(this + 0x90) * param_2 +
             *(float *)(this + 0x138);
  TransformGroup::setTranslation((TransformGroup *)this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


