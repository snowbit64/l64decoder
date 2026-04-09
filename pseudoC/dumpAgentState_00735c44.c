// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dumpAgentState
// Entry Point: 00735c44
// Size: 196 bytes
// Signature: undefined __thiscall dumpAgentState(VehicleNavigationAgentEntity * this, char * param_1)


/* VehicleNavigationAgentEntity::dumpAgentState(char const*) */

uint __thiscall
VehicleNavigationAgentEntity::dumpAgentState(VehicleNavigationAgentEntity *this,char *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  NativeFile aNStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DynamicAvoidance::waitHandler();
  NativeFile::NativeFile(aNStack_60);
                    /* try { // try from 00735c7c to 00735c8f has its CatchHandler @ 00735d0c */
  uVar3 = NativeFile::open((char *)aNStack_60,(ACCESS_MODE)param_1,true);
                    /* try { // try from 00735ca0 to 00735cc7 has its CatchHandler @ 00735d08 */
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = VehicleNavigationMap::serialize
                         (**(VehicleNavigationMap ***)(*(long *)(this + 0x38) + 0x12a0),
                          (File *)aNStack_60), (uVar3 & 1) == 0)) ||
     (uVar3 = VehicleNavigationAgent::serialize
                        (*(VehicleNavigationAgent **)(this + 0x38),(File *)aNStack_60),
     (uVar3 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = DynamicAvoidance::serialize
                      (*(DynamicAvoidance **)(this + 0x40),(File *)aNStack_60,
                       *(Obstacle **)(this + 0x48));
  }
  NativeFile::~NativeFile(aNStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


