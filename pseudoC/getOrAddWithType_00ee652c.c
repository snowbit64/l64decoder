// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrAddWithType
// Entry Point: 00ee652c
// Size: 292 bytes
// Signature: undefined __thiscall getOrAddWithType(AstNameTable * this, char * param_1, ulong param_2)


/* Luau::AstNameTable::getOrAddWithType(char const*, unsigned long) */

void ** __thiscall
Luau::AstNameTable::getOrAddWithType(AstNameTable *this,char *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  void *pvVar5;
  void **__dest;
  void **ppvVar6;
  char *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = (undefined4)param_2;
  uStack_5c = 0;
  local_68 = param_1;
  puVar3 = (undefined8 *)
           DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
           ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
                     *)this,(Entry *)&local_68);
  if (*(int *)((long)puVar3 + 0xc) != 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return (void **)*puVar3;
    }
    goto LAB_00ee664c;
  }
  ppvVar6 = *(void ***)(this + 0x30);
  pvVar1 = (void *)(param_2 + 1);
  pvVar5 = *ppvVar6;
  if (pvVar5 == (void *)0x0) {
LAB_00ee65e8:
    pvVar5 = pvVar1;
    if (pvVar1 < (void *)0x2001) {
      pvVar5 = (void *)0x2000;
    }
    ppvVar4 = (void **)operator_new((long)pvVar5 + 8);
    __dest = ppvVar4 + 1;
    *ppvVar4 = *ppvVar6;
    *ppvVar6 = ppvVar4;
    ppvVar6[1] = pvVar1;
  }
  else {
    __dest = (void **)((long)ppvVar6[1] + (long)pvVar5 + 0xf & 0xfffffffffffffff8);
    if ((long)pvVar5 + 0x2008U < (ulong)((long)__dest + (long)pvVar1)) goto LAB_00ee65e8;
    ppvVar6[1] = (void *)(((long)pvVar1 - ((long)pvVar5 + 8)) + (long)__dest);
  }
  memcpy(__dest,param_1,param_2);
  *(undefined *)((long)__dest + param_2) = 0;
  *puVar3 = __dest;
  *(undefined4 *)((long)puVar3 + 0xc) = 0x117;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return __dest;
  }
LAB_00ee664c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


