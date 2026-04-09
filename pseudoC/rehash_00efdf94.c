// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00efdf94
// Size: 356 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::BytecodeBuilder::StringRef,
   std::__ndk1::pair<Luau::BytecodeBuilder::StringRef, unsigned int>,
   std::__ndk1::pair<Luau::BytecodeBuilder::StringRef const, unsigned int>,
   Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef, unsigned int>,
   Luau::BytecodeBuilder::StringRefHash, std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>
   >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
     ::rehash(void)

{
  void **ppvVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  void **in_x0;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *__n;
  void *pvVar8;
  undefined4 *puVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  void *local_60;
  void *pvStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pvVar10 = in_x0[1];
  local_78 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  pvStack_58 = in_x0[4];
  local_60 = in_x0[3];
  local_68 = 0;
  pvVar8 = (void *)0x10;
  if (pvVar10 != (void *)0x0) {
    pvVar8 = (void *)((long)pvVar10 << 1);
  }
  if (pvVar8 == (void *)0x0) {
    local_78 = (void *)0x0;
    pvVar5 = pvStack_70;
  }
  else {
    local_78 = operator_new((long)pvVar8 * 0x18);
    puVar9 = (undefined4 *)((long)local_78 + 0x10);
    pvVar10 = pvVar8;
    do {
      pvVar7 = in_x0[4];
      pvVar5 = in_x0[3];
      *puVar9 = 0;
      pvVar10 = (void *)((long)pvVar10 + -1);
      *(void **)(puVar9 + -2) = pvVar7;
      *(void **)(puVar9 + -4) = pvVar5;
      puVar9 = puVar9 + 6;
    } while (pvVar10 != (void *)0x0);
    pvVar10 = in_x0[1];
    pvVar5 = pvVar8;
  }
  pvStack_70 = pvVar8;
  if (pvVar10 != (void *)0x0) {
    lVar11 = 0;
    pvVar8 = (void *)0x0;
    pvStack_70 = pvVar5;
    do {
      pvVar7 = in_x0[3];
      ppvVar1 = (void **)((long)*in_x0 + lVar11);
      pvVar5 = *ppvVar1;
      if (pvVar5 == (void *)0x0) {
        if (pvVar7 != (void *)0x0) goto LAB_00efe084;
      }
      else if (((pvVar7 == (void *)0x0) ||
               (__n = *(void **)((long)*in_x0 + lVar11 + 8), __n != in_x0[4])) ||
              (iVar4 = memcmp(pvVar5,pvVar7,(size_t)__n), iVar4 != 0)) {
LAB_00efe084:
                    /* try { // try from 00efe084 to 00efe08f has its CatchHandler @ 00efe0f8 */
        puVar6 = (undefined8 *)
                 insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                                *)&local_78,(StringRef *)ppvVar1);
        puVar2 = (undefined8 *)((long)*in_x0 + lVar11);
        uVar12 = *puVar2;
        puVar6[1] = puVar2[1];
        *puVar6 = uVar12;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar2 + 2);
        pvVar10 = in_x0[1];
      }
      pvVar8 = (void *)((long)pvVar8 + 1);
      lVar11 = lVar11 + 0x18;
    } while (pvVar8 < pvVar10);
  }
  pvVar8 = *in_x0;
  *in_x0 = local_78;
  in_x0[1] = pvStack_70;
  local_78 = pvVar8;
  pvStack_70 = pvVar10;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


