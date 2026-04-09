// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endClip
// Entry Point: 00904410
// Size: 48 bytes
// Signature: undefined __cdecl endClip(void * param_1, char * param_2)


/* I3DAnimationSetsFactory::endClip(void*, char const*) */

void I3DAnimationSetsFactory::endClip(void *param_1,char *param_2)

{
  CharacterSet::addClip
            (**(CharacterSet ***)((long)param_1 + 0x288),
             (Clip *)(*(CharacterSet ***)((long)param_1 + 0x288))[1]);
  *(undefined8 *)(*(long *)((long)param_1 + 0x288) + 8) = 0;
  return;
}


