// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8c60
// Entry Point: 007a8c60
// Size: 304 bytes
// Signature: undefined FUN_007a8c60(void)


LightSource * FUN_007a8c60(char **param_1)

{
  long lVar1;
  int iVar2;
  LightSource *this;
  uint uVar3;
  LIGHT_TYPE LVar4;
  char *__s1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s1 = param_1[2];
  iVar2 = strcasecmp(__s1,"spot");
  if (iVar2 == 0) {
    LVar4 = 2;
    uVar3 = 1;
  }
  else {
    iVar2 = strcasecmp(__s1,"point");
    LVar4 = (LIGHT_TYPE)(iVar2 == 0);
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
  }
  local_58 = *(undefined4 *)(param_1 + 4);
  uStack_54 = *(undefined4 *)(param_1 + 6);
  local_50 = *(undefined4 *)(param_1 + 8);
  this = (LightSource *)operator_new(0x248);
                    /* try { // try from 007a8d04 to 007a8d5f has its CatchHandler @ 007a8d90 */
  LightSource::LightSource
            (this,*param_1,LVar4,(Vector3 *)&local_58,true,true,false,0.001,2.0,0.001,0x800,true,
             *(float *)(param_1 + 10),60.0,5.0,100.0,200.0,uVar3,0.9,false);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


