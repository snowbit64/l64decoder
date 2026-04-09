// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b0ab94
// Size: 264 bytes
// Signature: undefined __thiscall update(NullAudioStreamedSource * this, float param_1)


/* NullAudioStreamedSource::update(float) */

undefined8 __thiscall NullAudioStreamedSource::update(NullAudioStreamedSource *this,float param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((this[8] != (NullAudioStreamedSource)0x0) &&
     ((*(int *)(this + 0x48) != 0 || (this[0x44] != (NullAudioStreamedSource)0x0)))) {
    uVar3 = NullAudioSource::update((NullAudioSource *)this,param_1);
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(this + 0x30) + 0x28))
                        (*(long **)(this + 0x30),*(undefined4 *)(this + 0x24),
                         *(undefined8 *)(this + 0x38),auStack_3c);
      if ((uVar2 < *(uint *)(this + 0x24)) &&
         ((*(int *)(this + 0x48) != 0 || (this[0x44] != (NullAudioStreamedSource)0x0)))) {
        lVar5 = **(long **)(this + 0x30);
        *(int *)(this + 0x48) = *(int *)(this + 0x48) + -1;
        (**(code **)(lVar5 + 0x30))();
        uVar4 = 0;
        if (*(uint *)(this + 0x20) != 0) {
          uVar4 = uVar2 / *(uint *)(this + 0x20);
        }
      }
      else {
        uVar4 = *(uint *)(this + 0x18);
      }
      *(uint *)(this + 0x40) = *(int *)(this + 0x40) + uVar4;
    }
    if ((*(int *)(this + 0x48) == 0) && (this[0x44] == (NullAudioStreamedSource)0x0)) {
      (**(code **)(*(long *)this + 0x40))(0,0,this);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


