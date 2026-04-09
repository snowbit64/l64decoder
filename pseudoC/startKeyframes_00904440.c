// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startKeyframes
// Entry Point: 00904440
// Size: 88 bytes
// Signature: undefined __cdecl startKeyframes(void * param_1, char * param_2, char * * param_3)


/* I3DAnimationSetsFactory::startKeyframes(void*, char const*, char const**) */

void I3DAnimationSetsFactory::startKeyframes(void *param_1,char *param_2,char **param_3)

{
  int iVar1;
  char *__nptr;
  KeyframedTransformation *this;
  
  __nptr = (char *)ExpatUtil::getAttr("nodeId",param_3);
  if (__nptr != (char *)0x0) {
    iVar1 = atoi(__nptr);
    *(int *)(*(long *)((long)param_1 + 0x288) + 0x18) = iVar1;
  }
  this = (KeyframedTransformation *)operator_new(0xd0);
                    /* try { // try from 0090447c to 00904483 has its CatchHandler @ 00904498 */
  KeyframedTransformation::KeyframedTransformation(this,0);
  *(KeyframedTransformation **)(*(long *)((long)param_1 + 0x288) + 0x10) = this;
  return;
}


