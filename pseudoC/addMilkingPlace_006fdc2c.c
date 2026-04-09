// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMilkingPlace
// Entry Point: 006fdc2c
// Size: 460 bytes
// Signature: undefined __thiscall addMilkingPlace(AnimalHusbandry * this, float * param_1, float * param_2, float * param_3, float * param_4)


/* AnimalHusbandry::addMilkingPlace(float const*, float const*, float const*, float const*) */

ulong __thiscall
AnimalHusbandry::addMilkingPlace
          (AnimalHusbandry *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  TransformGroup *this_00;
  ulong uVar4;
  float fVar5;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(this + 0x1fb38);
  uVar4 = (ulong)uVar1;
  if (uVar1 < 0x19) {
    *(float *)(this + uVar4 * 0x90 + 0x1fb40) = *param_1;
    *(float *)(this + uVar4 * 0x90 + 0x1fb44) = param_1[1];
    *(float *)(this + uVar4 * 0x90 + 0x1fb48) = param_1[2];
    *(float *)(this + uVar4 * 0x90 + 0x1fb4c) = *param_2;
    *(float *)(this + uVar4 * 0x90 + 0x1fb50) = param_2[1];
    *(float *)(this + uVar4 * 0x90 + 0x1fb54) = param_2[2];
    *(float *)(this + uVar4 * 0x90 + 0x1fb58) = *param_3;
    uVar2 = *(uint *)(this + 0x1fd08);
    *(float *)(this + uVar4 * 0x90 + 0x1fb5c) = param_3[1];
    *(float *)(this + uVar4 * 0x90 + 0x1fb60) = param_3[2];
    *(float *)(this + uVar4 * 0x90 + 0x1fb64) = *param_4;
    *(float *)(this + uVar4 * 0x90 + 0x1fb68) = param_4[1];
    fVar5 = param_4[2];
    this[uVar4 * 0x90 + 0x1fb78] = (AnimalHusbandry)0x0;
    *(float *)(this + uVar4 * 0x90 + 0x1fb6c) = fVar5;
    *(uint *)(this + 0x1fb38) = uVar1 + 1;
    this_00 = (TransformGroup *)
              AnimalSoundSystem::createSoundInstance((AnimalSoundSystem *)(this + 0x1fcb0),uVar2);
    *(TransformGroup **)(this + uVar4 * 0x90 + 0x1fb70) = this_00;
    if (this_00 != (TransformGroup *)0x0) {
      local_58 = CONCAT44(((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                          (float)((ulong)*(undefined8 *)param_3 >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)param_1 + (float)*(undefined8 *)param_3) * 0.5);
      local_50 = (param_1[2] + param_3[2]) * 0.5;
      TransformGroup::setTranslation(this_00,(Vector3 *)&local_58);
      (**(code **)(**(long **)(this + 0x48) + 0x18))
                (*(long **)(this + 0x48),*(TransformGroup **)(this + uVar4 * 0x90 + 0x1fb70),
                 0xffffffff);
    }
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


