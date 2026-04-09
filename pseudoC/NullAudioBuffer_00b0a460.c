// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullAudioBuffer
// Entry Point: 00b0a460
// Size: 308 bytes
// Signature: undefined __thiscall NullAudioBuffer(NullAudioBuffer * this, AudioBufferDesc * param_1)


/* NullAudioBuffer::NullAudioBuffer(AudioBufferDesc const&) */

void __thiscall NullAudioBuffer::NullAudioBuffer(NullAudioBuffer *this,AudioBufferDesc *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0xc);
  *(undefined ***)this = &PTR__NullAudioBuffer_00fe75a8;
  uVar7 = NEON_rev64(uVar7,4);
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(uint *)(this + 0x24) = (uint)(lVar6 != 0);
  *(undefined8 *)(this + 0x14) = uVar7;
                    /* try { // try from 00b0a4c0 to 00b0a563 has its CatchHandler @ 00b0a594 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x28),(basic_string *)(param_1 + 0x28));
  iVar4 = *(int *)(this + 8);
  this[0xc] = *(NullAudioBuffer *)(param_1 + 4);
  uVar5 = 1;
  switch(iVar4) {
  case 0:
    iVar4 = 1;
    uVar5 = 1;
    break;
  case 1:
    iVar4 = 2;
    uVar5 = 2;
    break;
  case 3:
switchD_00b0a4f4_caseD_3:
    uVar5 = 2;
    iVar4 = 4;
    break;
  case 4:
    break;
  case 5:
    uVar5 = 2;
    iVar4 = 8;
    break;
  case 7:
    *(undefined4 *)(this + 8) = 2;
    if (*(int *)(this + 0x18) == 2) {
      *(undefined4 *)(this + 8) = 3;
      goto switchD_00b0a4f4_caseD_3;
    }
  default:
    uVar5 = 1;
    iVar4 = 2;
  }
  plVar3 = *(long **)(param_1 + 0x50);
  *(undefined4 *)(this + 0x18) = uVar5;
  *(int *)(this + 0x1c) = iVar4;
  if (plVar3 == (long *)0x0) {
    *(int *)(this + 0x20) = iVar4 * *(int *)(this + 0x14);
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x10))();
    *(uint *)(this + 0x20) = uVar2;
    uVar1 = 0;
    if (*(uint *)(this + 0x1c) != 0) {
      uVar1 = uVar2 / *(uint *)(this + 0x1c);
    }
    *(uint *)(this + 0x14) = uVar1;
  }
  return;
}


