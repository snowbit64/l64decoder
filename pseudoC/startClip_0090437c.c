// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startClip
// Entry Point: 0090437c
// Size: 128 bytes
// Signature: undefined __cdecl startClip(void * param_1, char * param_2, char * * param_3)


/* I3DAnimationSetsFactory::startClip(void*, char const*, char const**) */

void I3DAnimationSetsFactory::startClip(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  char *__nptr;
  Clip *this;
  double dVar2;
  
  pcVar1 = (char *)ExpatUtil::getAttr("name",param_3);
  __nptr = (char *)ExpatUtil::getAttr("duration",param_3);
  dVar2 = atof(__nptr);
  this = (Clip *)operator_new(0x38);
                    /* try { // try from 009043d0 to 009043df has its CatchHandler @ 009043fc */
  Clip::Clip(this,pcVar1,0.0,(float)dVar2);
  *(Clip **)(*(long *)((long)param_1 + 0x288) + 8) = this;
  return;
}


