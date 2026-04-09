// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postUpdate
// Entry Point: 0089915c
// Size: 188 bytes
// Signature: undefined __cdecl postUpdate(float param_1)


/* PedestrianVisuals::postUpdate(float) */

void PedestrianVisuals::postUpdate(float param_1)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(in_x0 + 0xb8);
  if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x48) != 0)) &&
      (lVar3 = *(long *)(*(long *)(lVar2 + 0x48) + 0xc0), lVar3 != 0)) &&
     (*(char *)(*(long *)(lVar2 + 0x50) + 0xd1) != '\0')) {
    if ((*(byte *)(lVar3 + 0x41) >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    local_48 = *(undefined8 *)(lVar3 + 0x13c);
    local_40 = *(undefined4 *)(lVar3 + 0x144);
    fVar4 = (float)PedestrianTransitionValue::getValue();
    local_48 = CONCAT44(local_48._4_4_,fVar4 + (float)local_48);
    param_1 = (float)TransformGroup::setRotation
                               (*(TransformGroup **)
                                 (*(long *)(*(long *)(in_x0 + 0xb8) + 0x48) + 0xc0),
                                (Vector3 *)&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


