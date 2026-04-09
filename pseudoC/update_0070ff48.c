// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0070ff48
// Size: 292 bytes
// Signature: undefined __cdecl update(float param_1)


/* AnimalSoundSystem::update(float) */

void AnimalSoundSystem::update(float param_1)

{
  size_t __n;
  long *in_x0;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  undefined4 uVar5;
  
  uVar3 = (in_x0[7] - in_x0[6] >> 2) * 0xb6db6db7;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    while( true ) {
      uVar4 = (ulong)((int)uVar3 - 1);
      uVar1 = AudioSource::isPlaying();
      if ((uVar1 & 1) == 0) {
        lVar2 = in_x0[6] + uVar4 * 0x1c;
        uVar1 = (ulong)*(uint *)(lVar2 + 4);
        if (*(char *)(lVar2 + 0x18) == '\0') {
          ScenegraphNode::setVisibility(*(ScenegraphNode **)(*in_x0 + uVar1 * 8),false);
          __dest = (void *)(in_x0[6] + uVar4 * 0x1c);
          __n = in_x0[7] - (long)(void *)((long)__dest + 0x1c);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 0x1c),__n);
          }
          *(undefined *)(in_x0 + 10) = 1;
          in_x0[7] = (long)__dest + __n;
        }
        else {
          lVar2 = *(long *)(*in_x0 + uVar1 * 8);
          uVar5 = Sample::getVolume();
          (**(code **)(*(long *)(lVar2 + 0x158) + 0x18))(uVar5,0,0,lVar2 + 0x158,1,0);
        }
      }
      if (uVar3 < 2) break;
      uVar3 = uVar3 - 1;
    }
  }
  return;
}


