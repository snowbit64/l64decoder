// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startScene
// Entry Point: 009313b8
// Size: 76 bytes
// Signature: undefined __cdecl startScene(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startScene(void*, char const*, char const**) */

void I3DSceneGraphFactory::startScene(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  TransformGroup *this;
  
  this = (TransformGroup *)operator_new(0x158);
  pcVar1 = (char *)((long)param_1 + 0x229);
  if ((*(byte *)((long)param_1 + 0x228) & 1) != 0) {
    pcVar1 = *(char **)((long)param_1 + 0x238);
  }
                    /* try { // try from 009313e8 to 009313eb has its CatchHandler @ 00931404 */
  TransformGroup::TransformGroup(this,pcVar1);
  *(TransformGroup **)((long)param_1 + 0x1b8) = this;
  *(TransformGroup **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
  return;
}


