// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert_unsafe
// Entry Point: 00efdd88
// Size: 524 bytes
// Signature: undefined __thiscall insert_unsafe(DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>> * this, StringRef * param_1)


/* Luau::detail::DenseHashTable<Luau::BytecodeBuilder::StringRef,
   std::__ndk1::pair<Luau::BytecodeBuilder::StringRef, unsigned int>,
   std::__ndk1::pair<Luau::BytecodeBuilder::StringRef const, unsigned int>,
   Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef, unsigned int>,
   Luau::BytecodeBuilder::StringRefHash, std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>
   >::insert_unsafe(Luau::BytecodeBuilder::StringRef const&) */

void ** __thiscall
Luau::detail::
DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
::insert_unsafe(DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                *this,StringRef *param_1)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  int iVar3;
  ulong uVar4;
  void *__s2;
  ulong uVar5;
  size_t sVar6;
  void **ppvVar7;
  size_t __n_00;
  void *__s1;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  
  uVar8 = *(long *)(this + 8) - 1;
  uVar4 = hashRange(*(char **)param_1,*(ulong *)(param_1 + 8));
  pvVar10 = *(void **)param_1;
  __n = *(size_t *)(param_1 + 8);
  uVar4 = uVar4 & uVar8;
  lVar9 = *(long *)this;
  __s2 = *(void **)(this + 0x18);
  if (__s2 == (void *)0x0) {
    if (pvVar10 == (void *)0x0) {
      uVar5 = 0;
      do {
        ppvVar7 = (void **)(lVar9 + uVar4 * 0x18);
        if (*ppvVar7 == (void *)0x0) goto LAB_00efdf58;
        uVar1 = uVar5 + 1;
        uVar4 = uVar4 + uVar5 + 1 & uVar8;
        uVar5 = uVar1;
      } while (uVar1 <= uVar8);
    }
    else {
      uVar5 = 0;
      do {
        ppvVar7 = (void **)(lVar9 + uVar4 * 0x18);
        if (*ppvVar7 == (void *)0x0) goto LAB_00efdf58;
        if ((*(size_t *)(lVar9 + uVar4 * 0x18 + 8) == __n) &&
           (iVar3 = memcmp(*ppvVar7,pvVar10,__n), iVar3 == 0)) {
          return ppvVar7;
        }
        lVar2 = uVar4 + uVar5;
        uVar5 = uVar5 + 1;
        uVar4 = lVar2 + 1U & uVar8;
      } while (uVar5 <= uVar8);
    }
  }
  else {
    __n_00 = *(size_t *)(this + 0x20);
    if (pvVar10 == (void *)0x0) {
      uVar5 = 0;
      do {
        ppvVar7 = (void **)(lVar9 + uVar4 * 0x18);
        if (*ppvVar7 == (void *)0x0) {
          return ppvVar7;
        }
        if ((*(size_t *)(lVar9 + uVar4 * 0x18 + 8) == __n_00) &&
           (iVar3 = memcmp(*ppvVar7,__s2,__n_00), iVar3 == 0)) goto LAB_00efdf58;
        lVar2 = uVar4 + uVar5;
        uVar5 = uVar5 + 1;
        uVar4 = lVar2 + 1U & uVar8;
      } while (uVar5 <= uVar8);
    }
    else {
      uVar5 = 0;
      do {
        ppvVar7 = (void **)(lVar9 + uVar4 * 0x18);
        __s1 = *ppvVar7;
        if (__s1 != (void *)0x0) {
          sVar6 = *(size_t *)(lVar9 + uVar4 * 0x18 + 8);
          if ((sVar6 == __n_00) && (iVar3 = memcmp(__s1,__s2,__n_00), iVar3 == 0)) {
LAB_00efdf58:
            pvVar10 = *(void **)param_1;
            ppvVar7[1] = *(void **)(param_1 + 8);
            *ppvVar7 = pvVar10;
            *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
            return ppvVar7;
          }
          if ((sVar6 == __n) && (iVar3 = memcmp(__s1,pvVar10,__n), iVar3 == 0)) {
            return ppvVar7;
          }
        }
        lVar2 = uVar4 + uVar5;
        uVar5 = uVar5 + 1;
        uVar4 = lVar2 + 1U & uVar8;
      } while (uVar5 <= uVar8);
    }
  }
  return (void **)0x0;
}


