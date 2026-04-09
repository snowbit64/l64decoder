// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseString
// Entry Point: 00b297a4
// Size: 248 bytes
// Signature: undefined __cdecl parseString(Atom * param_1, char * * param_2, ParamSet * param_3)


/* JSONUtil::parseString(JSONUtil::Atom&, char const*&, JSONUtil::ParamSet const*) */

uint JSONUtil::parseString(Atom *param_1,char **param_2,ParamSet *param_3)

{
  void *__src;
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  ulong __n;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
                    /* try { // try from 00b297d4 to 00b2982f has its CatchHandler @ 00b2989c */
  uVar2 = parseString((basic_string *)&local_60,param_2,param_3);
  if ((uVar2 & 1) != 0) {
    __src = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      __src = local_50;
    }
    Atom::clear();
    *(undefined2 *)param_1 = 3;
    if (__src == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = __strlen_chk(__src,0xffffffffffffffff);
    }
    __dest = operator_new__((ulong)(uVar3 + 1));
    *(void **)(param_1 + 8) = __dest;
    if (uVar3 == 0) {
      __n = 0;
    }
    else {
      __n = (ulong)uVar3;
      memcpy(__dest,__src,__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


