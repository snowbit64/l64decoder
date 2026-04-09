// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextVideoBuffer
// Entry Point: 00c70900
// Size: 472 bytes
// Signature: undefined __thiscall getNextVideoBuffer(VideoPlayer * this, bool param_1)


/* VideoPlayer::getNextVideoBuffer(bool) */

void __thiscall VideoPlayer::getNextVideoBuffer(VideoPlayer *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  TheoraVideoDecoder *this_00;
  long *plVar4;
  undefined8 uVar5;
  void *local_148;
  uint local_140;
  void *local_f8;
  uint local_f0;
  void *local_a8;
  uint local_a0;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this_00 = *(TheoraVideoDecoder **)(this + 8);
  if (param_1) {
    uVar1 = *(uint *)(this_00 + 0x104);
    uVar2 = *(uint *)(this_00 + 0x108);
    RenderDeviceManager::getInstance();
    plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    uVar5 = (**(code **)(*plVar4 + 0x138))();
    (**(code **)(**(long **)(this + 0x10) + 0x68))
              (*(long **)(this + 0x10),uVar5,0,0,0,0,uVar1,uVar2,0,1,1,&local_a8);
    uVar1 = uVar1 >> 1;
    uVar2 = uVar2 >> 1;
    (**(code **)(**(long **)(this + 0x18) + 0x68))
              (*(long **)(this + 0x18),uVar5,0,0,0,0,uVar1,uVar2,0,1,1,&local_f8);
    (**(code **)(**(long **)(this + 0x20) + 0x68))
              (*(long **)(this + 0x20),uVar5,0,0,0,0,uVar1,uVar2,0,1,1,&local_148);
    TheoraVideoDecoder::getFrameImage
              (*(TheoraVideoDecoder **)(this + 8),local_a8,local_a0,local_f8,local_f0,local_148,
               local_140);
    (**(code **)(**(long **)(this + 0x10) + 0x70))(*(long **)(this + 0x10),uVar5,&local_a8);
    (**(code **)(**(long **)(this + 0x18) + 0x70))(*(long **)(this + 0x18),uVar5,&local_f8);
    (**(code **)(**(long **)(this + 0x20) + 0x70))(*(long **)(this + 0x20),uVar5,&local_148);
  }
  else {
    TheoraVideoDecoder::getFrameImage(this_00,(void *)0x0,0,(void *)0x0,0,(void *)0x0,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


