// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMilkingPlaceDoors
// Entry Point: 006fddf8
// Size: 732 bytes
// Signature: undefined __thiscall setMilkingPlaceDoors(AnimalHusbandry * this, uint param_1, TransformGroup * param_2, TransformGroup * param_3, float param_4, TransformGroup * param_5, TransformGroup * param_6, float param_7)


/* AnimalHusbandry::setMilkingPlaceDoors(unsigned int, TransformGroup*, TransformGroup*, float,
   TransformGroup*, TransformGroup*, float) */

void __thiscall
AnimalHusbandry::setMilkingPlaceDoors
          (AnimalHusbandry *this,uint param_1,TransformGroup *param_2,TransformGroup *param_3,
          float param_4,TransformGroup *param_5,TransformGroup *param_6,float param_7)

{
  long lVar1;
  TransformGroup *pTVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 < *(uint *)(this + 0x1fb38)) {
    *(TransformGroup **)(this + (ulong)param_1 * 0x90 + 0x1fb80) = param_2;
    *(TransformGroup **)(this + (ulong)param_1 * 0x90 + 0x1fb88) = param_3;
    uVar3 = (ulong)param_1;
    if (((byte)param_2[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    *(undefined4 *)(this + uVar3 * 0x90 + 0x1fb90) = *(undefined4 *)(param_2 + 0x140);
    if (((byte)param_3[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    uVar4 = *(undefined4 *)(param_3 + 0x140);
    *(float *)(this + uVar3 * 0x90 + 0x1fb98) = param_4;
    *(undefined4 *)(this + uVar3 * 0x90 + 0x1fb94) = uVar4;
    *(TransformGroup **)(this + uVar3 * 0x90 + 0x1fba0) = param_5;
    *(TransformGroup **)(this + uVar3 * 0x90 + 0x1fba8) = param_6;
    if (((byte)param_5[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    *(undefined4 *)(this + uVar3 * 0x90 + 0x1fbb0) = *(undefined4 *)(param_5 + 0x140);
    if (((byte)param_6[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    *(undefined4 *)(this + uVar3 * 0x90 + 0x1fbb4) = *(undefined4 *)(param_6 + 0x140);
    *(float *)(this + uVar3 * 0x90 + 0x1fbb8) = param_7;
    if (((byte)param_2[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    local_78 = *(undefined8 *)(param_2 + 0x130);
    local_70 = *(float *)(param_2 + 0x138);
    if (((byte)param_3[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    local_78 = CONCAT44(((float)((ulong)*(undefined8 *)(param_3 + 0x130) >> 0x20) +
                        (float)((ulong)local_78 >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(param_3 + 0x130) + (float)local_78) * 0.5);
    local_70 = (*(float *)(param_3 + 0x138) + local_70) * 0.5;
    if (((byte)param_5[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    local_88 = *(undefined8 *)(param_5 + 0x130);
    local_80 = *(float *)(param_5 + 0x138);
    if (((byte)param_6[0x41] >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    local_88 = CONCAT44(((float)((ulong)*(undefined8 *)(param_6 + 0x130) >> 0x20) +
                        (float)((ulong)local_88 >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(param_6 + 0x130) + (float)local_88) * 0.5);
    local_80 = (*(float *)(param_6 + 0x138) + local_80) * 0.5;
    pTVar2 = (TransformGroup *)
             AnimalSoundSystem::createSoundInstance
                       ((AnimalSoundSystem *)(this + 0x1fcb0),*(uint *)(this + 0x1fd0c));
    *(TransformGroup **)(this + uVar3 * 0x90 + 0x1fbc0) = pTVar2;
    if (pTVar2 != (TransformGroup *)0x0) {
      TransformGroup::setTranslation(pTVar2,(Vector3 *)&local_78);
      (**(code **)(**(long **)(this + 0x48) + 0x18))
                (*(long **)(this + 0x48),*(TransformGroup **)(this + uVar3 * 0x90 + 0x1fbc0),
                 0xffffffff);
    }
    pTVar2 = (TransformGroup *)
             AnimalSoundSystem::createSoundInstance
                       ((AnimalSoundSystem *)(this + 0x1fcb0),*(uint *)(this + 0x1fd0c));
    *(TransformGroup **)(this + uVar3 * 0x90 + 0x1fbc8) = pTVar2;
    if (pTVar2 != (TransformGroup *)0x0) {
      TransformGroup::setTranslation(pTVar2,(Vector3 *)&local_88);
      (**(code **)(**(long **)(this + 0x48) + 0x18))
                (*(long **)(this + 0x48),*(TransformGroup **)(this + uVar3 * 0x90 + 0x1fbc8),
                 0xffffffff);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


