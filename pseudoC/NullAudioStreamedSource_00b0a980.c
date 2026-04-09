// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullAudioStreamedSource
// Entry Point: 00b0a980
// Size: 252 bytes
// Signature: undefined __thiscall NullAudioStreamedSource(NullAudioStreamedSource * this, AudioSourceDesc * param_1, NullAudioDevice * param_2)


/* NullAudioStreamedSource::NullAudioStreamedSource(AudioSourceDesc const&, NullAudioDevice*) */

void __thiscall
NullAudioStreamedSource::NullAudioStreamedSource
          (NullAudioStreamedSource *this,AudioSourceDesc *param_1,NullAudioDevice *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  void *__s;
  long *plVar4;
  ulong __n;
  undefined auStack_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  NullAudioSource::NullAudioSource((NullAudioSource *)this,param_1,param_2);
  *(undefined4 *)(this + 0x48) = 0;
  *(void **)(this + 0x38) = (void *)0x0;
  *(undefined8 *)(this + 0x3e) = 0;
  plVar4 = *(long **)param_1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &PTR__NullAudioStreamedSource_00fe7788;
  if (plVar4 == (long *)0x0) {
    this[0x45] = (NullAudioStreamedSource)0x1;
  }
  else {
                    /* try { // try from 00b0a9e4 to 00b0aa13 has its CatchHandler @ 00b0aa80 */
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    uVar1 = *(undefined4 *)((long)plVar4 + 0x14);
    *(undefined4 *)(this + 0x24) = uVar3;
    *(undefined4 *)(this + 0x18) = uVar1;
    plVar4 = (long *)NullAudioStreamedBuffer::getStreamedReader();
    __n = (ulong)*(uint *)(this + 0x24);
    *(long **)(this + 0x30) = plVar4;
    __s = operator_new__(__n);
    *(void **)(this + 0x38) = __s;
    memset(__s,0,__n);
                    /* try { // try from 00b0aa30 to 00b0aa43 has its CatchHandler @ 00b0aa7c */
    (**(code **)(*plVar4 + 0x28))(plVar4,__n,__s,auStack_4c);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


