// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignMutable
// Entry Point: 00f01874
// Size: 392 bytes
// Signature: undefined __cdecl assignMutable(DenseHashMap * param_1, AstNameTable * param_2, char * * param_3)


/* Luau::Compile::assignMutable(Luau::DenseHashMap<Luau::AstName, Luau::Compile::Global,
   std::__ndk1::hash<Luau::AstName>, std::__ndk1::equal_to<Luau::AstName> >&, Luau::AstNameTable
   const&, char const**) */

void Luau::Compile::assignMutable(DenseHashMap *param_1,AstNameTable *param_2,char **param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = AstNameTable::get(param_2,"_G");
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    if ((ulong)(lVar3 * 3) >> 2 <= *(ulong *)(param_1 + 0x10)) {
      detail::
      DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::Compile::Global>,std::__ndk1::pair<Luau::AstName_const,Luau::Compile::Global>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::Compile::Global>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
      ::rehash();
      lVar3 = *(long *)(param_1 + 8);
    }
    lVar4 = *(long *)param_1;
    uVar5 = (uVar1 >> 4 ^ uVar1 >> 9) & lVar3 - 1U;
    puVar6 = (ulong *)(lVar4 + uVar5 * 0x10);
    uVar8 = *puVar6;
    if (uVar8 != *(ulong *)(param_1 + 0x18)) {
      lVar7 = 1;
      do {
        if (uVar8 == uVar1) goto LAB_00f01928;
        uVar5 = uVar5 + lVar7;
        lVar7 = lVar7 + 1;
        uVar5 = uVar5 & lVar3 - 1U;
        puVar6 = (ulong *)(lVar4 + uVar5 * 0x10);
        uVar8 = *puVar6;
      } while (uVar8 != *(ulong *)(param_1 + 0x18));
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *puVar6 = uVar1;
    *(long *)(param_1 + 0x10) = lVar3 + 1;
LAB_00f01928:
    *(undefined4 *)(lVar4 + uVar5 * 0x10 + 8) = 1;
  }
  if (param_3 != (char **)0x0) {
    pcVar2 = *param_3;
    while (pcVar2 != (char *)0x0) {
      uVar1 = AstNameTable::get(param_2,pcVar2);
      if (uVar1 != 0) {
        lVar3 = *(long *)(param_1 + 8);
        if ((ulong)(lVar3 * 3) >> 2 <= *(ulong *)(param_1 + 0x10)) {
          detail::
          DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::Compile::Global>,std::__ndk1::pair<Luau::AstName_const,Luau::Compile::Global>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::Compile::Global>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
          ::rehash();
          lVar3 = *(long *)(param_1 + 8);
        }
        lVar4 = *(long *)param_1;
        uVar5 = (uVar1 >> 4 ^ uVar1 >> 9) & lVar3 - 1U;
        puVar6 = (ulong *)(lVar4 + uVar5 * 0x10);
        uVar8 = *puVar6;
        if (uVar8 != *(ulong *)(param_1 + 0x18)) {
          lVar7 = 1;
          do {
            if (uVar8 == uVar1) goto LAB_00f01958;
            uVar5 = uVar5 + lVar7;
            lVar7 = lVar7 + 1;
            uVar5 = uVar5 & lVar3 - 1U;
            puVar6 = (ulong *)(lVar4 + uVar5 * 0x10);
            uVar8 = *puVar6;
          } while (uVar8 != *(ulong *)(param_1 + 0x18));
        }
        lVar3 = *(long *)(param_1 + 0x10);
        *puVar6 = uVar1;
        *(long *)(param_1 + 0x10) = lVar3 + 1;
LAB_00f01958:
        *(undefined4 *)(lVar4 + uVar5 * 0x10 + 8) = 1;
      }
      param_3 = param_3 + 1;
      pcVar2 = *param_3;
    }
  }
  return;
}


