// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTransformGroup
// Entry Point: 00932390
// Size: 372 bytes
// Signature: undefined __cdecl startTransformGroup(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTransformGroup(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTransformGroup(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  LODTransformGroup *this;
  long *plVar5;
  float *local_68;
  float *local_60;
  undefined8 local_58;
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)ExpatUtil::getAttr("name",param_3);
  if (pcVar3 != (char *)0x0) {
    local_50 = param_3;
    pcVar4 = (char *)ExpatUtil::getAttr("lodDistance",param_3);
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
      this = (LODTransformGroup *)operator_new(0x158);
                    /* try { // try from 00932464 to 0093246b has its CatchHandler @ 00932530 */
      TransformGroup::TransformGroup((TransformGroup *)this,pcVar3);
    }
    else {
      local_68 = (float *)0x0;
      local_60 = (float *)0x0;
      local_58 = 0;
                    /* try { // try from 009323fc to 00932407 has its CatchHandler @ 0093251c */
      StringUtil::splitIntoFloats(pcVar4,(vector *)&local_68,' ');
      if ((ulong)((long)local_60 - (long)local_68) < 5) {
                    /* try { // try from 00932470 to 00932477 has its CatchHandler @ 0093251c */
        this = (LODTransformGroup *)operator_new(0x158);
                    /* try { // try from 0093247c to 00932483 has its CatchHandler @ 00932504 */
        TransformGroup::TransformGroup((TransformGroup *)this,pcVar3);
      }
      else {
                    /* try { // try from 00932418 to 00932437 has its CatchHandler @ 00932518 */
        bVar2 = ExpatUtil::getBoolAttrRet("lodBlending",true,param_3);
        this = (LODTransformGroup *)operator_new(0x168);
                    /* try { // try from 00932448 to 00932453 has its CatchHandler @ 00932508 */
        LODTransformGroup::LODTransformGroup
                  (this,pcVar3,local_68,(uint)((ulong)((long)local_60 - (long)local_68) >> 2),
                   (bool)(bVar2 & 1));
      }
      if (local_68 != (float *)0x0) {
        local_60 = local_68;
        operator_delete(local_68);
      }
    }
    readTransformGroup((I3DReader *)&local_50,(I3DLoad *)param_1,(TransformGroup *)this,true,false,
                       true,true);
    plVar5 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
    (**(code **)(*plVar5 + 0x18))(plVar5,this,0xffffffff);
    *(LODTransformGroup **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


