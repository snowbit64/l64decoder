// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playSound
// Entry Point: 0071029c
// Size: 368 bytes
// Signature: undefined __thiscall playSound(AnimalSoundSystem * this, uint param_1, uint param_2, Vector3 * param_3, bool param_4, float param_5, float param_6)


/* AnimalSoundSystem::playSound(unsigned int, unsigned int, Vector3 const&, bool, float, float) */

void __thiscall
AnimalSoundSystem::playSound
          (AnimalSoundSystem *this,uint param_1,uint param_2,Vector3 *param_3,bool param_4,
          float param_5,float param_6)

{
  Sample *this_00;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  float local_64;
  undefined local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = param_5;
  if (this[0x51] == (AnimalSoundSystem)0x0) {
    lVar4 = *(long *)(this + 0x18);
    if (*(long *)(this + 0x20) - lVar4 != 0) {
      uVar2 = 0;
      uVar3 = (*(long *)(this + 0x20) - lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3;
      do {
        if (*(uint *)(lVar4 + uVar2 * 0x58) == param_1) {
          fVar5 = *(float *)(lVar4 + uVar2 * 0x58 + 0x3c);
          break;
        }
        uVar2 = (ulong)((int)uVar2 + 1);
      } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
    }
  }
  local_70 = *(undefined8 *)param_3;
  local_68 = *(undefined4 *)(param_3 + 8);
  local_78 = param_1;
  uStack_74 = param_2;
  local_64 = param_5;
  local_60 = param_4;
  FUN_0071045c(this + 0x30,&local_78);
  lVar4 = (ulong)param_2 * 8;
  TransformGroup::setTranslation(*(TransformGroup **)(*(long *)this + lVar4),param_3);
  ScenegraphNode::setVisibility(*(ScenegraphNode **)(*(long *)this + lVar4),true);
  this_00 = (Sample *)(*(long *)(*(long *)this + lVar4) + 0x158);
  (**(code **)(*(long *)(*(long *)(*(long *)this + lVar4) + 0x158) + 0x18))(fVar5,0,0,this_00,1,0);
  Sample::setPitch(this_00,param_6);
  this[0x50] = (AnimalSoundSystem)0x1;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


